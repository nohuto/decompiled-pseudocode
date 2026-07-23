/*
 * XREFs of ExpPoolTrackerChargeEntry @ 0x140397070
 * Callers:
 *     ExpInsertPoolTracker @ 0x14021BE10 (ExpInsertPoolTracker.c)
 *     ExAllocateHeapPool @ 0x140277790 (ExAllocateHeapPool.c)
 *     ExAllocateContiguousHeapPool @ 0x140396AFC (ExAllocateContiguousHeapPool.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140396EF0 (ExpInsertPoolTrackerExpansion.c)
 * Callees:
 *     ExpTrackTableGetMoreLimit @ 0x14039713C (ExpTrackTableGetMoreLimit.c)
 */

unsigned __int64 __fastcall ExpPoolTrackerChargeEntry(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  signed __int64 v8; // rbp
  unsigned __int64 result; // rax
  __int64 v10; // r13
  signed __int64 v11; // r12

  v4 = 8LL;
  v5 = 16LL;
  if ( a1 != 1 )
    v4 = 32LL;
  if ( a1 != 1 )
    v5 = 40LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v5 + a3));
  v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + a3), a2);
  if ( !*(_QWORD *)(a3 + 72) )
    return 1LL;
  v10 = a3 + 8LL * (int)a1;
LABEL_8:
  v11 = *(_QWORD *)(v10 + 56);
  while ( (v11 & 1) == 0 && v11 < v8 )
  {
    result = ExpTrackTableGetMoreLimit(*(_QWORD *)(a3 + 72), a2, a1);
    if ( !result )
      return result;
    if ( result == 1 )
    {
      if ( v11 != _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 56), 1LL, v11) )
        goto LABEL_8;
      return 1LL;
    }
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 56), result);
    v8 = *(_QWORD *)(v4 + a3);
  }
  return 1LL;
}
