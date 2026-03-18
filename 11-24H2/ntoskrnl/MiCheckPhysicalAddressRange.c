/*
 * XREFs of MiCheckPhysicalAddressRange @ 0x1403952D0
 * Callers:
 *     MmCopyMemory @ 0x140395E40 (MmCopyMemory.c)
 *     MiDbgTranslatePhysicalAddress @ 0x14067F1F0 (MiDbgTranslatePhysicalAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiCheckPhysicalAddressRange(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // r9d

  if ( a1 + a2 <= a1 )
    return 0LL;
  v2 = a1 + a2 - 1;
  v3 = 0;
  if ( KiMtrrMaskBase )
  {
    if ( (v2 & 0xFFFFFFFFFFFFF000uLL) > KiMtrrMaskBase )
      return 0LL;
  }
  if ( KeGetCurrentPrcb()->CpuVendor != 1 || v2 < 0xFD00000000LL )
    return 1LL;
  LOBYTE(v3) = a1 > 0xFFFFFFFFFFLL;
  return v3;
}
