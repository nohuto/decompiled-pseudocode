/*
 * XREFs of HvpDoAllocateCell @ 0x140885F04
 * Callers:
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpDelistFreeCell @ 0x140885D24 (HvpDelistFreeCell.c)
 *     HvpFindFreeCell @ 0x140886450 (HvpFindFreeCell.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvpGetCellContextMove @ 0x140886D10 (HvpGetCellContextMove.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140886F20 (HvpEnlistFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     HvpAddBin @ 0x140968D94 (HvpAddBin.c)
 */

__int64 __fastcall HvpDoAllocateCell(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        __int64 a6)
{
  __int64 v7; // rsi
  char v9; // r12
  unsigned int FreeCell; // r15d
  unsigned int *v11; // rdi
  unsigned int v12; // r8d
  unsigned int v13; // r14d
  __int64 v14; // r8
  unsigned int v15; // eax
  _DWORD *v16; // rax
  int v17; // r14d
  unsigned int v19; // r8d
  unsigned int v20; // eax
  __int64 CellFlat; // rax
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  __int64 v23; // [rsp+40h] [rbp-10h] BYREF

  v7 = a2;
  v22 = 0LL;
  v23 = 0LL;
  HvpGetCellContextInitialize(&v22);
  HvLockHiveWriter(BugCheckParameter3);
  v9 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter3, (__int64)&v23, (__int64)&v22);
  if ( FreeCell == -1 )
  {
    v17 = HvpAddBin(BugCheckParameter3);
    if ( v17 < 0 )
    {
      v11 = (unsigned int *)v23;
      goto LABEL_11;
    }
    FreeCell = 31;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, 0x1FuLL, &v22);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, 0x1Fu, &v22);
    v11 = (unsigned int *)((CellFlat - 4) & -(__int64)(CellFlat != 0));
  }
  else
  {
    v11 = (unsigned int *)v23;
  }
  v12 = *v11;
  v13 = *v11 - v7;
  if ( v13 < 8 )
  {
    HvpDelistFreeCell(BugCheckParameter3, FreeCell, a3);
    *v11 = -*v11;
  }
  else
  {
    *(unsigned int *)((char *)v11 + v7) = v13;
    *v11 = -(int)v7;
    v14 = (v12 >> 3) - 1;
    if ( (unsigned int)v14 >= 0x10 )
    {
      v19 = (unsigned int)v14 >> 4;
      if ( v19 > 0xFF )
      {
        v14 = 23LL;
      }
      else
      {
        _BitScanReverse(&v19, v19);
        v14 = v19 + 16;
      }
    }
    v15 = (v13 >> 3) - 1;
    if ( v15 >= 0x10 )
    {
      v20 = v15 >> 4;
      if ( v20 > 0xFF )
      {
        v15 = 23;
      }
      else
      {
        _BitScanReverse(&v20, v20);
        v15 = v20 + 16;
      }
    }
    if ( (_DWORD)v14 != v15 )
    {
      HvpRemoveFreeCellHint(BugCheckParameter3, FreeCell, v14, a3, 0);
      HvpEnlistFreeCell(BugCheckParameter3, FreeCell + (unsigned int)v7);
    }
  }
  HvUnlockHiveWriter(BugCheckParameter3);
  v9 = 0;
  if ( a5 )
  {
    v16 = v11 + 1;
    v11 = 0LL;
    *a5 = v16;
    HvpGetCellContextMove(a6, &v22);
  }
  v17 = 0;
  *a4 = FreeCell;
LABEL_11:
  if ( v11 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v22);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v22);
  }
  if ( v9 )
    HvUnlockHiveWriter(BugCheckParameter3);
  return (unsigned int)v17;
}
