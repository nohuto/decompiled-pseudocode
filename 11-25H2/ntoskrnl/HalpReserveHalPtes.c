/*
 * XREFs of HalpReserveHalPtes @ 0x140BFD408
 * Callers:
 *     HalpInitializeWheaPhysicalMappings @ 0x140C03744 (HalpInitializeWheaPhysicalMappings.c)
 * Callees:
 *     HalpMmGetPteAddressSafe @ 0x140540604 (HalpMmGetPteAddressSafe.c)
 */

unsigned __int64 HalpReserveHalPtes()
{
  unsigned __int64 v0; // rbx
  int i; // edi
  _BYTE *PteAddressSafe; // rax

  v0 = HalpHeapEnd;
  for ( i = 0; !i; i = 1 )
  {
    v0 -= 4096LL;
    PteAddressSafe = (_BYTE *)HalpMmGetPteAddressSafe(v0);
    if ( !PteAddressSafe || (*PteAddressSafe & 1) != 0 )
      return 0LL;
  }
  HalpHeapEnd = v0;
  return v0;
}
