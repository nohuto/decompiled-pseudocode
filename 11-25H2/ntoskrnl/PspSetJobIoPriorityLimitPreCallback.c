/*
 * XREFs of PspSetJobIoPriorityLimitPreCallback @ 0x140768350
 * Callers:
 *     <none>
 * Callees:
 *     PspUpdateJobEffectivePriorityLimits @ 0x140A48744 (PspUpdateJobEffectivePriorityLimits.c)
 */

__int64 __fastcall PspSetJobIoPriorityLimitPreCallback(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 1084);
  PspUpdateJobEffectivePriorityLimits(a1, 1LL);
  return 0LL;
}
