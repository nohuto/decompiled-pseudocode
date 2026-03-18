/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPool @ 0x14038D3F8
 * Callers:
 *     HalpDmaAllocateMapRegisters @ 0x14038E95C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14048F950 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1406FFA54 (HalpDmaAllocateLocalScatterPool.c)
 * Callees:
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV2 @ 0x14038D194 (HalpDmaAllocateScatterPagesFromContiguousPoolV2.c)
 *     HalpDmaGetMasterAdapterVersion @ 0x14038D824 (HalpDmaGetMasterAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolV3 @ 0x1404D9218 (HalpDmaAllocateScatterPagesFromContiguousPoolV3.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPool(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        ULONG *a6)
{
  __int64 v6; // rcx
  ULONG v7; // r8d
  int v8; // r9d
  __int64 v9; // r10

  if ( (unsigned int)HalpDmaGetMasterAdapterVersion(a2) == 2 )
    return HalpDmaAllocateScatterPagesFromContiguousPoolV2(v6, v9, v7, v8, a5, a6);
  else
    return HalpDmaAllocateScatterPagesFromContiguousPoolV3(v6, v9, v7, v8, a5, (__int64)a6);
}
