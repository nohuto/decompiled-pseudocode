/*
 * XREFs of RtlDecompressBufferXpressHuff @ 0x1403C02A0
 * Callers:
 *     <none>
 * Callees:
 *     XpressBuildHuffmanDecodingTable @ 0x1403C0820 (XpressBuildHuffmanDecodingTable.c)
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
  int v21; // ecx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r10
  _DWORD *v25; // rsi
  __int16 v26; // ax
  __int64 v27; // rcx
  __int16 v28; // ax
  int v29; // edx
  int v30; // eax
  int v31; // ecx
  unsigned __int64 v33; // rdx
  __int16 v34; // si
  __int64 v35; // rcx
  unsigned __int16 v36; // si
  int v37; // edx
  int v38; // eax
  int v39; // ecx
  __int64 v40; // rsi
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // r11
  int v44; // eax
  _BYTE *v45; // rsi
  char v46; // al
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
    goto LABEL_35;
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
    goto LABEL_15;
  }
  while ( 1 )
  {
    v34 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v34 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v38 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v34 = *(_WORD *)(v9 + 2LL * (__int16)(v38 - v34) + 3104);
      }
      while ( v34 <= 0 );
    }
    else
    {
      v35 = v34 & 0xF;
      v18 <<= v35;
      v13 -= v35;
    }
    v36 = (unsigned __int16)v34 >> 4;
    v28 = v36 - 256;
    if ( v13 < 0 )
      break;
LABEL_43:
    if ( v28 >= 0 )
    {
      if ( v36 == 256 && v10 == v49 && (unsigned __int64)v7 >= v11 )
        goto LABEL_35;
      v39 = v36 - 256;
      v40 = v39 / 16;
      v41 = v39 % 16;
      if ( v41 == 15 )
      {
        if ( (unsigned __int64)v7 >= v11 )
          return 3221226050LL;
        v42 = *v7++;
        if ( v42 == 255 )
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
          v42 = v47 - 15;
        }
        v41 = v42 + 15;
      }
      v43 = v41;
      v23 = v41 + 3;
      v24 = (1LL << v40) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v40) >> 1);
      v18 <<= v40;
      v13 -= v40;
      if ( v13 < 0 )
      {
        if ( (unsigned __int64)v10 >= v19 )
        {
          v20 = v49;
LABEL_24:
          if ( (unsigned __int64)(v7 + 1) < v11 )
          {
            v30 = *(unsigned __int16 *)v7;
            v7 += 2;
            v18 += v30 << -(char)v13;
            v13 += 16LL;
            goto LABEL_12;
          }
          return 3221226050LL;
        }
        if ( (unsigned __int64)(v7 + 1) >= v11 )
          return 3221226050LL;
        v44 = *(unsigned __int16 *)v7;
        v7 += 2;
        v18 += v44 << -(char)v13;
        v13 += 16LL;
      }
      v45 = &v10[-v24];
      if ( &v10[-v24] < a1 )
        return 3221226050LL;
      if ( v24 < 4 )
      {
        *v10 = *v45;
        if ( v24 == 1 )
        {
          v10[1] = *v45;
          v46 = *v45;
        }
        else
        {
          v10[1] = v45[1];
          if ( v24 == 2 )
          {
            v23 -= 2LL;
            v10 += 2;
            goto LABEL_67;
          }
          v46 = v45[2];
        }
        v10[2] = v46;
        v23 = v43;
        v10 += 3;
LABEL_67:
        if ( v23 )
          goto LABEL_59;
      }
      else
      {
LABEL_59:
        *(_DWORD *)v10 = *(_DWORD *)v45;
        *((_DWORD *)v10 + 1) = *((_DWORD *)v45 + 1);
        if ( v23 >= 9 )
        {
          v10 += 8;
          v25 = v45 + 8;
          v23 -= 8LL;
          while ( (unsigned __int64)v10 < v19 )
          {
            *(_DWORD *)v10 = *v25;
            *((_DWORD *)v10 + 1) = v25[1];
            *((_DWORD *)v10 + 2) = v25[2];
            *((_DWORD *)v10 + 3) = v25[3];
            if ( v23 < 0x11 )
              goto LABEL_36;
            v10 += 16;
            v25 += 4;
            v23 -= 16LL;
          }
          v20 = v49;
LABEL_13:
          if ( &v10[v23] <= v20 )
          {
            qmemcpy(v10, v25, v23);
            v10 += v23;
            goto LABEL_15;
          }
          return 3221226050LL;
        }
LABEL_36:
        v10 += v23;
      }
    }
    else
    {
      *v10++ = v36;
    }
  }
  if ( (unsigned __int64)v10 < v19 )
  {
    if ( (unsigned __int64)(v7 + 1) >= v11 )
      return 3221226050LL;
    v37 = *(unsigned __int16 *)v7;
    v7 += 2;
    v18 += v37 << -(char)v13;
    v13 += 16LL;
    goto LABEL_43;
  }
  v20 = v49;
LABEL_21:
  if ( (unsigned __int64)(v7 + 1) >= v11 )
    return 3221226050LL;
  v29 = *(unsigned __int16 *)v7;
  v7 += 2;
  v18 += v29 << -(char)v13;
  v13 += 16LL;
  while ( v28 < 0 )
  {
    *v10++ = v28;
LABEL_15:
    if ( v10 >= v15 )
    {
      v12 = (unsigned __int64)v49;
      goto LABEL_3;
    }
    v26 = *(_WORD *)(v9 + 2 * ((unsigned __int64)v18 >> 22) + 1056);
    if ( v26 <= 0 )
    {
      v18 <<= 10;
      v13 -= 10LL;
      do
      {
        --v13;
        v31 = (unsigned __int64)v18 >> 31;
        v18 *= 2;
        v26 = *(_WORD *)(v9 + 2LL * (__int16)(v31 - v26) + 3104);
      }
      while ( v26 <= 0 );
    }
    else
    {
      v27 = v26 & 0xF;
      v18 <<= v27;
      v13 -= v27;
    }
    v28 = ((unsigned __int16)v26 >> 4) - 256;
    if ( v13 < 0 )
      goto LABEL_21;
  }
  if ( v28 || v10 != v20 || (unsigned __int64)v7 < v11 )
  {
    v21 = v28 / 16;
    v22 = v28 % 16;
    if ( v22 == 15 )
    {
      if ( (unsigned __int64)v7 >= v11 )
        return 3221226050LL;
      v33 = *v7++;
      if ( v33 == 255 )
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
        v33 = v48 - 15;
      }
      v22 = v33 + 15;
    }
    v23 = v22 + 3;
    v24 = (1LL << v21) + ((unsigned __int64)v18 >> (31 - (unsigned __int8)v21) >> 1);
    v18 <<= v21;
    v13 -= v21;
    if ( v13 < 0 )
      goto LABEL_24;
LABEL_12:
    v25 = &v10[-v24];
    if ( &v10[-v24] < a1 )
      return 3221226050LL;
    goto LABEL_13;
  }
LABEL_35:
  *a6 = (_DWORD)v10 - (_DWORD)a1;
  return 0LL;
}
