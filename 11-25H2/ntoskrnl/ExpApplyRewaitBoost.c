/*
 * XREFs of ExpApplyRewaitBoost @ 0x14041F1A4
 * Callers:
 *     ExpWaitForResource @ 0x14041F0A0 (ExpWaitForResource.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x140324DC0 (ExpApplyPriorityBoost.c)
 */

__int64 __fastcall ExpApplyRewaitBoost(__int64 a1)
{
  return ExpApplyPriorityBoost(a1, 65280, (__int64)KeGetCurrentThread());
}
