/*
 * XREFs of Normalization__NormalizeCharacter @ 0x1800B4EFC
 * Callers:
 *     Normalization__Normalize @ 0x1800B4B80 (Normalization__Normalize.c)
 *     Normalization__AppendDecomposedChar @ 0x1800B5854 (Normalization__AppendDecomposedChar.c)
 * Callees:
 *     NormBuffer__AppendEx @ 0x1800B5788 (NormBuffer__AppendEx.c)
 *     NormBuffer__Append @ 0x1800B57E0 (NormBuffer__Append.c)
 *     Normalization__AppendDecomposedChar @ 0x1800B5854 (Normalization__AppendDecomposedChar.c)
 *     NormBuffer__GetLastChar @ 0x1800B5F0C (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1800B608C (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x1800B60BC (NormBuffer__IsBlocked.c)
 *     IsHangulLV @ 0x1800B6148 (IsHangulLV.c)
 *     ComposeHangulLVT @ 0x1800B6184 (ComposeHangulLVT.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x1800B61BC (Normalization__CanCombinableCharactersCombine.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1800B6324 (NormBuffer__RewindOutputCharacter.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1800B63B4 (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1800B6434 (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1800B64F8 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__LastStartBasePair @ 0x18011BE04 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__LastStartBase @ 0x18011C7B4 (NormBuffer__LastStartBase.c)
 *     ComposeHangulLV @ 0x18011CF5C (ComposeHangulLV.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r12
  unsigned int v8; // r14d
  int v9; // edx
  char v10; // r15
  unsigned __int8 v11; // bp
  char v13; // al
  unsigned __int16 *v14; // r10
  __int64 v15; // rdx
  __int64 v16; // r10
  char v17; // al
  __int64 v18; // rdx
  unsigned __int8 v19; // r12
  char v20; // cl
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // r9
  __int64 v26; // r8
  char v27; // di
  char v28; // di
  char v29; // al
  signed int v30; // r14d
  unsigned __int16 v31; // di
  unsigned __int16 v32; // si
  unsigned int v33; // eax
  unsigned __int8 v34; // r12
  int v35; // eax
  unsigned int StartBasePair; // eax
  int CanCombinableCharactersCombine; // eax
  __int64 v38; // rdx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  unsigned __int16 *v41; // rax
  int v42; // ecx
  unsigned int StartBase; // eax
  unsigned int v44; // eax
  __int64 v45; // r9
  __int64 v46; // r8
  char v47; // di
  bool v48; // zf
  unsigned int v49; // eax
  char v50; // dl
  unsigned int LastChar; // eax
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // r10
  unsigned __int64 v56; // r8
  unsigned __int8 v57; // r9
  __int64 v58; // rax
  unsigned __int16 *v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  unsigned __int16 *v62; // r10
  __int64 v63; // rdx
  unsigned int v64; // eax
  __int64 v65; // r10
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  unsigned int v72; // r9d
  unsigned int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // r8
  unsigned int v76; // r9d

  v4 = a4;
  v5 = a3;
LABEL_2:
  while ( 2 )
  {
    v8 = a2;
    if ( !v5 )
      goto LABEL_29;
    while ( 1 )
    {
      switch ( v5 )
      {
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
          v13 = NormBuffer__Append(v4, a2);
          goto LABEL_14;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, v4);
      }
      if ( v5 == 254 )
        break;
      if ( v5 != 255 )
      {
        v9 = *(unsigned __int8 *)((a2 & 0x7F) + ((unsigned __int64)v5 << 7) + *(_QWORD *)(a1 + 40) - 128);
        if ( !(_BYTE)v9 )
          goto LABEL_13;
        v10 = v9 & 0xC0;
        v11 = v9 & 0x3F;
        if ( (v9 & 0x3F) != 0 && v11 != 63 )
        {
          if ( (v9 & 0x80) == 0 )
          {
            LOBYTE(a4) = v9 & 0xC0;
            LOBYTE(a3) = v9 & 0x3F;
            if ( (unsigned __int8)NormBuffer__AppendEx(v4, a2, a3, a4) )
            {
              *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
              *(_DWORD *)(v4 + 88) = a2;
              *(_BYTE *)(v4 + 92) = v11;
              *(_BYTE *)(v4 + 93) = v10;
              return 0LL;
            }
            return 3221225507LL;
          }
          NormBuffer__GetLastChar(v4);
          v19 = *(_BYTE *)(v4 + 72);
          if ( !v19 || v19 == 63 || (v20 = *(_BYTE *)(v4 + 73), (v20 & 0xBF) == 0) )
          {
            v20 = *(_BYTE *)(v4 + 73);
            *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 64) + 2LL;
            *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
            *(_BYTE *)(v4 + 92) = v19;
            *(_BYTE *)(v4 + 93) = v20;
            *(_QWORD *)(v4 + 96) = 0LL;
          }
          if ( v10 == (char)0x80 || (((*(_BYTE *)(v4 + 93) | *(_BYTE *)(v4 + 92)) + 64) & 0xBF) == 0 )
          {
            LOBYTE(v18) = v11;
            NormBuffer__IsBlocked(v4, v18);
            goto LABEL_36;
          }
          if ( !v19 || v19 == 63 )
          {
            CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                               a1,
                                               *(unsigned int *)(v4 + 88),
                                               a2);
            a4 = CanCombinableCharactersCombine;
            if ( CanCombinableCharactersCombine )
            {
              NormBuffer__RewindOutputCharacter(v4, v38, a3, CanCombinableCharactersCombine);
              a3 = a4 & 0x7F;
              a2 = a4;
              v39 = *(_QWORD *)(a1 + 40);
              v40 = a3 + ((unsigned __int64)*(unsigned __int8 *)((a4 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
              v10 = *(_BYTE *)(v40 + v39 - 128) & 0xC0;
              v11 = *(_BYTE *)(v40 + v39 - 128) & 0x3F;
            }
            goto LABEL_39;
          }
          if ( !v20 )
            goto LABEL_50;
          if ( v20 != 64 )
          {
            LOBYTE(v18) = v11;
            if ( (unsigned __int8)NormBuffer__IsBlocked(v4, v18) )
              goto LABEL_36;
            v34 = *(_BYTE *)(v4 + 92);
            if ( !v34 || v34 == 63 || *(_BYTE *)(v4 + 93) == 64 )
            {
              v35 = Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2);
              if ( !v35 )
              {
                if ( v34 && v34 != 63 )
                  goto LABEL_73;
LABEL_36:
                LOBYTE(v22) = v10;
                LOBYTE(v21) = v11;
                v17 = NormBuffer__InsertAtBlockedLocation(v4, a2, v21, v22);
LABEL_30:
                if ( v17 )
                  return 0LL;
                return 3221225507LL;
              }
              v50 = *(_BYTE *)((v35 & 0x7F)
                             + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v35 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                             + *(_QWORD *)(a1 + 40)
                             - 128);
              *(_WORD *)(*(_QWORD *)(v4 + 80) - 2LL) = v35;
              *(_DWORD *)(v4 + 88) = v35;
              *(_BYTE *)(v4 + 93) = v50 & 0xC0;
              v48 = (v50 & 0xC0) == 64;
              *(_BYTE *)(v4 + 92) = v50 & 0x3F;
LABEL_103:
              if ( v48 )
                NormBuffer__RecheckStartCombinations(v4);
              return 0LL;
            }
LABEL_73:
            if ( v34 <= v11 )
              goto LABEL_36;
            if ( v34 == *(_BYTE *)(a1 + 116) )
            {
              if ( v11 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v11 != *(_BYTE *)(a1 + 115) )
                  goto LABEL_36;
                goto LABEL_77;
              }
LABEL_92:
              StartBase = NormBuffer__LastStartBase(v4);
              v44 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
              if ( !v44 )
                goto LABEL_36;
LABEL_93:
              v45 = v44 & 0x7F;
              v46 = v45 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v44 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
              v47 = *(_BYTE *)(v46 + *(_QWORD *)(a1 + 40) - 128);
              LOBYTE(v46) = v47 & 0x3F;
              v28 = v47 & 0xC0;
              LOBYTE(v45) = v28;
              v29 = NormBuffer__ReplaceLastStartBase(v4, v44, v46, v45);
LABEL_94:
              if ( !v29 )
                return 3221225507LL;
              v48 = v28 == 64;
              goto LABEL_103;
            }
            if ( v34 != *(_BYTE *)(a1 + 118) || v11 != *(_BYTE *)(a1 + 117) )
              goto LABEL_92;
LABEL_77:
            StartBasePair = NormBuffer__LastStartBasePair(v4);
            v24 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, v8);
            if ( !v24 )
              goto LABEL_36;
LABEL_55:
            v25 = v24 & 0x7F;
            v26 = v25 + ((unsigned __int64)*(unsigned __int8 *)(((__int64)(int)v24 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
            v27 = *(_BYTE *)(v26 + *(_QWORD *)(a1 + 40) - 128);
            LOBYTE(v26) = v27 & 0x3F;
            v28 = v27 & 0xC0;
            LOBYTE(v25) = v28;
            v29 = NormBuffer__ReplaceLastStartBasePair(v4, v24, v26, v25);
            goto LABEL_94;
          }
          if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(unsigned int *)(v4 + 88), a2) )
          {
            NormBuffer__RewindOutputCharacter(v4, v54, a3, a4);
            v56 = (v55 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v55 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
            v57 = *(_BYTE *)(v56 + *(_QWORD *)(a1 + 40) - 128);
            LOBYTE(v56) = v57 & 0x3F;
            if ( (unsigned __int8)NormBuffer__AppendEx(v4, (unsigned int)v55, v56, v57 & 0xC0) )
            {
              v58 = *(_QWORD *)(v4 + 64);
              *(_QWORD *)(v4 + 96) = 0LL;
              *(_QWORD *)(v4 + 80) = v58 + 2;
              *(_DWORD *)(v4 + 88) = *(_DWORD *)(v4 + 56);
              *(_BYTE *)(v4 + 92) = *(_BYTE *)(v4 + 72);
              *(_BYTE *)(v4 + 93) = *(_BYTE *)(v4 + 73);
              return 0LL;
            }
            return 3221225507LL;
          }
LABEL_50:
          if ( v19 > v11 )
          {
            if ( v19 == *(_BYTE *)(a1 + 116) )
            {
              if ( v11 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v11 == *(_BYTE *)(a1 + 115) )
                {
LABEL_54:
                  v23 = NormBuffer__LastStartBasePair(v4);
                  v24 = Normalization__CanCombinableCharactersCombine(a1, v23, v8);
                  if ( v24 )
                    goto LABEL_55;
                }
                goto LABEL_39;
              }
            }
            else if ( v19 == *(_BYTE *)(a1 + 118) && v11 == *(_BYTE *)(a1 + 117) )
            {
              goto LABEL_54;
            }
            v49 = NormBuffer__LastStartBase(v4);
            v44 = Normalization__CanCombinableCharactersCombine(a1, v49, a2);
            if ( v44 )
              goto LABEL_93;
          }
LABEL_39:
          LOBYTE(a4) = v10;
          LOBYTE(a3) = v11;
          v17 = NormBuffer__AppendEx(v4, a2, a3, a4);
          goto LABEL_30;
        }
        if ( v9 == 127 )
        {
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
LABEL_13:
          v13 = NormBuffer__AppendEx(v4, a2, 0LL, 0LL);
LABEL_14:
          if ( !v13 )
            return 3221225507LL;
          *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
          *(_DWORD *)(v4 + 88) = a2;
          goto LABEL_16;
        }
        if ( v9 == 191 )
          return Normalization__AppendDecomposedChar(a1, a2, v4);
        if ( v9 != 192 )
        {
          if ( v9 == 255 && (a2 || *(_QWORD *)(v4 + 16) != *(_QWORD *)(v4 + 8)) )
            return 3221227287LL;
          goto LABEL_39;
        }
        LastChar = NormBuffer__GetLastChar(v4);
        v52 = Normalization__CanCombinableCharactersCombine(a1, LastChar, a2);
        a4 = v52;
        if ( !v52 )
          goto LABEL_39;
        NormBuffer__RewindOutputCharacter(v4, v53, a3, v52);
        a2 = a4;
        goto LABEL_2;
      }
      if ( (int)a2 >= 44032 )
      {
        if ( (int)a2 >= 55204 )
        {
          if ( v8 - 55216 <= 0x16 || (v5 = -5, v8 - 55243 <= 0x30) )
            v5 = 0;
          a2 = v8;
          goto LABEL_2;
        }
        if ( *(_BYTE *)(a1 + 112) != 1 )
        {
          a2 = v8;
          if ( !(unsigned __int8)IsHangulLV(v8, v5, a3, a4) )
            goto LABEL_29;
          v14 = *(unsigned __int16 **)(v4 + 16);
          if ( v14 == *(unsigned __int16 **)(v4 + 8) )
            goto LABEL_29;
          v15 = *v14;
          *(_QWORD *)(v4 + 16) = v14 + 1;
          a2 = ComposeHangulLVT(v8, v15);
          if ( a2 )
            goto LABEL_29;
          *(_QWORD *)(v4 + 16) = v16;
          goto LABEL_28;
        }
        v30 = v8 - 44032;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, (unsigned __int16)(v30 / 588 + 4352), 0LL, 0LL) )
          return 3221225507LL;
        v31 = v30 % 588 / 28 + 4449;
        if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v31, 0LL, 0LL) )
          return 3221225507LL;
        v32 = (unsigned __int16)(v30 % 28) != 0 ? v30 % 28 + 4519 : 0;
        if ( v32 )
        {
          if ( !(unsigned __int8)NormBuffer__AppendEx(v4, v32, 0LL, 0LL) )
            return 3221225507LL;
          v31 = (unsigned __int16)(v30 % 28) != 0 ? v30 % 28 + 4519 : 0;
        }
        *(_QWORD *)(v4 + 80) = *(_QWORD *)(v4 + 40);
        *(_DWORD *)(v4 + 88) = v31;
LABEL_16:
        *(_WORD *)(v4 + 92) = 0;
        return 0LL;
      }
      v33 = a2 - 4352;
      a2 = v8;
      if ( v33 <= 0x12 )
      {
        v59 = *(unsigned __int16 **)(v4 + 16);
        if ( v59 == *(unsigned __int16 **)(v4 + 8) )
          goto LABEL_29;
        v60 = *v59;
        *(_QWORD *)(v4 + 16) = v59 + 1;
        a2 = ComposeHangulLV(v8, v60);
        if ( a2 )
        {
          if ( v62 != *(unsigned __int16 **)(v4 + 8) )
          {
            v63 = *v62;
            *(_QWORD *)(v4 + 16) = v62 + 1;
            v64 = ComposeHangulLVT(a2, v63);
            if ( v64 )
              goto LABEL_125;
            *(_QWORD *)(v4 + 16) = v65;
          }
          goto LABEL_29;
        }
        *(_QWORD *)(v4 + 16) = v61;
LABEL_28:
        a2 = v8;
        goto LABEL_29;
      }
      if ( v8 - 4449 <= 0x14 )
      {
        v73 = NormBuffer__GetLastChar(v4);
        if ( v73 - 4352 <= 0x12 )
        {
          NormBuffer__RewindOutputCharacter(v4, v74, v75, v73);
          v64 = ComposeHangulLV(v76, v8);
LABEL_125:
          a2 = v64;
        }
LABEL_29:
        v17 = NormBuffer__Append(v4, a2);
        goto LABEL_30;
      }
      if ( v8 - 4520 <= 0x1A )
      {
        v66 = NormBuffer__GetLastChar(v4);
        if ( (unsigned __int8)IsHangulLV(v66, v67, v68, v66) )
        {
          NormBuffer__RewindOutputCharacter(v4, v69, v70, v71);
          v64 = ComposeHangulLVT(v72, v8);
          goto LABEL_125;
        }
        goto LABEL_29;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || v8 - 4447 > 1 )
      {
        v5 = 0;
        goto LABEL_2;
      }
      v5 = -5;
    }
    v41 = *(unsigned __int16 **)(v4 + 16);
    if ( v41 != *(unsigned __int16 **)(v4 + 8) )
    {
      v42 = *v41;
      *(_QWORD *)(v4 + 16) = v41 + 1;
      if ( (unsigned __int16)(v42 + 9216) <= 0x3FFu )
      {
        a2 = v42 + ((a2 - 55287) << 10);
        v5 = *(_BYTE *)(((__int64)(int)a2 >> 7) + *(_QWORD *)(a1 + 32));
        continue;
      }
    }
    return 3221227287LL;
  }
}
