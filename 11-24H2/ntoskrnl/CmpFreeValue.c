/*
 * XREFs of CmpFreeValue @ 0x14088092C
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1407DE314 (CmpCleanupLightWeightUoWData.c)
 *     CmpFreeKeyValueList @ 0x1407E1EE0 (CmpFreeKeyValueList.c)
 *     CmpSyncKeyValues @ 0x1407E2A84 (CmpSyncKeyValues.c)
 *     CmSetValueKey @ 0x14086B130 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x14086D078 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087B284 (CmpTransMgrFreeVolatileData.c)
 *     CmpFreeKeyByCell @ 0x140880420 (CmpFreeKeyByCell.c)
 *     CmpSetValueKeyNew @ 0x140880E28 (CmpSetValueKeyNew.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x1409FEC68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A2F314 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A2F460 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpFreeKeyValues @ 0x140A75464 (CmpFreeKeyValues.c)
 *     CmpSetValueKeyTombstone @ 0x140AADCF4 (CmpSetValueKeyTombstone.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     CmpFreeValueData @ 0x1408809D4 (CmpFreeValueData.c)
 *     HvFreeCell @ 0x140881C04 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
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
