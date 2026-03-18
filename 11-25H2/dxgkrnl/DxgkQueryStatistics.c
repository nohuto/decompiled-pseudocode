/*
 * XREFs of DxgkQueryStatistics @ 0x1403954B0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkQueryStatisticsInternal @ 0x1402894D0 (DxgkQueryStatisticsInternal.c)
 */

__int64 __fastcall DxgkQueryStatistics(ULONG64 a1, __int64 a2, __int64 a3)
{
  return DxgkQueryStatisticsInternal(a1, 1, a3);
}
