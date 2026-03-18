/*
 * XREFs of MmStrongCodeGuaranteesEnforced @ 0x140C4AC30
 * Callers:
 *     KiVerifyXcpt15 @ 0x140BCDC40 (KiVerifyXcpt15.c)
 *     KeFreeInitializationCode @ 0x140BCE4F0 (KeFreeInitializationCode.c)
 *     sub_140BD00B0 @ 0x140BD00B0 (sub_140BD00B0.c)
 * Callees:
 *     <none>
 */

unsigned __int64 MmStrongCodeGuaranteesEnforced()
{
  return ((unsigned __int64)MiFlags >> 15) & 1;
}
