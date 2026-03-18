/*
 * XREFs of CmpFreeKeyByCell @ 0x140886C64
 * Callers:
 *     CmDeleteLayeredKey @ 0x14041D4E4 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x140492108 (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x14065C944 (CmpCreateTombstone.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpDeleteTree @ 0x1407D41F4 (CmpDeleteTree.c)
 *     CmDeleteKey @ 0x14086D4EC (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140885884 (CmpTransMgrFreeVolatileData.c)
 *     CmpCreateChild @ 0x1408884FC (CmpCreateChild.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x14097470C (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x14097497C (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCleanupLightWeightUoWData @ 0x1409D92CC (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1409DA0D4 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x1409DA2CC (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA8450 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     CmpFreeValue @ 0x140886E8C (CmpFreeValue.c)
 *     CmLockHiveSecurityExclusive @ 0x14088709C (CmLockHiveSecurityExclusive.c)
 *     CmpMarkKeyDirty @ 0x1408870F0 (CmpMarkKeyDirty.c)
 *     CmpRemoveSubKey @ 0x140887D4C (CmpRemoveSubKey.c)
 *     CmpFreeKeyBody @ 0x140888154 (CmpFreeKeyBody.c)
 *     CmpFreeSecurityDescriptor @ 0x14088820C (CmpFreeSecurityDescriptor.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmUnlockHiveSecurity @ 0x140BA9AB8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpFreeKeyByCell(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned int v3; // esi
  unsigned int v5; // r14d
  signed int v7; // edi
  __int64 CellFlat; // rax
  __int64 v9; // rdi
  ULONG_PTR v10; // rdx
  __int64 v11; // rax
  ULONG_PTR v13; // rdx
  __int64 CellPaged; // rax
  __int64 v15; // r15
  unsigned int v16[2]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v17[2]; // [rsp+28h] [rbp-8h] BYREF
  unsigned int v18; // [rsp+68h] [rbp+38h] BYREF
  int v19; // [rsp+6Ch] [rbp+3Ch]

  v18 = -1;
  v3 = 0;
  v16[0] = -1;
  v17[0] = -1;
  v5 = BugCheckParameter4;
  v19 = 0;
  v16[1] = 0;
  v17[1] = 0;
  CmLockHiveSecurityExclusive(BugCheckParameter3);
  v7 = CmpMarkKeyDirty(BugCheckParameter3, v5);
  if ( v7 < 0 )
    goto LABEL_21;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, &v18);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, &v18);
  v9 = CellFlat;
  if ( !CellFlat )
  {
    v7 = -1073741670;
    goto LABEL_21;
  }
  if ( a3 == 1 )
  {
    if ( !(unsigned __int8)CmpRemoveSubKey(BugCheckParameter3) )
      goto LABEL_37;
    v10 = *(unsigned int *)(v9 + 16);
    v11 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v10, v16)
        : HvpGetCellPaged(BugCheckParameter3, v10, v16);
    if ( !v11 )
      goto LABEL_37;
    if ( !(*(_DWORD *)(v11 + 20) + *(_DWORD *)(v11 + 24)) )
    {
      *(_WORD *)(v11 + 52) = 0;
      *(_DWORD *)(v11 + 56) = 0;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v16);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v16);
  }
  if ( (*(_BYTE *)(v9 + 2) & 0x42) == 0 )
  {
    if ( !*(_DWORD *)(v9 + 36) )
    {
LABEL_16:
      if ( *(_DWORD *)(v9 + 44) != -1 )
        CmpFreeSecurityDescriptor(BugCheckParameter3);
      goto LABEL_18;
    }
    v13 = *(unsigned int *)(v9 + 40);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(BugCheckParameter3, v13, v17);
    else
      CellPaged = HvpGetCellPaged(BugCheckParameter3, v13, v17);
    v15 = CellPaged;
    if ( CellPaged )
    {
      if ( *(_DWORD *)(v9 + 36) )
      {
        do
          CmpFreeValue(BugCheckParameter3, *(unsigned int *)(v15 + 4LL * v3++));
        while ( v3 < *(_DWORD *)(v9 + 36) );
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v17);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v17);
      HvFreeCell(BugCheckParameter3, *(_DWORD *)(v9 + 40));
      goto LABEL_16;
    }
LABEL_37:
    v7 = -1073741670;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v18);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v18);
    goto LABEL_21;
  }
LABEL_18:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v18);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v18);
  v7 = (unsigned __int8)CmpFreeKeyBody(BugCheckParameter3, v5) == 0 ? 0xC000009A : 0;
LABEL_21:
  CmUnlockHiveSecurity(BugCheckParameter3);
  return (unsigned int)v7;
}
