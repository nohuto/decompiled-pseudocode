/*
 * XREFs of PoFxIssueComponentPerfStateChange @ 0x1405CD950
 * Callers:
 *     <none>
 * Callees:
 *     PoFxIssueComponentPerfStateChangeMultiple @ 0x1405CD980 (PoFxIssueComponentPerfStateChangeMultiple.c)
 */

__int64 __fastcall PoFxIssueComponentPerfStateChange(ULONG_PTR a1, __int64 a2, __int64 a3, void *a4, __int64 a5)
{
  return PoFxIssueComponentPerfStateChangeMultiple(a1, a4, a5);
}
