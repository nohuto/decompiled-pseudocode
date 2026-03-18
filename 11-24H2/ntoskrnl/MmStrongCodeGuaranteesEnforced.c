/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140C5BFB0
 * Callers:
 *     KiVerifyXcpt15 @ 0x140BDEC40 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140BDF4F0 (KeFreeInitializationCode.c)
 *     sub_140BE10B0 @ 0x140BE10B0 (sub_140BE10B0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned __int64)MiFlags >> 15) & 1;
}
