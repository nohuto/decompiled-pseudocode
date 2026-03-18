/*
 * XREFs of PpmCheckApplyParkConstraints @ 0x1404B3F74
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 *     PpmParkApplyForcedMask @ 0x140AB1350 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x140AB5804 (PpmParkClearForcedMask.c)
 *     PpmCheckInitProcessors @ 0x140AC1BF8 (PpmCheckInitProcessors.c)
 * Callees:
 *     PpmCheckCustomRun @ 0x140202CF8 (PpmCheckCustomRun.c)
 */

void PpmCheckApplyParkConstraints()
{
  PpmCheckCustomRun(4LL);
}
