/*
 * XREFs of WheapDeferredRecoveryServiceWorker @ 0x14065DD70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 WheapDeferredRecoveryServiceWorker()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // r9
  signed __int32 v4; // eax
  bool v5; // cc
  __int64 result; // rax

  do
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&WheaPassiveDrsListLock);
    v1 = WheaPassiveDrsList;
    WheaPassiveDrsList = *(_QWORD *)WheaPassiveDrsList;
    KeReleaseSpinLock(&WheaPassiveDrsListLock, v0);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    guard_dispatch_icall_no_overrides(v1, *(_QWORD *)(v1 + 32), v2, v3);
    v4 = _InterlockedExchangeAdd(&WheaPassiveDrsItemsToProcess, 0xFFFFFFFF);
    v5 = v4 <= 1;
    result = (unsigned int)(v4 - 1);
  }
  while ( !v5 );
  return result;
}
