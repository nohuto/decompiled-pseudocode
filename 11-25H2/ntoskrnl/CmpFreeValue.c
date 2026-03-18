/*
 * XREFs of CmpFreeValue @ 0x140886E8C
 * Callers:
 *     CmpFreeKeyValueList @ 0x1407D2600 (CmpFreeKeyValueList.c)
 *     CmpSyncKeyValues @ 0x1407D31A4 (CmpSyncKeyValues.c)
 *     CmSetValueKey @ 0x140869F98 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086BE88 (CmDeleteValueKey.c)
 *     CmpSetValueKeyNew @ 0x14087EEE0 (CmpSetValueKeyNew.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x1408861C0 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14088630C (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1408864B8 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmpCleanupLightWeightUoWData @ 0x1409D92CC (CmpCleanupLightWeightUoWData.c)
 *     CmpFreeKeyValues @ 0x140A72E14 (CmpFreeKeyValues.c)
 *     CmpSetValueKeyTombstone @ 0x140AA8940 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     CmpFreeValueData @ 0x140886F34 (CmpFreeValueData.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
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
  v6 = CmpFreeValueData(BugCheckParameter3, *(unsigned int *)(CellPaged + 8));
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
