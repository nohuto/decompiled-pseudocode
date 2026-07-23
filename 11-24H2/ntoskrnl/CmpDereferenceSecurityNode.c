/*
 * XREFs of CmpDereferenceSecurityNode @ 0x140496BD8
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpFreeSecurityDescriptor @ 0x140A34100 (CmpFreeSecurityDescriptor.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A7CED8 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A7D300 (CmpLightWeightCleanupSetSecDescUoW.c)
 * Callees:
 *     CmpKeySecurityDecrementReferenceCount @ 0x140496C88 (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpRemoveSecurityCellList @ 0x1404ACA80 (CmpRemoveSecurityCellList.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
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
