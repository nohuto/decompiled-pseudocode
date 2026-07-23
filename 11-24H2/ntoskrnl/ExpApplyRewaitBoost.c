/*
 * XREFs of ExpApplyRewaitBoost @ 0x14022E860
 * Callers:
 *     ExpWaitForResource @ 0x14022CDD0 (ExpWaitForResource.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14022CFA0 (ExpApplyPriorityBoost.c)
 */

char __fastcall ExpApplyRewaitBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread(), a4);
}
