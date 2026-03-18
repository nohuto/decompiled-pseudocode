/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x1407A4E28
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void ExNotifyPlatformBinaryExecuted()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v1; // rax
  signed __int8 v2; // cf
  __int64 *v3; // rdi
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
    ExfAcquirePushLockExclusiveEx(&ExpPlatformBinaryLock, v1, (__int64)&ExpPlatformBinaryLock);
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
