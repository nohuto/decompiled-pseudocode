/*
 * XREFs of SmpSystemStoreCreate @ 0x14078A484
 * Callers:
 *     SmProcessConfigRequest @ 0x140788894 (SmProcessConfigRequest.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 *     SmInitSystem @ 0x140C54CC4 (SmInitSystem.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     SmpDirtyStoreCreate @ 0x1409C158C (SmpDirtyStoreCreate.c)
 */

__int64 __fastcall SmpSystemStoreCreate(__int64 a1)
{
  unsigned __int64 *v1; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rax
  __int64 *v5; // rsi
  int v6; // esi

  v1 = (unsigned __int64 *)(a1 + 2280);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v4 = KeAbPreAcquire(a1 + 2280, 0LL);
  v5 = v4;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v4, (__int64)v1);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( *(_DWORD *)(a1 + 2272) == -1 )
  {
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
