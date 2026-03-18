/*
 * XREFs of HalpEndOfBoot @ 0x140704360
 * Callers:
 *     <none>
 * Callees:
 *     HalpResetSBF @ 0x140B4B158 (HalpResetSBF.c)
 */

__int64 HalpEndOfBoot()
{
  return HalpResetSBF();
}
