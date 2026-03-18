/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x140A85950
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x1409DA684 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkEntireIndexDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // esi
  ULONG_PTR v4; // rdx
  __int64 CellFlat; // rax
  _WORD *v6; // rdi
  unsigned int i; // esi
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextInitialize(&v9);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4, &v9);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v4, &v9);
  v6 = (_WORD *)CellFlat;
  HvLockHiveWriter(BugCheckParameter3);
  if ( (int)HvpMarkCellDirty(BugCheckParameter3, v3, 1) >= 0 && *v6 == 26994 )
  {
    for ( i = 0; i < (unsigned __int16)v6[1]; ++i )
    {
      if ( (int)HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)&v6[2 * i + 2], 1) < 0 )
        break;
    }
  }
  HvUnlockHiveWriter(BugCheckParameter3);
  if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v9);
  }
  return 0LL;
}
