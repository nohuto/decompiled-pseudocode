/*
 * XREFs of GreUnlockPointer @ 0x14012AAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14012AB9C (--$GreReleaseSemaphoreExclusive@$03VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 */

__int64 GreUnlockPointer()
{
  return GreReleaseSemaphoreExclusive<4,PDEVOBJ>();
}
