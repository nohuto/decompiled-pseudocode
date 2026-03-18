/*
 * XREFs of PspSetJobPagePriorityLimitPreCallback @ 0x140768510
 * Callers:
 *     <none>
 * Callees:
 *     PspUpdateJobEffectivePriorityLimits @ 0x140A48744 (PspUpdateJobEffectivePriorityLimits.c)
 */

__int64 __fastcall PspSetJobPagePriorityLimitPreCallback(__int64 a1)
{
  PspUpdateJobEffectivePriorityLimits(a1, 2LL);
  return 0LL;
}
