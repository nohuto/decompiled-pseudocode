/*
 * XREFs of RtlDecompressBufferLz4 @ 0x18014EA00
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlDecompressBufferLz4(char *a1, int a2, char *a3, int a4, int a5, int *a6)
{
  int v6; // r14d
  int v7; // r15d
  unsigned __int8 *v8; // rbp
  char *v9; // rsi
  unsigned __int8 *v10; // r13
  char *v11; // rdi
  char *v12; // r12
  unsigned __int64 v13; // rbx
  char *v14; // r11
  unsigned int v15; // r10d
  size_t v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rdx
  unsigned __int64 v20; // r9
  signed __int64 v21; // rdi
  __int128 v22; // xmm1
  unsigned __int8 *v23; // rsi
  char *v24; // rdi
  __int128 v25; // xmm0
  unsigned __int64 v26; // rdx
  unsigned __int8 *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  unsigned __int64 v31; // rcx
  unsigned __int8 *v32; // rbp
  __int64 v33; // rcx
  unsigned __int8 *v34; // rcx
  unsigned __int8 *v35; // rcx
  unsigned __int8 *v36; // rdi
  signed __int64 v37; // rcx
  int v38; // eax
  unsigned __int64 v39; // rax
  unsigned __int8 *v40; // rdi
  unsigned __int64 v41; // rcx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  unsigned __int8 *v44; // rsi
  __int64 v45; // rcx
  __int16 v46; // ax
  __int64 v47; // rax
  __int64 v48; // rcx
  char *v50; // rbx
  unsigned __int8 *v51; // rcx
  signed __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 v54; // rax
  unsigned __int64 v55; // r8
  unsigned __int8 *v56; // rbx
  char *v57; // rbx
  __int64 v58; // rax
  char *v59; // rdi
  char *v60; // rdx
  _QWORD *v61; // rcx
  signed __int64 v62; // rax
  char *v63; // rdi
  __int64 v64; // rbx
  unsigned __int64 v66; // [rsp+70h] [rbp+18h] BYREF

  v6 = 0;
  v7 = (int)a3;
  v8 = (unsigned __int8 *)a1;
  if ( !a3 || a2 < 0 )
    return 3221225507LL;
  v9 = a3;
  v10 = (unsigned __int8 *)&a3[a4];
  v11 = a1;
  v12 = &a1[a2];
  v13 = (unsigned __int64)(v10 - 16);
  v14 = v12 - 32;
  if ( !a2 )
  {
    if ( a4 != 1 || *a3 )
    {
      v6 = -1;
      goto LABEL_69;
    }
    goto LABEL_70;
  }
  if ( !a4 )
    return 3221225507LL;
  if ( (unsigned __int64)a2 < 0x40 )
    goto LABEL_55;
  while ( 1 )
  {
    v15 = (unsigned __int8)*v9++;
    v16 = (unsigned __int64)v15 >> 4;
    if ( v16 == 15 )
    {
      v17 = 0LL;
      if ( v9 < (char *)v10 - 15 )
      {
        while ( 1 )
        {
          v18 = (unsigned __int8)*v9++;
          v17 += v18;
          if ( v9 > (char *)v10 - 15 )
            break;
          if ( v18 != 255 )
          {
            if ( v17 == -1 )
              goto LABEL_68;
            v16 = v17 + 15;
            v19 = &v11[v16];
            if ( &v11[v16] < v11 )
              goto LABEL_68;
            v20 = (unsigned __int64)&v9[v16];
            if ( &v9[v16] < v9 )
              goto LABEL_68;
            if ( v19 <= v14 && v20 <= (unsigned __int64)(v10 - 32) )
            {
              v21 = v11 - v9;
              do
              {
                *(_OWORD *)&v9[v21] = *(_OWORD *)v9;
                v22 = *((_OWORD *)v9 + 1);
                v9 += 32;
                *(_OWORD *)&v9[v21 - 16] = v22;
              }
              while ( &v9[v21] < v19 );
              v23 = (unsigned __int8 *)v20;
              v24 = v19;
              goto LABEL_23;
            }
            goto LABEL_71;
          }
        }
      }
      goto LABEL_68;
    }
    if ( v9 > (char *)v10 - 17 )
      break;
    v25 = *(_OWORD *)v9;
    v23 = (unsigned __int8 *)&v9[v16];
    *(_OWORD *)v11 = v25;
    v24 = &v11[v16];
LABEL_23:
    v26 = *(unsigned __int16 *)v23;
    v27 = (unsigned __int8 *)&v24[-v26];
    v9 = (char *)(v23 + 2);
    v28 = v15 & 0xF;
    if ( v28 == 15 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        v30 = (unsigned __int8)*v9++;
        v29 += v30;
        if ( v9 > (char *)v10 - 4 )
          goto LABEL_68;
        if ( v30 != 255 )
        {
          if ( v29 == -1 )
            goto LABEL_68;
          v31 = v29 + 19;
          if ( &v24[v31] < v24 )
            goto LABEL_68;
          if ( &v24[v31] >= v12 - 64 )
            goto LABEL_83;
          if ( v27 < v8 )
            goto LABEL_68;
          goto LABEL_31;
        }
      }
    }
    v31 = v28 + 4;
    if ( &v24[v31] >= v12 - 64 )
      goto LABEL_83;
    if ( v27 < v8 )
      goto LABEL_68;
    if ( v26 < 8 )
    {
LABEL_31:
      v32 = (unsigned __int8 *)&v24[v31];
      if ( v26 >= 0x10 )
      {
        do
        {
          *(_OWORD *)&v27[v26] = *(_OWORD *)v27;
          v42 = *((_OWORD *)v27 + 1);
          v27 += 32;
          *(_OWORD *)&v27[v26 - 16] = v42;
        }
        while ( &v27[v26] < v32 );
        goto LABEL_54;
      }
      if ( v26 == 1 )
      {
        memset_thunk_772440563353939046(&v66, *v27, 8uLL);
        v14 = v12 - 32;
      }
      else
      {
        if ( v26 == 2 )
        {
          LOWORD(v66) = *(_WORD *)v27;
          WORD1(v66) = v66;
          v38 = v66;
        }
        else
        {
          if ( v26 != 4 )
          {
            if ( v26 >= 8 )
            {
              v35 = v27 + 8;
              *(_QWORD *)v24 = *(_QWORD *)v27;
            }
            else
            {
              _mm_lfence();
              v33 = (unsigned int)dword_180198948[v26];
              *v24 = *v27;
              v34 = &v27[v33];
              v24[1] = v27[1];
              v24[2] = v27[2];
              v24[3] = v27[3];
              *((_DWORD *)v24 + 1) = *(_DWORD *)v34;
              v35 = &v34[-dword_180198968[v26]];
            }
            v36 = (unsigned __int8 *)(v24 + 8);
            v37 = v35 - v36;
            do
            {
              *(_QWORD *)v36 = *(_QWORD *)&v36[v37];
              v36 += 8;
            }
            while ( v36 < v32 );
            goto LABEL_54;
          }
          v38 = *(_DWORD *)v27;
          LODWORD(v66) = *(_DWORD *)v27;
        }
        HIDWORD(v66) = v38;
      }
      v39 = v66;
      *(_QWORD *)v24 = v66;
      v40 = (unsigned __int8 *)(v24 + 8);
      v41 = (unsigned __int64)(v32 - v40 + 7) >> 3;
      if ( v40 > v32 )
        v41 = 0LL;
      if ( v41 )
        memset64(v40, v39, v41);
LABEL_54:
      v11 = (char *)v32;
      v8 = (unsigned __int8 *)a1;
    }
    else
    {
      *(_QWORD *)v24 = *(_QWORD *)v27;
      *((_QWORD *)v24 + 1) = *((_QWORD *)v27 + 1);
      *((_WORD *)v24 + 8) = *((_WORD *)v27 + 8);
      v11 = &v24[v31];
    }
  }
LABEL_71:
  v50 = &v11[v16];
  if ( &v11[v16] <= v12 - 12 )
  {
    v51 = (unsigned __int8 *)&v9[v16];
    if ( &v9[v16] <= (char *)v10 - 8 )
    {
      v52 = v9 - v11;
      do
      {
        *(_QWORD *)v11 = *(_QWORD *)&v11[v52];
        v11 += 8;
      }
      while ( v11 < v50 );
      v26 = *(unsigned __int16 *)v51;
      v9 = (char *)(v51 + 2);
      v24 = v50;
      v27 = (unsigned __int8 *)&v50[-v26];
      v45 = v15 & 0xF;
LABEL_76:
      if ( v45 == 15 )
      {
LABEL_77:
        v53 = 0LL;
        while ( 1 )
        {
          v54 = (unsigned __int8)*v9++;
          v53 += v54;
          if ( v9 > (char *)v10 - 4 )
            goto LABEL_68;
          if ( v54 != 255 )
          {
            if ( v53 == -1 )
              goto LABEL_68;
            v45 = v53 + 15;
            if ( &v24[v45] < v24 )
              goto LABEL_68;
            break;
          }
        }
      }
      v31 = v45 + 4;
LABEL_83:
      if ( v27 >= v8 )
      {
        v55 = (unsigned __int64)&v24[v31];
        if ( v26 >= 8 )
        {
          v58 = *(_QWORD *)v27;
          v57 = (char *)(v27 + 8);
          *(_QWORD *)v24 = v58;
        }
        else
        {
          *v24 = *v27;
          v24[1] = v27[1];
          v24[2] = v27[2];
          v24[3] = v27[3];
          v56 = &v27[dword_180198948[v26]];
          *((_DWORD *)v24 + 1) = *(_DWORD *)v56;
          v57 = (char *)&v56[-dword_180198968[v26]];
        }
        v59 = v24 + 8;
        if ( v55 <= (unsigned __int64)(v12 - 12) )
        {
          *(_QWORD *)v59 = *(_QWORD *)v57;
          if ( v31 > 0x10 )
          {
            v63 = v59 + 8;
            v64 = v57 - v63;
            do
            {
              *(_QWORD *)v63 = *(_QWORD *)&v63[v64 + 8];
              v63 += 8;
            }
            while ( (unsigned __int64)v63 < v55 );
          }
LABEL_99:
          v11 = (char *)v55;
          v13 = (unsigned __int64)(v10 - 16);
LABEL_55:
          while ( 1 )
          {
            v15 = (unsigned __int8)*v9++;
            v16 = (unsigned __int64)v15 >> 4;
            if ( v16 == 15 )
              break;
            if ( v11 > v14 || (unsigned __int64)v9 >= v13 )
              goto LABEL_71;
            v43 = *(_OWORD *)v9;
            v44 = (unsigned __int8 *)&v9[v16];
            v45 = v15 & 0xF;
            *(_OWORD *)v11 = v43;
            v24 = &v11[v16];
            v26 = *(unsigned __int16 *)v44;
            v27 = (unsigned __int8 *)&v24[-v26];
            v9 = (char *)(v44 + 2);
            if ( v45 == 15 )
              goto LABEL_77;
            if ( v26 < 8 || v27 < v8 )
              goto LABEL_76;
            *(_QWORD *)v24 = *(_QWORD *)v27;
            *((_QWORD *)v24 + 1) = *((_QWORD *)v27 + 1);
            v46 = *((_WORD *)v27 + 8);
            v13 = (unsigned __int64)(v10 - 16);
            *((_WORD *)v24 + 8) = v46;
            v11 = &v24[v45 + 4];
          }
          v47 = 0LL;
          if ( v9 < (char *)v10 - 15 )
          {
            while ( 1 )
            {
              v48 = (unsigned __int8)*v9++;
              v47 += v48;
              if ( v9 > (char *)v10 - 15 )
                break;
              if ( v48 != 255 )
              {
                if ( v47 != -1 )
                {
                  v16 = v47 + 15;
                  if ( &v11[v47 + 15] >= v11 && &v9[v16] >= v9 )
                    goto LABEL_71;
                }
                goto LABEL_68;
              }
            }
          }
          goto LABEL_68;
        }
        v60 = v12 - 7;
        if ( v55 <= (unsigned __int64)(v12 - 5) )
        {
          if ( v59 < v60 )
          {
            v61 = v59;
            do
            {
              *v61 = *(_QWORD *)((char *)v61 + v57 - v59);
              ++v61;
            }
            while ( v61 < (_QWORD *)v60 );
            v62 = v60 - v59;
            v59 = v12 - 7;
            v57 += v62;
          }
          while ( (unsigned __int64)v59 < v55 )
            *v59++ = *v57++;
          goto LABEL_99;
        }
      }
LABEL_68:
      v6 = v7 - (_DWORD)v9 - 1;
      goto LABEL_69;
    }
  }
  if ( &v9[v16] != (char *)v10 || v50 > v12 )
    goto LABEL_68;
  memmove(v11, v9, v16);
  v6 = (_DWORD)v50 - (_DWORD)v8;
LABEL_69:
  if ( v6 >= 0 )
  {
LABEL_70:
    *a6 = v6;
    return 0LL;
  }
  return 3221225507LL;
}
