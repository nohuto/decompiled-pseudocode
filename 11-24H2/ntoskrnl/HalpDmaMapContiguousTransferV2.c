/*
 * XREFs of HalpDmaMapContiguousTransferV2 @ 0x1403872C4
 * Callers:
 *     IopMapTransfer @ 0x140387610 (IopMapTransfer.c)
 *     HalpAllocateAdapterCallbackV2 @ 0x1403886C0 (HalpAllocateAdapterCallbackV2.c)
 *     IoMapTransferInternal @ 0x140389CC4 (IoMapTransferInternal.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaMapContiguousTransferV2(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned int *a5,
        char a6,
        unsigned __int64 *a7)
{
  unsigned int v11; // r14d
  unsigned int ContiguousPiece; // eax
  unsigned __int64 v13; // r10
  char v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  size_t v18; // [rsp+20h] [rbp-38h]
  char v19; // [rsp+28h] [rbp-30h]
  char v20; // [rsp+30h] [rbp-28h]
  char v21; // [rsp+38h] [rbp-20h]

  v11 = *a5;
  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, 0, a4, a6, *a5);
  v13 = a4 & 0xFFF;
  v14 = 0;
  v15 = (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v16 = v13 + (*(_QWORD *)(a2 + 8 * v15 + 48) << 12);
  if ( ContiguousPiece == v11 && *(_QWORD *)(a1 + 144) >= v16 + ContiguousPiece - 1 )
  {
    if ( a6
      || *(_BYTE *)(a1 + 445)
      || (v15 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v15 & v16) == 0) && (v15 & v17) == 0 )
    {
      *a7 = v16;
      HalpDmaFlushBuffer(v15, a2, a4, v11, a6, v14);
      return;
    }
  }
  *a7 = v13 + *a3;
  if ( a6 )
  {
    v21 = v14;
    v20 = v14;
    v19 = a6;
LABEL_14:
    LODWORD(v18) = v11;
    HalpDmaSyncMapBuffers(a1, a2, a4, (_DWORD)a3, v18, v19, v20, v21);
    return;
  }
  if ( *(_BYTE *)(a1 + 445) == v14 )
  {
    v21 = v14;
    v20 = 1;
    v19 = v14;
    goto LABEL_14;
  }
}
