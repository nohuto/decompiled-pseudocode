/*
 * XREFs of CmpUpdateHiveRootCellFlags @ 0x140A530D4
 * Callers:
 *     CmpDoParseKey @ 0x14086E7B0 (CmpDoParseKey.c)
 * Callees:
 *     HvUnlockHiveFlusherShared @ 0x14086A604 (HvUnlockHiveFlusherShared.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x14087DD28 (HvLockHiveFlusherShared.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpUpdateHiveRootCellFlags(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // esi
  __int64 CellFlat; // rax
  __int64 v5; // rdi
  int v6; // esi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextInitialize(&v8);
  HvLockHiveFlusherShared(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v3, &v8);
  v5 = CellFlat;
  if ( !CellFlat )
  {
    v6 = -1073741670;
    goto LABEL_10;
  }
  if ( (*(_BYTE *)(CellFlat + 2) & 0xC) != 0xC )
  {
    v6 = HvpMarkCellDirty(BugCheckParameter3, v3, 0);
    if ( v6 < 0 )
      goto LABEL_8;
    *(_WORD *)(v5 + 2) |= 0xCu;
  }
  v6 = 0;
LABEL_8:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
LABEL_10:
  HvUnlockHiveFlusherShared(BugCheckParameter3);
  return (unsigned int)v6;
}
