/*
 * XREFs of HalPutScatterGatherListV2 @ 0x140335DA0
 * Callers:
 *     HalPutScatterGatherList @ 0x1403342E0 (HalPutScatterGatherList.c)
 * Callees:
 *     IoFreeMdl @ 0x1402D5960 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x1403285B0 (MmUnmapLockedPages.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140333410 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140333700 (HalpDmaFlushBuffer.c)
 *     HalpDmaGetAdapterVersion @ 0x140333AC8 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPiece @ 0x140335A94 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x140335AE0 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x140336260 (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffers @ 0x140336530 (HalpDmaSyncMapBuffers.c)
 *     IoFreeMapRegistersV2 @ 0x140336A70 (IoFreeMapRegistersV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14033753C (HalpDmaFlushContiguousTransferV2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV2(__int64 a1, _QWORD *a2, char a3)
{
  _DWORD *v3; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // r12
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // eax
  unsigned int v15; // r13d
  unsigned __int64 v16; // r12
  char v17; // r13
  __int64 v18; // rbx
  unsigned int ContiguousPieceV2; // eax
  unsigned int v20; // r8d
  unsigned int v21; // r8d
  unsigned __int64 v22; // r9
  int v23; // edx
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  struct _MDL *v28; // rdi
  __int64 v29; // rdx
  int v30; // r13d
  unsigned __int64 v31; // rbx
  unsigned int ContiguousPiece; // r8d
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rcx
  __int64 v37; // r10
  __int64 v38; // r9
  struct _MDL *Next; // rsi
  size_t v40; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+40h] [rbp-58h]
  _DWORD *v42; // [rsp+48h] [rbp-50h]
  unsigned __int64 v43; // [rsp+50h] [rbp-48h]
  __int64 v44; // [rsp+58h] [rbp-40h]
  unsigned int v45; // [rsp+A8h] [rbp+10h]
  unsigned int v46; // [rsp+B8h] [rbp+20h]

  v3 = (_DWORD *)a2[1];
  v42 = v3;
  if ( !v3 )
  {
    ExFreePoolWithTag(a2, 0);
    return;
  }
  if ( v3 != (_DWORD *)1 )
  {
    v6 = *((_QWORD *)v3 + 4);
    v7 = *((_QWORD *)v3 + 1);
    v8 = *((_QWORD *)v3 + 3);
    v9 = v3[10];
    v10 = *(_DWORD *)(v7 + 32) + *(_DWORD *)(v7 + 40) + *(_DWORD *)(v7 + 44) - v6;
    v41 = v8;
    if ( !v9 )
    {
LABEL_36:
      IoFreeMapRegistersV2(a1, *((_QWORD *)v3 + 3));
      v28 = (struct _MDL *)*((_QWORD *)v3 + 2);
      if ( v28 )
      {
        do
        {
          Next = v28->Next;
          if ( (v28->MdlFlags & 1) != 0 )
            MmUnmapLockedPages(v28->MappedSystemVa, v28);
          IoFreeMdl(v28);
          v28 = Next;
        }
        while ( Next );
      }
      if ( (*v3 & 1) == 0 )
        ExFreePoolWithTag(v3, 0);
      return;
    }
    while ( !v10 )
    {
LABEL_34:
      v7 = *(_QWORD *)v7;
      if ( v7 )
      {
        v6 = *(_QWORD *)(v7 + 32) + *(unsigned int *)(v7 + 44);
        v10 = *(_DWORD *)(v7 + 40);
        if ( v9 )
          continue;
      }
      goto LABEL_36;
    }
    v11 = *(_QWORD *)v7;
    v12 = v9;
    v13 = v9;
    if ( v10 <= v9 )
      v12 = v10;
    if ( v11 )
      v13 = v12;
    v14 = v9 - v12;
    v15 = 0;
    if ( v11 )
      v15 = v14;
    v46 = v15;
    if ( a1 && !*(_BYTE *)(a1 + 441) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), v12);
    if ( !v8 )
    {
      if ( !a3 && !*(_BYTE *)(a1 + 445) )
        HalpDmaFlushBuffer(v11, v7, v6, v13, 0, 0);
      goto LABEL_20;
    }
    if ( !a1 || !*(_BYTE *)(a1 + 442) )
    {
      HalpDmaFlushContiguousTransferV2(a1, v7, v8, v6, v13, a3);
LABEL_20:
      v16 = (v6 & 0xFFF) + (*(_QWORD *)(v7 + 8LL * (unsigned int)((v6 - *(_QWORD *)(v7 + 32)) >> 12) + 48) << 12);
      v17 = *(_BYTE *)(a1 + 442);
      v18 = v41;
      do
      {
        if ( v17 )
        {
          if ( *(_DWORD *)(a1 + 156) == 2 )
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, v7, v18, v6, a3, v13);
          else
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, v7, v18, v6, a3, v13);
          v20 = ContiguousPieceV2;
        }
        else
        {
          v20 = v13;
        }
        v13 -= v20;
        if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
        {
          v23 = 1;
        }
        else
        {
          v23 = HalpCoreDmaAlignment;
          if ( *(_BYTE *)(a1 + 445) )
            v23 = 1;
        }
        v24 = v16 + v21;
        if ( v22 < v24 - 1
          || !a3 && !*(_BYTE *)(a1 + 445) && ((v29 = (unsigned int)(v23 - 1), (v29 & v16) != 0) || (v29 & v24) != 0) )
        {
          v25 = ((v6 & 0xFFF) + v21 + 4095LL) >> 12;
          if ( (_DWORD)v25 )
          {
            v26 = v41;
            v27 = (unsigned int)v25;
            do
            {
              v26 = *(_QWORD *)(v26 + 8);
              --v27;
            }
            while ( v27 );
            v41 = v26;
            v18 = v26;
          }
        }
        v6 += v21;
        v16 += v21;
      }
      while ( v13 );
      v3 = v42;
      v9 = v46;
      v8 = v41;
      goto LABEL_34;
    }
    if ( a3 )
    {
LABEL_19:
      *(_QWORD *)(v8 + 56) = v8;
      goto LABEL_20;
    }
    v30 = v13;
    *(_QWORD *)(v8 + 56) = v8;
    v31 = v6;
    while ( 1 )
    {
      ContiguousPiece = HalpDmaNextContiguousPiece(a1, v7, v8, v31, 0, v30);
      v43 = v31 & 0xFFF;
      v45 = ContiguousPiece;
      v44 = ContiguousPiece;
      if ( *(_QWORD *)(a1 + 144) < ContiguousPiece
                                 + v43
                                 + (*(_QWORD *)(v7 + 8LL * (unsigned int)((v31 - *(_QWORD *)(v7 + 32)) >> 12) + 48) << 12)
                                 - 1 )
        goto LABEL_56;
      if ( *(_BYTE *)(a1 + 445) )
        goto LABEL_61;
      v36 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
      if ( (v36 & v38) != 0 || (v37 & v36) != 0 )
      {
LABEL_56:
        LODWORD(v40) = ContiguousPiece;
        HalpDmaSyncMapBuffers(a1, v7, v31, *(_QWORD *)(v8 + 56), v40, 0, 0, 0);
        v33 = *(_QWORD *)(v8 + 56);
        v34 = (v43 + 4095 + v44) >> 12;
        if ( (_DWORD)v34 )
        {
          v35 = (unsigned int)v34;
          do
          {
            v33 = *(_QWORD *)(v33 + 8);
            --v35;
          }
          while ( v35 );
        }
        *(_QWORD *)(v8 + 56) = v33;
      }
      else
      {
        HalpDmaFlushBuffer(v36, v7, v31, ContiguousPiece, 0, 0);
      }
      ContiguousPiece = v45;
LABEL_61:
      v31 += ContiguousPiece;
      v30 -= ContiguousPiece;
      if ( !v30 )
        goto LABEL_19;
    }
  }
}
