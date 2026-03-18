/*
 * XREFs of ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x1C00D2110
 * Callers:
 *     SetIconMetrics @ 0x1C00D1B34 (SetIconMetrics.c)
 *     SetMinMetrics @ 0x1C00D1D50 (SetMinMetrics.c)
 *     xxxSetWindowNCMetrics @ 0x1C00D1EA0 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetTWIPSMetricById(struct _UNICODE_STRING *a1, unsigned int a2, unsigned int a3)
{
  FastGetProfileIntFromID(a1, 23LL, a2, a3);
  return 0LL;
}
