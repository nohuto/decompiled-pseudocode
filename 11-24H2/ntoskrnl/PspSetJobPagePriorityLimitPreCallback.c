/*
 * XREFs of PspSetJobPagePriorityLimitPreCallback @ 0x140777FF0
 * Callers:
 *     <none>
 * Callees:
 *     PspUpdateJobEffectivePriorityLimits @ 0x1408E6FD4 (PspUpdateJobEffectivePriorityLimits.c)
 */

__int64 __fastcall PspSetJobPagePriorityLimitPreCallback(__int64 a1)
{
  PspUpdateJobEffectivePriorityLimits(a1, 2LL);
  return 0LL;
}
