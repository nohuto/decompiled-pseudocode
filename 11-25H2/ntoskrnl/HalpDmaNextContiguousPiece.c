/*
 * XREFs of HalpDmaNextContiguousPiece @ 0x140335A94
 * Callers:
 *     HalpDmaFlushContiguousTransferV3 @ 0x140331380 (HalpDmaFlushContiguousTransferV3.c)
 *     HalpDmaFlushScatterTransferV3 @ 0x14033239C (HalpDmaFlushScatterTransferV3.c)
 *     HalPutScatterGatherListV2 @ 0x140335DA0 (HalPutScatterGatherListV2.c)
 *     HalpDmaMapContiguousTransferV2 @ 0x1403373F4 (HalpDmaMapContiguousTransferV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14033753C (HalpDmaFlushContiguousTransferV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x140337650 (IoFlushAdapterBuffersV2.c)
 *     HalpDmaMapScatterTransferV3 @ 0x140497828 (HalpDmaMapScatterTransferV3.c)
 *     HalpDmaMapContiguousTransferV3 @ 0x1404CCF54 (HalpDmaMapContiguousTransferV3.c)
 * Callees:
 *     HalpDmaNextContiguousPieceV2 @ 0x140335AE0 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140336260 (HalpDmaNextContiguousPieceV3.c)
 */

__int64 __fastcall HalpDmaNextContiguousPiece(__int64 a1, int a2, int a3, int a4, char a5, int a6)
{
  if ( *(_DWORD *)(a1 + 156) == 2 )
    return HalpDmaNextContiguousPieceV2(a1, a2, a3, a4, a5, a6);
  else
    return HalpDmaNextContiguousPieceV3(a1, a2, a3, a4, a5, a6);
}
