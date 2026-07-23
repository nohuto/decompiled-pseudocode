/*
 * XREFs of WheapDeferredRecoveryServiceWorker @ 0x14065C490
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 WheapDeferredRecoveryServiceWorker()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  signed __int32 v2; // eax
  bool v3; // cc
  __int64 result; // rax

  do
  {
    v0 = KeAcquireSpinLockRaiseToDpc(&WheaPassiveDrsListLock);
    v1 = WheaPassiveDrsList;
    WheaPassiveDrsList = *(_QWORD *)WheaPassiveDrsList;
    KeReleaseSpinLock(&WheaPassiveDrsListLock, v0);
    _InterlockedExchange((volatile __int32 *)(v1 + 8), 0);
    guard_dispatch_icall_no_overrides(v1, *(_QWORD *)(v1 + 32));
    v2 = _InterlockedExchangeAdd(&WheaPassiveDrsItemsToProcess, 0xFFFFFFFF);
    v3 = v2 <= 1;
    result = (unsigned int)(v2 - 1);
  }
  while ( !v3 );
  return result;
}
