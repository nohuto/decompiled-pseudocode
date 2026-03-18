/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x1407B41F8
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407CF20C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void ExNotifyPlatformBinaryExecuted()
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v1; // rax
  signed __int8 v2; // cf
  _QWORD *v3; // rdi
  PVOID v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = KeAbPreAcquire((__int64)&ExpPlatformBinaryLock, 0LL);
  v2 = _interlockedbittestandset64((volatile signed __int32 *)&ExpPlatformBinaryLock, 0LL);
  v3 = v1;
  if ( v2 )
    ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, (__int64)v1, (__int64)&ExpPlatformBinaryLock);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = ExpPlatformBinaryTableInformation;
  ExpPlatformBinaryTableInformation = (PVOID)-1LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v5, v6, v7);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
}
