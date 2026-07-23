/*
 * XREFs of HalpDmaNextContiguousPiece @ 0x140389540
 * Callers:
 *     HalpDmaMapContiguousTransferV2 @ 0x1403872C4 (HalpDmaMapContiguousTransferV2.c)
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14038AA14 (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x14038AB20 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14038BDCC (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x14038CE18 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x14048DF94 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x14048E174 (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     HalpDmaNextContiguousPieceV2 @ 0x140388DD0 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14038958C (HalpDmaNextContiguousPieceV3.c)
 */

__int64 __fastcall HalpDmaNextContiguousPiece(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned int a6)
{
  if ( *(_DWORD *)(a1 + 156) == 2 )
    return HalpDmaNextContiguousPieceV2(a1, a2, a3, a4, a5, a6);
  else
    return HalpDmaNextContiguousPieceV3(a1, a2, a3, a4, a5, a6);
}
