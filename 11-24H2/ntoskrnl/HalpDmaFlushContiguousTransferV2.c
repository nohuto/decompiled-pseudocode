/*
 * XREFs of HalpDmaFlushContiguousTransferV2 @ 0x14038AA14
 * Callers:
 *     HalPutScatterGatherListV2 @ 0x140389070 (HalPutScatterGatherListV2.c)
 *     IoFlushAdapterBuffersV2 @ 0x14038AB20 (IoFlushAdapterBuffersV2.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaFlushContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  unsigned int ContiguousPiece; // eax
  char v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r10
  size_t v15; // [rsp+20h] [rbp-38h]

  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, a5);
  if ( ContiguousPiece != a5
    || *(_QWORD *)(a1 + 144) < (a4 & 0xFFF)
                             + (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
                             + ContiguousPiece
                             - 1 )
  {
    v11 = 0;
    if ( a6 )
      return;
    goto LABEL_3;
  }
  if ( !a6 && !*(_BYTE *)(a1 + 445) )
  {
    v12 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
    if ( (v12 & v14) == 0 && (v12 & v13) == 0 )
    {
      HalpDmaFlushBuffer(v12, a2, a4, a5, v11, v11);
      return;
    }
LABEL_3:
    LODWORD(v15) = a5;
    HalpDmaSyncMapBuffers(a1, a2, a4, a3, v15, v11, v11, v11);
  }
}
