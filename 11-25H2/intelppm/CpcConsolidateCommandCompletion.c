/*
 * XREFs of CpcConsolidateCommandCompletion @ 0x140004D3C
 * Callers:
 *     CpcAcquirePerformanceCallback @ 0x140004D20 (CpcAcquirePerformanceCallback.c)
 *     CpcSubspaceAcquirePerformance @ 0x140004D90 (CpcSubspaceAcquirePerformance.c)
 *     CpcSubspaceCommitPerformance @ 0x1400054E0 (CpcSubspaceCommitPerformance.c)
 *     CpcReadFeedbackAcquireCallback @ 0x140008E00 (CpcReadFeedbackAcquireCallback.c)
 *     CpcSubspaceReadFeedback @ 0x140008F80 (CpcSubspaceReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CpcConsolidateCommandCompletion(__int64 a1)
{
  __int64 result; // rax
  __int64 (*v2)(void); // rbx

  result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)a1, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    v2 = *(__int64 (**)(void))(a1 + 8);
    *(_QWORD *)(a1 + 8) = 0LL;
    if ( *(_BYTE *)(a1 + 16) )
      KeSetEvent(&Event, 0, 0);
    return v2();
  }
  return result;
}
