/*
 * XREFs of HvMarkCellDirty @ 0x1408867AC
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x1404C5A14 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvpMarkDirty @ 0x140886940 (HvpMarkDirty.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  ULONG_PTR v5; // rdi
  __int64 CellFlat; // rax
  int v7; // edi
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  int v10; // [rsp+54h] [rbp+Ch]

  v9 = -1;
  v10 = 0;
  v5 = (unsigned int)BugCheckParameter4;
  if ( (*(_DWORD *)(BugCheckParameter3 + 160) & 1) != 0 || (BugCheckParameter4 & 0x80000000) != 0LL )
    return 0;
  if ( !a3 )
    HvLockHiveWriter(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v5, &v9);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, &v9);
  if ( ((CellFlat - 4) & -(__int64)(CellFlat != 0)) != 0 )
  {
    if ( !HvpGetCellMap(BugCheckParameter3, (unsigned int)v5) )
      KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v5, 0x2A7uLL);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v9);
    v7 = HvpMarkDirty(BugCheckParameter3);
    if ( !a3 )
      HvUnlockHiveWriter(BugCheckParameter3);
    if ( v7 >= 0 )
    {
      *(_BYTE *)(BugCheckParameter3 + 141) = 1;
      return 0;
    }
  }
  else
  {
    if ( !a3 )
      HvUnlockHiveWriter(BugCheckParameter3);
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
