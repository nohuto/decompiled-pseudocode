/*
 * XREFs of Normalization__IsNormalized @ 0x1800B4174
 * Callers:
 *     RtlpIdnToUnicodeWorker @ 0x1800B3250 (RtlpIdnToUnicodeWorker.c)
 *     RtlIsNormalizedString @ 0x1800B4E70 (RtlIsNormalizedString.c)
 * Callees:
 *     Normalization__CanCombinableCharactersCombine @ 0x1800B61BC (Normalization__CanCombinableCharactersCombine.c)
 *     CanComposeHangul @ 0x1800B636C (CanComposeHangul.c)
 *     Normalization__CanCombineWithStartFirstPair @ 0x180113EE8 (Normalization__CanCombineWithStartFirstPair.c)
 *     Normalization__GetFirstDecomposedCharPlane0 @ 0x1801453E8 (Normalization__GetFirstDecomposedCharPlane0.c)
 *     Normalization__GetSecondDecomposedCharPlane0 @ 0x180145454 (Normalization__GetSecondDecomposedCharPlane0.c)
 */

__int64 __fastcall Normalization__IsNormalized(__int64 a1, unsigned __int16 *a2, int a3, _BYTE *a4)
{
  int v4; // r12d
  unsigned __int16 *v5; // r13
  unsigned int FirstDecomposedCharPlane0; // r10d
  unsigned __int16 *v8; // r9
  unsigned int v9; // r15d
  unsigned __int8 v10; // si
  unsigned __int8 v11; // r14
  unsigned __int8 v12; // r11
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // dl
  int v15; // edx
  unsigned __int8 v16; // r8
  unsigned __int8 v17; // r12
  unsigned __int16 *v19; // rcx
  unsigned __int8 v20; // cl
  unsigned int v21; // esi
  int CanCombinableCharactersCombine; // eax
  unsigned int v23; // eax
  int CanCombineWithStartFirstPair; // eax
  unsigned __int16 *v25; // rcx
  unsigned int SecondDecomposedCharPlane0; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int8 v37; // [rsp+30h] [rbp-10h]
  unsigned __int8 v38; // [rsp+31h] [rbp-Fh]
  unsigned int v39; // [rsp+34h] [rbp-Ch] BYREF
  unsigned int v40; // [rsp+38h] [rbp-8h]
  unsigned int v41; // [rsp+3Ch] [rbp-4h] BYREF
  unsigned __int8 v42; // [rsp+88h] [rbp+48h]
  int v43; // [rsp+90h] [rbp+50h]

  v43 = a3;
  v4 = a3;
  v5 = a2;
  if ( !a2 )
    return 3221225485LL;
  FirstDecomposedCharPlane0 = 0;
  v8 = a2 - 1;
  v41 = 0;
  v9 = 0;
  v40 = 0;
  v10 = 0;
  v11 = 0;
  v39 = 0;
  v12 = 0;
  v37 = 0;
  v42 = 0;
  while ( 1 )
  {
    if ( v4 <= 0 )
      goto LABEL_22;
    v13 = *v5;
    if ( (int)v13 >= *(_DWORD *)(a1 + 28) )
    {
      v14 = *(_BYTE *)((v13 >> 7) + *(_QWORD *)(a1 + 32));
      if ( v14 )
      {
        if ( v14 != 0xFB || !*(_BYTE *)(a1 + 113) )
          break;
      }
    }
LABEL_5:
    ++v5;
    v43 = --v4;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        switch ( v14 )
        {
          case 0u:
            goto LABEL_35;
          case 0xFBu:
            if ( !*(_BYTE *)(a1 + 113) )
              return 3221227287LL;
            goto LABEL_35;
          case 0xFCu:
            return 3221227287LL;
          case 0xFDu:
            goto LABEL_29;
        }
        if ( v14 != 254 )
          break;
        if ( v4 <= 1 )
          return 3221227287LL;
        ++v5;
        v43 = --v4;
        if ( (unsigned __int16)(*v5 + 9216) > 0x3FFu )
          return 3221227287LL;
        LODWORD(v13) = *v5 + (((_DWORD)v13 - 55287) << 10);
        v14 = *(_BYTE *)(((__int64)(int)v13 >> 7) + *(_QWORD *)(a1 + 32));
      }
      if ( v14 != 255 )
      {
        v15 = *(unsigned __int8 *)((v13 & 0x7F) + ((unsigned __int64)v14 << 7) + *(_QWORD *)(a1 + 40) - 128);
        if ( (_BYTE)v15 )
        {
          v16 = v15 & 0xC0;
          v38 = v15 & 0xC0;
          v17 = v15 & 0x3F;
          if ( (v15 & 0x3F) != 0 && v17 != 63 )
            goto LABEL_31;
          if ( v15 == 64 )
          {
LABEL_19:
            v40 = v13;
            v12 = v17;
            v42 = v17;
            v37 = v16;
LABEL_20:
            v11 = v38;
            v10 = v17;
            v4 = v43;
            FirstDecomposedCharPlane0 = v39;
LABEL_21:
            v9 = v13;
            v8 = v5;
            goto LABEL_5;
          }
          if ( v15 != 127 )
          {
            switch ( v15 )
            {
              case 128:
                goto LABEL_19;
              case 191:
                goto LABEL_29;
              case 192:
                v25 = v5 - 1;
                if ( v8 != v5 - 1 )
                {
                  if ( (unsigned __int16)(*v25 + 10240) > 0x7FFu || (v25 = v5 - 2, v8 != v5 - 2) )
                  {
                    v9 = *v25;
                    if ( v9 - 55296 <= 0x7FF )
                      v9 += (*(v25 - 1) - 55287) << 10;
                    v32 = *(_QWORD *)(a1 + 32);
                    v33 = (__int64)(int)v9 >> 7;
                    if ( *(_BYTE *)(v33 + v32) )
                    {
                      v34 = *(unsigned __int8 *)(v33 + v32);
                      v35 = *(_QWORD *)(a1 + 40);
                      v36 = (v9 & 0x7F) + (v34 << 7);
                      v10 = *(_BYTE *)(v36 + v35 - 128) & 0x3F;
                      v11 = *(_BYTE *)(v36 + v35 - 128) & 0xC0;
                    }
                    else
                    {
                      v11 = 0;
                      v10 = 0;
                    }
                  }
                }
                if ( (v10 | v11) == 0x80 )
                {
                  if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v9, (unsigned int)v13) )
                    goto LABEL_29;
                  v16 = v38;
                }
                goto LABEL_19;
            }
            if ( v15 != 255 )
            {
LABEL_31:
              if ( (v15 & 0x80) == 0 )
              {
                v39 = 0;
                goto LABEL_19;
              }
              v19 = v5 - 1;
              if ( v8 != v5 - 1 )
              {
                if ( (unsigned __int16)(*v19 + 10240) > 0x7FFu || (v19 = v5 - 2, v8 != v5 - 2) )
                {
                  v9 = *v19;
                  if ( v9 - 55296 <= 0x7FF )
                    v9 += (*(v19 - 1) - 55287) << 10;
                  v27 = *(_QWORD *)(a1 + 32);
                  v28 = (__int64)(int)v9 >> 7;
                  if ( *(_BYTE *)(v28 + v27) )
                  {
                    v29 = *(unsigned __int8 *)(v28 + v27);
                    v30 = *(_QWORD *)(a1 + 40);
                    v31 = (v9 & 0x7F) + (v29 << 7);
                    v10 = *(_BYTE *)(v31 + v30 - 128) & 0x3F;
                    v11 = *(_BYTE *)(v31 + v30 - 128) & 0xC0;
                  }
                  else
                  {
                    v11 = 0;
                    v10 = 0;
                  }
                }
              }
              if ( !v10 || v10 == 63 )
              {
                v37 = v11;
                v12 = v10;
                v40 = v9;
                v42 = v10;
                if ( ((v11 - 64) & 0xBF) == 0 && v16 == 0xC0 )
                {
                  if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v9, (unsigned int)v13) )
                    goto LABEL_29;
                  v12 = v10;
                }
                goto LABEL_20;
              }
              if ( (v11 & 0xBF) != 0 )
              {
                if ( v10 > v17 )
                  goto LABEL_29;
                if ( v16 != 0xC0 || v10 == v17 )
                  goto LABEL_20;
                v20 = v37;
                if ( (((v12 | v37) - 64) & 0xBF) != 0 && (v37 != 64 || v12 && v12 != 63) )
                {
                  v21 = v40;
                }
                else
                {
                  v21 = v40;
                  if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v40, (unsigned int)v13) )
                    goto LABEL_29;
                  FirstDecomposedCharPlane0 = v39;
                  v12 = v42;
                  v20 = v37;
                }
                if ( v17 >= v12 || (v20 & 0xBF) != 0 || (unsigned __int8)(v12 - 1) > 0x3Du )
                  goto LABEL_20;
                if ( v12 == *(_BYTE *)(a1 + 116) )
                {
                  if ( v17 < *(_BYTE *)(a1 + 114) )
                  {
LABEL_52:
                    if ( !FirstDecomposedCharPlane0 )
                    {
                      FirstDecomposedCharPlane0 = Normalization__GetFirstDecomposedCharPlane0(a1, v21);
                      v39 = FirstDecomposedCharPlane0;
                    }
                    CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                                       a1,
                                                       FirstDecomposedCharPlane0,
                                                       (unsigned int)v13);
                    goto LABEL_55;
                  }
                  if ( v17 != *(_BYTE *)(a1 + 115) )
                    goto LABEL_20;
                }
                else if ( v12 != *(_BYTE *)(a1 + 118) || v17 != *(_BYTE *)(a1 + 117) )
                {
                  goto LABEL_52;
                }
                CanCombinableCharactersCombine = Normalization__CanCombineWithStartFirstPair(
                                                   a1,
                                                   (unsigned int)&v41,
                                                   (unsigned int)&v39,
                                                   v21,
                                                   v13);
LABEL_55:
                if ( CanCombinableCharactersCombine )
                  goto LABEL_29;
                v12 = v42;
                goto LABEL_20;
              }
              v41 = 0;
              v39 = 0;
              if ( v16 == 0xC0 )
              {
                if ( v11 == 64 && (unsigned int)Normalization__CanCombinableCharactersCombine(a1, v9, (unsigned int)v13) )
                  goto LABEL_29;
                if ( v10 > v17 )
                {
                  if ( v10 != *(_BYTE *)(a1 + 116) )
                  {
                    if ( v10 == *(_BYTE *)(a1 + 118) && v17 == *(_BYTE *)(a1 + 117) )
                    {
                      CanCombineWithStartFirstPair = Normalization__CanCombineWithStartFirstPair(
                                                       a1,
                                                       (unsigned int)&v41,
                                                       (unsigned int)&v39,
                                                       v9,
                                                       v13);
LABEL_68:
                      if ( CanCombineWithStartFirstPair )
                        goto LABEL_29;
                      goto LABEL_69;
                    }
                    goto LABEL_66;
                  }
                  if ( v17 < *(_BYTE *)(a1 + 114) )
                  {
LABEL_66:
                    v23 = Normalization__GetFirstDecomposedCharPlane0(a1, v9);
                    v39 = v23;
LABEL_67:
                    CanCombineWithStartFirstPair = Normalization__CanCombinableCharactersCombine(
                                                     a1,
                                                     v23,
                                                     (unsigned int)v13);
                    goto LABEL_68;
                  }
                  if ( v17 == *(_BYTE *)(a1 + 115) )
                  {
                    v39 = Normalization__GetFirstDecomposedCharPlane0(a1, v9);
                    SecondDecomposedCharPlane0 = Normalization__GetSecondDecomposedCharPlane0(a1, v9);
                    v23 = Normalization__CanCombinableCharactersCombine(a1, v39, SecondDecomposedCharPlane0);
                    v41 = v23;
                    goto LABEL_67;
                  }
                }
              }
LABEL_69:
              v40 = v9;
              v12 = v10;
              v42 = v10;
              v37 = v11;
              goto LABEL_20;
            }
            if ( (_DWORD)v13 || v43 > 1 )
              return 3221227287LL;
LABEL_22:
            *a4 = 1;
            return 0LL;
          }
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
          v4 = v43;
        }
LABEL_35:
        v10 = 0;
        v11 = 0;
        goto LABEL_21;
      }
      if ( (int)v13 >= 44032 )
        break;
      if ( v4 > 1 && (unsigned __int8)CanComposeHangul((unsigned int)v13, v5[1]) )
        goto LABEL_29;
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || (unsigned int)(v13 - 4447) > 1 )
        goto LABEL_27;
LABEL_105:
      v14 = -5;
    }
    if ( (int)v13 < 55204 )
      break;
    if ( (unsigned int)(v13 - 55216) > 0x16 && (unsigned int)(v13 - 55243) > 0x30 )
      goto LABEL_105;
LABEL_27:
    v14 = 0;
  }
  if ( *(_BYTE *)(a1 + 112) != 1 && (v4 <= 1 || !(unsigned __int8)CanComposeHangul((unsigned int)v13, v5[1])) )
    goto LABEL_35;
LABEL_29:
  *a4 = 0;
  return 0LL;
}
