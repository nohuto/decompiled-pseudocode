/*
 * XREFs of CmpSelectLeaf @ 0x14088367C
 * Callers:
 *     CmpAddSubKeyToList @ 0x140882878 (CmpAddSubKeyToList.c)
 * Callees:
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     CmpDoCompareKeyName @ 0x1408789C0 (CmpDoCompareKeyName.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpSplitLeaf @ 0x140A5DCF0 (CmpSplitLeaf.c)
 */

__int64 __fastcall CmpSelectLeaf(
        ULONG_PTR BugCheckParameter3,
        _DWORD *a2,
        unsigned __int16 *a3,
        int a4,
        unsigned int **a5,
        unsigned int *a6)
{
  ULONG_PTR v9; // rdx
  int v10; // edi
  ULONG_PTR v11; // rdx
  __int64 CellFlat; // rax
  __int64 v13; // r14
  int SubKeyInRoot; // eax
  __int64 v15; // r15
  unsigned int v16; // edi
  unsigned int *v17; // rsi
  ULONG_PTR v18; // rdx
  __int64 v19; // rax
  int v20; // eax
  bool v21; // zf
  __int64 v22; // rax
  ULONG_PTR v23; // rdx
  __int64 v24; // rax
  __int64 CellPaged; // rax
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rsi
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v31[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v32[4]; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v33; // [rsp+98h] [rbp+48h] BYREF
  int v34; // [rsp+A8h] [rbp+58h]

  v34 = a4;
  LODWORD(v33) = 0;
  v32[0] = -1;
  v31[0] = -1;
  v9 = (unsigned int)*a2;
  LODWORD(BugCheckParameter4) = 0;
  v32[1] = 0;
  v31[1] = 0;
  v10 = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
  if ( v10 < 0 )
    return (unsigned int)v10;
  v11 = (unsigned int)*a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v11, v32);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v11, v32);
  v13 = CellFlat;
  while ( 1 )
  {
    SubKeyInRoot = CmpFindSubKeyInRoot(BugCheckParameter3, v13, a3, 0LL, &v33);
    v15 = (unsigned int)SubKeyInRoot;
    if ( SubKeyInRoot < 0 )
    {
      v10 = -1073741670;
      goto LABEL_31;
    }
    v16 = v33;
    if ( (_DWORD)v33 != -1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v33, v31);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, v33, v31);
      if ( *(_WORD *)(CellPaged + 2) < 0x3F5u )
      {
        v17 = (unsigned int *)(v13 + 4 * (v15 + 1));
LABEL_28:
        *a5 = v17;
        *a6 = v16;
        v10 = 0;
        goto LABEL_29;
      }
      goto LABEL_17;
    }
    v17 = (unsigned int *)(v13 + 4 * ((unsigned int)SubKeyInRoot + 1LL));
    v18 = *v17;
    v19 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v18, v31)
        : HvpGetCellPaged(BugCheckParameter3, v18, v31);
    LODWORD(BugCheckParameter4) = *(_DWORD *)(v19 + 4);
    v20 = CmpDoCompareKeyName(BugCheckParameter3, a3, 0LL, BugCheckParameter4);
    if ( v20 == 2 )
      break;
    if ( v20 < 0 )
    {
      v27 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
      if ( (_DWORD)v15 )
      {
        if ( v27 )
          HvpReleaseCellFlat(BugCheckParameter3, v31);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v31);
        v29 = (unsigned int)(v15 - 1);
LABEL_65:
        v17 = (unsigned int *)(v13 + 4 * (v29 + 1));
      }
      else
      {
        if ( v27 )
          HvpReleaseCellFlat(BugCheckParameter3, v31);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v31);
        v17 = (unsigned int *)(v13 + 4);
      }
      v21 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      v16 = *v17;
      LODWORD(v33) = *v17;
      if ( v21 )
        v28 = HvpGetCellPaged(BugCheckParameter3, v16, v31);
      else
        v28 = HvpGetCellFlat(BugCheckParameter3, v16, v31);
      if ( *(_WORD *)(v28 + 2) < 0x3F5u )
        goto LABEL_28;
      goto LABEL_17;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v31);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v31);
    v21 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    v16 = *v17;
    LODWORD(v33) = *v17;
    if ( v21 )
      v22 = HvpGetCellPaged(BugCheckParameter3, v16, v31);
    else
      v22 = HvpGetCellFlat(BugCheckParameter3, v16, v31);
    if ( *(_WORD *)(v22 + 2) < 0x3F5u )
      goto LABEL_28;
    if ( (unsigned int)v15 < (unsigned int)*(unsigned __int16 *)(v13 + 2) - 1 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v31);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v31);
      v29 = (unsigned int)(v15 + 1);
      goto LABEL_65;
    }
LABEL_17:
    v10 = CmpSplitLeaf(BugCheckParameter3, (__int64)&BugCheckParameter4);
    if ( v10 < 0 )
      goto LABEL_29;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v32);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v32);
    v23 = (unsigned int)BugCheckParameter4;
    *a2 = BugCheckParameter4;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v24 = HvpGetCellFlat(BugCheckParameter3, v23, v32);
    else
      v24 = HvpGetCellPaged(BugCheckParameter3, v23, v32);
    v13 = v24;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v31);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v31);
  }
  v10 = -1073741670;
LABEL_29:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v31);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v31);
LABEL_31:
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v32);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v32);
  }
  return (unsigned int)v10;
}
