/*
 * XREFs of HalpEndOfBoot @ 0x1406F8480
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140B3B158 (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
