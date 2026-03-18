/*
 * XREFs of CmpLightWeightDuplicateParentLists @ 0x1409DA684
 * Callers:
 *     CmpLightWeightCreateModificationData @ 0x1409DA5B8 (CmpLightWeightCreateModificationData.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpMarkEntireIndexDirty @ 0x140A85950 (CmpMarkEntireIndexDirty.c)
 *     CmpDuplicateIndex @ 0x140AAA134 (CmpDuplicateIndex.c)
 */

__int64 __fastcall CmpLightWeightDuplicateParentLists(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3)
{
  ULONG_PTR v5; // rdx
  __int64 CellFlat; // rax
  int v7; // ebp
  _DWORD *v8; // rsi
  __int64 v9; // r14
  unsigned int v10; // r15d
  int v11; // edi
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  HvpGetCellContextInitialize(&v13);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, &v13);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, &v13);
  if ( CellFlat )
  {
    v7 = 0;
    v8 = (_DWORD *)(CellFlat + 20);
    v9 = a3 - CellFlat;
    while ( v7 < 2 )
    {
      v10 = v8[2];
      if ( v10 != -1 )
      {
        v11 = CmpMarkEntireIndexDirty(BugCheckParameter3, v10);
        if ( v11 < 0 )
          goto LABEL_13;
        v11 = CmpDuplicateIndex(BugCheckParameter3);
        if ( v11 < 0 )
          goto LABEL_13;
        *(_DWORD *)((char *)v8 + v9 - 16) = *v8;
      }
      ++v7;
      ++v8;
    }
    v11 = 0;
LABEL_13:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v13);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v13);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v11;
}
