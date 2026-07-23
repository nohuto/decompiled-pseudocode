/*
 * XREFs of MiPfAllocateMdls @ 0x14093A89C
 * Callers:
 *     MiPfPrepareReadList @ 0x14093919C (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x140939D28 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiStartingOffset @ 0x14020C7B0 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x1402724D4 (MiEndingOffsetWithLock.c)
 *     MiGetSharedProtos @ 0x14030CC0C (MiGetSharedProtos.c)
 *     MiGetInPageSupportBlock @ 0x1403DC710 (MiGetInPageSupportBlock.c)
 *     MiFreeInPageSupportBlock @ 0x140427430 (MiFreeInPageSupportBlock.c)
 *     MmCreateMdl @ 0x14044FFA0 (MmCreateMdl.c)
 *     MiSetInPagePriority @ 0x14046393C (MiSetInPagePriority.c)
 */

__int64 __fastcall MiPfAllocateMdls(__int64 a1, unsigned int a2, _SLIST_ENTRY *a3, volatile signed __int64 *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // r15d
  unsigned __int64 *v6; // rsi
  volatile signed __int64 *v7; // rdi
  unsigned __int64 *v8; // r13
  unsigned __int64 *v9; // r9
  _QWORD *v10; // r8
  unsigned __int64 v11; // r11
  __int64 v12; // r14
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbp
  PSLIST_ENTRY v18; // rax
  PSLIST_ENTRY v19; // rdi
  SIZE_T v20; // r8
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  PSLIST_ENTRY *v26; // rcx
  unsigned __int64 v28; // rdx
  ULONG v29; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v31; // rcx
  unsigned int v32; // [rsp+20h] [rbp-98h]
  _QWORD *v33; // [rsp+28h] [rbp-90h]
  unsigned int v34; // [rsp+30h] [rbp-88h]
  unsigned int v35; // [rsp+34h] [rbp-84h]
  __int64 *v36; // [rsp+38h] [rbp-80h]
  unsigned __int64 *v37; // [rsp+40h] [rbp-78h]
  PMDL Mdl; // [rsp+48h] [rbp-70h]
  __int64 v39; // [rsp+50h] [rbp-68h]
  PSLIST_ENTRY v40; // [rsp+58h] [rbp-60h]
  unsigned __int64 v41; // [rsp+60h] [rbp-58h]
  unsigned __int64 v42; // [rsp+68h] [rbp-50h]

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 184);
  v6 = *(unsigned __int64 **)(a1 + 200);
  v7 = a4;
  v34 = *(_DWORD *)(a1 + 188);
  v8 = 0LL;
  v9 = 0LL;
  v10 = v6 + 1;
  v35 = v5;
  v39 = *(_QWORD *)(a1 + 8);
  v11 = a1 + 8 * (*(unsigned int *)(a1 + 196) + 30LL);
  v32 = 0;
  v12 = v39 + 128;
  v42 = v11;
  v36 = 0LL;
  v13 = 0LL;
  v37 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
    v12 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v33 = v10;
    if ( (unsigned __int64)v6 >= v11 )
      return v4;
    v14 = *v6;
    if ( (*v6 & 2) != 0 )
    {
      if ( v8 )
      {
        if ( v14 < 4 )
          goto LABEL_12;
LABEL_11:
        --v6;
        v33 = v10 - 1;
        goto LABEL_12;
      }
      if ( v14 < 4 )
        goto LABEL_9;
    }
    if ( (v14 & 1) != 0 )
    {
      if ( v14 >= 4 )
      {
        v28 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v8 )
        {
          if ( (__int64)(v28 - v13) >> 3 > dword_140E373D4 )
            goto LABEL_11;
        }
        else
        {
          v9 = v6;
          v37 = v6;
        }
        v8 = v6;
        v13 = v28;
      }
      if ( !v8 )
        goto LABEL_9;
    }
    else
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 )
      {
        if ( (__int64)(v15 - v13) >> 3 > dword_140E373D4 )
          goto LABEL_11;
      }
      else
      {
        v9 = v6;
        v37 = v6;
      }
      v8 = v6;
      v13 = v15;
      if ( v10 != (_QWORD *)v11 )
        goto LABEL_9;
    }
LABEL_12:
    v41 = *v8 & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = *v9 & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = ((__int64)(v41 - v16) >> 3) + 1;
    v18 = MiGetInPageSupportBlock(0, v7);
    v40 = v18;
    v19 = v18;
    if ( !v18 )
      return (unsigned int)-1073741670;
    *((_QWORD *)&v18[15].Next + 1) = 0LL;
    MiSetInPagePriority((__int64)v18, v34, v5);
    v20 = v17 << 12;
    if ( v17 <= 0x10 )
    {
      Mdl = (PMDL)&v19[17];
      *((_WORD *)&v19[17].Next + 4) = 8 * (((__int64)(v41 - v16) >> 3) + 7);
      v19[17].Next = 0LL;
      *((_WORD *)&v19[17].Next + 5) = 0;
      v19[19].Next = 0LL;
      *((_QWORD *)&v19[19].Next + 1) = (unsigned int)v20;
      goto LABEL_15;
    }
    Mdl = MmCreateMdl(0LL, 0LL, v20);
    if ( !Mdl )
    {
      MiFreeInPageSupportBlock(v19);
      return (unsigned int)-1073741670;
    }
LABEL_15:
    while ( 1 )
    {
      v21 = *(_QWORD *)(v12 + 8);
      if ( v16 >= v21 && v16 < v21 + 8LL * *(unsigned int *)(v12 + 44) )
        break;
      if ( (*(_DWORD *)(v12 + 32) & 0x20000) != 0 && (*(_DWORD *)(v39 + 56) & 0x8000000) != 0 )
      {
        if ( *(_QWORD *)(v12 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v39, a2, v12);
          if ( SharedProtos )
          {
            v31 = *(_QWORD *)(SharedProtos + 72);
            if ( v16 >= v31 && v16 < v31 + 8LL * *(unsigned int *)(v12 + 44) )
              break;
          }
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !v36 )
        {
          v36 = *(__int64 **)(a1 + 24);
          v12 = v36[3];
          goto LABEL_46;
        }
        if ( v32 >= *((_DWORD *)v36 + 4) )
        {
          v36 = (__int64 *)*v36;
          v12 = v36[3];
LABEL_46:
          v32 = 1;
        }
        else
        {
          v12 = v36[v32++ + 3];
        }
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    v22 = MiStartingOffset((__int64 *)v12, v16, a2);
    v40[6].Next = (_SLIST_ENTRY *)v22;
    if ( (*(_BYTE *)v8 & 1) != 0 && (*(_DWORD *)(v39 + 56) & 0x20) != 0 )
    {
      v29 = MiEndingOffsetWithLock((_QWORD *)v12, v23, v24, v25) - v22;
      if ( v29 <= Mdl->ByteCount )
        Mdl->ByteCount = (v29 + 511) & 0xFFFFFE00;
    }
    v9 = v37;
    v40[15].Next = (_SLIST_ENTRY *)v37;
    *((_QWORD *)&v40[12].Next + 1) = v8;
    v40[13].Next = (_SLIST_ENTRY *)v12;
    v40[14].Next = a3;
    if ( a3 )
      LODWORD(v40[12].Next) |= 0x20000u;
    v40[16].Next = (_SLIST_ENTRY *)Mdl;
    v26 = *(PSLIST_ENTRY **)(a1 + 232);
    if ( *v26 != (PSLIST_ENTRY)(a1 + 224) )
      __fastfail(3u);
    v10 = v33;
    v8 = 0LL;
    v11 = v42;
    v5 = v35;
    v40->Next = (_SLIST_ENTRY *)(a1 + 224);
    *((_QWORD *)&v40->Next + 1) = v26;
    *v26 = v40;
    *(_QWORD *)(a1 + 232) = v40;
    ++*(_DWORD *)(a1 + 212);
    v13 = v41;
    v7 = a4;
LABEL_9:
    ++v6;
    ++v10;
  }
}
