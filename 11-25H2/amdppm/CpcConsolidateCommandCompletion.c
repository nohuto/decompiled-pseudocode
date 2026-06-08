/*
 * XREFs of CpcConsolidateCommandCompletion @ 0x14000321C
 * Callers:
 *     CpcAcquirePerformanceCallback @ 0x140003200 (CpcAcquirePerformanceCallback.c)
 *     CpcSubspaceCommitPerformance @ 0x1400039B0 (CpcSubspaceCommitPerformance.c)
 *     CpcSubspaceAcquirePerformance @ 0x140003A00 (CpcSubspaceAcquirePerformance.c)
 *     CpcReadFeedbackAcquireCallback @ 0x140005960 (CpcReadFeedbackAcquireCallback.c)
 *     CpcSubspaceReadFeedback @ 0x140005AC0 (CpcSubspaceReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
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
