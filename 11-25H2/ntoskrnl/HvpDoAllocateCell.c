/*
 * XREFs of HvpDoAllocateCell @ 0x140880110
 * Callers:
 *     HvReallocateCell @ 0x14087F5A4 (HvReallocateCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvpDelistFreeCell @ 0x14087FF2C (HvpDelistFreeCell.c)
 *     HvpFindFreeCell @ 0x140880690 (HvpFindFreeCell.c)
 *     HvLockHiveWriter @ 0x140880B44 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140880F30 (HvUnlockHiveWriter.c)
 *     HvpGetCellContextMove @ 0x140880F68 (HvpGetCellContextMove.c)
 *     HvpRemoveFreeCellHint @ 0x140880FC0 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140881180 (HvpEnlistFreeCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     HvpAddBin @ 0x1409F795C (HvpAddBin.c)
 */

__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v9; // rdi
  char v10; // bp
  unsigned int FreeCell; // r12d
  unsigned int *v12; // rbx
  unsigned int v13; // r8d
  unsigned int v14; // esi
  __int64 v15; // r8
  unsigned int v16; // eax
  _DWORD *v17; // rax
  int v18; // esi
  unsigned int v20; // r8d
  unsigned int v21; // eax
  __int64 CellFlat; // rax
  bool v23; // zf
  unsigned int *v24; // rax
  __int64 v25; // [rsp+38h] [rbp-40h] BYREF
  __int64 v26; // [rsp+40h] [rbp-38h] BYREF

  v9 = a2;
  v25 = 0LL;
  v26 = 0LL;
  HvpGetCellContextInitialize(&v25);
  HvLockHiveWriter(BugCheckParameter3);
  v10 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter3, (__int64)&v26, (__int64)&v25);
  if ( FreeCell == -1 )
  {
    v18 = HvpAddBin(BugCheckParameter3);
    if ( v18 < 0 )
    {
      v12 = (unsigned int *)v26;
      goto LABEL_11;
    }
    FreeCell = 31;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, 0x1FuLL, &v25);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, 0x1Fu, &v25);
    v12 = 0LL;
    v23 = CellFlat == 0;
    v24 = (unsigned int *)(CellFlat - 4);
    if ( !v23 )
      v12 = v24;
  }
  else
  {
    v12 = (unsigned int *)v26;
  }
  v13 = *v12;
  v14 = *v12 - v9;
  if ( v14 < 8 )
  {
    HvpDelistFreeCell(BugCheckParameter3, FreeCell, a3);
    *v12 = -*v12;
  }
  else
  {
    *(unsigned int *)((char *)v12 + v9) = v14;
    *v12 = -(int)v9;
    v15 = (v13 >> 3) - 1;
    if ( (unsigned int)v15 >= 0x10 )
    {
      v20 = (unsigned int)v15 >> 4;
      if ( v20 > 0xFF )
      {
        v15 = 23LL;
      }
      else
      {
        _BitScanReverse(&v20, v20);
        v15 = v20 + 16;
      }
    }
    v16 = (v14 >> 3) - 1;
    if ( v16 >= 0x10 )
    {
      v21 = v16 >> 4;
      if ( v21 > 0xFF )
      {
        v16 = 23;
      }
      else
      {
        _BitScanReverse(&v21, v21);
        v16 = v21 + 16;
      }
    }
    if ( (_DWORD)v15 != v16 )
    {
      HvpRemoveFreeCellHint(BugCheckParameter3, FreeCell, v15, a3, 0);
      HvpEnlistFreeCell(BugCheckParameter3, FreeCell + (unsigned int)v9);
    }
  }
  HvUnlockHiveWriter(BugCheckParameter3);
  v10 = 0;
  if ( a5 )
  {
    v17 = v12 + 1;
    v12 = 0LL;
    *a5 = v17;
    HvpGetCellContextMove(a6, &v25);
  }
  *a4 = FreeCell;
  v18 = 0;
LABEL_11:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v25);
  }
  if ( v10 )
    HvUnlockHiveWriter(BugCheckParameter3);
  return (unsigned int)v18;
}
