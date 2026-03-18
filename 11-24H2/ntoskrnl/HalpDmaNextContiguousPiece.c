/*
 * XREFs of HalpDmaNextContiguousPiece @ 0x14038FC00
 * Callers:
 *     HalpDmaMapContiguousTransferV2 @ 0x14038D984 (HalpDmaMapContiguousTransferV2.c)
 *     HalPutScatterGatherListV2 @ 0x14038F730 (HalPutScatterGatherListV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1403910E4 (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x1403911F0 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14039249C (HalpDmaFlushScatterTransferV3.c)
 *     HalpDmaFlushContiguousTransferV3 @ 0x1403934E8 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140493664 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x140493844 (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     HalpDmaNextContiguousPieceV2 @ 0x14038F490 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14038FC4C (HalpDmaNextContiguousPieceV3.c)
 */

__int64 __fastcall HalpDmaNextContiguousPiece(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, unsigned int a6)
{
  if ( *(_DWORD *)(a1 + 156) == 2 )
    return HalpDmaNextContiguousPieceV2(a1, a2, a3, a4, a5, a6);
  else
    return HalpDmaNextContiguousPieceV3(a1, a2, a3, a4, a5, a6);
}
