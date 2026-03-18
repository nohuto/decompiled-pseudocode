/*
 * XREFs of ?VidSchiStartExecutionTimeAtThisPriorityBand@@YAXPEAU_VIDSCH_NODE@@W4VIDSCH_YIELD_PRIORITY_BAND@@_K@Z @ 0x1400240B0
 * Callers:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x140023930 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiStartExecutionTimeAtThisPriorityBand(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = a2;
  if ( *(_QWORD *)(a1 + 8LL * a2 + 2024) )
    *(_QWORD *)(a1 + 8LL * a2 + 2056) = a3;
  return result;
}
