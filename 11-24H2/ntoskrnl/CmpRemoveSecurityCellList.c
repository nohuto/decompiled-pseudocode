/*
 * XREFs of CmpRemoveSecurityCellList @ 0x1404ACA80
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x140496BD8 (CmpDereferenceSecurityNode.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A6D3DC (CmpCheckAndFixSecurityCellsRefcount.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpRemoveFromSecurityCache @ 0x140A626F4 (CmpRemoveFromSecurityCache.c)
 */

__int64 __fastcall CmpRemoveSecurityCellList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned int v3; // r15d
  __int64 v4; // r14
  bool v5; // zf
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  __int64 CellPaged; // rax
  int v11; // [rsp+60h] [rbp+40h] BYREF
  int v12; // [rsp+64h] [rbp+44h]
  int v13; // [rsp+70h] [rbp+50h] BYREF
  int v14; // [rsp+74h] [rbp+54h]
  int v15; // [rsp+78h] [rbp+58h] BYREF
  int v16; // [rsp+7Ch] [rbp+5Ch]

  v14 = 0;
  v16 = 0;
  v13 = -1;
  v3 = a2;
  v15 = -1;
  v4 = 0LL;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v11 = -1;
  v12 = 0;
  if ( v5 )
    result = HvpGetCellPaged(BugCheckParameter3);
  else
    result = HvpGetCellFlat(BugCheckParameter3, a2);
  v7 = result;
  if ( result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(result + 4));
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v9 = CellFlat;
    if ( CellFlat
      && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0
        ? (CellPaged = HvpGetCellPaged(BugCheckParameter3))
        : (CellPaged = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v7 + 8))),
          (v4 = CellPaged) != 0) )
    {
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(CellPaged + 4) = *(_DWORD *)(v7 + 4);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v13);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v13);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v15);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v15);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v11);
      else
        HvpReleaseCellPaged(BugCheckParameter3, &v11);
      return CmpRemoveFromSecurityCache(BugCheckParameter3, v3);
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        result = HvpReleaseCellFlat(BugCheckParameter3, &v11);
      else
        result = HvpReleaseCellPaged(BugCheckParameter3, &v11);
      if ( v9 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          result = HvpReleaseCellFlat(BugCheckParameter3, &v13);
        else
          result = HvpReleaseCellPaged(BugCheckParameter3, &v13);
      }
      if ( v4 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          return HvpReleaseCellFlat(BugCheckParameter3, &v15);
        else
          return HvpReleaseCellPaged(BugCheckParameter3, &v15);
      }
    }
  }
  return result;
}
