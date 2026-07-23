/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140C5E140
 * Callers:
 *     KiVerifyXcpt15 @ 0x140BE0C40 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140BE14F0 (KeFreeInitializationCode.c)
 *     sub_140BE30B0 @ 0x140BE30B0 (sub_140BE30B0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned __int64)MiFlags >> 15) & 1;
}
