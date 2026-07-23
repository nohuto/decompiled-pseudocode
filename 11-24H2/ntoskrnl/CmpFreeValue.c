/*
 * XREFs of CmpFreeValue @ 0x1408847DC
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1407DE864 (CmpCleanupLightWeightUoWData.c)
 *     CmpFreeKeyValueList @ 0x1407E2430 (CmpFreeKeyValueList.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x140884CD8 (CmpSetValueKeyNew.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409F7BB0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A23D54 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A23EA0 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpFreeKeyValues @ 0x140A6F904 (CmpFreeKeyValues.c)
 *     CmpSetValueKeyTombstone @ 0x140AA8D74 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpFreeValueData @ 0x140884884 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpFreeValue(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  unsigned int v2; // edi
  bool v3; // zf
  __int64 CellPaged; // rax
  char v6; // al
  char v7; // cl
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+34h] [rbp+Ch]

  v9 = -1;
  v2 = a2;
  v3 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v10 = 0;
  if ( v3 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, &v9);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, &v9);
  if ( !CellPaged )
    return 0;
  v6 = CmpFreeValueData(BugCheckParameter3);
  v7 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
  if ( !v6 )
  {
    if ( v7 )
      HvpReleaseCellFlat(BugCheckParameter3, &v9);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v9);
    return 0;
  }
  if ( v7 )
    HvpReleaseCellFlat(BugCheckParameter3, &v9);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v9);
  HvFreeCell(BugCheckParameter3, v2);
  return 1;
}
