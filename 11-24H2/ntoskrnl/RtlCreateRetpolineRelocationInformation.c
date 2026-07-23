/*
 * XREFs of RtlCreateRetpolineRelocationInformation @ 0x14043B354
 * Callers:
 *     MiCreateRetpolineRelocationInformation @ 0x14093C258 (MiCreateRetpolineRelocationInformation.c)
 * Callees:
 *     RtlpCopyRetpolineRelocationBlockEntryArray @ 0x14043B284 (RtlpCopyRetpolineRelocationBlockEntryArray.c)
 *     RtlSizeOfRetpolineRelocationEntry @ 0x14043B6F0 (RtlSizeOfRetpolineRelocationEntry.c)
 *     RtlSizeOfRetpolineIndirectFixup @ 0x14043B724 (RtlSizeOfRetpolineIndirectFixup.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlCreateRetpolineRelocationInformation(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7,
        void *a8,
        unsigned int a9)
{
  unsigned __int64 v11; // r10
  size_t v13; // r8
  size_t v14; // rsi
  unsigned int v15; // r8d
  unsigned __int8 v16; // cl
  char *v17; // r14
  _DWORD *v18; // r12
  unsigned __int64 v19; // r9
  _DWORD *v20; // r13
  unsigned __int64 v21; // r10
  _DWORD *v22; // rdx
  unsigned __int64 v23; // r11
  unsigned int v24; // r15d
  unsigned int v25; // esi
  unsigned int v26; // ebx
  char *v27; // rdi
  unsigned int v28; // eax
  char *v29; // rdi
  char *v30; // rax
  char *v31; // rdx
  char *v32; // r8
  __int16 v33; // r10
  char *v34; // r9
  __int64 v36; // rax
  int v37; // eax
  char *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-4Ch]
  _DWORD *v43; // [rsp+38h] [rbp-48h]
  _DWORD *v44; // [rsp+40h] [rbp-40h]
  _DWORD *v45; // [rsp+48h] [rbp-38h]
  _DWORD *v46; // [rsp+50h] [rbp-30h]
  unsigned __int64 v47; // [rsp+58h] [rbp-28h]
  unsigned __int64 v48; // [rsp+60h] [rbp-20h]
  unsigned __int64 v49; // [rsp+68h] [rbp-18h]
  char *v50; // [rsp+70h] [rbp-10h]
  __int64 v52; // [rsp+C8h] [rbp+48h] BYREF

  v46 = 0LL;
  v11 = (unsigned __int64)a1 >> 12;
  v13 = 4 * (a2 + 3 * v11);
  if ( (unsigned int)a7 < v13 )
    return 3221225507LL;
  v14 = 8 * v11;
  if ( a9 < 8 * v11 )
    return 3221225507LL;
  memset_0(a6, 0, v13);
  memset_0(a8, 0, v14);
  v15 = 0;
  v16 = 0;
  v17 = 0LL;
  v42 = 0;
  if ( a3 )
  {
    v18 = (_DWORD *)(a3 + 12);
    v19 = a3 + 12 + *(unsigned int *)(a3 + 8);
  }
  else
  {
    v18 = 0LL;
    v19 = 0LL;
  }
  v47 = v19;
  if ( a4 )
  {
    v20 = (_DWORD *)(a4 + 12);
    v21 = a4 + 12 + *(unsigned int *)(a4 + 8);
  }
  else
  {
    v20 = 0LL;
    v21 = 0LL;
  }
  v48 = v21;
  if ( a5 )
  {
    v22 = (_DWORD *)(a5 + 12);
    v23 = a5 + 12 + *(unsigned int *)(a5 + 8);
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
  }
  v49 = v23;
  v43 = v22;
  if ( a1 )
  {
    do
    {
      if ( (unsigned __int64)v18 < v19 && *v18 == v15 )
      {
        v36 = (unsigned int)v18[1];
        v44 = v18;
        v18 = (_DWORD *)((char *)v18 + v36);
        v24 = v36 - 8;
      }
      else
      {
        v44 = 0LL;
        v24 = 0;
      }
      LODWORD(a7) = v24;
      if ( (unsigned __int64)v20 < v21 && *v20 == v15 )
      {
        v39 = (unsigned int)v20[1];
        v45 = v20;
        v20 = (_DWORD *)((char *)v20 + v39);
        v25 = v39 - 8;
      }
      else
      {
        v45 = 0LL;
        v25 = 0;
      }
      LODWORD(v52) = v25;
      if ( (unsigned __int64)v22 < v23 && *v22 == v15 )
      {
        v40 = (unsigned int)v22[1];
        v46 = v22;
        v22 = (_DWORD *)((char *)v22 + v40);
        v43 = v22;
        v26 = v40 - 8;
      }
      else
      {
        v26 = 0;
      }
      v41 = v26;
      if ( v16 || v24 || v25 || v26 )
      {
        v27 = a6;
        v50 = a6;
        *((_WORD *)a6 + 3) = v16;
        if ( v16 )
        {
          v28 = RtlSizeOfRetpolineRelocationEntry(v16);
          memmove(v27 + 8, v17, v28);
        }
        v17 = v27 + 12;
        v29 = v27 + 12;
        if ( v24 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v17, 3u, (_WORD *)v44 + 4, v24, &a7);
          LOWORD(v24) = a7;
          v29 += (unsigned int)a7;
        }
        if ( v25 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v29, 4u, (_WORD *)v45 + 4, v25, &v52);
          LOWORD(v25) = v52;
          v29 += (unsigned int)v52;
        }
        if ( v26 )
        {
          RtlpCopyRetpolineRelocationBlockEntryArray(v29, 5u, (_WORD *)v46 + 4, v26, &v41);
          LOWORD(v26) = v41;
          v29 += v41;
        }
        v30 = a6;
        a6 = v29;
        v31 = &v17[(unsigned __int16)v24];
        v32 = &v31[(unsigned __int16)v25];
        v33 = 4095;
        *((_WORD *)v30 + 1) = v25;
        *((_WORD *)v30 + 2) = v26;
        v34 = &v32[(unsigned __int16)v26];
        *(_WORD *)v30 = v24;
        while ( v17 < v31 )
        {
          if ( (*(_DWORD *)v17 & 0xFFFu) + 12 > 0x1000 )
          {
            v16 = 3;
            goto LABEL_32;
          }
          v17 += 4;
        }
        while ( v31 < v32 )
        {
          v37 = RtlSizeOfRetpolineIndirectFixup(v31);
          if ( (unsigned int)(unsigned __int16)(v33 & *(_WORD *)v38) + v37 > 0x1000 )
          {
            v16 = 4;
            v17 = v38;
            goto LABEL_32;
          }
          v31 = v38 + 2;
        }
        while ( 1 )
        {
          if ( v32 >= v34 )
          {
            v16 = 0;
            v17 = 0LL;
            goto LABEL_32;
          }
          if ( (unsigned int)(unsigned __int16)(v33 & *(_WORD *)v32) + 6 > 0x1000 )
            break;
          v32 += 2;
        }
        v16 = 5;
        v17 = v32;
LABEL_32:
        v15 = v42;
        v21 = v48;
        v23 = v49;
        *((_QWORD *)a8 + ((unsigned __int64)v42 >> 12)) = v50;
        v22 = v43;
        v19 = v47;
      }
      v15 += 4096;
      v42 = v15;
    }
    while ( v15 < a1 );
  }
  return 0LL;
}
