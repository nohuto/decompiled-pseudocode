/*
 * XREFs of HalpEndOfBoot @ 0x140701F20
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140B4D058 (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
