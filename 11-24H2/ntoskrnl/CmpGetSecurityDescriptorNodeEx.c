/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x14088452C
 * Callers:
 *     CmpAssignKeySecurity @ 0x1407DCF10 (CmpAssignKeySecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpAssignSecurityDescriptor @ 0x1408844F8 (CmpAssignSecurityDescriptor.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A7D024 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x14047B1E0 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x14048F78C (CmpKeySecurityIncrementReferenceCount.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpFindMatchingDescriptorCell @ 0x140831A34 (CmpFindMatchingDescriptorCell.c)
 *     CmpInsertSecurityCellList @ 0x14083234C (CmpInsertSecurityCellList.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086E968 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v10; // r15d
  ULONG_PTR v11; // rdx
  int Cell; // edi
  unsigned int v13; // r15d
  __int64 CellFlat; // rax
  __int64 v15; // r14
  unsigned int v17; // eax
  _DWORD *v18; // rcx
  ULONG_PTR BugCheckParameter4a; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter4a) = 0;
  v20 = 0LL;
  v21 = 0LL;
  v10 = BugCheckParameter4;
  HvpGetCellContextInitialize(&v20);
  Cell = HvpMarkCellDirty(BugCheckParameter3, v11, 0);
  if ( Cell < 0 )
    return (unsigned int)Cell;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter3, a3, v10);
  if ( CmpFindMatchingDescriptorCell(BugCheckParameter3, Src, a4, &BugCheckParameter4a, 0LL) )
  {
    v13 = BugCheckParameter4a;
    Cell = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4a, 0);
    if ( Cell < 0 )
      return (unsigned int)Cell;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v13, &v20);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v13, &v20);
    v15 = CellFlat;
    Cell = CmpKeySecurityIncrementReferenceCount(CellFlat, BugCheckParameter3, v13, 0);
    if ( Cell < 0 )
      goto LABEL_9;
    *a7 = v13;
    goto LABEL_8;
  }
  if ( KeGetCurrentThread()->PreviousMode
    && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
  {
    return (unsigned int)-1073741790;
  }
  RtlLengthSecurityDescriptorStrict();
  Cell = HvAllocateCell(BugCheckParameter3, (__int64)&v21, (__int64)&v20);
  if ( Cell < 0 )
  {
    v15 = v21;
LABEL_9:
    if ( v15 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v20);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v20);
    }
    return (unsigned int)Cell;
  }
  v17 = RtlLengthSecurityDescriptorStrict();
  v18 = (_DWORD *)v21;
  *(_WORD *)v21 = 27507;
  v18[3] = 1;
  v18[4] = v17;
  memmove(v18 + 5, Src, v17);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v20);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v20);
  v15 = 0LL;
  Cell = CmpInsertSecurityCellList(BugCheckParameter3, v10, -1, a6);
  if ( Cell >= 0 )
  {
    *a7 = -1;
LABEL_8:
    Cell = 0;
    goto LABEL_9;
  }
  return (unsigned int)Cell;
}
