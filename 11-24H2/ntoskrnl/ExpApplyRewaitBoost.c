/*
 * XREFs of ExpApplyRewaitBoost @ 0x1402792D0
 * Callers:
 *     ExpWaitForResource @ 0x140277840 (ExpWaitForResource.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x140277A10 (ExpApplyPriorityBoost.c)
 */

char __fastcall ExpApplyRewaitBoost(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread(), a4);
}
