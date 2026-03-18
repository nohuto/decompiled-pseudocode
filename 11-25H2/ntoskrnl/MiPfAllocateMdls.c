/*
 * XREFs of MiPfAllocateMdls @ 0x1409CA7D8
 * Callers:
 *     MiPfPrepareReadList @ 0x1409C90BC (MiPfPrepareReadList.c)
 *     MiPfPrepareSequentialReadList @ 0x1409C9C58 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x14023B4B0 (MiFreeInPageSupportBlock.c)
 *     MiEndingOffsetWithLock @ 0x1402FD558 (MiEndingOffsetWithLock.c)
 *     MiGetSharedProtos @ 0x140322970 (MiGetSharedProtos.c)
 *     MiStartingOffset @ 0x1403236B0 (MiStartingOffset.c)
 *     MiGetInPageSupportBlock @ 0x140387260 (MiGetInPageSupportBlock.c)
 *     MmCreateMdl @ 0x14045B040 (MmCreateMdl.c)
 *     MiSetInPagePriority @ 0x14046C6A8 (MiSetInPagePriority.c)
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
  PSLIST_ENTRY *v23; // rcx
  unsigned __int64 v25; // rdx
  ULONG v26; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v28; // rcx
  unsigned int v29; // [rsp+20h] [rbp-98h]
  _QWORD *v30; // [rsp+28h] [rbp-90h]
  unsigned int v31; // [rsp+30h] [rbp-88h]
  unsigned int v32; // [rsp+34h] [rbp-84h]
  __int64 *v33; // [rsp+38h] [rbp-80h]
  unsigned __int64 *v34; // [rsp+40h] [rbp-78h]
  PMDL Mdl; // [rsp+48h] [rbp-70h]
  __int64 v36; // [rsp+50h] [rbp-68h]
  PSLIST_ENTRY v37; // [rsp+58h] [rbp-60h]
  unsigned __int64 v38; // [rsp+60h] [rbp-58h]
  unsigned __int64 v39; // [rsp+68h] [rbp-50h]

  v4 = 0;
  v5 = *(_DWORD *)(a1 + 184);
  v6 = *(unsigned __int64 **)(a1 + 200);
  v7 = a4;
  v31 = *(_DWORD *)(a1 + 188);
  v8 = 0LL;
  v9 = 0LL;
  v10 = v6 + 1;
  v32 = v5;
  v36 = *(_QWORD *)(a1 + 8);
  v11 = a1 + 8 * (*(unsigned int *)(a1 + 196) + 30LL);
  v29 = 0;
  v12 = v36 + 128;
  v39 = v11;
  v33 = 0LL;
  v13 = 0LL;
  v34 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
    v12 = *(_QWORD *)(a1 + 16);
  while ( 1 )
  {
    v30 = v10;
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
        v30 = v10 - 1;
        goto LABEL_12;
      }
      if ( v14 < 4 )
        goto LABEL_9;
    }
    if ( (v14 & 1) != 0 )
    {
      if ( v14 >= 4 )
      {
        v25 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v8 )
        {
          if ( (__int64)(v25 - v13) >> 3 > dword_140E37054 )
            goto LABEL_11;
        }
        else
        {
          v9 = v6;
          v34 = v6;
        }
        v8 = v6;
        v13 = v25;
      }
      if ( !v8 )
        goto LABEL_9;
    }
    else
    {
      v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v8 )
      {
        if ( (__int64)(v15 - v13) >> 3 > dword_140E37054 )
          goto LABEL_11;
      }
      else
      {
        v9 = v6;
        v34 = v6;
      }
      v8 = v6;
      v13 = v15;
      if ( v10 != (_QWORD *)v11 )
        goto LABEL_9;
    }
LABEL_12:
    v38 = *v8 & 0xFFFFFFFFFFFFFFFCuLL;
    v16 = *v9 & 0xFFFFFFFFFFFFFFFCuLL;
    v17 = ((__int64)(v38 - v16) >> 3) + 1;
    v18 = MiGetInPageSupportBlock(0, v7);
    v37 = v18;
    v19 = v18;
    if ( !v18 )
      return (unsigned int)-1073741670;
    *((_QWORD *)&v18[15].Next + 1) = 0LL;
    MiSetInPagePriority((__int64)v18, v31, v5);
    v20 = v17 << 12;
    if ( v17 <= 0x10 )
    {
      Mdl = (PMDL)&v19[17];
      *((_WORD *)&v19[17].Next + 4) = 8 * (((__int64)(v38 - v16) >> 3) + 7);
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
      if ( (*(_DWORD *)(v12 + 32) & 0x20000) != 0 && (*(_DWORD *)(v36 + 56) & 0x8000000) != 0 )
      {
        if ( *(_QWORD *)(v12 + 24) )
        {
          SharedProtos = MiGetSharedProtos(v36, a2, v12);
          if ( SharedProtos )
          {
            v28 = *(_QWORD *)(SharedProtos + 72);
            if ( v16 >= v28 && v16 < v28 + 8LL * *(unsigned int *)(v12 + 44) )
              break;
          }
        }
      }
      if ( *(_QWORD *)(a1 + 16) )
      {
        if ( !v33 )
        {
          v33 = *(__int64 **)(a1 + 24);
          v12 = v33[3];
          goto LABEL_47;
        }
        if ( v29 >= *((_DWORD *)v33 + 4) )
        {
          v33 = (__int64 *)*v33;
          v12 = v33[3];
LABEL_47:
          v29 = 1;
        }
        else
        {
          v12 = v33[v29++ + 3];
        }
      }
      else
      {
        v12 = *(_QWORD *)(v12 + 16);
      }
    }
    v22 = MiStartingOffset(v12, v16, a2);
    v37[6].Next = (_SLIST_ENTRY *)v22;
    if ( (*(_BYTE *)v8 & 1) != 0 && (*(_DWORD *)(v36 + 56) & 0x20) != 0 )
    {
      v26 = MiEndingOffsetWithLock((_QWORD *)v12) - v22;
      if ( v26 <= Mdl->ByteCount )
        Mdl->ByteCount = (v26 + 511) & 0xFFFFFE00;
    }
    v9 = v34;
    v37[15].Next = (_SLIST_ENTRY *)v34;
    *((_QWORD *)&v37[12].Next + 1) = v8;
    v37[13].Next = (_SLIST_ENTRY *)v12;
    v37[14].Next = a3;
    if ( a3 )
      LODWORD(v37[12].Next) |= 0x20000u;
    v37[16].Next = (_SLIST_ENTRY *)Mdl;
    v23 = *(PSLIST_ENTRY **)(a1 + 232);
    if ( *v23 != (PSLIST_ENTRY)(a1 + 224) )
      __fastfail(3u);
    v10 = v30;
    v8 = 0LL;
    v11 = v39;
    v5 = v32;
    v37->Next = (_SLIST_ENTRY *)(a1 + 224);
    *((_QWORD *)&v37->Next + 1) = v23;
    *v23 = v37;
    *(_QWORD *)(a1 + 232) = v37;
    ++*(_DWORD *)(a1 + 212);
    v13 = v38;
    v7 = a4;
LABEL_9:
    ++v6;
    ++v10;
  }
}
