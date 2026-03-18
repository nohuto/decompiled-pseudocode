/*
 * XREFs of RtlpHpVsCalculateAffinitySlotCount @ 0x1404F3844
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x1404D044C (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x1405F8788 (RtlpHpHeapAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsCalculateAffinitySlotCount(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = a1;
  if ( ((a1 - 1) & a1) != 0 )
  {
    _BitScanReverse(&a1, a1);
    v1 = 1 << (a1 + 1);
  }
  if ( v1 > 0x40 )
    return 64;
  return v1;
}
