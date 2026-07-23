/*
 * XREFs of HalpDmaMapContiguousTransferV3 @ 0x14048E174
 * Callers:
 *     HalpMapTransferV3 @ 0x14048DEC0 (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaMapContiguousTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int *a5,
        char a6,
        char a7,
        unsigned __int64 *a8)
{
  unsigned int v12; // r14d
  unsigned __int64 v13; // rcx
  size_t v14; // [rsp+20h] [rbp-38h]
  char v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+30h] [rbp-28h]
  char v17; // [rsp+38h] [rbp-20h]

  v12 = *a5;
  if ( (unsigned int)HalpDmaNextContiguousPiece(a1, a2, 0LL, a4, a6, *a5) == v12 && !*(_BYTE *)(a3 + 64) )
  {
    v13 = (a4 & 0xFFF) + (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12);
    *a8 = v13;
    HalpDmaFlushBuffer(v13, a2, a4, v12, a6, a7);
    return;
  }
  *a8 = *(_QWORD *)a3 + (a4 & 0xFFF);
  if ( a6 )
  {
    v17 = a7;
    v16 = 0;
    v15 = a6;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 445) )
      return;
    v17 = a7;
    v16 = 1;
    v15 = 0;
  }
  LODWORD(v14) = v12;
  HalpDmaSyncMapBuffers(a1, a2, a4, a3, v14, v15, v16, v17);
}
