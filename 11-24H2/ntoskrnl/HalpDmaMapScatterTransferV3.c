/*
 * XREFs of HalpDmaMapScatterTransferV3 @ 0x14048DF94
 * Callers:
 *     HalpMapTransferV3 @ 0x14048DEC0 (HalpMapTransferV3.c)
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 */

void __fastcall HalpDmaMapScatterTransferV3(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int *a5,
        char a6,
        char a7,
        unsigned __int64 *a8)
{
  unsigned int ContiguousPiece; // eax
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r9
  _BYTE *v17; // r8
  _QWORD *v18; // r9
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  bool v22; // zf
  size_t v23; // [rsp+20h] [rbp-38h]
  char v24; // [rsp+28h] [rbp-30h]
  char v25; // [rsp+30h] [rbp-28h]
  char v26; // [rsp+38h] [rbp-20h]

  ContiguousPiece = HalpDmaNextContiguousPiece(a1, a2, a3, a4, a6, *a5);
  v13 = ContiguousPiece;
  *a5 = ContiguousPiece;
  if ( !ContiguousPiece )
    return;
  v14 = a4 & 0xFFF;
  v15 = (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12);
  v16 = v14 + (*(_QWORD *)(a2 + 8 * v15 + 48) << 12);
  if ( a3 )
  {
    if ( HalpDmaCvmConfiguration || (v15 = v16 + ContiguousPiece - 1LL, *(_QWORD *)(a1 + 144) < v15) )
    {
      if ( *(_DWORD *)(a1 + 520) != 3 )
      {
        v17 = (_BYTE *)(a1 + 445);
        goto LABEL_8;
      }
    }
    v17 = (_BYTE *)(a1 + 445);
    if ( !*(_BYTE *)(a1 + 445)
      && !a6
      && ((v15 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1, (v15 & v16) != 0)
       || ((unsigned int)v15 & (unsigned int)v13) != 0)
      || *(_BYTE *)(a3 + 64) )
    {
LABEL_8:
      v18 = *(_QWORD **)(a3 + 56);
      *a8 = v14 + *v18;
      if ( a6 )
      {
        v26 = a7;
        v25 = 0;
        v24 = a6;
      }
      else
      {
        if ( *v17 )
          goto LABEL_11;
        v26 = a7;
        v25 = 1;
        v24 = 0;
      }
      LODWORD(v23) = v13;
      HalpDmaSyncMapBuffers(a1, a2, a4, (__int64)v18, v23, v24, v25, v26);
LABEL_11:
      v19 = *(_QWORD *)(a3 + 56);
      v20 = (v13 + v14 + 4095) >> 12;
      if ( (_DWORD)v20 )
      {
        v21 = (unsigned int)v20;
        do
        {
          v19 = *(_QWORD *)(v19 + 8);
          --v21;
        }
        while ( v21 );
      }
      *(_QWORD *)(a3 + 56) = v19;
      return;
    }
  }
  v22 = *(_BYTE *)(a1 + 445) == 0;
  *a8 = v16;
  if ( v22 )
    HalpDmaFlushBuffer(v15, a2, a4, v13, a6, a7);
}
