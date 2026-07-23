/*
 * XREFs of CmpFindSubKeyInLeafWithStatus @ 0x1408777E0
 * Callers:
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpAddToLeaf @ 0x140887458 (CmpAddToLeaf.c)
 *     CmpRemoveSubKeyFromList @ 0x140A13FA8 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140A1D6C0 (CmpMarkIndexDirtyInStorageType.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpDoCompareKeyName @ 0x1408789C0 (CmpDoCompareKeyName.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpFindSubKeyInLeafWithStatus(
        ULONG_PTR BugCheckParameter3,
        __int16 *a2,
        unsigned __int16 *a3,
        unsigned __int8 **a4,
        _DWORD *a5,
        unsigned int *a6)
{
  int v6; // eax
  unsigned __int16 *v7; // r15
  unsigned __int8 **v8; // r13
  __int16 *v9; // r12
  ULONG_PTR v10; // r9
  __int64 v11; // rbx
  __int16 v12; // cx
  _DWORD *v13; // r14
  __int16 *v14; // r14
  unsigned int v15; // esi
  unsigned int n; // eax
  unsigned int v17; // eax
  unsigned int v18; // r11d
  unsigned __int16 v19; // r8
  unsigned int v20; // r9d
  int v21; // r10d
  unsigned int v22; // eax
  int v23; // r10d
  struct _LIST_ENTRY *v24; // r8
  unsigned int v25; // r9d
  unsigned __int16 v26; // r8
  struct _LIST_ENTRY *Flink; // r10
  int v28; // edx
  unsigned int v29; // r8d
  unsigned int v30; // edx
  bool v31; // zf
  ULONG_PTR v32; // rdx
  __int64 CellFlat; // rax
  unsigned __int8 *v34; // r13
  unsigned __int16 v35; // di
  WCHAR *v36; // r12
  unsigned __int16 v37; // r15
  unsigned __int16 k; // di
  WCHAR v39; // si
  unsigned int v40; // r14d
  int v41; // esi
  int v42; // eax
  ULONG_PTR v43; // rdx
  __int64 CellPaged; // rax
  unsigned __int8 *v45; // r13
  unsigned __int16 v46; // di
  WCHAR *v47; // r12
  unsigned __int16 v48; // r15
  unsigned __int16 i; // di
  WCHAR v50; // si
  unsigned int v51; // r14d
  int v52; // esi
  int v53; // eax
  __int16 v54; // cx
  __int16 *v55; // r13
  unsigned int v56; // r14d
  unsigned int kk; // ecx
  unsigned __int8 **v58; // rbx
  unsigned int v59; // eax
  unsigned int v60; // edi
  __int64 v61; // r15
  WCHAR v62; // cx
  unsigned int v63; // esi
  int v64; // ebx
  int v65; // eax
  int v66; // ebx
  int v67; // edx
  ULONG_PTR v68; // r15
  __int16 v69; // cx
  unsigned int v70; // edx
  __int16 *v71; // r13
  unsigned int mm; // ecx
  unsigned __int8 **v73; // rbx
  unsigned int v74; // eax
  unsigned int v75; // edi
  WCHAR v76; // cx
  unsigned int v77; // esi
  int v78; // ebx
  int v79; // eax
  int v80; // ebx
  unsigned int v81; // edi
  int v82; // ecx
  __int64 v84; // r9
  __int16 *v85; // rbx
  unsigned __int16 *v86; // rdx
  int v87; // eax
  int v88; // eax
  int v89; // esi
  unsigned int *v90; // rax
  ULONG_PTR v91; // rdx
  __int64 v92; // rax
  const WCHAR *v93; // r12
  unsigned __int16 v94; // r14
  WCHAR *v95; // r15
  unsigned __int16 ii; // di
  WCHAR v97; // bx
  unsigned int v98; // esi
  int v99; // ebx
  ULONG_PTR v100; // rdx
  __int64 v101; // rax
  const WCHAR *v102; // r12
  unsigned __int16 v103; // si
  WCHAR *v104; // r15
  unsigned __int16 nn; // di
  WCHAR v106; // bx
  unsigned int v107; // r14d
  int v108; // ebx
  int v109; // esi
  int v110; // esi
  int v111; // ebx
  int v112; // ebx
  int v113; // eax
  int v114; // eax
  int v115; // eax
  int v116; // eax
  unsigned __int8 *v117; // r12
  unsigned __int16 v118; // r15
  unsigned __int16 m; // r14
  WCHAR v120; // di
  unsigned int v121; // esi
  unsigned __int8 *v122; // r12
  unsigned __int16 v123; // r15
  unsigned __int16 j; // r14
  WCHAR v125; // di
  unsigned int v126; // esi
  unsigned __int8 *v127; // r15
  unsigned __int16 v128; // r14
  unsigned __int16 jj; // si
  WCHAR v130; // bx
  unsigned int v131; // edi
  unsigned __int8 *v132; // r15
  unsigned __int16 v133; // r14
  unsigned __int16 i1; // si
  WCHAR v135; // bx
  unsigned int v136; // edi
  unsigned int v137; // [rsp+30h] [rbp-40h]
  unsigned int v138; // [rsp+34h] [rbp-3Ch]
  _DWORD v139[2]; // [rsp+38h] [rbp-38h] BYREF
  int v140; // [rsp+40h] [rbp-30h] BYREF
  int v141; // [rsp+44h] [rbp-2Ch]
  __int16 *v142; // [rsp+48h] [rbp-28h]
  __int64 v144; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int16 *v145; // [rsp+B0h] [rbp+40h]
  unsigned __int8 **v146; // [rsp+B8h] [rbp+48h]

  v146 = a4;
  v145 = a3;
  v144 = (__int64)a2;
  v6 = (unsigned __int16)a2[1];
  v7 = a3;
  v138 = 0;
  v8 = a4;
  v9 = a2;
  v10 = BugCheckParameter3;
  v137 = v6 - 1;
  v11 = (unsigned int)(v6 - 1) >> 1;
  if ( !(_WORD)v6 )
  {
    *a5 = -1;
    *a6 = 0;
    return 3221225524LL;
  }
  while ( 1 )
  {
    v12 = *v9;
    v13 = a5;
    *a5 = -1;
    if ( ((v12 - 26220) & 0xFDFF) != 0 )
    {
      v31 = (*(_BYTE *)(v10 + 140) & 1) == 0;
      v43 = *(unsigned int *)&v9[2 * v11 + 2];
      v139[0] = -1;
      v139[1] = 0;
      if ( v31 )
        CellPaged = HvpGetCellPaged(v10);
      else
        CellPaged = HvpGetCellFlat(v10, v43);
      if ( !CellPaged )
        goto LABEL_164;
      v45 = (unsigned __int8 *)(CellPaged + 76);
      if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
      {
        if ( !v146 )
        {
          v46 = *v7;
          v47 = (WCHAR *)*((_QWORD *)v7 + 1);
          v48 = *(_WORD *)(CellPaged + 72);
          for ( i = v46 >> 1; i && v48; --i )
          {
            v50 = *v47++;
            v51 = *v45++;
            if ( v50 != (_WORD)v51 )
            {
              if ( v50 >= 0x61u )
              {
                if ( v50 > 0x7Au )
                  v50 = RtlUpcaseUnicodeChar(v50);
                else
                  v50 -= 32;
              }
              if ( v51 >= 0x61 )
              {
                if ( v51 > 0x7A )
                  LOWORD(v51) = RtlUpcaseUnicodeChar(v51);
                else
                  LOWORD(v51) = v51 - 32;
              }
              v52 = v50 - (unsigned __int16)v51;
              if ( v52 )
                goto LABEL_239;
            }
            --v48;
          }
          v9 = (__int16 *)v144;
          v13 = a5;
          v53 = v48;
          v7 = v145;
          v52 = i - v53;
          goto LABEL_86;
        }
        v114 = CmpCompareTwoCompressedNames(v146[1], *(_WORD *)v146, v45, *(_WORD *)(CellPaged + 72));
      }
      else
      {
        if ( v146 )
        {
          v122 = v146[1];
          v123 = *(_WORD *)v146;
          for ( j = *(_WORD *)(CellPaged + 72) >> 1; j && v123; --j )
          {
            v125 = *(_WORD *)v45;
            v45 += 2;
            v126 = *v122++;
            if ( v125 != (_WORD)v126 )
            {
              if ( v125 >= 0x61u )
              {
                if ( v125 > 0x7Au )
                  v125 = RtlUpcaseUnicodeChar(v125);
                else
                  v125 -= 32;
              }
              if ( v126 >= 0x61 )
              {
                if ( v126 > 0x7A )
                  LOWORD(v126) = RtlUpcaseUnicodeChar(v126);
                else
                  LOWORD(v126) = v126 - 32;
              }
              v110 = v125 - (unsigned __int16)v126;
              if ( v110 )
                goto LABEL_238;
            }
            --v123;
          }
          v110 = j - v123;
LABEL_238:
          v52 = -v110;
LABEL_239:
          v9 = (__int16 *)v144;
          v7 = v145;
          v13 = a5;
LABEL_86:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v139);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v139);
          if ( !v52 )
          {
            v28 = 0;
            *v13 = *(_DWORD *)&v9[2 * v11 + 2];
            goto LABEL_36;
          }
          if ( v52 >= 0 )
            goto LABEL_66;
          goto LABEL_90;
        }
        v114 = RtlCompareUnicodeStrings(
                 *((PCWCH *)v7 + 1),
                 (unsigned __int64)*v7 >> 1,
                 (PCWCH)v45,
                 (unsigned __int64)*(unsigned __int16 *)(CellPaged + 72) >> 1,
                 1u);
        v13 = a5;
      }
      v52 = v114;
      goto LABEL_86;
    }
    v14 = &v9[4 * v11 + 2];
    v142 = v14;
    if ( v12 != 26220 )
    {
LABEL_44:
      v31 = (*(_BYTE *)(v10 + 140) & 1) == 0;
      v32 = *(unsigned int *)&v9[4 * v11 + 2];
      v7 = v145;
      v140 = -1;
      v141 = 0;
      if ( v31 )
        CellFlat = HvpGetCellPaged(v10);
      else
        CellFlat = HvpGetCellFlat(v10, v32);
      if ( !CellFlat )
        goto LABEL_233;
      v34 = (unsigned __int8 *)(CellFlat + 76);
      if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
      {
        if ( !v146 )
        {
          v35 = *v7;
          v36 = (WCHAR *)*((_QWORD *)v7 + 1);
          v37 = *(_WORD *)(CellFlat + 72);
          for ( k = v35 >> 1; k && v37; --k )
          {
            v39 = *v36++;
            v40 = *v34++;
            if ( v39 != (_WORD)v40 )
            {
              if ( v39 >= 0x61u )
              {
                if ( v39 > 0x7Au )
                  v39 = RtlUpcaseUnicodeChar(v39);
                else
                  v39 -= 32;
              }
              if ( v40 >= 0x61 )
              {
                if ( v40 > 0x7A )
                  LOWORD(v40) = RtlUpcaseUnicodeChar(v40);
                else
                  LOWORD(v40) = v40 - 32;
              }
              v41 = v39 - (unsigned __int16)v40;
              if ( v41 )
                goto LABEL_236;
            }
            --v37;
          }
          v9 = (__int16 *)v144;
          v14 = v142;
          v42 = v37;
          v7 = v145;
          v41 = k - v42;
          goto LABEL_62;
        }
        v113 = CmpCompareTwoCompressedNames(v146[1], *(_WORD *)v146, v34, *(_WORD *)(CellFlat + 72));
      }
      else
      {
        if ( v146 )
        {
          v117 = v146[1];
          v118 = *(_WORD *)v146;
          for ( m = *(_WORD *)(CellFlat + 72) >> 1; m && v118; --m )
          {
            v120 = *(_WORD *)v34;
            v34 += 2;
            v121 = *v117++;
            if ( v120 != (_WORD)v121 )
            {
              if ( v120 >= 0x61u )
              {
                if ( v120 > 0x7Au )
                  v120 = RtlUpcaseUnicodeChar(v120);
                else
                  v120 -= 32;
              }
              if ( v121 >= 0x61 )
              {
                if ( v121 > 0x7A )
                  LOWORD(v121) = RtlUpcaseUnicodeChar(v121);
                else
                  LOWORD(v121) = v121 - 32;
              }
              v109 = v120 - (unsigned __int16)v121;
              if ( v109 )
                goto LABEL_235;
            }
            --v118;
          }
          v109 = m - v118;
LABEL_235:
          v41 = -v109;
LABEL_236:
          v9 = (__int16 *)v144;
          v14 = v142;
          v7 = v145;
LABEL_62:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v140);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v140);
          if ( !v41 )
          {
            v28 = 0;
            *a5 = *(_DWORD *)v14;
LABEL_36:
            v8 = v146;
            goto LABEL_37;
          }
          if ( v41 >= 0 )
          {
LABEL_66:
            v28 = 1;
            goto LABEL_36;
          }
LABEL_90:
          v28 = -1;
          goto LABEL_36;
        }
        v113 = RtlCompareUnicodeStrings(
                 *((PCWCH *)v7 + 1),
                 (unsigned __int64)*v7 >> 1,
                 (PCWCH)v34,
                 (unsigned __int64)*(unsigned __int16 *)(CellFlat + 72) >> 1,
                 1u);
        v14 = v142;
      }
      v41 = v113;
      goto LABEL_62;
    }
    v7 = v145;
    v15 = 4;
    for ( n = 0; n < 4; ++n )
    {
      if ( !*((_BYTE *)v14 + n + 4) )
      {
        v15 = n;
        break;
      }
    }
    if ( v8 )
      v17 = *(unsigned __int16 *)v8;
    else
      v17 = *v145 >> 1;
    v18 = 0;
    if ( v17 < v15 )
      v15 = v17;
    while ( 1 )
    {
      if ( v18 >= v15 )
      {
        v10 = BugCheckParameter3;
        goto LABEL_44;
      }
      v19 = v8 ? v8[1][v18] : *(_WORD *)(*((_QWORD *)v7 + 1) + 2LL * v18);
      v20 = *((unsigned __int8 *)&v9[4 * v11 + 4] + v18);
      if ( v19 >= 0x61u )
      {
        if ( v19 <= 0x7Au )
        {
          v21 = v19 - 32;
        }
        else
        {
          Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( Flink && v26 >= 0xC0u )
            v26 += *((_WORD *)&Flink->Flink
                   + (v26 & 0xF)
                   + (unsigned int)*((unsigned __int16 *)&Flink->Flink
                                   + ((v26 >> 4) & 0xF)
                                   + (unsigned int)*((unsigned __int16 *)&Flink->Flink + ((unsigned __int64)v26 >> 8))));
          v21 = v26;
        }
      }
      else
      {
        v21 = v19;
      }
      if ( v20 >= 0x61 )
      {
        if ( v20 <= 0x7A )
        {
          v22 = v20 - 32;
        }
        else
        {
          v24 = PsGetCurrentServerSiloGlobals()[75].Flink;
          if ( v24 && (unsigned __int16)v25 >= 0xC0u )
            LOWORD(v25) = *((_WORD *)&v24->Flink
                          + (v25 & 0xF)
                          + *((unsigned __int16 *)&v24->Flink + LOWORD(v24->Flink) + (v25 >> 4)))
                        + v25;
          v22 = (unsigned __int16)v25;
        }
      }
      else
      {
        v22 = v20;
      }
      v23 = v21 - v22;
      if ( v23 )
        break;
      ++v18;
    }
    v28 = 1;
    if ( v23 <= 0 )
      v28 = -1;
LABEL_37:
    if ( !v28 )
    {
      *a6 = v11;
      return 0LL;
    }
    if ( v28 < 0 )
    {
      v30 = v138;
      v29 = v11;
      v137 = v11;
    }
    else
    {
      v29 = v137;
      v30 = v11;
      v138 = v11;
    }
    if ( v29 - v30 <= 1 )
      break;
    v10 = BugCheckParameter3;
    v11 = v30 + ((v29 - v30) >> 1);
  }
  v54 = *v9;
  v13 = a5;
  v31 = ((*v9 - 26220) & 0xFDFF) == 0;
  *a5 = -1;
  if ( !v31 )
  {
    v84 = *(unsigned int *)&v9[2 * v30 + 2];
    v85 = &v9[2 * v30];
    v86 = v7;
    v68 = BugCheckParameter3;
    v87 = CmpDoCompareKeyName(BugCheckParameter3, v86, v8, v84);
    v67 = v87;
    if ( v87 != 2 )
    {
      if ( !v87 )
        *v13 = *((_DWORD *)v85 + 1);
      goto LABEL_127;
    }
    goto LABEL_164;
  }
  v55 = &v9[4 * v30];
  if ( v54 != 26220 )
  {
    v58 = v146;
LABEL_168:
    v140 = -1;
    v141 = 0;
    v91 = *(unsigned int *)&v9[4 * v30 + 2];
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v92 = HvpGetCellFlat(BugCheckParameter3, v91);
    else
      v92 = HvpGetCellPaged(BugCheckParameter3);
    if ( !v92 )
      goto LABEL_164;
    v93 = (const WCHAR *)(v92 + 76);
    if ( (*(_BYTE *)(v92 + 2) & 0x20) != 0 )
    {
      if ( !v58 )
      {
        v94 = *(_WORD *)(v92 + 72);
        v95 = (WCHAR *)*((_QWORD *)v145 + 1);
        for ( ii = *v145 >> 1; ii && v94; --ii )
        {
          v97 = *v95++;
          v98 = *(unsigned __int8 *)v93;
          v93 = (const WCHAR *)((char *)v93 + 1);
          if ( v97 != (_WORD)v98 )
          {
            if ( v97 >= 0x61u )
            {
              if ( v97 > 0x7Au )
                v97 = RtlUpcaseUnicodeChar(v97);
              else
                v97 -= 32;
            }
            if ( v98 >= 0x61 )
            {
              if ( v98 > 0x7A )
                LOWORD(v98) = RtlUpcaseUnicodeChar(v98);
              else
                LOWORD(v98) = v98 - 32;
            }
            v99 = v97 - (unsigned __int16)v98;
            if ( v99 )
              goto LABEL_186;
          }
          --v94;
        }
        v99 = ii - v94;
        goto LABEL_186;
      }
      v115 = CmpCompareTwoCompressedNames(v58[1], *(_WORD *)v58, (unsigned __int8 *)(v92 + 76), *(_WORD *)(v92 + 72));
    }
    else
    {
      if ( v58 )
      {
        v127 = v58[1];
        v128 = *(_WORD *)v58;
        for ( jj = *(_WORD *)(v92 + 72) >> 1; jj && v128; --jj )
        {
          v130 = *v93++;
          v131 = *v127++;
          if ( v130 != (_WORD)v131 )
          {
            if ( v130 >= 0x61u )
            {
              if ( v130 > 0x7Au )
                v130 = RtlUpcaseUnicodeChar(v130);
              else
                v130 -= 32;
            }
            if ( v131 >= 0x61 )
            {
              if ( v131 > 0x7A )
                LOWORD(v131) = RtlUpcaseUnicodeChar(v131);
              else
                LOWORD(v131) = v131 - 32;
            }
            v111 = v130 - (unsigned __int16)v131;
            if ( v111 )
              goto LABEL_246;
          }
          --v128;
        }
        v111 = jj - v128;
LABEL_246:
        v99 = -v111;
        goto LABEL_186;
      }
      v115 = RtlCompareUnicodeStrings(
               *((PCWCH *)v145 + 1),
               (unsigned __int64)*v145 >> 1,
               v93,
               (unsigned __int64)*(unsigned __int16 *)(v92 + 72) >> 1,
               1u);
    }
    v99 = v115;
LABEL_186:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v140);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v140);
    if ( v99 )
    {
      if ( v99 < 0 )
        v67 = -1;
      else
        v67 = 1;
    }
    else
    {
      v67 = 0;
      *a5 = *((_DWORD *)v55 + 1);
    }
    v9 = (__int16 *)v144;
    goto LABEL_126;
  }
  v56 = 4;
  for ( kk = 0; kk < 4; ++kk )
  {
    if ( !*((_BYTE *)v55 + kk + 8) )
    {
      v56 = kk;
      break;
    }
  }
  v58 = v146;
  if ( v146 )
    v59 = *(unsigned __int16 *)v146;
  else
    v59 = *v7 >> 1;
  v60 = 0;
  if ( v59 < v56 )
    v56 = v59;
  v61 = 8LL * v30;
  while ( 1 )
  {
    if ( v60 >= v56 )
    {
      v30 = v138;
      v13 = a5;
      goto LABEL_168;
    }
    v62 = v58 ? v58[1][v60] : *(_WORD *)(*((_QWORD *)v145 + 1) + 2LL * v60);
    v63 = *((unsigned __int8 *)v9 + v60 + v61 + 8);
    if ( v62 >= 0x61u )
      v64 = v62 <= 0x7Au ? v62 - 32 : RtlUpcaseUnicodeChar(v62);
    else
      v64 = v62;
    if ( v63 >= 0x61 )
      v65 = v63 <= 0x7A ? v63 - 32 : RtlUpcaseUnicodeChar(v63);
    else
      v65 = v63;
    v66 = v64 - v65;
    if ( v66 )
      break;
    v58 = v146;
    ++v60;
  }
  v67 = 1;
  if ( v66 <= 0 )
    v67 = -1;
LABEL_126:
  v68 = BugCheckParameter3;
LABEL_127:
  if ( v67 == 2 )
    goto LABEL_233;
  if ( v67 )
  {
    if ( v67 >= 0 )
    {
      v69 = *v9;
      v13 = a5;
      *a5 = -1;
      if ( ((v69 - 26220) & 0xFDFF) == 0 )
      {
        v70 = v137;
        v71 = &v9[4 * v137];
        if ( v69 == 26220 )
        {
          for ( mm = 0; mm < 4; ++mm )
          {
            if ( !*((_BYTE *)v71 + mm + 8) )
              goto LABEL_137;
          }
          mm = 4;
LABEL_137:
          v73 = v146;
          if ( v146 )
            v74 = *(unsigned __int16 *)v146;
          else
            v74 = *v145 >> 1;
          v75 = 0;
          if ( v74 < mm )
            mm = v74;
          LODWORD(v144) = mm;
          while ( 1 )
          {
            if ( v75 >= mm )
            {
              v70 = v137;
              v13 = a5;
              goto LABEL_196;
            }
            v76 = v73 ? v73[1][v75] : *(_WORD *)(*((_QWORD *)v145 + 1) + 2LL * v75);
            v77 = *((unsigned __int8 *)&v9[4 * v137 + 4] + v75);
            if ( v76 >= 0x61u )
              v78 = v76 <= 0x7Au ? v76 - 32 : RtlUpcaseUnicodeChar(v76);
            else
              v78 = v76;
            if ( v77 >= 0x61 )
              v79 = v77 <= 0x7A ? v77 - 32 : RtlUpcaseUnicodeChar(v77);
            else
              v79 = v77;
            v80 = v78 - v79;
            if ( v80 )
              break;
            v73 = v146;
            ++v75;
            mm = v144;
          }
          v81 = v137;
          v82 = 1;
          if ( v80 <= 0 )
            v82 = -1;
          goto LABEL_157;
        }
        v73 = v146;
LABEL_196:
        v89 = 0;
        v31 = (*(_BYTE *)(v68 + 140) & 1) == 0;
        v144 = 0xFFFFFFFFLL;
        v100 = *(unsigned int *)&v9[4 * v70 + 2];
        if ( v31 )
          v101 = HvpGetCellPaged(v68);
        else
          v101 = HvpGetCellFlat(v68, v100);
        if ( v101 )
        {
          v102 = (const WCHAR *)(v101 + 76);
          if ( (*(_BYTE *)(v101 + 2) & 0x20) != 0 )
          {
            if ( !v73 )
            {
              v103 = *(_WORD *)(v101 + 72);
              v104 = (WCHAR *)*((_QWORD *)v145 + 1);
              for ( nn = *v145 >> 1; nn && v103; --nn )
              {
                v106 = *v104++;
                v107 = *(unsigned __int8 *)v102;
                v102 = (const WCHAR *)((char *)v102 + 1);
                if ( v106 != (_WORD)v107 )
                {
                  if ( v106 >= 0x61u )
                  {
                    if ( v106 > 0x7Au )
                      v106 = RtlUpcaseUnicodeChar(v106);
                    else
                      v106 -= 32;
                  }
                  if ( v107 >= 0x61 )
                  {
                    if ( v107 > 0x7A )
                      LOWORD(v107) = RtlUpcaseUnicodeChar(v107);
                    else
                      LOWORD(v107) = v107 - 32;
                  }
                  v108 = v106 - (unsigned __int16)v107;
                  if ( v108 )
                    goto LABEL_250;
                }
                --v103;
              }
              v108 = nn - v103;
              v89 = 0;
              goto LABEL_214;
            }
            v116 = CmpCompareTwoCompressedNames(
                     v73[1],
                     *(_WORD *)v73,
                     (unsigned __int8 *)(v101 + 76),
                     *(_WORD *)(v101 + 72));
LABEL_271:
            v108 = v116;
            goto LABEL_214;
          }
          if ( !v73 )
          {
            v116 = RtlCompareUnicodeStrings(
                     *((PCWCH *)v145 + 1),
                     (unsigned __int64)*v145 >> 1,
                     v102,
                     (unsigned __int64)*(unsigned __int16 *)(v101 + 72) >> 1,
                     1u);
            v89 = 0;
            goto LABEL_271;
          }
          v132 = v73[1];
          v133 = *(_WORD *)v73;
          for ( i1 = *(_WORD *)(v101 + 72) >> 1; i1 && v133; --i1 )
          {
            v135 = *v102++;
            v136 = *v132++;
            if ( v135 != (_WORD)v136 )
            {
              if ( v135 >= 0x61u )
              {
                if ( v135 > 0x7Au )
                  v135 = RtlUpcaseUnicodeChar(v135);
                else
                  v135 -= 32;
              }
              if ( v136 >= 0x61 )
              {
                if ( v136 > 0x7A )
                  LOWORD(v136) = RtlUpcaseUnicodeChar(v136);
                else
                  LOWORD(v136) = v136 - 32;
              }
              v112 = v135 - (unsigned __int16)v136;
              if ( v112 )
                goto LABEL_249;
            }
            --v133;
          }
          v112 = i1 - v133;
LABEL_249:
          v108 = -v112;
LABEL_250:
          v89 = 0;
LABEL_214:
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v144);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v144);
          if ( v108 )
          {
            if ( v108 < 0 )
              v89 = -1;
            else
              v89 = 1;
          }
          else
          {
            *a5 = *((_DWORD *)v71 + 1);
          }
          v81 = v137;
LABEL_221:
          v82 = v89;
          goto LABEL_157;
        }
LABEL_164:
        v90 = a6;
        *v13 = -1;
        *v90 = 0x80000000;
        return 3221225626LL;
      }
      v81 = v137;
      v88 = CmpDoCompareKeyName(v68, v145, v146, *(unsigned int *)&v9[2 * v137 + 2]);
      v89 = v88;
      if ( v88 == 2 )
        goto LABEL_164;
      if ( v88 )
        goto LABEL_221;
      *v13 = *(_DWORD *)&v9[2 * v137 + 2];
      v82 = 0;
LABEL_157:
      if ( v82 != 2 )
      {
        *a6 = v81;
        return v82 != 0 ? 0xC0000034 : 0;
      }
LABEL_233:
      v13 = a5;
      goto LABEL_164;
    }
    *a6 = v138;
    return 3221225524LL;
  }
  else
  {
    *a6 = v138;
    return 0LL;
  }
}
