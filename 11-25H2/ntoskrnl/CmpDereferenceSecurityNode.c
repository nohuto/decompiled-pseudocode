/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1404A3C08
 * Callers:
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeSecurityDescriptor @ 0x14088820C (CmpFreeSecurityDescriptor.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140977BB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x1409D8A60 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x1409DA09C (CmpLightWeightCleanupSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1404B13E8 (CmpRemoveSecurityCellList.c)
 *     CmpKeySecurityDecrementReferenceCount @ 0x1404F20CC (CmpKeySecurityDecrementReferenceCount.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v4; // rdx
  __int64 CellFlat; // rax
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  HvpGetCellContextInitialize(&v8);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v4);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v6 = CellFlat;
  result = CmpKeySecurityDecrementReferenceCount(CellFlat, BugCheckParameter3, a2);
  if ( (_BYTE)result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v8);
    CmpRemoveSecurityCellList(BugCheckParameter3);
    return HvFreeCell(BugCheckParameter3, a2);
  }
  else if ( v6 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v8);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v8);
  }
  return result;
}
