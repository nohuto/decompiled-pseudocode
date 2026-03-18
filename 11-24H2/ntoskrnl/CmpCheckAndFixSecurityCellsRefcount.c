/*
 * XREFs of CmpCheckAndFixSecurityCellsRefcount @ 0x140A73A84
 * Callers:
 *     CmpCheckRegistry2 @ 0x140884BD0 (CmpCheckRegistry2.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1404B21F0 (CmpRemoveSecurityCellList.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpCheckAndFixSecurityCellsRefcount(ULONG_PTR BugCheckParameter3)
{
  unsigned int *v2; // rsi
  unsigned int v3; // ebp
  _BYTE *v4; // rdi
  unsigned int v5; // r14d
  unsigned int *v6; // r15
  unsigned int v7; // r12d
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  unsigned int v10; // ebp
  int v11; // r14d
  __int64 v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0LL;
  v2 = 0LL;
  HvpGetCellContextInitialize(&v13);
  v3 = 0;
  v4 = (_BYTE *)(BugCheckParameter3 + 140);
  while ( 1 )
  {
    v5 = v3;
    if ( v3 >= *(_DWORD *)(BugCheckParameter3 + 1872) )
      break;
    v4 = (_BYTE *)(BugCheckParameter3 + 140);
    v6 = (unsigned int *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v3);
    v7 = *v6;
    v8 = *v6;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, &v13);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, &v13);
    v2 = (unsigned int *)CellFlat;
    if ( *(_DWORD *)(CellFlat + 12) != *(_DWORD *)(*((_QWORD *)v6 + 1) + 28LL) )
    {
      v11 = HvpMarkCellDirty(BugCheckParameter3, *v6, 0);
      if ( v11 < 0 )
        goto LABEL_13;
      v5 = v3;
      v2[3] = *(_DWORD *)(*((_QWORD *)v6 + 1) + 28LL);
    }
    if ( *(_DWORD *)(*((_QWORD *)v6 + 1) + 28LL) )
    {
      v10 = v5;
      if ( v2 )
      {
        if ( (*v4 & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
        v2 = 0LL;
      }
    }
    else
    {
      v11 = HvpMarkCellDirty(BugCheckParameter3, v7, 0);
      if ( v11 < 0 )
        goto LABEL_13;
      v11 = HvpMarkCellDirty(BugCheckParameter3, v2[1], 0);
      if ( v11 < 0 )
        goto LABEL_13;
      v11 = HvpMarkCellDirty(BugCheckParameter3, v2[2], 0);
      if ( v11 < 0 )
        goto LABEL_13;
      if ( (*v4 & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
      v2 = 0LL;
      CmpRemoveSecurityCellList(BugCheckParameter3, v7);
      HvFreeCell(BugCheckParameter3, v7);
      v10 = v3 - 1;
    }
    v3 = v10 + 1;
  }
  v11 = 0;
LABEL_13:
  if ( v2 )
  {
    if ( (*v4 & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  }
  return (unsigned int)v11;
}
