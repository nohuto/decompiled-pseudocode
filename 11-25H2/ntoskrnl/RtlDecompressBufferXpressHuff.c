/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x1403D31F0
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1403D3770 (XpressBuildHuffmanDecodingTable.c)
 */

__int64 __fastcall RtlDecompressBufferXpressHuff(
        _BYTE *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rbx
  unsigned __int64 v9; // rbp
  _BYTE *v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  __int64 v13; // r9
  unsigned __int16 *v14; // rbx
  _BYTE *v15; // r13
  int v16; // eax
  int v17; // r8d
  unsigned int v18; // r8d
  unsigned __int64 v19; // r14
  _BYTE *v20; // r11
  __int16 v21; // si
  __int64 v22; // rcx
  unsigned __int16 v23; // si
  __int16 v24; // ax
  int v25; // edx
  int v26; // eax
  int v27; // ecx
  __int64 v28; // rsi
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // r10
  int v34; // eax
  _BYTE *v35; // rsi
  _DWORD *v36; // rsi
  char v37; // al
  int v38; // eax
  int v39; // ecx
  unsigned __int64 v40; // rdx
  __int16 v41; // ax
  __int64 v42; // rcx
  int v43; // edx
  int v44; // ecx
  unsigned __int64 v45; // rdx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // rdx
  _BYTE *v49; // [rsp+80h] [rbp+38h]

  v7 = a3;
  if ( !a7 )
    return 3221225704LL;
  v9 = (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v10 = a1;
  v11 = (unsigned __int64)&a3[a4];
  v12 = (unsigned __int64)&a1[a2];
  v49 = (_BYTE *)v12;
LABEL_3:
  if ( (__int64)(v11 - (_QWORD)v7) < 260 )
  {
    if ( v10 != (_BYTE *)v12 )
      return 3221226050LL;
    goto LABEL_71;
  }
  if ( (unsigned int)XpressBuildHuffmanDecodingTable(v9, v7) )
    return 3221226050LL;
  v13 = 16LL;
  v14 = (unsigned __int16 *)(v7 + 256);
  v15 = (_BYTE *)v12;
  v16 = v14[1];
  v17 = *v14;
  v7 = (unsigned __int8 *)(v14 + 2);
  v18 = v16 + (v17 << 16);
  if ( (unsigned __int64)(v10 + 0x10000) <= v12 )
    v15 = v10 + 0x10000;
  v19 = (unsigned __int64)(v15 - 188);
  if ( v10 >= v15 - 188 )
  {
    v20 = v49;
    goto LABEL_51;
  }
  while ( 1 )
  {
    v21 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v21 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v26 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v21 = *(_WORD *)(v9 + 2LL * (__int16)(v26 - v21) + 3104);
      }
      while ( v21 <= 0 );
    }
    else
    {
      v22 = v21 & 0xF;
      v18 <<= v22;
      v13 -= v22;
    }
    v23 = (unsigned __int16)v21 >> 4;
    v24 = v23 - 256;
    if ( v13 < 0 )
      break;
LABEL_16:
    if ( v24 >= 0 )
    {
      if ( v23 == 256 && v10 == v49 && (unsigned __int64)v7 >= v11 )
        goto LABEL_71;
      v27 = v23 - 256;
      v28 = v27 / 16;
      v29 = v27 % 16;
      if ( v29 == 15 )
      {
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v30 = *v7++;
        if ( v30 == 255 )
        {
          if ( (unsigned __int64)(v7 + 1) >= v11 )
            return 3221226050LL;
          v47 = *(unsigned __int16 *)v7;
          v7 += 2;
          if ( !v47 )
          {
            if ( (unsigned __int64)(v7 + 3) >= v11 )
              return 3221226050LL;
            v47 = *(unsigned int *)v7;
            v7 += 4;
          }
          if ( v47 < 0xF || &v10[v47 + 3] < v10 )
            return 3221226050LL;
          v30 = v47 - 15;
        }
        v29 = v30 + 15;
      }
      v31 = v29;
      v32 = v29 + 3;
      v33 = (1LL << v28) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v28) >> 1);
      v18 <<= v28;
      v13 -= v28;
      if ( v13 < 0 )
      {
        if ( (unsigned __int64)v10 >= v19 )
        {
          v20 = v49;
LABEL_43:
          if ( (unsigned __int64)(v7 + 1) < v11 )
          {
            v38 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v38 << -(char)v13;
            v13 += 16LL;
            goto LABEL_48;
          }
          return 3221226050LL;
        }
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        v34 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v34 << -(char)v13;
        v13 += 16LL;
      }
      v35 = &v10[-v33];
      if ( &v10[-v33] < a1 )
        return 3221226050LL;
      if ( v33 < 4 )
      {
        *v10 = *v35;
        if ( v33 == 1 )
        {
          v10[1] = *v35;
          v37 = *v35;
        }
        else
        {
          v10[1] = v35[1];
          if ( v33 == 2 )
          {
            v32 -= 2LL;
            v10 += 2;
            goto LABEL_40;
          }
          v37 = v35[2];
        }
        v10[2] = v37;
        v32 = v31;
        v10 += 3;
LABEL_40:
        if ( v32 )
          goto LABEL_32;
      }
      else
      {
LABEL_32:
        *(_DWORD *)v10 = *(_DWORD *)v35;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v35 + 1);
        if ( v32 >= 9 )
        {
          v10 += 8;
          v36 = v35 + 8;
          v32 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v36;
            *((_DWORD *)v10 + 1) = v36[1];
            *((_DWORD *)v10 + 2) = v36[2];
            *((_DWORD *)v10 + 3) = v36[3];
            if ( v32 < 0x11 )
              goto LABEL_9;
            v10 += 16;
            v36 += 4;
            v32 -= 16LL;
          }
          v20 = v49;
LABEL_49:
          if ( &v10[v32] <= v20 )
          {
            qmemcpy(v10, v36, v32);
            v10 += v32;
            goto LABEL_51;
          }
          return 3221226050LL;
        }
LABEL_9:
        v10 += v32;
      }
    }
    else
    {
      *v10++ = v23;
    }
  }
  if ( (unsigned __int64)v10 < v19 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v25 = *(unsigned __int16 *)v7;
    v7 += 2;
    v18 += v25 << -(char)v13;
    v13 += 16LL;
    goto LABEL_16;
  }
  v20 = v49;
LABEL_58:
  if ( (unsigned __int64)(v7 + 1) >= v11 )
    return 3221226050LL;
  v43 = *(unsigned __int16 *)v7;
  v7 += 2;
  v18 += v43 << -(char)v13;
  v13 += 16LL;
  while ( v24 < 0 )
  {
    *v10++ = v24;
LABEL_51:
    if ( v10 >= v15 )
    {
      v12 = (unsigned __int64)v49;
      goto LABEL_3;
    }
    v41 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v41 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v44 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v41 = *(_WORD *)(v9 + 2LL * (__int16)(v44 - v41) + 3104);
      }
      while ( v41 <= 0 );
    }
    else
    {
      v42 = v41 & 0xF;
      v18 <<= v42;
      v13 -= v42;
    }
    v24 = ((unsigned __int16)v41 >> 4) - 256;
    if ( v13 < 0 )
      goto LABEL_58;
  }
  if ( v24 || (unsigned __int64)v7 < v11 || v10 != v20 )
  {
    v39 = v24 / 16;
    v40 = v24 % 16;
    if ( v40 == 15 )
    {
      if ( (unsigned __int64)v7 >= v11 )
        return 3221226050LL;
      v45 = *v7++;
      if ( v45 == 255 )
      {
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        v48 = *(unsigned __int16 *)v7;
        v7 += 2;
        if ( !v48 )
        {
          if ( (unsigned __int64)(v7 + 3) >= v11 )
            return 3221226050LL;
          v48 = *(unsigned int *)v7;
          v7 += 4;
        }
        if ( v48 < 0xF || &v10[v48 + 3] < v10 )
          return 3221226050LL;
        v45 = v48 - 15;
      }
      v40 = v45 + 15;
    }
    v32 = v40 + 3;
    v33 = (1LL << v39) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v39) >> 1);
    v18 <<= v39;
    v13 -= v39;
    if ( v13 < 0 )
      goto LABEL_43;
LABEL_48:
    v36 = &v10[-v33];
    if ( &v10[-v33] < a1 )
      return 3221226050LL;
    goto LABEL_49;
  }
LABEL_71:
  *a6 = (_DWORD)v10 - (_DWORD)a1;
  return 0LL;
}
