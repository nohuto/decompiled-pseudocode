/*
 * XREFs of HalPutScatterGatherListV2 @ 0x140389070
 * Callers:
 *     HalPutScatterGatherList @ 0x14038C120 (HalPutScatterGatherList.c)
 * Callees:
 *     IoFreeMdl @ 0x14025ED30 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14029D5C0 (MmUnmapLockedPages.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140386AA0 (HalpDmaGetAdapterCacheAlignment.c)
 *     HalpDmaFlushBuffer @ 0x140386D90 (HalpDmaFlushBuffer.c)
 *     HalpDmaNextContiguousPieceV2 @ 0x140388DD0 (HalpDmaNextContiguousPieceV2.c)
 *     HalpDmaGetAdapterVersion @ 0x14038951C (HalpDmaGetAdapterVersion.c)
 *     HalpDmaNextContiguousPiece @ 0x140389540 (HalpDmaNextContiguousPiece.c)
 *     HalpDmaNextContiguousPieceV3 @ 0x14038958C (HalpDmaNextContiguousPieceV3.c)
 *     HalpDmaSyncMapBuffers @ 0x140389860 (HalpDmaSyncMapBuffers.c)
 *     IoFreeMapRegistersV2 @ 0x14038A060 (IoFreeMapRegistersV2.c)
 *     HalpDmaFlushContiguousTransferV2 @ 0x14038AA14 (HalpDmaFlushContiguousTransferV2.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall HalPutScatterGatherListV2(__int64 a1, _QWORD *a2, char a3)
{
  _DWORD *v3; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned int v8; // r12d
  __int64 v9; // r15
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned int v13; // r13d
  unsigned int v14; // eax
  unsigned int v15; // r12d
  unsigned __int64 v16; // r15
  char v17; // r12
  __int64 v18; // rbx
  int ContiguousPieceV2; // r8d
  unsigned int v20; // r8d
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

  v3 = (_DWORD *)a2[1];
  v40 = v3;
  if ( !v3 )
  {
    ExFreePoolWithTag(a2, 0);
    return;
  }
  if ( v3 != (_DWORD *)1 )
  {
    v6 = *((_QWORD *)v3 + 4);
    v7 = *((_QWORD *)v3 + 1);
    v8 = v3[10];
    v9 = *((_QWORD *)v3 + 3);
    v10 = *(_DWORD *)(v7 + 32) + *(_DWORD *)(v7 + 40) + *(_DWORD *)(v7 + 44) - v6;
    v39 = v9;
    if ( !v8 )
    {
LABEL_35:
      IoFreeMapRegistersV2(a1, *((_QWORD *)v3 + 3));
      v26 = (struct _MDL *)*((_QWORD *)v3 + 2);
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
      if ( (*v3 & 1) == 0 )
        ExFreePoolWithTag(v3, 0);
      return;
    }
    while ( !v10 )
    {
LABEL_33:
      v7 = *(_QWORD *)v7;
      if ( v7 )
      {
        v6 = *(_QWORD *)(v7 + 32) + *(unsigned int *)(v7 + 44);
        v10 = *(_DWORD *)(v7 + 40);
        if ( v8 )
          continue;
      }
      goto LABEL_35;
    }
    v11 = *(_QWORD *)v7;
    v12 = v8;
    v13 = v8;
    if ( v10 <= v8 )
      v12 = v10;
    if ( v11 )
      v13 = v12;
    v14 = v8 - v12;
    v15 = 0;
    if ( v11 )
      v15 = v14;
    v45 = v15;
    if ( a1 && !*(_BYTE *)(a1 + 441) )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 432), v12);
    if ( !v9 )
    {
      if ( !a3 && !*(_BYTE *)(a1 + 445) )
        HalpDmaFlushBuffer(v11, v7, v6, v13, 0, 0);
      goto LABEL_20;
    }
    if ( !a1 || !*(_BYTE *)(a1 + 442) )
    {
      HalpDmaFlushContiguousTransferV2(a1, v7, v9, v6, v13, a3);
LABEL_20:
      v16 = (v6 & 0xFFF) + (*(_QWORD *)(v7 + 8LL * (unsigned int)((v6 - *(_QWORD *)(v7 + 32)) >> 12) + 48) << 12);
      v17 = *(_BYTE *)(a1 + 442);
      v18 = v39;
      v43 = *(_QWORD *)(a1 + 144);
      do
      {
        if ( v17 )
        {
          if ( *(_DWORD *)(a1 + 156) == 2 )
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV2(a1, v7, v18, v6, a3, v13);
          else
            ContiguousPieceV2 = HalpDmaNextContiguousPieceV3(a1, v7, v18, v6, a3, v13);
        }
        else
        {
          ContiguousPieceV2 = v13;
        }
        v13 -= ContiguousPieceV2;
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
        v22 = v16 + v20;
        if ( v43 < v22 - 1
          || !a3 && !*(_BYTE *)(a1 + 445) && ((v27 = (unsigned int)(v21 - 1), (v27 & v16) != 0) || (v27 & v22) != 0) )
        {
          v23 = ((v6 & 0xFFF) + v20 + 4095LL) >> 12;
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
            v18 = v24;
          }
        }
        v6 += v20;
        v16 += v20;
      }
      while ( v13 );
      v3 = v40;
      v8 = v45;
      v9 = v39;
      goto LABEL_33;
    }
    if ( a3 )
    {
LABEL_19:
      *(_QWORD *)(v9 + 56) = v9;
      goto LABEL_20;
    }
    v28 = v13;
    *(_QWORD *)(v9 + 56) = v9;
    v29 = v6;
    while ( 1 )
    {
      ContiguousPiece = HalpDmaNextContiguousPiece(a1, v7, v9, v29, 0, v28);
      v41 = v29 & 0xFFF;
      v44 = ContiguousPiece;
      v42 = ContiguousPiece;
      if ( *(_QWORD *)(a1 + 144) < ContiguousPiece
                                 + v41
                                 + (*(_QWORD *)(v7 + 8LL * (unsigned int)((v29 - *(_QWORD *)(v7 + 32)) >> 12) + 48) << 12)
                                 - 1 )
        goto LABEL_54;
      if ( *(_BYTE *)(a1 + 445) )
        goto LABEL_59;
      v34 = (unsigned int)HalpDmaGetAdapterCacheAlignment(a1) - 1;
      if ( (v34 & v36) != 0 || (v35 & v34) != 0 )
      {
LABEL_54:
        LODWORD(v38) = ContiguousPiece;
        HalpDmaSyncMapBuffers(a1, v7, v29, *(_QWORD *)(v9 + 56), v38, 0, 0, 0);
        v31 = *(_QWORD *)(v9 + 56);
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
        *(_QWORD *)(v9 + 56) = v31;
      }
      else
      {
        HalpDmaFlushBuffer(v34, v7, v29, ContiguousPiece, 0, 0);
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
