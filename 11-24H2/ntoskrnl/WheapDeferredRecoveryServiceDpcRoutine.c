/*
 * XREFs of WheapDeferredRecoveryServiceDpcRoutine @ 0x14065DC80
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeInsertQueueDpc @ 0x1402542F0 (KeInsertQueueDpc.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

BOOLEAN __fastcall WheapDeferredRecoveryServiceDpcRoutine(PRKDPC Dpc, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rtt
  __int64 v7; // rtt
  char v8; // al
  KIRQL v9; // al
  signed __int32 v10; // eax
  bool v11; // cc
  BOOLEAN result; // al

  v5 = WheaDrsList;
  v6 = WheaDrsList;
  if ( v6 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) )
  {
    do
    {
      _mm_pause();
      v5 = WheaDrsList;
      v7 = WheaDrsList;
    }
    while ( v7 != _InterlockedCompareExchange64(&WheaDrsList, *(_QWORD *)WheaDrsList, WheaDrsList) );
  }
  v8 = *(_BYTE *)(v5 + 24);
  if ( v8 == 2 )
  {
    _InterlockedExchange((volatile __int32 *)(v5 + 8), 0);
    guard_dispatch_icall_no_overrides(v5, *(_QWORD *)(v5 + 32), a3, a4);
  }
  else if ( !v8 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&WheaPassiveDrsListLock);
    *(_QWORD *)v5 = WheaPassiveDrsList;
    WheaPassiveDrsList = v5;
    KeReleaseSpinLock(&WheaPassiveDrsListLock, v9);
    if ( _InterlockedIncrement(&WheaPassiveDrsItemsToProcess) == 1 )
      ExQueueWorkItem(&WheaDrsWorkItem, CriticalWorkQueue);
  }
  v10 = _InterlockedExchangeAdd(&WheaDrsItemsToProcess, 0xFFFFFFFF);
  v11 = v10 <= 1;
  result = v10 - 1;
  if ( !v11 )
    return KeInsertQueueDpc(Dpc, 0LL, 0LL);
  return result;
}
