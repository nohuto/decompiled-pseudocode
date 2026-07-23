/*
 * XREFs of CmpCompareInIndex @ 0x140888330
 * Callers:
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     CmpAddToLeaf @ 0x140887458 (CmpAddToLeaf.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     CmpCompareTwoCompressedNames @ 0x1408712D0 (CmpCompareTwoCompressedNames.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall CmpCompareInIndex(
        ULONG_PTR BugCheckParameter3,
        unsigned __int16 *a2,
        unsigned __int8 **a3,
        unsigned int a4,
        WCHAR *a5,
        _DWORD *a6)
{
  WCHAR *v6; // rsi
  _DWORD *v8; // r15
  ULONG_PTR v9; // rbp
  __int64 v10; // r12
  unsigned int v11; // r14d
  WCHAR v12; // r10
  __int64 v14; // rax
  WCHAR *v15; // r13
  unsigned int v16; // r15d
  unsigned int n; // eax
  unsigned int v18; // eax
  WCHAR *v19; // rdx
  unsigned int v20; // r10d
  unsigned __int16 v21; // r8
  unsigned int v22; // r9d
  int v23; // r11d
  unsigned int v24; // eax
  int v25; // r11d
  struct _LIST_ENTRY *v26; // r8
  unsigned int v27; // r9d
  unsigned __int16 v28; // r8
  struct _LIST_ENTRY *Flink; // r11
  __int64 result; // rax
  bool v31; // zf
  ULONG_PTR v32; // rdx
  __int64 CellFlat; // rax
  __int64 v34; // rcx
  WCHAR *v35; // r15
  WCHAR *v36; // rax
  unsigned __int16 v37; // bp
  unsigned __int16 k; // bx
  WCHAR v39; // di
  unsigned int v40; // esi
  int v41; // edi
  ULONG_PTR v42; // rdx
  __int64 CellPaged; // rax
  __int64 v44; // rcx
  unsigned __int8 *v45; // r8
  WCHAR *v46; // rax
  unsigned __int16 v47; // r15
  unsigned __int16 i; // bx
  WCHAR v49; // di
  unsigned int v50; // ebp
  int v51; // edi
  int v52; // eax
  int v53; // eax
  unsigned __int16 v54; // si
  unsigned __int16 v55; // r15
  unsigned __int8 *v56; // rcx
  unsigned __int16 v57; // ax
  unsigned __int16 m; // si
  WCHAR v59; // bx
  unsigned int v60; // edi
  int v61; // edi
  unsigned __int8 *v62; // rcx
  unsigned __int16 v63; // ax
  unsigned __int16 j; // r15
  WCHAR v65; // bx
  unsigned int v66; // edi
  int v67; // edi
  unsigned __int8 *v68; // [rsp+30h] [rbp-48h]
  unsigned __int8 *v69; // [rsp+30h] [rbp-48h]
  unsigned __int8 *v70; // [rsp+38h] [rbp-40h]
  unsigned __int8 *v71; // [rsp+38h] [rbp-40h]
  unsigned int v73; // [rsp+90h] [rbp+18h] BYREF
  int v74; // [rsp+94h] [rbp+1Ch]
  unsigned int v75; // [rsp+98h] [rbp+20h]

  v75 = a4;
  v6 = a5;
  v8 = a6;
  v9 = BugCheckParameter3;
  v10 = a4;
  v11 = 0;
  v12 = *a5;
  *a6 = -1;
  if ( ((v12 - 26220) & 0xFDFF) != 0 )
  {
    v31 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v42 = *(unsigned int *)&v6[2 * a4 + 2];
    v73 = -1;
    v74 = 0;
    if ( v31 )
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v42, &v73);
    else
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v42, &v73);
    v44 = CellPaged;
    if ( !CellPaged )
      return 2LL;
    v45 = (unsigned __int8 *)(CellPaged + 76);
    if ( (*(_BYTE *)(CellPaged + 2) & 0x20) != 0 )
    {
      if ( !a3 )
      {
        v46 = (WCHAR *)*((_QWORD *)a2 + 1);
        v47 = *(_WORD *)(v44 + 72);
        for ( i = *a2 >> 1; i && v47; --i )
        {
          v49 = *v46++;
          v50 = *v45++;
          a5 = v46;
          v68 = v45;
          if ( v49 != (_WORD)v50 )
          {
            if ( v49 >= 0x61u )
            {
              if ( v49 > 0x7Au )
                v49 = RtlUpcaseUnicodeChar(v49);
              else
                v49 -= 32;
            }
            if ( v50 >= 0x61 )
            {
              if ( v50 > 0x7A )
                LOWORD(v50) = RtlUpcaseUnicodeChar(v50);
              else
                LOWORD(v50) = v50 - 32;
            }
            v51 = v49 - (unsigned __int16)v50;
            if ( v51 )
              goto LABEL_79;
            v45 = v68;
            v46 = a5;
          }
          --v47;
        }
        v51 = i - v47;
LABEL_79:
        v9 = BugCheckParameter3;
        LODWORD(v10) = v75;
        v8 = a6;
        goto LABEL_80;
      }
      v53 = CmpCompareTwoCompressedNames(a3[1], *(_WORD *)a3, v45, *(_WORD *)(CellPaged + 72));
    }
    else
    {
      v55 = *(_WORD *)(CellPaged + 72);
      if ( a3 )
      {
        v62 = a3[1];
        v63 = *(_WORD *)a3;
        for ( j = v55 >> 1; ; --j )
        {
          LOWORD(a5) = v63;
          if ( !j || !v63 )
            break;
          v65 = *(_WORD *)v45;
          v45 += 2;
          v66 = *v62++;
          v69 = v45;
          v71 = v62;
          if ( v65 != (_WORD)v66 )
          {
            if ( v65 >= 0x61u )
            {
              if ( v65 > 0x7Au )
                v65 = RtlUpcaseUnicodeChar(v65);
              else
                v65 -= 32;
            }
            if ( v66 >= 0x61 )
            {
              if ( v66 > 0x7A )
                LOWORD(v66) = RtlUpcaseUnicodeChar(v66);
              else
                LOWORD(v66) = v66 - 32;
            }
            v67 = v65 - (unsigned __int16)v66;
            if ( v67 )
              goto LABEL_138;
            v45 = v69;
            v63 = (unsigned __int16)a5;
            v62 = v71;
          }
          --v63;
        }
        v67 = j - v63;
LABEL_138:
        LODWORD(v10) = v75;
        v51 = -v67;
        v8 = a6;
LABEL_80:
        if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v9, &v73);
        else
          HvpReleaseCellPaged(v9, &v73);
        if ( !v51 )
        {
          result = 0LL;
          *v8 = *(_DWORD *)&v6[2 * (unsigned int)v10 + 2];
          return result;
        }
        if ( v51 >= 0 )
          return 1;
        return (unsigned int)-1;
      }
      v53 = RtlCompareUnicodeStrings(
              *((PCWCH *)a2 + 1),
              (unsigned __int64)*a2 >> 1,
              (PCWCH)v45,
              (unsigned __int64)*(unsigned __int16 *)(CellPaged + 72) >> 1,
              1u);
      v8 = a6;
    }
    v51 = v53;
    goto LABEL_80;
  }
  v14 = a4;
  v15 = &v6[4 * a4 + 2];
  if ( v12 != 26220 )
  {
LABEL_35:
    v31 = (*(_BYTE *)(v9 + 140) & 1) == 0;
    v32 = *(unsigned int *)&v6[4 * v14 + 2];
    v73 = -1;
    v74 = 0;
    if ( v31 )
      CellFlat = HvpGetCellPaged(v9, v32, &v73);
    else
      CellFlat = HvpGetCellFlat(v9, v32, &v73);
    v34 = CellFlat;
    if ( CellFlat )
    {
      v35 = (WCHAR *)(CellFlat + 76);
      if ( (*(_BYTE *)(CellFlat + 2) & 0x20) != 0 )
      {
        if ( !a3 )
        {
          v36 = (WCHAR *)*((_QWORD *)a2 + 1);
          v37 = *(_WORD *)(v34 + 72);
          for ( k = *a2 >> 1; k && v37; --k )
          {
            v39 = *v36++;
            v40 = *(unsigned __int8 *)v35;
            v35 = (WCHAR *)((char *)v35 + 1);
            a5 = v36;
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
                goto LABEL_54;
              v36 = a5;
            }
            --v37;
          }
          v41 = k - v37;
LABEL_54:
          v9 = BugCheckParameter3;
          goto LABEL_55;
        }
        v52 = CmpCompareTwoCompressedNames(
                a3[1],
                *(_WORD *)a3,
                (unsigned __int8 *)(CellFlat + 76),
                *(_WORD *)(CellFlat + 72));
      }
      else
      {
        v54 = *(_WORD *)(CellFlat + 72);
        if ( a3 )
        {
          v56 = a3[1];
          v57 = *(_WORD *)a3;
          for ( m = v54 >> 1; ; --m )
          {
            LOWORD(a5) = v57;
            if ( !m || !v57 )
              break;
            v59 = *v35++;
            v60 = *v56++;
            v70 = v56;
            if ( v59 != (_WORD)v60 )
            {
              if ( v59 >= 0x61u )
              {
                if ( v59 > 0x7Au )
                  v59 = RtlUpcaseUnicodeChar(v59);
                else
                  v59 -= 32;
              }
              if ( v60 >= 0x61 )
              {
                if ( v60 > 0x7A )
                  LOWORD(v60) = RtlUpcaseUnicodeChar(v60);
                else
                  LOWORD(v60) = v60 - 32;
              }
              v61 = v59 - (unsigned __int16)v60;
              if ( v61 )
                goto LABEL_123;
              v57 = (unsigned __int16)a5;
              v56 = v70;
            }
            --v57;
          }
          v61 = m - v57;
LABEL_123:
          v41 = -v61;
LABEL_55:
          if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v9, &v73);
          else
            HvpReleaseCellPaged(v9, &v73);
          if ( !v41 )
          {
            *a6 = *(_DWORD *)v15;
            return v11;
          }
          if ( v41 >= 0 )
            return 1;
          return (unsigned int)-1;
        }
        v52 = RtlCompareUnicodeStrings(
                *((PCWCH *)a2 + 1),
                (unsigned __int64)*a2 >> 1,
                (PCWCH)(CellFlat + 76),
                (unsigned __int64)*(unsigned __int16 *)(CellFlat + 72) >> 1,
                1u);
      }
      v41 = v52;
      goto LABEL_55;
    }
    return 2LL;
  }
  v16 = 4;
  for ( n = 0; n < 4; ++n )
  {
    if ( !*((_BYTE *)v15 + n + 4) )
    {
      v16 = n;
      break;
    }
  }
  if ( a3 )
    v18 = *(unsigned __int16 *)a3;
  else
    v18 = *a2 >> 1;
  v19 = (WCHAR *)(8LL * a4);
  v20 = 0;
  a5 = v19;
  if ( v18 < v16 )
    v16 = v18;
  while ( 1 )
  {
    if ( v20 >= v16 )
    {
      v14 = v10;
      goto LABEL_35;
    }
    v21 = a3 ? a3[1][v20] : *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v20);
    v22 = *((unsigned __int8 *)v6 + (_QWORD)v19 + v20 + 8);
    if ( v21 >= 0x61u )
    {
      if ( v21 <= 0x7Au )
      {
        v23 = v21 - 32;
      }
      else
      {
        Flink = PsGetCurrentServerSiloGlobals()[75].Flink;
        if ( Flink && v28 >= 0xC0u )
          v28 += *((_WORD *)&Flink->Flink
                 + (v28 & 0xF)
                 + (unsigned int)*((unsigned __int16 *)&Flink->Flink
                                 + ((v28 >> 4) & 0xF)
                                 + (unsigned int)*((unsigned __int16 *)&Flink->Flink + ((unsigned __int64)v28 >> 8))));
        v23 = v28;
      }
    }
    else
    {
      v23 = v21;
    }
    if ( v22 >= 0x61 )
    {
      if ( v22 <= 0x7A )
      {
        v24 = v22 - 32;
      }
      else
      {
        v26 = PsGetCurrentServerSiloGlobals()[75].Flink;
        if ( v26 && (unsigned __int16)v27 >= 0xC0u )
          LOWORD(v27) = *((_WORD *)&v26->Flink
                        + (v27 & 0xF)
                        + *((unsigned __int16 *)&v26->Flink + LOWORD(v26->Flink) + (v27 >> 4)))
                      + v27;
        v24 = (unsigned __int16)v27;
      }
    }
    else
    {
      v24 = v22;
    }
    v25 = v23 - v24;
    if ( v25 )
      break;
    v19 = a5;
    ++v20;
  }
  result = 1LL;
  if ( v25 <= 0 )
    return 0xFFFFFFFFLL;
  return result;
}
