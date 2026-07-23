/*
 * XREFs of SmpSystemStoreCreate @ 0x140799964
 * Callers:
 *     SmProcessConfigRequest @ 0x140797D74 (SmProcessConfigRequest.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 *     SmInitSystem @ 0x140C68AC8 (SmInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     MmGetNumberOfPhysicalPages @ 0x140454120 (MmGetNumberOfPhysicalPages.c)
 *     SmpDirtyStoreCreate @ 0x140A3854C (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpSystemStoreCreate(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rax
  char *v5; // rsi
  int v6; // esi

  v1 = (unsigned __int64 *)(a1 + 2280);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = (char *)KeAbPreAcquire(a1 + 2280, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    v5[10] = 1;
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
