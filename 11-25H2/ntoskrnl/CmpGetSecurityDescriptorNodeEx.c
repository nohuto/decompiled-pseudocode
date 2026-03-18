/*
 * XREFs of CmpGetSecurityDescriptorNodeEx @ 0x140976170
 * Callers:
 *     CmpAssignKeySecurity @ 0x1407CD200 (CmpAssignKeySecurity.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x14087EFC8 (CmpCopyKeyPartial.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14097497C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpAssignSecurityDescriptor @ 0x14097613C (CmpAssignSecurityDescriptor.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140977BB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1409D9BA8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpCreateHiveRootCell @ 0x140AA21DC (CmpCreateHiveRootCell.c)
 * Callees:
 *     RtlLengthSecurityDescriptorStrict @ 0x14047F924 (RtlLengthSecurityDescriptorStrict.c)
 *     CmpKeySecurityIncrementReferenceCount @ 0x1404960C4 (CmpKeySecurityIncrementReferenceCount.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x14086CCD4 (CmpUpdateKeyNodeAccessBits.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvAllocateCell @ 0x1408803CC (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpInsertSecurityCellList @ 0x14091CB94 (CmpInsertSecurityCellList.c)
 *     CmpFindMatchingDescriptorCell @ 0x1409763A4 (CmpFindMatchingDescriptorCell.c)
 */

__int64 __fastcall CmpGetSecurityDescriptorNodeEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        unsigned int a4,
        void *Src,
        char a6,
        unsigned int *a7)
{
  unsigned int v8; // esi
  unsigned int v11; // r15d
  ULONG_PTR v12; // rdx
  int inserted; // edi
  const void *v14; // r14
  unsigned int v15; // r15d
  __int64 CellFlat; // rax
  __int64 v17; // r14
  int v19; // eax
  unsigned int v20; // eax
  _DWORD *v21; // rcx
  ULONG_PTR BugCheckParameter4a; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR v25; // [rsp+80h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter4a) = 0;
  v23 = 0LL;
  v24 = 0LL;
  v8 = -1;
  LODWORD(v25) = -1;
  v11 = BugCheckParameter4;
  HvpGetCellContextInitialize(&v23);
  inserted = HvpMarkCellDirty(BugCheckParameter3, v12, 0);
  if ( inserted < 0 )
    return (unsigned int)inserted;
  CmpUpdateKeyNodeAccessBits(BugCheckParameter3, a3, v11);
  v14 = Src;
  if ( (unsigned __int8)CmpFindMatchingDescriptorCell(BugCheckParameter3, Src, a4, &BugCheckParameter4a, 0LL) )
  {
    v15 = BugCheckParameter4a;
    inserted = HvpMarkCellDirty(BugCheckParameter3, (unsigned int)BugCheckParameter4a, 0);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v15, &v23);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v15, &v23);
    v17 = CellFlat;
    inserted = CmpKeySecurityIncrementReferenceCount(CellFlat, BugCheckParameter3, v15, 0);
    if ( inserted < 0 )
      goto LABEL_9;
    *a7 = v15;
    goto LABEL_8;
  }
  if ( KeGetCurrentThread()->PreviousMode
    && (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0
    && *(_DWORD *)(BugCheckParameter3 + 1872) > 1u )
  {
    return (unsigned int)-1073741790;
  }
  v19 = RtlLengthSecurityDescriptorStrict();
  inserted = HvAllocateCell(BugCheckParameter3, v19 + 20, a4, (unsigned int *)&v25, &v24, (__int64)&v23);
  if ( inserted < 0 )
  {
    v8 = v25;
    v17 = v24;
LABEL_9:
    if ( v17 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v23);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
    }
    goto LABEL_12;
  }
  v20 = RtlLengthSecurityDescriptorStrict();
  v21 = (_DWORD *)v24;
  *(_WORD *)v24 = 27507;
  v21[3] = 1;
  v21[4] = v20;
  memmove(v21 + 5, v14, v20);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v23);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v23);
  v8 = v25;
  v17 = 0LL;
  inserted = CmpInsertSecurityCellList(BugCheckParameter3, v11, v25, a6);
  if ( inserted >= 0 )
  {
    *a7 = v8;
    v8 = -1;
LABEL_8:
    inserted = 0;
    goto LABEL_9;
  }
LABEL_12:
  if ( v8 != -1 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)inserted;
}
