/*
 * XREFs of RtlDecompressBufferLz4 @ 0x1403BB420
 * Callers:
 *     SmStoreDecompressBuffer @ 0x1402F9A18 (SmStoreDecompressBuffer.c)
 *     RtlDecompressBufferEx @ 0x1403BB360 (RtlDecompressBufferEx.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall RtlDecompressBufferLz4(char *a1, int a2, char *a3, int a4, int a5, int *a6)
{
  unsigned __int64 v6; // rax
  int v7; // ebx
  char *v8; // r14
  char *v9; // rbp
  unsigned __int8 *v10; // rsi
  unsigned __int64 v11; // r12
  char *v12; // rdx
  int v13; // r15d
  unsigned int v15; // r10d
  size_t v16; // r8
  __int128 v17; // xmm0
  unsigned __int8 *v18; // rdx
  char *v19; // rcx
  unsigned __int64 v20; // r8
  char *v21; // rdi
  __int64 v22; // r9
  unsigned __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // rax
  char *v26; // r10
  int v27; // eax
  char *v28; // rdi
  unsigned __int64 v29; // rcx
  __int128 v30; // xmm0
  __int64 v31; // r8
  __int64 v32; // rax
  char *v33; // rdi
  unsigned __int64 v34; // r11
  signed __int64 v35; // rcx
  __int128 v36; // xmm0
  unsigned __int8 *v37; // r9
  signed __int64 v38; // rdx
  __int64 v39; // r9
  unsigned __int64 v40; // r10
  char *v41; // rdi
  char *v42; // rdi
  char *v43; // rcx
  unsigned __int64 v44; // r9
  _QWORD *v45; // r8
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rdi
  char *v49; // rdi
  __int64 v50; // r9
  char *v51; // r9
  char *v52; // r9
  char *v53; // rcx
  __int64 v54; // r9
  __int64 v55; // rax
  char *v56; // rcx
  __int64 v57; // rdi
  __int128 v58; // xmm0
  unsigned __int8 *v59; // rdx
  __int64 v60; // r9
  __int64 v61; // rax
  char v62; // al
  unsigned __int64 v63; // [rsp+60h] [rbp+18h]

  v6 = a2;
  v7 = (int)a3;
  v8 = a1;
  if ( !a3 || a2 < 0 )
    return 3221225507LL;
  v9 = &a1[a2];
  v10 = (unsigned __int8 *)&a3[a4];
  v11 = (unsigned __int64)(v9 - 32);
  v12 = a3;
  if ( !(_DWORD)v6 )
  {
    if ( a4 != 1 || *a3 )
    {
      v13 = -1;
      goto LABEL_10;
    }
    v13 = 0;
LABEL_11:
    *a6 = v13;
    return 0LL;
  }
  if ( !a4 )
    return 3221225507LL;
  if ( v6 < 0x40 )
    goto LABEL_66;
  while ( 1 )
  {
    v15 = (unsigned __int8)*v12++;
    v16 = (unsigned __int64)v15 >> 4;
    if ( v16 == 15 )
    {
      v31 = 0LL;
      if ( v12 < (char *)v10 - 15 )
      {
        while ( 1 )
        {
          v32 = (unsigned __int8)*v12++;
          v31 += v32;
          if ( v12 > (char *)v10 - 15 )
            break;
          if ( v32 != 255 )
          {
            if ( v31 == -1 )
              goto LABEL_9;
            v16 = v31 + 15;
            v33 = &a1[v16];
            if ( &a1[v16] < a1 )
              goto LABEL_9;
            v34 = (unsigned __int64)&v12[v16];
            if ( &v12[v16] < v12 )
              goto LABEL_9;
            if ( (unsigned __int64)v33 <= v11 && v34 <= (unsigned __int64)(v10 - 32) )
            {
              v35 = a1 - v12;
              do
              {
                v36 = *(_OWORD *)v12;
                v12 += 32;
                *(_OWORD *)&v12[v35 - 32] = v36;
                *(_OWORD *)&v12[v35 - 16] = *((_OWORD *)v12 - 1);
              }
              while ( &v12[v35] < v33 );
              v18 = (unsigned __int8 *)v34;
              v19 = v33;
              goto LABEL_16;
            }
            goto LABEL_73;
          }
        }
      }
      goto LABEL_9;
    }
    if ( v12 > (char *)v10 - 17 )
      break;
    v17 = *(_OWORD *)v12;
    v18 = (unsigned __int8 *)&v12[v16];
    *(_OWORD *)a1 = v17;
    v19 = &a1[v16];
LABEL_16:
    v20 = *(unsigned __int16 *)v18;
    v21 = &v19[-v20];
    v12 = (char *)(v18 + 2);
    v22 = v15 & 0xF;
    if ( v22 == 15 )
    {
      v24 = 0LL;
      while ( 1 )
      {
        v25 = (unsigned __int8)*v12++;
        v24 += v25;
        if ( v12 > (char *)v10 - 4 )
          goto LABEL_9;
        if ( v25 != 255 )
        {
          if ( v24 == -1 )
            goto LABEL_9;
          v23 = v24 + 19;
          if ( &v19[v23] < v19 )
            goto LABEL_9;
          if ( &v19[v23] >= v9 - 64 )
            goto LABEL_55;
          if ( v21 < v8 )
            goto LABEL_9;
          goto LABEL_28;
        }
      }
    }
    v23 = v22 + 4;
    if ( &v19[v23] >= v9 - 64 )
      goto LABEL_55;
    if ( v21 < v8 )
      goto LABEL_9;
    if ( v20 < 8 )
    {
LABEL_28:
      v26 = &v19[v23];
      if ( v20 >= 0x10 )
      {
        do
        {
          v30 = *(_OWORD *)v21;
          v21 += 32;
          *(_OWORD *)&v21[v20 - 32] = v30;
          *(_OWORD *)&v21[v20 - 16] = *((_OWORD *)v21 - 1);
        }
        while ( &v21[v20] < v26 );
        goto LABEL_37;
      }
      switch ( v20 )
      {
        case 2uLL:
          LOWORD(v63) = *(_WORD *)v21;
          WORD1(v63) = *(_WORD *)v21;
          v27 = v63;
          break;
        case 1uLL:
          LOBYTE(v63) = *v21;
          BYTE1(v63) = *v21;
          BYTE2(v63) = *v21;
          BYTE3(v63) = *v21;
          BYTE4(v63) = *v21;
          BYTE5(v63) = *v21;
          BYTE6(v63) = *v21;
          HIBYTE(v63) = *v21;
          goto LABEL_32;
        case 4uLL:
          v27 = *(_DWORD *)v21;
          LODWORD(v63) = *(_DWORD *)v21;
          break;
        default:
          if ( v20 >= 8 )
          {
            v52 = v21 + 8;
            *(_QWORD *)v19 = *(_QWORD *)v21;
          }
          else
          {
            _mm_lfence();
            v50 = (unsigned int)dword_140035578[v20];
            *v19 = *v21;
            v51 = &v21[v50];
            v19[1] = v21[1];
            v19[2] = v21[2];
            v19[3] = v21[3];
            *((_DWORD *)v19 + 1) = *(_DWORD *)v51;
            v52 = &v51[-dword_140035558[v20]];
          }
          v53 = v19 + 8;
          v54 = v52 - v53;
          do
          {
            *(_QWORD *)v53 = *(_QWORD *)&v53[v54];
            v53 += 8;
          }
          while ( v53 < v26 );
          goto LABEL_37;
      }
      HIDWORD(v63) = v27;
LABEL_32:
      v28 = v19 + 8;
      *(_QWORD *)v19 = v63;
      v29 = (v23 - 8 + 7) >> 3;
      if ( v28 > v26 )
        v29 = 0LL;
      if ( v29 )
      {
        memset64(v28, v63, v29);
        a1 = v26;
      }
      else
      {
LABEL_37:
        a1 = v26;
      }
    }
    else
    {
      *(_QWORD *)v19 = *(_QWORD *)v21;
      *((_QWORD *)v19 + 1) = *((_QWORD *)v21 + 1);
      *((_WORD *)v19 + 8) = *((_WORD *)v21 + 8);
      a1 = &v19[v23];
    }
  }
LABEL_73:
  v49 = &a1[v16];
  if ( &a1[v16] <= v9 - 12 )
  {
    v37 = (unsigned __int8 *)&v12[v16];
    if ( &v12[v16] <= (char *)v10 - 8 )
    {
      v38 = v12 - a1;
      do
      {
        *(_QWORD *)a1 = *(_QWORD *)&a1[v38];
        a1 += 8;
      }
      while ( a1 < v49 );
      v20 = *(unsigned __int16 *)v37;
      v12 = (char *)(v37 + 2);
      v19 = v49;
      v21 = &v49[-v20];
      v39 = v15 & 0xF;
LABEL_53:
      if ( v39 == 15 )
      {
LABEL_93:
        v60 = 0LL;
        while ( 1 )
        {
          v61 = (unsigned __int8)*v12++;
          v60 += v61;
          if ( v12 > (char *)v10 - 4 )
            break;
          if ( v61 != 255 )
          {
            if ( v60 == -1 )
              break;
            v39 = v60 + 15;
            if ( &v19[v39] < v19 )
              break;
            goto LABEL_54;
          }
        }
      }
      else
      {
LABEL_54:
        v23 = v39 + 4;
LABEL_55:
        if ( v21 >= v8 )
        {
          v40 = (unsigned __int64)&v19[v23];
          if ( v20 >= 8 )
          {
            v55 = *(_QWORD *)v21;
            v42 = v21 + 8;
            *(_QWORD *)v19 = v55;
          }
          else
          {
            *v19 = *v21;
            v19[1] = v21[1];
            v19[2] = v21[2];
            v19[3] = v21[3];
            v41 = &v21[dword_140035578[v20]];
            *((_DWORD *)v19 + 1) = *(_DWORD *)v41;
            v42 = &v41[-dword_140035558[v20]];
          }
          v43 = v19 + 8;
          if ( v40 <= (unsigned __int64)(v9 - 12) )
          {
            *(_QWORD *)v43 = *(_QWORD *)v42;
            if ( v23 > 0x10 )
            {
              v56 = v43 + 8;
              v57 = v42 - v56;
              do
              {
                *(_QWORD *)v56 = *(_QWORD *)&v56[v57 + 8];
                v56 += 8;
              }
              while ( (unsigned __int64)v56 < v40 );
            }
            goto LABEL_65;
          }
          v44 = (unsigned __int64)(v9 - 7);
          if ( v40 <= (unsigned __int64)(v9 - 5) )
          {
            if ( (unsigned __int64)v43 < v44 )
            {
              v45 = v43;
              do
              {
                *v45 = *(_QWORD *)((char *)v45 + v42 - v43);
                ++v45;
              }
              while ( (unsigned __int64)v45 < v44 );
              v46 = v44 - (_QWORD)v43;
              v43 = v9 - 7;
              v42 += v46;
            }
            for ( ; (unsigned __int64)v43 < v40; ++v43 )
            {
              v62 = *v42++;
              *v43 = v62;
            }
LABEL_65:
            a1 = (char *)v40;
LABEL_66:
            while ( 1 )
            {
              v15 = (unsigned __int8)*v12++;
              v16 = (unsigned __int64)v15 >> 4;
              if ( v16 == 15 )
                break;
              if ( (unsigned __int64)a1 > v11 || v12 >= (char *)v10 - 16 )
                goto LABEL_73;
              v58 = *(_OWORD *)v12;
              v59 = (unsigned __int8 *)&v12[v16];
              v39 = v15 & 0xF;
              *(_OWORD *)a1 = v58;
              v19 = &a1[v16];
              v20 = *(unsigned __int16 *)v59;
              v21 = &v19[-v20];
              v12 = (char *)(v59 + 2);
              if ( v39 == 15 )
                goto LABEL_93;
              if ( v20 < 8 || v21 < v8 )
                goto LABEL_53;
              *(_QWORD *)v19 = *(_QWORD *)v21;
              *((_QWORD *)v19 + 1) = *((_QWORD *)v21 + 1);
              *((_WORD *)v19 + 8) = *((_WORD *)v21 + 8);
              a1 = &v19[v39 + 4];
            }
            v47 = 0LL;
            if ( v12 < (char *)v10 - 15 )
            {
              while ( 1 )
              {
                v48 = (unsigned __int8)*v12++;
                v47 += v48;
                if ( v12 > (char *)v10 - 15 )
                  break;
                if ( v48 != 255 )
                {
                  if ( v47 == -1 )
                    break;
                  v16 = v47 + 15;
                  if ( &a1[v47 + 15] < a1 || &v12[v16] < v12 )
                    break;
                  goto LABEL_73;
                }
              }
            }
          }
        }
      }
LABEL_9:
      v13 = v7 - (_DWORD)v12 - 1;
      goto LABEL_10;
    }
  }
  if ( &v12[v16] != (char *)v10 || v49 > v9 )
    goto LABEL_9;
  memmove(a1, v12, v16);
  v13 = (_DWORD)v49 - (_DWORD)v8;
LABEL_10:
  if ( v13 >= 0 )
    goto LABEL_11;
  return 3221225507LL;
}
