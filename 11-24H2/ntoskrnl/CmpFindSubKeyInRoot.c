/*
 * XREFs of CmpFindSubKeyInRoot @ 0x14083EC40
 * Callers:
 *     CmpFindSubKeyByNameWithStatus @ 0x1408764B0 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpWalkOneLevel @ 0x140876890 (CmpWalkOneLevel.c)
 *     CmpSelectLeaf @ 0x14088367C (CmpSelectLeaf.c)
 *     CmpRemoveSubKeyFromList @ 0x140A13FA8 (CmpRemoveSubKeyFromList.c)
 *     CmpMarkIndexDirtyInStorageType @ 0x140A1D6C0 (CmpMarkIndexDirtyInStorageType.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpDoCompareKeyName @ 0x1408789C0 (CmpDoCompareKeyName.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCompareInIndex @ 0x140888330 (CmpCompareInIndex.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpFindSubKeyInRoot(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _DWORD *a5)
{
  int v5; // edi
  unsigned int v7; // edi
  unsigned __int16 *v8; // rbx
  unsigned __int16 *v9; // r14
  unsigned int v10; // esi
  __int64 v11; // r15
  bool v12; // zf
  ULONG_PTR v13; // rdx
  _WORD *CellPaged; // rax
  _WORD *v15; // r8
  __int16 v16; // cx
  __int64 v17; // rdx
  unsigned int v18; // r12d
  unsigned int i; // eax
  unsigned int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rsi
  WCHAR v23; // cx
  unsigned int v24; // ebx
  int v25; // edi
  int v26; // eax
  int v27; // edi
  int v28; // edx
  _WORD *v29; // r12
  __int16 v30; // cx
  _DWORD *v31; // rbx
  unsigned int v32; // r14d
  unsigned int ii; // ecx
  unsigned __int16 *v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // esi
  WCHAR v37; // cx
  unsigned int v38; // edi
  int v39; // ebx
  int v40; // eax
  int v41; // ebx
  int v42; // edx
  ULONG_PTR v43; // rdx
  __int64 CellFlat; // rax
  WCHAR *v45; // r12
  unsigned __int16 v46; // di
  WCHAR *v47; // r15
  unsigned __int16 v48; // r14
  unsigned __int16 j; // di
  WCHAR v50; // bx
  unsigned int v51; // esi
  int v52; // ebx
  ULONG_PTR v53; // rdx
  __int64 v54; // rax
  WCHAR *v55; // r12
  unsigned __int16 v56; // di
  WCHAR *v57; // r15
  unsigned __int16 v58; // r14
  unsigned __int16 m; // di
  WCHAR v60; // bx
  unsigned int v61; // esi
  int v62; // ebx
  int v63; // r14d
  __int64 v64; // rax
  __int64 v65; // rbx
  _DWORD *v66; // rax
  int v67; // eax
  int v68; // eax
  unsigned int v69; // ebx
  int *v70; // rsi
  int v71; // eax
  int v73; // eax
  __int64 v74; // rax
  int v75; // eax
  int v76; // ebx
  int v77; // ebx
  LONG v78; // eax
  LONG v79; // eax
  unsigned __int8 *v80; // r15
  unsigned __int16 v81; // r14
  unsigned __int16 k; // si
  WCHAR v83; // bx
  unsigned int v84; // edi
  unsigned __int8 *v85; // r15
  unsigned __int16 v86; // r14
  unsigned __int16 n; // si
  WCHAR v88; // bx
  unsigned int v89; // edi
  _DWORD v90[2]; // [rsp+30h] [rbp-48h] BYREF
  _WORD *v91; // [rsp+38h] [rbp-40h]
  _DWORD v92[2]; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v93[2]; // [rsp+48h] [rbp-30h] BYREF
  unsigned int v94; // [rsp+50h] [rbp-28h]
  unsigned int v95; // [rsp+54h] [rbp-24h]
  unsigned int v96; // [rsp+58h] [rbp-20h]
  int v97; // [rsp+5Ch] [rbp-1Ch]
  _DWORD *v98; // [rsp+60h] [rbp-18h]
  unsigned int v99; // [rsp+C0h] [rbp+48h]
  __int64 v100; // [rsp+C8h] [rbp+50h]

  v100 = a2;
  v5 = *(unsigned __int16 *)(a2 + 2);
  v90[0] = -1;
  v7 = v5 - 1;
  v90[1] = 0;
  v96 = v7;
  v8 = a4;
  v9 = a3;
  v95 = 0;
  v10 = 0;
  while ( 1 )
  {
    v11 = v10 + ((v7 - v10) >> 1);
    v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v99 = v10 + ((v7 - v10) >> 1);
    v13 = *(unsigned int *)(a2 + 4 * v11 + 4);
    v97 = v13;
    if ( v12 )
      CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3);
    else
      CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v13);
    v15 = CellPaged;
    v91 = CellPaged;
    *a5 = -1;
    if ( !CellPaged )
      return 0x80000000;
    v16 = *CellPaged;
    v17 = (unsigned int)(unsigned __int16)CellPaged[1] - 1;
    v94 = (unsigned __int16)CellPaged[1] - 1;
    if ( ((v16 - 26220) & 0xFDFF) == 0 )
    {
      v98 = &CellPaged[4 * v17 + 2];
      if ( v16 == 26220 )
      {
        v18 = 4;
        for ( i = 0; i < 4; ++i )
        {
          if ( !*((_BYTE *)&v15[4 * v17 + 4] + i) )
          {
            v18 = i;
            break;
          }
        }
        if ( v8 )
          v20 = *v8;
        else
          v20 = *v9 >> 1;
        v21 = 8 * v17;
        if ( v20 < v18 )
          v18 = v20;
        v22 = 0LL;
        while ( 1 )
        {
          if ( (unsigned int)v22 >= v18 )
          {
            LODWORD(v17) = v94;
            v9 = a3;
            goto LABEL_71;
          }
          v23 = v8 ? *(unsigned __int8 *)(*((_QWORD *)v8 + 1) + v22) : *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * v22);
          v24 = *((unsigned __int8 *)v15 + v22 + v21 + 8);
          if ( v23 >= 0x61u )
            v25 = v23 <= 0x7Au ? v23 - 32 : RtlUpcaseUnicodeChar(v23);
          else
            v25 = v23;
          if ( v24 >= 0x61 )
            v26 = v24 <= 0x7A ? v24 - 32 : RtlUpcaseUnicodeChar(v24);
          else
            v26 = v24;
          v27 = v25 - v26;
          if ( v27 )
            break;
          v15 = v91;
          v22 = (unsigned int)(v22 + 1);
          v8 = a4;
        }
        v28 = 1;
        if ( v27 <= 0 )
          v28 = -1;
        goto LABEL_32;
      }
LABEL_71:
      v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v93[0] = -1;
      v93[1] = 0;
      v43 = *(unsigned int *)&v15[4 * (unsigned int)v17 + 2];
      if ( v12 )
        CellFlat = HvpGetCellPaged(BugCheckParameter3);
      else
        CellFlat = HvpGetCellFlat(BugCheckParameter3, v43);
      if ( !CellFlat )
        goto LABEL_132;
      v45 = (WCHAR *)(CellFlat + 76);
      if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
      {
        if ( !v8 )
        {
          v46 = *v9;
          v47 = (WCHAR *)*((_QWORD *)v9 + 1);
          v48 = *(_WORD *)(CellFlat + 72);
          for ( j = v46 >> 1; j && v48; --j )
          {
            v50 = *v47++;
            v51 = *(unsigned __int8 *)v45;
            v45 = (WCHAR *)((char *)v45 + 1);
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
                goto LABEL_170;
            }
            --v48;
          }
          LODWORD(v11) = v99;
          v52 = j - v48;
          goto LABEL_89;
        }
        v78 = CmpCompareTwoCompressedNames(
                *((_QWORD *)v8 + 1),
                *v8,
                CellFlat + 76,
                *(unsigned __int16 *)(CellFlat + 72));
      }
      else
      {
        if ( v8 )
        {
          v80 = (unsigned __int8 *)*((_QWORD *)v8 + 1);
          v81 = *v8;
          for ( k = *(_WORD *)(CellFlat + 72) >> 1; k && v81; --k )
          {
            v83 = *v45++;
            v84 = *v80++;
            if ( v83 != (_WORD)v84 )
            {
              if ( v83 >= 0x61u )
              {
                if ( v83 > 0x7Au )
                  v83 = RtlUpcaseUnicodeChar(v83);
                else
                  v83 -= 32;
              }
              if ( v84 >= 0x61 )
              {
                if ( v84 > 0x7A )
                  LOWORD(v84) = RtlUpcaseUnicodeChar(v84);
                else
                  LOWORD(v84) = v84 - 32;
              }
              v76 = v83 - (unsigned __int16)v84;
              if ( v76 )
                goto LABEL_169;
            }
            --v81;
          }
          v76 = k - v81;
LABEL_169:
          v52 = -v76;
LABEL_170:
          LODWORD(v11) = v99;
          goto LABEL_89;
        }
        v78 = RtlCompareUnicodeStrings(
                *((PCWCH *)v9 + 1),
                (unsigned __int64)*v9 >> 1,
                (PCWCH)(CellFlat + 76),
                (unsigned __int64)*(unsigned __int16 *)(CellFlat + 72) >> 1,
                1u);
      }
      v52 = v78;
LABEL_89:
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v93);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v93);
      if ( v52 )
      {
        v28 = 1;
        if ( v52 < 0 )
          v28 = -1;
      }
      else
      {
        v28 = 0;
        *a5 = *v98;
      }
LABEL_32:
      v29 = v91;
      goto LABEL_33;
    }
    v53 = *(unsigned int *)&CellPaged[2 * v17 + 2];
    v12 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v92[0] = -1;
    v92[1] = 0;
    if ( v12 )
      v54 = HvpGetCellPaged(BugCheckParameter3);
    else
      v54 = HvpGetCellFlat(BugCheckParameter3, v53);
    if ( !v54 )
      goto LABEL_132;
    v55 = (WCHAR *)(v54 + 76);
    if ( (*(_BYTE *)(v54 + 2) & 0x20) != 0 )
    {
      if ( !v8 )
      {
        v56 = *v9;
        v57 = (WCHAR *)*((_QWORD *)v9 + 1);
        v58 = *(_WORD *)(v54 + 72);
        for ( m = v56 >> 1; m && v58; --m )
        {
          v60 = *v57++;
          v61 = *(unsigned __int8 *)v55;
          v55 = (WCHAR *)((char *)v55 + 1);
          if ( v60 != (_WORD)v61 )
          {
            if ( v60 >= 0x61u )
            {
              if ( v60 > 0x7Au )
                v60 = RtlUpcaseUnicodeChar(v60);
              else
                v60 -= 32;
            }
            if ( v61 >= 0x61 )
            {
              if ( v61 > 0x7A )
                LOWORD(v61) = RtlUpcaseUnicodeChar(v61);
              else
                LOWORD(v61) = v61 - 32;
            }
            v62 = v60 - (unsigned __int16)v61;
            if ( v62 )
              goto LABEL_175;
          }
          --v58;
        }
        LODWORD(v11) = v99;
        v62 = m - v58;
        goto LABEL_114;
      }
      v79 = CmpCompareTwoCompressedNames(*((_QWORD *)v8 + 1), *v8, v54 + 76, *(unsigned __int16 *)(v54 + 72));
    }
    else
    {
      if ( v8 )
      {
        v85 = (unsigned __int8 *)*((_QWORD *)v8 + 1);
        v86 = *v8;
        for ( n = *(_WORD *)(v54 + 72) >> 1; n && v86; --n )
        {
          v88 = *v55++;
          v89 = *v85++;
          if ( v88 != (_WORD)v89 )
          {
            if ( v88 >= 0x61u )
            {
              if ( v88 > 0x7Au )
                v88 = RtlUpcaseUnicodeChar(v88);
              else
                v88 -= 32;
            }
            if ( v89 >= 0x61 )
            {
              if ( v89 > 0x7A )
                LOWORD(v89) = RtlUpcaseUnicodeChar(v89);
              else
                LOWORD(v89) = v89 - 32;
            }
            v77 = v88 - (unsigned __int16)v89;
            if ( v77 )
              goto LABEL_174;
          }
          --v86;
        }
        v77 = n - v86;
LABEL_174:
        v62 = -v77;
LABEL_175:
        LODWORD(v11) = v99;
        goto LABEL_114;
      }
      v79 = RtlCompareUnicodeStrings(
              *((PCWCH *)v9 + 1),
              (unsigned __int64)*v9 >> 1,
              (PCWCH)(v54 + 76),
              (unsigned __int64)*(unsigned __int16 *)(v54 + 72) >> 1,
              1u);
    }
    v62 = v79;
LABEL_114:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v92);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v92);
    v29 = v91;
    if ( v62 )
    {
      v28 = v62 < 0 ? -1 : 1;
    }
    else
    {
      v28 = 0;
      *a5 = *(_DWORD *)&v91[2 * v94 + 2];
    }
LABEL_33:
    if ( !v28 )
    {
      v63 = v97;
      v69 = v11;
      goto LABEL_133;
    }
    if ( v28 >= 0 )
    {
      v7 = v96;
      v10 = v11;
      v95 = v11;
    }
    else
    {
      v30 = *v29;
      v31 = a5;
      *a5 = -1;
      if ( ((v30 - 26220) & 0xFDFF) != 0 )
      {
        v73 = CmpDoCompareKeyName(BugCheckParameter3, a3, a4, *((unsigned int *)v29 + 1));
        v42 = v73;
        if ( v73 == 2 )
          goto LABEL_132;
        if ( !v73 )
          *a5 = *((_DWORD *)v29 + 1);
      }
      else if ( v30 == 26220 )
      {
        v32 = 4;
        for ( ii = 0; ii < 4; ++ii )
        {
          if ( !*((_BYTE *)v29 + ii + 8) )
          {
            v32 = ii;
            break;
          }
        }
        v34 = a4;
        if ( a4 )
          v35 = *a4;
        else
          v35 = *a3 >> 1;
        v36 = 0;
        if ( v35 < v32 )
          v32 = v35;
        while ( 1 )
        {
          if ( v36 >= v32 )
          {
            v31 = a5;
            goto LABEL_131;
          }
          v37 = v34 ? *(unsigned __int8 *)(*((_QWORD *)v34 + 1) + v36) : *(_WORD *)(*((_QWORD *)a3 + 1) + 2LL * v36);
          v38 = *((unsigned __int8 *)v29 + v36 + 8);
          if ( v37 >= 0x61u )
            v39 = v37 <= 0x7Au ? v37 - 32 : RtlUpcaseUnicodeChar(v37);
          else
            v39 = v37;
          if ( v38 >= 0x61 )
            v40 = v38 <= 0x7A ? v38 - 32 : RtlUpcaseUnicodeChar(v38);
          else
            v40 = v38;
          v41 = v39 - v40;
          if ( v41 )
            break;
          v34 = a4;
          ++v36;
        }
        v42 = 1;
        if ( v41 <= 0 )
          v42 = -1;
      }
      else
      {
        v34 = a4;
LABEL_131:
        v71 = CmpDoCompareKeyName(BugCheckParameter3, a3, v34, *((unsigned int *)v29 + 1));
        v42 = v71;
        if ( v71 == 2 )
          goto LABEL_132;
        if ( !v71 )
          *v31 = *((_DWORD *)v29 + 1);
      }
      if ( v42 == 2 )
        goto LABEL_132;
      if ( v42 >= 0 )
      {
        v69 = v99;
        v63 = v97;
        goto LABEL_133;
      }
      v10 = v95;
      v7 = v11;
      v96 = v11;
    }
    if ( v7 - v10 <= 1 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v90);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v90);
    a2 = v100;
    v8 = a4;
    v9 = a3;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v90);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v90);
  v63 = *(_DWORD *)(v100 + 4LL * v10 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v64 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v100 + 4LL * v10 + 4));
  else
    v64 = HvpGetCellPaged(BugCheckParameter3);
  v65 = v64;
  v66 = a5;
  if ( !v65 )
    goto LABEL_152;
  v67 = CmpCompareInIndex(BugCheckParameter3, v65, (__int64)a5);
  if ( v67 == 2 )
    goto LABEL_132;
  if ( v67 )
  {
    if ( v67 < 0 )
    {
      v68 = CmpCompareInIndex(BugCheckParameter3, v65, (__int64)a5);
      if ( v68 != 2 )
      {
        v69 = v10;
        v70 = a5;
        if ( v68 < 0 )
          v63 = -1;
        goto LABEL_134;
      }
LABEL_132:
      v63 = -1;
      v69 = 0x80000000;
      goto LABEL_133;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v90);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v90);
    v63 = *(_DWORD *)(v100 + 4LL * v7 + 4);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v74 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v100 + 4LL * v7 + 4));
    else
      v74 = HvpGetCellPaged(BugCheckParameter3);
    if ( v74 )
    {
      v70 = a5;
      v75 = CmpCompareInIndex(BugCheckParameter3, v74, (__int64)a5);
      if ( v75 == 2 )
      {
        v69 = 0x80000000;
        v63 = -1;
      }
      else
      {
        v69 = v7;
        if ( v75 > 0 )
          v63 = -1;
      }
      goto LABEL_134;
    }
    v66 = a5;
LABEL_152:
    *v66 = -1;
    return 0x80000000;
  }
  v69 = v10;
LABEL_133:
  v70 = a5;
LABEL_134:
  *v70 = v63;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v90);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v90);
  return v69;
}
