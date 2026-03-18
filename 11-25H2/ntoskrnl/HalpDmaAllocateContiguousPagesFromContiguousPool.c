/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x14033784C
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x140334FBC (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x1406F3974 (HalpDmaAllocateLocalContiguousPool.c)
 * Callees:
 *     HalpDmaGetAdapterVersion @ 0x140333AC8 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x1403378A0 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140539A68 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r10

  if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV2(v6, v9);
  else
    return HalpDmaAllocateContiguousPagesFromContiguousPoolV3(v6, v9, v7, v8, a5, a6);
}
