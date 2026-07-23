/*
 * XREFs of CmpFreeKeyByCell @ 0x1408842D0
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmpRemoveHiveFromNamespace @ 0x14048BF4C (CmpRemoveHiveFromNamespace.c)
 *     CmpCreateTombstone @ 0x140666D04 (CmpCreateTombstone.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpCleanupLightWeightUoWData @ 0x1407DE864 (CmpCleanupLightWeightUoWData.c)
 *     CmpDeleteTree @ 0x1407E4024 (CmpDeleteTree.c)
 *     CmDeleteKey @ 0x14086DF2C (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpPartialPromoteSingleKeyFromKeyNodeStacks @ 0x140909474 (CmpPartialPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCopyMergeOfLayeredKeyNode @ 0x1409096E4 (CmpCopyMergeOfLayeredKeyNode.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A14304 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A144F0 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpSyncSubKeysAfterDelete @ 0x140AA89B0 (CmpSyncSubKeysAfterDelete.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkKeyDirty @ 0x1408839E4 (CmpMarkKeyDirty.c)
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpRemoveSubKey @ 0x140A13EFC (CmpRemoveSubKey.c)
 *     CmpFreeKeyBody @ 0x140A2EDD0 (CmpFreeKeyBody.c)
 *     CmpFreeSecurityDescriptor @ 0x140A34100 (CmpFreeSecurityDescriptor.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
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
  v7 = CmpMarkKeyDirty(BugCheckParameter3, v5, a3);
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
      HvFreeCell(BugCheckParameter3, *(unsigned int *)(v9 + 40));
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
