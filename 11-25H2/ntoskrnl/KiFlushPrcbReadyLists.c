/*
 * XREFs of KiFlushPrcbReadyLists @ 0x140351FF0
 * Callers:
 *     KiParkCurrentProcessor @ 0x1403E0254 (KiParkCurrentProcessor.c)
 * Callees:
 *     KiFlushReadyLists @ 0x140352060 (KiFlushReadyLists.c)
 *     Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline @ 0x1404EFFC4 (Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall KiFlushPrcbReadyLists(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  KiFlushReadyLists(a1 + 33856, a1 + 33752, a2, *(_QWORD *)(a1 + 36424));
  *(_DWORD *)(a1 + 34420) = 0;
  *(_QWORD *)(a1 + 34424) = 0LL;
  result = Feature_IdleSearchImprovements__private_IsEnabledNoReportingNoInline(v3);
  if ( (_DWORD)result )
  {
    if ( !*(_QWORD *)(a1 + 33840) )
    {
      result = *(_QWORD *)(a1 + 192);
      _InterlockedAnd64((volatile signed __int64 *)(result + 384), ~*(_QWORD *)(a1 + 200));
    }
  }
  return result;
}
