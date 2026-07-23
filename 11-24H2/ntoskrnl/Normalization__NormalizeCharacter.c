/*
 * XREFs of Normalization__NormalizeCharacter @ 0x140786414
 * Callers:
 *     Normalization__AppendDecomposedChar @ 0x140785500 (Normalization__AppendDecomposedChar.c)
 *     Normalization__Normalize @ 0x140786250 (Normalization__Normalize.c)
 * Callees:
 *     ComposeHangulLV @ 0x1405ECAF8 (ComposeHangulLV.c)
 *     ComposeHangulLVT @ 0x1405ECB28 (ComposeHangulLVT.c)
 *     IsHangulLV @ 0x1405ECB60 (IsHangulLV.c)
 *     NormBuffer__Append @ 0x1405ECB98 (NormBuffer__Append.c)
 *     NormBuffer__AppendEx @ 0x1405ECC58 (NormBuffer__AppendEx.c)
 *     NormBuffer__GetLastChar @ 0x1405ECCF8 (NormBuffer__GetLastChar.c)
 *     NormBuffer__InsertAtBlockedLocation @ 0x1405ECE50 (NormBuffer__InsertAtBlockedLocation.c)
 *     NormBuffer__IsBlocked @ 0x1405ECE7C (NormBuffer__IsBlocked.c)
 *     NormBuffer__LastStartBase @ 0x1405ECEF4 (NormBuffer__LastStartBase.c)
 *     NormBuffer__LastStartBasePair @ 0x1405ECF20 (NormBuffer__LastStartBasePair.c)
 *     NormBuffer__RecheckStartCombinations @ 0x1405ECF70 (NormBuffer__RecheckStartCombinations.c)
 *     NormBuffer__ReplaceLastStartBase @ 0x1405ED0BC (NormBuffer__ReplaceLastStartBase.c)
 *     NormBuffer__ReplaceLastStartBasePair @ 0x1405ED13C (NormBuffer__ReplaceLastStartBasePair.c)
 *     NormBuffer__RewindOutputCharacter @ 0x1405ED1B4 (NormBuffer__RewindOutputCharacter.c)
 *     Normalization__AppendDecomposedChar @ 0x140785500 (Normalization__AppendDecomposedChar.c)
 *     Normalization__CanCombinableCharactersCombine @ 0x14078560C (Normalization__CanCombinableCharactersCombine.c)
 */

__int64 __fastcall Normalization__NormalizeCharacter(__int64 a1, int a2, unsigned __int8 a3, __int64 a4)
{
  unsigned int v8; // r14d
  unsigned int v9; // eax
  int v10; // edx
  char v11; // r15
  unsigned __int8 v12; // bp
  int LastChar; // eax
  int v14; // r9d
  unsigned __int16 *v15; // rax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // r9d
  int v19; // eax
  int v20; // r9d
  char v21; // al
  unsigned __int16 *v23; // r8
  int v24; // edx
  __int64 v25; // r8
  unsigned __int16 *v26; // r9
  unsigned __int16 *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // r10
  unsigned __int16 *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // r10
  signed int v33; // r14d
  unsigned __int16 v34; // di
  __int64 v35; // rcx
  unsigned __int16 v36; // si
  unsigned __int8 v37; // r12
  char v38; // dl
  unsigned __int8 v39; // r12
  int CanCombinableCharactersCombine; // eax
  char v41; // dl
  bool v42; // zf
  int StartBasePair; // eax
  int v44; // eax
  int StartBase; // eax
  int v46; // eax
  __int64 v47; // r10
  char v48; // r9
  __int64 v49; // rax
  int v50; // eax
  char v51; // di
  char v52; // r8
  char v53; // di
  char v54; // al
  int v55; // eax
  char v56; // di
  char v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  unsigned __int64 v60; // rdx
  char v61; // al

LABEL_1:
  while ( 2 )
  {
    v8 = a2;
    if ( !a3 )
      goto LABEL_36;
    while ( 1 )
    {
      switch ( a3 )
      {
        case 0xFBu:
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
          v61 = NormBuffer__Append(a4, a2);
          goto LABEL_119;
        case 0xFCu:
          return 3221227287LL;
        case 0xFDu:
          return Normalization__AppendDecomposedChar(a1, a2, a4);
      }
      if ( a3 == 254 )
        break;
      if ( a3 != 255 )
      {
        v10 = *(unsigned __int8 *)((a2 & 0x7F) + ((unsigned __int64)a3 << 7) + *(_QWORD *)(a1 + 40) - 128);
        if ( !(_BYTE)v10 )
        {
LABEL_118:
          v61 = NormBuffer__AppendEx(a4, a2, 0, 0);
LABEL_119:
          if ( !v61 )
            return 3221225507LL;
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = a2;
          goto LABEL_57;
        }
        v11 = v10 & 0xC0;
        v12 = v10 & 0x3F;
        if ( (v10 & 0x3F) == 0 || v12 == 63 )
        {
          if ( v10 != 127 )
          {
            if ( v10 == 191 )
              return Normalization__AppendDecomposedChar(a1, a2, a4);
            if ( v10 == 192 )
            {
              LastChar = NormBuffer__GetLastChar(a4);
              if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, LastChar, a2) )
              {
                NormBuffer__RewindOutputCharacter(a4);
                a2 = v14;
                goto LABEL_1;
              }
            }
            else if ( v10 == 255 && (a2 || *(_QWORD *)(a4 + 16) != *(_QWORD *)(a4 + 8)) )
            {
              return 3221227287LL;
            }
            goto LABEL_97;
          }
          if ( !*(_BYTE *)(a1 + 113) )
            return 3221227287LL;
          goto LABEL_118;
        }
        if ( (v10 & 0x80) == 0 )
        {
          if ( !NormBuffer__AppendEx(a4, a2, v10 & 0x3F, v10 & 0xC0) )
            return 3221225507LL;
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = a2;
          *(_BYTE *)(a4 + 92) = v12;
          *(_BYTE *)(a4 + 93) = v11;
          return 0LL;
        }
        NormBuffer__GetLastChar(a4);
        v37 = *(_BYTE *)(a4 + 72);
        if ( !v37 || v37 == 63 || (v38 = *(_BYTE *)(a4 + 73), (v38 & 0xBF) == 0) )
        {
          v38 = *(_BYTE *)(a4 + 73);
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 64) + 2LL;
          *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
          *(_BYTE *)(a4 + 92) = v37;
          *(_BYTE *)(a4 + 93) = v38;
          *(_QWORD *)(a4 + 96) = 0LL;
        }
        if ( v11 == (char)0x80 || (((*(_BYTE *)(a4 + 92) | *(_BYTE *)(a4 + 93)) + 64) & 0xBF) == 0 )
        {
          NormBuffer__IsBlocked((_QWORD *)a4);
          goto LABEL_71;
        }
        if ( !v37 || v37 == 63 )
        {
          if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
          {
            NormBuffer__RewindOutputCharacter(a4);
            a2 = v58;
            v59 = *(_QWORD *)(a1 + 40);
            v60 = (v58 & 0x7F) + ((unsigned __int64)*(unsigned __int8 *)((v58 >> 7) + *(_QWORD *)(a1 + 32)) << 7);
            v11 = *(_BYTE *)(v60 + v59 - 128) & 0xC0;
            v12 = *(_BYTE *)(v60 + v59 - 128) & 0x3F;
          }
          goto LABEL_97;
        }
        if ( v38 )
        {
          if ( v38 != 64 )
          {
            if ( NormBuffer__IsBlocked((_QWORD *)a4) )
            {
LABEL_71:
              v21 = NormBuffer__InsertAtBlockedLocation((_QWORD *)a4, a2, v12, v11);
              goto LABEL_37;
            }
            v39 = *(_BYTE *)(a4 + 92);
            if ( !v39 || v39 == 63 || *(_BYTE *)(a4 + 93) == 64 )
            {
              CanCombinableCharactersCombine = Normalization__CanCombinableCharactersCombine(
                                                 a1,
                                                 *(_DWORD *)(a4 + 88),
                                                 a2);
              if ( CanCombinableCharactersCombine )
              {
                v41 = *(_BYTE *)((CanCombinableCharactersCombine & 0x7F)
                               + ((unsigned __int64)*(unsigned __int8 *)(((__int64)CanCombinableCharactersCombine >> 7)
                                                                       + *(_QWORD *)(a1 + 32)) << 7)
                               + *(_QWORD *)(a1 + 40)
                               - 128);
                *(_WORD *)(*(_QWORD *)(a4 + 80) - 2LL) = CanCombinableCharactersCombine;
                *(_DWORD *)(a4 + 88) = CanCombinableCharactersCombine;
                *(_BYTE *)(a4 + 93) = v41 & 0xC0;
                v42 = (v41 & 0xC0) == 64;
                *(_BYTE *)(a4 + 92) = v41 & 0x3F;
LABEL_106:
                if ( v42 )
                  NormBuffer__RecheckStartCombinations(a4);
                return 0LL;
              }
              if ( !v39 || v39 == 63 )
                goto LABEL_71;
            }
            if ( v39 <= v12 )
              goto LABEL_71;
            if ( v39 == *(_BYTE *)(a1 + 116) )
            {
              if ( v12 >= *(_BYTE *)(a1 + 114) )
              {
                if ( v12 != *(_BYTE *)(a1 + 115) )
                  goto LABEL_71;
                goto LABEL_86;
              }
            }
            else if ( v39 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
            {
LABEL_86:
              StartBasePair = NormBuffer__LastStartBasePair(a4);
              v44 = Normalization__CanCombinableCharactersCombine(a1, StartBasePair, v8);
              if ( !v44 )
                goto LABEL_71;
              goto LABEL_101;
            }
            StartBase = NormBuffer__LastStartBase(a4);
            v46 = Normalization__CanCombinableCharactersCombine(a1, StartBase, a2);
            if ( !v46 )
              goto LABEL_71;
LABEL_103:
            v56 = *(_BYTE *)((v46 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v46 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            v57 = v56 & 0x3F;
            v53 = v56 & 0xC0;
            v54 = NormBuffer__ReplaceLastStartBase(a4, v46, v57, v53);
            goto LABEL_104;
          }
          if ( (unsigned int)Normalization__CanCombinableCharactersCombine(a1, *(_DWORD *)(a4 + 88), a2) )
          {
            NormBuffer__RewindOutputCharacter(a4);
            v48 = *(_BYTE *)((v47 & 0x7F)
                           + ((unsigned __int64)*(unsigned __int8 *)((v47 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                           + *(_QWORD *)(a1 + 40)
                           - 128);
            if ( !NormBuffer__AppendEx(a4, v47, v48 & 0x3F, v48 & 0xC0) )
              return 3221225507LL;
            v49 = *(_QWORD *)(a4 + 64);
            *(_QWORD *)(a4 + 96) = 0LL;
            *(_QWORD *)(a4 + 80) = v49 + 2;
            *(_DWORD *)(a4 + 88) = *(_DWORD *)(a4 + 56);
            *(_BYTE *)(a4 + 92) = *(_BYTE *)(a4 + 72);
            *(_BYTE *)(a4 + 93) = *(_BYTE *)(a4 + 73);
            return 0LL;
          }
        }
        if ( v37 > v12 )
        {
          if ( v37 == *(_BYTE *)(a1 + 116) )
          {
            if ( v12 >= *(_BYTE *)(a1 + 114) )
            {
              if ( v12 != *(_BYTE *)(a1 + 115) )
                goto LABEL_97;
              goto LABEL_100;
            }
          }
          else if ( v37 == *(_BYTE *)(a1 + 118) && v12 == *(_BYTE *)(a1 + 117) )
          {
LABEL_100:
            v50 = NormBuffer__LastStartBasePair(a4);
            v44 = Normalization__CanCombinableCharactersCombine(a1, v50, v8);
            if ( v44 )
            {
LABEL_101:
              v51 = *(_BYTE *)((v44 & 0x7F)
                             + ((unsigned __int64)*(unsigned __int8 *)(((__int64)v44 >> 7) + *(_QWORD *)(a1 + 32)) << 7)
                             + *(_QWORD *)(a1 + 40)
                             - 128);
              v52 = v51 & 0x3F;
              v53 = v51 & 0xC0;
              v54 = NormBuffer__ReplaceLastStartBasePair(a4, v44, v52, v53);
LABEL_104:
              if ( !v54 )
                return 3221225507LL;
              v42 = v53 == 64;
              goto LABEL_106;
            }
            goto LABEL_97;
          }
          v55 = NormBuffer__LastStartBase(a4);
          v46 = Normalization__CanCombinableCharactersCombine(a1, v55, a2);
          if ( v46 )
            goto LABEL_103;
        }
LABEL_97:
        v21 = NormBuffer__AppendEx(a4, a2, v12, v11);
LABEL_37:
        if ( !v21 )
          return 3221225507LL;
        return 0LL;
      }
      if ( a2 >= 44032 )
      {
        if ( a2 < 55204 )
        {
          if ( *(_BYTE *)(a1 + 112) != 1 )
          {
            a2 = v8;
            if ( !IsHangulLV(v8) )
              goto LABEL_36;
            v30 = *(unsigned __int16 **)(a4 + 16);
            if ( v30 == *(unsigned __int16 **)(a4 + 8) )
              goto LABEL_36;
            v31 = *v30;
            *(_QWORD *)(a4 + 16) = v30 + 1;
            a2 = ComposeHangulLVT(v8, v31);
            if ( a2 )
              goto LABEL_36;
            *(_QWORD *)(a4 + 16) = v32;
            goto LABEL_50;
          }
          v33 = v8 - 44032;
          if ( !NormBuffer__AppendEx(a4, (unsigned __int16)(v33 / 588 + 4352), 0, 0) )
            return 3221225507LL;
          v34 = v33 % 588 / 28 + 4449;
          if ( !NormBuffer__AppendEx(a4, v34, 0, 0) )
            return 3221225507LL;
          v36 = (unsigned __int16)(v33 % 28) != 0 ? v33 % 28 + 4519 : 0;
          if ( v36 )
          {
            if ( !NormBuffer__AppendEx(v35, v36, 0, 0) )
              return 3221225507LL;
            v34 = (unsigned __int16)(v33 % 28) != 0 ? v33 % 28 + 4519 : 0;
          }
          *(_QWORD *)(a4 + 80) = *(_QWORD *)(a4 + 40);
          *(_DWORD *)(a4 + 88) = v34;
LABEL_57:
          *(_WORD *)(a4 + 92) = 0;
          return 0LL;
        }
        if ( v8 - 55216 <= 0x16 || (a3 = -5, v8 - 55243 <= 0x30) )
          a3 = 0;
        a2 = v8;
        goto LABEL_1;
      }
      v9 = a2 - 4352;
      a2 = v8;
      if ( v9 <= 0x12 )
      {
        v23 = *(unsigned __int16 **)(a4 + 16);
        if ( v23 == *(unsigned __int16 **)(a4 + 8) )
        {
LABEL_36:
          v21 = NormBuffer__Append(a4, a2);
          goto LABEL_37;
        }
        v24 = *v23;
        *(_QWORD *)(a4 + 16) = v23 + 1;
        a2 = ComposeHangulLV(v8, v24);
        if ( a2 )
        {
          if ( v27 != v26 )
          {
            v28 = *v27;
            *(_QWORD *)(a4 + 16) = v27 + 1;
            v19 = ComposeHangulLVT((unsigned int)a2, v28);
            if ( v19 )
            {
LABEL_35:
              a2 = v19;
              goto LABEL_36;
            }
            *(_QWORD *)(a4 + 16) = v29;
          }
          goto LABEL_36;
        }
        *(_QWORD *)(a4 + 16) = v25;
LABEL_50:
        a2 = v8;
        goto LABEL_36;
      }
      if ( v8 - 4449 <= 0x14 )
      {
        if ( (unsigned int)NormBuffer__GetLastChar(a4) - 4352 > 0x12 )
          goto LABEL_36;
        NormBuffer__RewindOutputCharacter(a4);
        v19 = ComposeHangulLV(v20, v8);
        goto LABEL_35;
      }
      if ( v8 - 4520 <= 0x1A )
      {
        v17 = NormBuffer__GetLastChar(a4);
        if ( !IsHangulLV(v17) )
          goto LABEL_36;
        NormBuffer__RewindOutputCharacter(a4);
        v19 = ComposeHangulLVT(v18, v8);
        goto LABEL_35;
      }
      if ( ((*(_DWORD *)a1 - 13) & 0xFFFFFEFF) != 0 || v8 - 4447 > 1 )
      {
        a3 = 0;
        goto LABEL_1;
      }
      a3 = -5;
    }
    v15 = *(unsigned __int16 **)(a4 + 16);
    if ( v15 != *(unsigned __int16 **)(a4 + 8) )
    {
      v16 = *v15;
      *(_QWORD *)(a4 + 16) = v15 + 1;
      if ( (unsigned __int16)(v16 + 9216) <= 0x3FFu )
      {
        a2 = v16 + ((a2 - 55287) << 10);
        a3 = *(_BYTE *)(((__int64)a2 >> 7) + *(_QWORD *)(a1 + 32));
        continue;
      }
    }
    return 3221227287LL;
  }
}
