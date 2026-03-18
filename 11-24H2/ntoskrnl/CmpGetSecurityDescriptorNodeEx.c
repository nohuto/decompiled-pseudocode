/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x14088067C
 * Callers:
 *     CmpAssignKeySecurity @ 0x1407DC9C0 (CmpAssignKeySecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DCB7C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1407E2A84 (CmpSyncKeyValues.c)
 *     CmpAssignSecurityDescriptor @ 0x140880648 (CmpAssignSecurityDescriptor.c)
 *     CmpCopyKeyPartial @ 0x140880F10 (CmpCopyKeyPartial.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x140915C74 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateChild @ 0x14091788C (CmpCreateChild.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A82480 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpCreateHiveRootCell @ 0x140AA6F78 (CmpCreateHiveRootCell.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x140480680 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x140494ECC (CmpKeySecurityIncrementReferenceCount.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086A638 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408822D8 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409A0AF4 (CmpFindMatchingDescriptorCell.c)
 *     CmpInsertSecurityCellList @ 0x1409A1028 (CmpInsertSecurityCellList.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR BugCheckParameter3,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  ULONG_PTR v11; // rdx
  int Cell; // edi
  unsigned int v13; // r15d
  __int64 CellFlat; // rax
  __int64 v15; // r14
  unsigned int v17; // eax
  _DWORD *v18; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF

  LODWORD(BugCheckParameter4) = 0;
  v20 = 0LL;
  v21 = 0LL;
  HvpGetCellContextInitialize(&v20);
  Cell = HvpMarkCellDirty(BugCheckParameter3, v11, 0);
  if ( Cell < 0 )
    return (unsigned int)Cell;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter3, a3, a2);
  if ( (unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter3, Src, a4, &BugCheckParameter4, 0LL) )
  {
    v13 = BugCheckParameter4;
    Cell = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4, 0);
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
  Cell = CmpInsertSecurityCellList(BugCheckParameter3, a2, 0xFFFFFFFFuLL);
  if ( Cell >= 0 )
  {
    *a7 = -1;
LABEL_8:
    Cell = 0;
    goto LABEL_9;
  }
  return (unsigned int)Cell;
}
