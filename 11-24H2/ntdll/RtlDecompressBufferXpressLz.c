/*
 * XREFs of RtlDecompressBufferXpressLz @ 0x1800D4ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDecompressBufferXpressLz(_BYTE *a1, int a2, _BYTE *a3, unsigned int a4, int a5, _DWORD *a6)
{
  _BYTE *v6; // r10
  _BYTE *v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r13
  _BYTE *v11; // rbp
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // r8
  char v17; // dl
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  signed __int64 v20; // r9
  _BYTE *v21; // rsi
  signed __int64 v22; // rdx
  bool v23; // sf
  _DWORD *v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rdx
  char v27; // cl
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  __int16 v32; // cx
  unsigned __int64 v33; // r8
  char v34; // dl
  unsigned __int64 v36; // rdx

  v6 = a3;
  if ( a4 < 5 )
    return 3221226050LL;
  v8 = a1;
  v9 = (unsigned __int64)&a3[a4];
  v10 = (unsigned __int64)&a1[a2];
  v11 = 0LL;
  v12 = v9 - 86;
  v13 = v10 - 352;
LABEL_3:
  v14 = *(_DWORD *)v6;
  v6 += 4;
  if ( (unsigned __int64)v6 >= v12 || (unsigned __int64)v8 >= v13 )
    goto LABEL_72;
  v15 = 2 * v14 + 1;
  if ( v14 >= 0 )
  {
    while ( 1 )
    {
      if ( v15 < 0 )
      {
        *v8++ = *v6++;
        goto LABEL_8;
      }
      v23 = (v15 & 0x40000000) != 0;
      v15 *= 2;
      if ( v23 )
      {
        *(_WORD *)v8 = *(_WORD *)v6;
        v8 += 2;
        v6 += 2;
        goto LABEL_8;
      }
      v23 = (v15 & 0x40000000) != 0;
      v15 *= 2;
      *(_DWORD *)v8 = *(_DWORD *)v6;
      if ( v23 )
      {
        v8 += 3;
        v6 += 3;
        goto LABEL_8;
      }
      v8 += 4;
      v6 += 4;
      v23 = (v15 & 0x40000000) != 0;
      v15 *= 2;
      if ( v23 )
        goto LABEL_8;
LABEL_15:
      v15 *= 2;
    }
  }
  while ( 1 )
  {
    v16 = *(unsigned __int16 *)v6;
    v6 += 2;
    v17 = v16;
    v18 = (v16 >> 3) + 1;
    v19 = v17 & 7;
    if ( v19 != 7 )
      goto LABEL_10;
    if ( v11 )
    {
      v25 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
      v11 = 0LL;
    }
    else
    {
      v11 = v6++;
      v25 = *v11 & 0xF;
    }
    if ( v25 == 15 )
      break;
LABEL_28:
    v19 = v25 + 7;
LABEL_10:
    v20 = v19;
    v21 = &v8[-v18];
    v22 = v19 + 3;
    if ( &v8[-v18] < a1 )
      return 3221226050LL;
    if ( v18 >= 4 )
    {
LABEL_12:
      *(_DWORD *)v8 = *(_DWORD *)v21;
      *((_DWORD *)v8 + 1) = *((_DWORD *)v21 + 1);
      if ( v22 >= 9 )
      {
        v8 += 8;
        v24 = v21 + 8;
        for ( v22 -= 8LL; ; v22 -= 16LL )
        {
          if ( (unsigned __int64)v8 >= v13 )
            goto LABEL_64;
          *(_DWORD *)v8 = *v24;
          *((_DWORD *)v8 + 1) = v24[1];
          *((_DWORD *)v8 + 2) = v24[2];
          *((_DWORD *)v8 + 3) = v24[3];
          if ( v22 < 17 )
            break;
          v8 += 16;
          v24 += 4;
        }
      }
      v8 += v22;
      goto LABEL_14;
    }
    *v8 = *v21;
    if ( v18 == 1 )
    {
      v8[1] = *v21;
      v27 = *v21;
LABEL_37:
      v8[2] = v27;
      v22 = v20;
      v8 += 3;
      goto LABEL_38;
    }
    v8[1] = v21[1];
    if ( v18 != 2 )
    {
      v27 = v21[2];
      goto LABEL_37;
    }
    v22 -= 2LL;
    v8 += 2;
LABEL_38:
    if ( v22 )
      goto LABEL_12;
LABEL_14:
    if ( v15 >= 0 )
      goto LABEL_15;
LABEL_8:
    v15 *= 2;
    if ( !v15 )
      goto LABEL_3;
  }
  if ( (unsigned __int64)(v6 + 7) < v12 )
  {
    v26 = (unsigned __int8)*v6++;
    if ( v26 == 255 )
    {
      v28 = *(unsigned __int16 *)v6;
      v6 += 2;
      if ( !v28 )
      {
        v28 = *(unsigned int *)v6;
        v6 += 4;
      }
      if ( v28 < 0x16 || &v8[v28 + 3] < v8 )
        return 3221226050LL;
      v26 = v28 - 22;
    }
    v25 = v26 + 15;
    goto LABEL_28;
  }
LABEL_48:
  if ( (unsigned __int64)v6 < v9 )
  {
    v29 = (unsigned __int8)*v6++;
    if ( v29 == 255 )
    {
      if ( (unsigned __int64)(v6 + 1) < v9 )
      {
        v36 = *(unsigned __int16 *)v6;
        v6 += 2;
        if ( !v36 )
        {
          if ( (unsigned __int64)(v6 + 3) >= v9 )
            return 3221226050LL;
          v36 = *(unsigned int *)v6;
          v6 += 4;
        }
        if ( v36 >= 0x16 && &v8[v36 + 3] >= v8 )
        {
          v29 = v36 - 22;
          goto LABEL_50;
        }
      }
    }
    else
    {
LABEL_50:
      v30 = v29 + 15;
LABEL_54:
      v31 = v30 + 7;
      while ( 1 )
      {
        v22 = v31 + 3;
        v24 = &v8[-v18];
        if ( &v8[-v18] < a1 )
          break;
LABEL_64:
        if ( (unsigned __int64)&v8[v22] > v10 )
          return 3221226050LL;
        qmemcpy(v8, v24, v22);
        v8 += v22;
        if ( v15 >= 0 )
        {
LABEL_66:
          v15 *= 2;
          goto LABEL_55;
        }
        while ( 1 )
        {
          v15 *= 2;
          if ( v15 )
            break;
          if ( (unsigned __int64)(v6 + 3) >= v9 )
            return 3221226050LL;
          v14 = *(_DWORD *)v6;
          v6 += 4;
LABEL_72:
          v15 = 2 * v14 + 1;
          if ( v14 < 0 )
            break;
LABEL_55:
          if ( v15 < 0 )
          {
            if ( (unsigned __int64)v6 >= v9 || (unsigned __int64)v8 >= v10 )
              return 3221226050LL;
            *v8++ = *v6++;
          }
          else
          {
            v15 *= 2;
            if ( (unsigned __int64)(v6 + 2) > v9 || (unsigned __int64)(v8 + 2) > v10 )
              return 3221226050LL;
            v32 = *(_WORD *)v6;
            v6 += 2;
            *(_WORD *)v8 = v32;
            v8 += 2;
            if ( v15 >= 0 )
              goto LABEL_66;
          }
        }
        if ( v6 == (_BYTE *)v9 )
          goto LABEL_77;
        if ( (unsigned __int64)(v6 + 1) >= v9 )
        {
          if ( (unsigned __int64)v8 < v10 )
            return 3221226050LL;
LABEL_77:
          *a6 = (_DWORD)v8 - (_DWORD)a1;
          return 0LL;
        }
        v33 = *(unsigned __int16 *)v6;
        v6 += 2;
        v34 = v33;
        v18 = (v33 >> 3) + 1;
        v31 = v34 & 7;
        if ( v31 == 7 )
        {
          if ( v11 )
          {
            v30 = (unsigned __int64)(unsigned __int8)*v11 >> 4;
            v11 = 0LL;
          }
          else
          {
            if ( (unsigned __int64)v6 >= v9 )
              return 3221226050LL;
            v11 = v6++;
            v30 = *v11 & 0xF;
          }
          if ( v30 == 15 )
            goto LABEL_48;
          goto LABEL_54;
        }
      }
    }
  }
  return 3221226050LL;
}
