/*
 * XREFs of Normalization__IsNormalized @ 0x140785BB0
 * Callers:
 *     RtlIsNormalizedString @ 0x140786C90 (RtlIsNormalizedString.c)
 * Callees:
 *     CanComposeHangul @ 0x1405ECAB4 (CanComposeHangul.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14078560C (Normalization__CanCombinableCharactersCombine.c)
 *     Normalization__CanCombineWithStartBase @ 0x140785778 (Normalization__CanCombineWithStartBase.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x1407857C4 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetLastChar @ 0x1407858FC (Normalization__GetLastChar.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v4; // r15d
  unsigned __int16 *v5; // r12
  int v8; // ebx
  unsigned __int8 v9; // dl
  int v10; // ecx
  int v11; // edx
  unsigned __int8 v12; // r13
  unsigned __int8 v13; // r14
  unsigned __int8 v14; // si
  unsigned __int8 v15; // r15
  unsigned __int8 v16; // cl
  unsigned __int8 v17; // si
  unsigned int v18; // r15d
  int CanCombineWithStartFirstPair; // eax
  unsigned int v20; // eax
  int CanCombineWithStartBase; // eax
  unsigned __int8 v22; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 v23; // [rsp+31h] [rbp-1Fh]
  unsigned __int8 v24; // [rsp+32h] [rbp-1Eh]
  int v25; // [rsp+34h] [rbp-1Ch] BYREF
  int v26; // [rsp+38h] [rbp-18h] BYREF
  int v27; // [rsp+3Ch] [rbp-14h]
  int v28; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int16 *v29; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v30; // [rsp+98h] [rbp+48h] BYREF
  int v31; // [rsp+A0h] [rbp+50h]
  _BYTE *v32; // [rsp+A8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v4 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  v25 = 0;
  v22 = 0;
  v30 = 0;
  v29 = a2 - 1;
  v26 = 0;
  v28 = 0;
  v27 = 0;
  v24 = 0;
  v23 = 0;
LABEL_4:
  if ( v4 <= 0 )
    goto LABEL_96;
  v8 = *v5;
  if ( v8 < *(_DWORD *)(a1 + 28) )
    goto LABEL_93;
  v9 = *(_BYTE *)(((unsigned __int64)*v5 >> 7) + *(_QWORD *)(a1 + 32));
  if ( !v9 || v9 == 0xFB && *(_BYTE *)(a1 + 113) )
    goto LABEL_93;
  while ( 1 )
  {
    while ( 1 )
    {
      switch ( v9 )
      {
        case 0u:
          goto LABEL_91;
        case 0xFBu:
          goto LABEL_90;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          goto LABEL_31;
      }
      if ( v9 != 254 )
        break;
      if ( v4 <= 1 )
        return 3221227287LL;
      ++v5;
      v31 = --v4;
      v10 = *v5;
      if ( (unsigned __int16)(v10 + 9216) > 0x3FFu )
        return 3221227287LL;
      v8 = v10 + ((v8 - 55287) << 10);
      v9 = *(_BYTE *)(((__int64)v8 >> 7) + *(_QWORD *)(a1 + 32));
    }
    if ( v9 != 255 )
      break;
    if ( v8 < 44032 )
    {
      if ( v4 > 1 && CanComposeHangul((unsigned int)v8, v5[1]) )
        goto LABEL_31;
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) == 0 && (unsigned int)(v8 - 4447) <= 1 )
        goto LABEL_19;
LABEL_24:
      v9 = 0;
    }
    else
    {
      if ( v8 < 55204 )
      {
        if ( *(_BYTE *)(a1 + 112) == 1 || v4 > 1 && CanComposeHangul((unsigned int)v8, v5[1]) )
          goto LABEL_31;
LABEL_91:
        v30 = 0;
        v22 = 0;
LABEL_92:
        v25 = v8;
        v29 = v5;
LABEL_93:
        ++v5;
        v31 = --v4;
        goto LABEL_4;
      }
      if ( (unsigned int)(v8 - 55216) <= 0x16 || (unsigned int)(v8 - 55243) <= 0x30 )
        goto LABEL_24;
LABEL_19:
      v9 = -5;
    }
  }
  v11 = *(unsigned __int8 *)((v8 & 0x7F) + ((unsigned __int64)v9 << 7) + *(_QWORD *)(a1 + 40) - 128);
  if ( !(_BYTE)v11 )
    goto LABEL_91;
  v12 = v11 & 0xC0;
  v13 = v11 & 0x3F;
  if ( (v11 & 0x3F) != 0 && v13 != 63 )
  {
LABEL_41:
    if ( (v11 & 0x80) == 0 )
    {
      v26 = 0;
LABEL_89:
      v27 = v8;
      v24 = v13;
      v23 = v12;
      goto LABEL_64;
    }
    Normalization__GetLastChar(a1, (__int64)v5, &v29, (unsigned int *)&v25, &v22, &v30);
    v14 = v22;
    if ( !v22 || v22 == 63 )
    {
      v27 = v25;
      v24 = v22;
      v23 = v30;
      if ( ((v30 - 64) & 0xBF) == 0
        && v12 == 0xC0
        && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v25, v8) )
      {
        goto LABEL_31;
      }
      goto LABEL_64;
    }
    v15 = v30;
    if ( (v30 & 0xBF) != 0 )
    {
      if ( v22 > v13 )
        goto LABEL_31;
      if ( v12 != 0xC0 || v22 == v13 )
        goto LABEL_63;
      v16 = v23;
      v17 = v24;
      if ( (((v24 | v23) - 64) & 0xBF) != 0 && (v23 != 64 || v24 && v24 != 63) )
      {
        v18 = v27;
      }
      else
      {
        v18 = v27;
        if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v27, v8) )
          goto LABEL_31;
        v16 = v23;
      }
      if ( v13 >= v17 || (v16 & 0xBF) != 0 || (unsigned __int8)(v17 - 1) > 0x3Du )
      {
LABEL_63:
        v4 = v31;
LABEL_64:
        v22 = v13;
        v30 = v12;
        goto LABEL_92;
      }
      if ( v17 == *(_BYTE *)(a1 + 116) )
      {
        if ( v13 >= *(_BYTE *)(a1 + 114) )
        {
          if ( v13 != *(_BYTE *)(a1 + 115) )
            goto LABEL_63;
          goto LABEL_61;
        }
      }
      else if ( v17 == *(_BYTE *)(a1 + 118) && v13 == *(_BYTE *)(a1 + 117) )
      {
LABEL_61:
        CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(a1, &v28, &v26, v18, v8);
        goto LABEL_62;
      }
      CanCombineWithStartFirstPair = Normalization__CanCombineWithStartBase(a1, &v26, v18, v8);
LABEL_62:
      if ( CanCombineWithStartFirstPair )
        goto LABEL_31;
      goto LABEL_63;
    }
    v26 = 0;
    v28 = 0;
    v20 = v25;
    v27 = v25;
    if ( v12 != 0xC0 )
      goto LABEL_81;
    if ( v30 == 64 )
    {
      if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v25, v8) )
        goto LABEL_31;
      v20 = v27;
    }
    if ( v14 <= v13 )
      goto LABEL_81;
    if ( v14 == *(_BYTE *)(a1 + 116) )
    {
      if ( v13 >= *(_BYTE *)(a1 + 114) )
      {
        if ( v13 == *(_BYTE *)(a1 + 115) )
        {
LABEL_76:
          CanCombineWithStartBase = Normalization__CanCombineWithStartFirstPair(a1, &v28, &v26, v20, v8);
          goto LABEL_80;
        }
LABEL_81:
        v24 = v14;
        v23 = v15;
        goto LABEL_63;
      }
    }
    else if ( v14 == *(_BYTE *)(a1 + 118) && v13 == *(_BYTE *)(a1 + 117) )
    {
      goto LABEL_76;
    }
    CanCombineWithStartBase = Normalization__CanCombineWithStartBase(a1, &v26, v20, v8);
LABEL_80:
    if ( CanCombineWithStartBase )
      goto LABEL_31;
    goto LABEL_81;
  }
  switch ( v11 )
  {
    case 64:
      goto LABEL_89;
    case 127:
LABEL_90:
      if ( *(_BYTE *)(a1 + 113) )
        goto LABEL_91;
      return 3221227287LL;
    case 128:
      goto LABEL_89;
    case 191:
LABEL_31:
      *v32 = 0;
      return 0LL;
    case 192:
      Normalization__GetLastChar(a1, (__int64)v5, &v29, (unsigned int *)&v25, &v22, &v30);
      if ( (v22 | v30) == 0x80 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v25, v8) )
        goto LABEL_31;
      goto LABEL_89;
  }
  if ( v11 != 255 )
    goto LABEL_41;
  if ( v8 || v4 > 1 )
    return 3221227287LL;
LABEL_96:
  *v32 = 1;
  return 0LL;
}
