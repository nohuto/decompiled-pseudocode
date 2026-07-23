/*
 * XREFs of CmpMarkEntireIndexDirty @ 0x140A86614
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpLightWeightDuplicateParentLists @ 0x140A148A8 (CmpLightWeightDuplicateParentLists.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
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
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v9);
  }
  return 0LL;
}
