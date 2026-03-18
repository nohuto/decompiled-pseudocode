/*
 * XREFs of CmpDereferenceSecurityNode @ 0x14049BFAC
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DCB7C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1407E2A84 (CmpSyncKeyValues.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A2E074 (CmpUndoDeleteKeyForTrans.c)
 *     CmpFreeSecurityDescriptor @ 0x140A3E7F0 (CmpFreeSecurityDescriptor.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A82334 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x140A8275C (CmpLightWeightCleanupSetSecDescUoW.c)
 * Callees:
 *     CmpKeySecurityDecrementReferenceCount @ 0x14049C05C (CmpKeySecurityDecrementReferenceCount.c)
 *     CmpRemoveSecurityCellList @ 0x1404B21F0 (CmpRemoveSecurityCellList.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140875730 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
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
