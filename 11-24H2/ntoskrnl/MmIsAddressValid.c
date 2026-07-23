/*
 * XREFs of MmIsAddressValid @ 0x1402433E0
 * Callers:
 *     KiMarkBugCheckRegions @ 0x140505D78 (KiMarkBugCheckRegions.c)
 *     sub_1405182C8 @ 0x1405182C8 (sub_1405182C8.c)
 *     PopMarkComponentsBootPhase @ 0x140B5F714 (PopMarkComponentsBootPhase.c)
 * Callees:
 *     MmIsAddressValidEx @ 0x140244560 (MmIsAddressValidEx.c)
 */

BOOLEAN __stdcall MmIsAddressValid(PVOID VirtualAddress)
{
  return MmIsAddressValidEx(VirtualAddress, 0LL);
}
