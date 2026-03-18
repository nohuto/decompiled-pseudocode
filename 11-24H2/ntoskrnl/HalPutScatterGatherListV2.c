/*
 * XREFs of HalPutScatterGatherListV2 @ 0x14038F730
 * Callers:
 *     HalPutScatterGatherList @ 0x1403927F0 (HalPutScatterGatherList.c)
 * Callees:
 *     IoFreeMdl @ 0x140267750 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14028D9C0 (MmUnmapLockedPages.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x14038D160 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x14038D450 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x14038F490 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14038FBDC (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPiece @ 0x14038FC00 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14038FC4C (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffers @ 0x14038FF20 (HalpDmaSyncMapBuffers.c)
 *     IoFreeMapRegistersV2 @ 0x140390720 (IoFreeMapRegistersV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x1403910E4 (HalpDmaFlushContiguousTransferV2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV2(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rbx
  char v5; // r14
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  unsigned int v9; // r12d
  __int64 v10; // r15
  unsigned int v11; // eax
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // r13d
  unsigned int v15; // eax
  unsigned int v16; // r12d
  unsigned __int64 v17; // r15
  char v18; // r12
  __int64 v19; // rbx
  int ContiguousPieceV2; // r8d
  int v21; // edx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  struct _MDL *v26; // rdi
  __int64 v27; // rdx
  unsigned int v28; // r12d
  unsigned __int64 v29; // rbx
  unsigned int ContiguousPiece; // r8d
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  __int64 v35; // r10
  __int64 v36; // r9
  struct _MDL *Next; // rsi
  size_t v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+40h] [rbp-58h]
  _DWORD *v40; // [rsp+48h] [rbp-50h]
  unsigned __int64 v41; // [rsp+50h] [rbp-48h]
  __int64 v42; // [rsp+58h] [rbp-40h]
  unsigned __int64 v43; // [rsp+A8h] [rbp+10h]
  unsigned int v44; // [rsp+A8h] [rbp+10h]
  unsigned int v45; // [rsp+B8h] [rbp+20h]

  v4 = (_DWORD *)a2[1];
  v5 = a3;
  v40 = v4;
  if ( !v4 )
  {
    ExFreePoolWithTag(a2, 0);
    return;
  }
  if ( v4 != (_DWORD *)1 )
  {
    v7 = *((_QWORD *)v4 + 4);
    v8 = *((_QWORD *)v4 + 1);
    v9 = v4[10];
    v10 = *((_QWORD *)v4 + 3);
    v11 = *(_DWORD *)(v8 + 32) + *(_DWORD *)(v8 + 40) + *(_DWORD *)(v8 + 44) - v7;
    v39 = v10;
    if ( !v9 )
    {
LABEL_35:
      IoFreeMapRegistersV2(a1, *((_QWORD *)v4 + 3));
      v26 = (struct _MDL *)*((_QWORD *)v4 + 2);
      if ( v26 )
      {
        do
        {
          Next = v26->Next;
          if ( (v26->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v26->MappedSystemVa, v26);
          IoFreeMdl(v26);
          v26 = Next;
        }
        while ( Next );
      }
      if ( (*v4 & 1) == 0 )
        ExFreePoolWithTag(v4, 0);
      return;
    }
    while ( !v11 )
    {
LABEL_33:
      v8 = *(_QWORD *)v8;
      if ( v8 )
      {
        v7 = *(_QWORD *)(v8 + 32) + *(unsigned int *)(v8 + 44);
        v11 = *(_DWORD *)(v8 + 40);
        if ( v9 )
          continue;
      }
      goto LABEL_35;
    }
    v12 = *(_QWORD *)v8;
    v13 = v9;
    v14 = v9;
    if ( v11 <= v9 )
      v13 = v11;
    if ( v12 )
      v14 = v13;
    v15 = v9 - v13;
    v16 = 0;
    if ( v12 )
      v16 = v15;
    v45 = v16;
    if ( a1 && !*(_BYTE *)(a1 + 441) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), v13, a3, a4);
    if ( !v10 )
    {
      if ( !v5 && !*(_BYTE *)(a1 + 445) )
        HalpDmaFlushBuffer(v12, v8, v7, v14, 0, 0);
      goto LABEL_20;
    }
    if ( !a1 || !*(_BYTE *)(a1 + 442) )
    {
      HalpDmaFlushContiguousTransferV2(a1, v8, v10, v7, v14, v5);
LABEL_20:
      v17 = (v7 & 0xFFF) + (*(_QWORD *)(v8 + 8LL * (unsigned int)((v7 - *(_QWORD *)(v8 + 32)) >> 12) + 48) << 12);
      v18 = *(_BYTE *)(a1 + 442);
      v19 = v39;
      v43 = *(_QWORD *)(a1 + 144);
      do
      {
        if ( v18 )
        {
          if ( *(_DWORD *)(a1 + 156) == 2 )
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, v8, v19, v7, v5, v14);
          else
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, v8, v19, v7, v5, v14);
        }
        else
        {
          ContiguousPieceV2 = v14;
        }
        v14 -= ContiguousPieceV2;
        if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
        {
          v21 = 1;
        }
        else
        {
          v21 = HalpCoreDmaAlignment;
          if ( *(_BYTE *)(a1 + 445) )
            v21 = 1;
        }
        v22 = v17 + (unsigned int)a3;
        if ( v43 < v22 - 1
          || !v5 && !*(_BYTE *)(a1 + 445) && ((v27 = (unsigned int)(v21 - 1), (v27 & v17) != 0) || (v27 & v22) != 0) )
        {
          v23 = ((v7 & 0xFFF) + (unsigned int)a3 + 4095LL) >> 12;
          if ( (_DWORD)v23 )
          {
            v24 = v39;
            v25 = (unsigned int)v23;
            do
            {
              v24 = *(_QWORD *)(v24 + 8);
              --v25;
            }
            while ( v25 );
            v39 = v24;
            v19 = v24;
          }
        }
        v7 += (unsigned int)a3;
        v17 += (unsigned int)a3;
      }
      while ( v14 );
      v4 = v40;
      v9 = v45;
      v10 = v39;
      goto LABEL_33;
    }
    if ( v5 )
    {
LABEL_19:
      *(_QWORD *)(v10 + 56) = v10;
      goto LABEL_20;
    }
    v28 = v14;
    *(_QWORD *)(v10 + 56) = v10;
    v29 = v7;
    while ( 1 )
    {
      ContiguousPiece = HalpDmaNextContiguousPiece(a1, v8, v10, v29, 0, v28);
      v41 = v29 & 0xFFF;
      v44 = ContiguousPiece;
      v42 = ContiguousPiece;
      if ( *(_QWORD *)(a1 + 144) < ContiguousPiece
                                 + v41
                                 + (*(_QWORD *)(v8 + 8LL * (unsigned int)((v29 - *(_QWORD *)(v8 + 32)) >> 12) + 48) << 12)
                                 - 1 )
        goto LABEL_54;
      if ( *(_BYTE *)(a1 + 445) )
        goto LABEL_59;
      v34 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
      if ( (v34 & v36) != 0 || (v35 & v34) != 0 )
      {
LABEL_54:
        LODWORD(v38) = ContiguousPiece;
        HalpDmaSyncMapBuffers(a1, v8, v29, *(_QWORD *)(v10 + 56), v38, 0, 0, 0);
        v31 = *(_QWORD *)(v10 + 56);
        v32 = (v41 + 4095 + v42) >> 12;
        if ( (_DWORD)v32 )
        {
          v33 = (unsigned int)v32;
          do
          {
            v31 = *(_QWORD *)(v31 + 8);
            --v33;
          }
          while ( v33 );
        }
        *(_QWORD *)(v10 + 56) = v31;
      }
      else
      {
        HalpDmaFlushBuffer(v34, v8, v29, ContiguousPiece, 0, 0);
      }
      ContiguousPiece = v44;
LABEL_59:
      v29 += ContiguousPiece;
      v28 -= ContiguousPiece;
      if ( !v28 )
        goto LABEL_19;
    }
  }
}
