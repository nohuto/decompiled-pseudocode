/*
 * XREFs of SmpSystemStoreCreate @ 0x140799854
 * Callers:
 *     SmProcessConfigRequest @ 0x140797C64 (SmProcessConfigRequest.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 *     SmInitSystem @ 0x140C6694C (SmInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     MmGetNumberOfPhysicalPages @ 0x14045F260 (MmGetNumberOfPhysicalPages.c)
 *     SmpDirtyStoreCreate @ 0x140A42CBC (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpSystemStoreCreate(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  int v6; // esi

  v1 = (unsigned __int64 *)(a1 + 2280);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 2280, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, (__int64)v4, (__int64)v1);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( *(_DWORD *)(a1 + 2272) == -1 )
  {
    MmGetNumberOfPhysicalPages(0);
    v6 = SmpDirtyStoreCreate((struct _SM_PARTITION *)a1);
    if ( v6 >= 0 )
      *(_DWORD *)(a1 + 2272) = 0;
  }
  else
  {
    v6 = -1073740008;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
