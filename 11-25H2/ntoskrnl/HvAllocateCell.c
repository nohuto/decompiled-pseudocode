/*
 * XREFs of HvAllocateCell @ 0x1408803CC
 * Callers:
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x1407CADE4 (CmpAddValueKeyTombstone.c)
 *     HvDuplicateCell @ 0x140867688 (HvDuplicateCell.c)
 *     CmpAddValueToListEx @ 0x14087F434 (CmpAddValueToListEx.c)
 *     CmpAddValueKeyNew @ 0x14087FB18 (CmpAddValueKeyNew.c)
 *     CmpCopyCell @ 0x14087FFE8 (CmpCopyCell.c)
 *     CmpSetValueDataNew @ 0x1408816B8 (CmpSetValueDataNew.c)
 *     CmpSetValueKeyExisting @ 0x140887430 (CmpSetValueKeyExisting.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpAddSubKeyEx @ 0x1408897A8 (CmpAddSubKeyEx.c)
 *     CmpConcatenateValueLists @ 0x1409733EC (CmpConcatenateValueLists.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14097497C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x140976170 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1409765B8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x1409DA2CC (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpSplitLeaf @ 0x140A161D8 (CmpSplitLeaf.c)
 *     CmpSetValueDataExisting @ 0x140A5FB2C (CmpSetValueDataExisting.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140C35CA4 (CmpCreateRootNode.c)
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

__int64 __fastcall HvAllocateCell(
        ULONG_PTR BugCheckParameter3,
        int a2,
        unsigned int a3,
        unsigned int *a4,
        _QWORD *a5,
        __int64 a6)
{
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rbx
  char v11; // r12
  unsigned int FreeCell; // r15d
  unsigned int *v13; // rsi
  unsigned int v14; // r8d
  unsigned int v15; // r14d
  __int64 v16; // r8
  unsigned int v17; // eax
  _DWORD *v18; // rax
  unsigned int v19; // ebx
  int v20; // r14d
  unsigned int v22; // r8d
  unsigned int v23; // eax
  __int64 CellFlat; // rax
  __int64 v25; // [rsp+38h] [rbp-18h] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF

  v8 = (a2 + 11) & 0xFFFFFFF8;
  v9 = 0;
  v10 = 0x4000LL;
  while ( v8 > (unsigned int)v10 )
  {
    v10 = (unsigned int)(2 * v10);
    ++v9;
  }
  if ( !v9 )
    v10 = v8;
  if ( (unsigned int)v10 > 0x100000 )
    return (unsigned int)-1073741670;
  v25 = 0LL;
  v26 = 0LL;
  HvpGetCellContextInitialize(&v25);
  HvLockHiveWriter(BugCheckParameter3);
  v11 = 1;
  FreeCell = HvpFindFreeCell(BugCheckParameter3, (__int64)&v26, (__int64)&v25);
  if ( FreeCell != -1 )
  {
    v13 = (unsigned int *)v26;
LABEL_8:
    v14 = *v13;
    v15 = *v13 - v10;
    if ( v15 < 8 )
    {
      HvpDelistFreeCell(BugCheckParameter3, FreeCell, a3);
      *v13 = -*v13;
    }
    else
    {
      *(unsigned int *)((char *)v13 + v10) = v15;
      *v13 = -(int)v10;
      v16 = (v14 >> 3) - 1;
      if ( (unsigned int)v16 >= 0x10 )
      {
        v22 = (unsigned int)v16 >> 4;
        if ( v22 > 0xFF )
        {
          v16 = 23LL;
        }
        else
        {
          _BitScanReverse(&v22, v22);
          v16 = v22 + 16;
        }
      }
      v17 = (v15 >> 3) - 1;
      if ( v17 >= 0x10 )
      {
        v23 = v17 >> 4;
        if ( v23 > 0xFF )
        {
          v17 = 23;
        }
        else
        {
          _BitScanReverse(&v23, v23);
          v17 = v23 + 16;
        }
      }
      if ( (_DWORD)v16 != v17 )
      {
        HvpRemoveFreeCellHint(BugCheckParameter3, FreeCell, v16, a3, 0);
        HvpEnlistFreeCell(BugCheckParameter3, (unsigned int)v10 + FreeCell);
      }
    }
    HvUnlockHiveWriter(BugCheckParameter3);
    v11 = 0;
    if ( a5 )
    {
      v18 = v13 + 1;
      v13 = 0LL;
      *a5 = v18;
      HvpGetCellContextMove(a6, &v25);
    }
    v19 = FreeCell;
    v20 = 0;
    goto LABEL_16;
  }
  v20 = HvpAddBin(BugCheckParameter3);
  if ( v20 >= 0 )
  {
    FreeCell = 31;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, 0x1FuLL, &v25);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, 0x1Fu, &v25);
    v13 = (unsigned int *)((CellFlat - 4) & -(__int64)(CellFlat != 0));
    goto LABEL_8;
  }
  v13 = (unsigned int *)v26;
  v19 = 0;
LABEL_16:
  if ( v13 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v25);
  }
  if ( v11 )
    HvUnlockHiveWriter(BugCheckParameter3);
  if ( v20 >= 0 )
  {
    v20 = 0;
    *a4 = v19;
  }
  return (unsigned int)v20;
}
