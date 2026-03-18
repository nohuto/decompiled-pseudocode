/*
 * XREFs of KiFlushSharedReadyQueueReadyLists @ 0x140351F9C
 * Callers:
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiFlushReadyLists @ 0x140352060 (KiFlushReadyLists.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiFlushSharedReadyQueueReadyLists(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  KiFlushReadyLists(a1 + 64, a1 + 8, a2, a1);
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 16) = 0LL;
  result = Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v3);
  if ( (_DWORD)result )
  {
    result = *(_QWORD *)(a1 + 720);
    _InterlockedAnd64((volatile signed __int64 *)(result + 392), ~*(_QWORD *)(a1 + 712));
  }
  return result;
}
