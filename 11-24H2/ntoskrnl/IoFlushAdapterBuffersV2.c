/*
 * XREFs of IoFlushAdapterBuffersV2 @ 0x14038AB20
 * Callers:
 *     <none>
 * Callees:
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14038AA14 (HalpDmaFlushContiguousTransferV2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall IoFlushAdapterBuffersV2(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        char a6)
{
  unsigned int v6; // r14d
  __int64 *v11; // rsi
  __int64 ContiguousPiece; // r12
  unsigned __int64 v14; // r13
  char v15; // r10
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r8
  size_t v22; // [rsp+20h] [rbp-48h]

  v6 = a5;
  if ( !a5 )
    return 1;
  if ( a1 && !*(_BYTE *)(a1 + 441) )
    guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), a2);
  if ( !a3 )
  {
    if ( !a6 && !*(_BYTE *)(a1 + 445) )
      HalpDmaFlushBuffer(a1, a2, a4, a5, 0, 0);
    return 1;
  }
  if ( !a1 || !*(_BYTE *)(a1 + 442) )
  {
    HalpDmaFlushContiguousTransferV2(a1, a2, a3, a4, a5, a6);
    return 1;
  }
  v11 = (__int64 *)(a3 + 56);
  if ( a6 )
    goto LABEL_9;
  *v11 = a3;
  do
  {
    ContiguousPiece = (unsigned int)HalpDmaNextContiguousPiece(a1, a2, a3, a4, 0, v6);
    v14 = a4 & 0xFFF;
    v15 = 0;
    if ( *(_QWORD *)(a1 + 144) < v14
                               + (*(_QWORD *)(a2 + 8LL * (unsigned int)((a4 - *(_QWORD *)(a2 + 32)) >> 12) + 48) << 12)
                               + ContiguousPiece
                               - 1 )
      goto LABEL_17;
    if ( *(_BYTE *)(a1 + 445) )
      goto LABEL_21;
    v19 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
    if ( (v19 & v21) != 0 || (v20 & v19) != 0 )
    {
LABEL_17:
      LODWORD(v22) = ContiguousPiece;
      HalpDmaSyncMapBuffers(a1, a2, a4, *v11, v22, v15, v15, v15);
      v16 = *v11;
      v17 = (v14 + ContiguousPiece + 4095) >> 12;
      if ( (_DWORD)v17 )
      {
        v18 = (unsigned int)v17;
        do
        {
          v16 = *(_QWORD *)(v16 + 8);
          --v18;
        }
        while ( v18 );
      }
      *v11 = v16;
    }
    else
    {
      HalpDmaFlushBuffer(v19, a2, a4, ContiguousPiece, v15, v15);
    }
LABEL_21:
    a4 += ContiguousPiece;
    v6 -= ContiguousPiece;
  }
  while ( v6 );
  v11 = (__int64 *)(a3 + 56);
LABEL_9:
  *v11 = a3;
  return 1;
}
