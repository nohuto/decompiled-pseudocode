/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x14053D840
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14054EED8 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x14038FBDC (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x14053C1D4 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x1405529A4 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(__int64 a1)
{
  __int64 v1; // rcx
  ULONG v2; // r8d
  __int64 v3; // r9

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2(v1, v3);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3(v1, v3, v2);
}
