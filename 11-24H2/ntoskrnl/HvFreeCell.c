/*
 * XREFs of HvFreeCell @ 0x140885AB4
 * Callers:
 *     CmpDereferenceSecurityNode @ 0x140496BD8 (CmpDereferenceSecurityNode.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpFreeKeyValueList @ 0x1407E2430 (CmpFreeKeyValueList.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpRemoveSubKeyCellNoCellRef @ 0x1407E3464 (CmpRemoveSubKeyCellNoCellRef.c)
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmSetValueKey @ 0x14086F460 (CmSetValueKey.c)
 *     CmDeleteValueKey @ 0x1408713A8 (CmDeleteValueKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x14087F134 (CmpTransMgrFreeVolatileData.c)
 *     CmpAddSubKeyEx @ 0x140883094 (CmpAddSubKeyEx.c)
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     CmpFreeValueData @ 0x140884884 (CmpFreeValueData.c)
 *     CmpSetValueDataNew @ 0x1408849EC (CmpSetValueDataNew.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     CmpAddValueKeyNew @ 0x140885910 (CmpAddValueKeyNew.c)
 *     CmpAddToLeaf @ 0x140887458 (CmpAddToLeaf.c)
 *     CmpConcatenateValueLists @ 0x140908178 (CmpConcatenateValueLists.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpRemoveValueFromList @ 0x1409F835C (CmpRemoveValueFromList.c)
 *     CmpLightWeightCreateSetValueData @ 0x1409F8474 (CmpLightWeightCreateSetValueData.c)
 *     CmpRemoveSubKeyFromList @ 0x140A13FA8 (CmpRemoveSubKeyFromList.c)
 *     CmpUndoDeleteKeyForTrans @ 0x140A22AB4 (CmpUndoDeleteKeyForTrans.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x140A24014 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpFreeKeyBody @ 0x140A2EDD0 (CmpFreeKeyBody.c)
 *     CmpDuplicateIndex @ 0x140A36F54 (CmpDuplicateIndex.c)
 *     CmpSetValueDataExisting @ 0x140A59D2C (CmpSetValueDataExisting.c)
 *     CmpSplitLeaf @ 0x140A5DCF0 (CmpSplitLeaf.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x140A6D3DC (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmpFreeKeyValues @ 0x140A6F904 (CmpFreeKeyValues.c)
 *     CmpFreeIndexByCell @ 0x140A8BF64 (CmpFreeIndexByCell.c)
 *     CmpCreateHiveRootCell @ 0x140AA2078 (CmpCreateHiveRootCell.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpDelistFreeCell @ 0x140885D24 (HvpDelistFreeCell.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     HvpRemoveFreeCellHint @ 0x140886D60 (HvpRemoveFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140886F20 (HvpEnlistFreeCell.c)
 *     HvpGetCellMap @ 0x140BBB710 (HvpGetCellMap.c)
 *     HvpMapEntryGetBinAddress @ 0x140BBB770 (HvpMapEntryGetBinAddress.c)
 *     HvpGetBinContextInitialize @ 0x140BBB8D0 (HvpGetBinContextInitialize.c)
 */

__int64 __fastcall HvFreeCell(ULONG_PTR BugCheckParameter3, unsigned int a2)
{
  ULONG_PTR v2; // r15
  __int64 CellMap; // rax
  __int64 v5; // rcx
  unsigned int v6; // r14d
  __int64 BinAddress; // rax
  _QWORD *v8; // r10
  __int64 v9; // rdx
  _DWORD *v10; // rsi
  int *v11; // rbx
  int v12; // eax
  int *i; // rdi
  int *v14; // r13
  unsigned int v15; // r12d
  int v16; // edx
  __int64 v17; // r9
  int v18; // ecx
  unsigned int v19; // r8d
  int v20; // eax
  __int64 v21; // rax
  unsigned int v22; // edi
  __int64 v23; // rsi
  __int64 v24; // r15
  __int64 v25; // r8
  unsigned int v27; // r8d
  unsigned int v28; // r8d
  unsigned int v29; // r11d
  __int64 v30; // rax
  int v31; // r8d
  _DWORD v32[18]; // [rsp+30h] [rbp-48h]
  unsigned int v33; // [rsp+90h] [rbp+18h] BYREF
  unsigned int v34; // [rsp+98h] [rbp+20h]

  v2 = a2;
  LOWORD(v33) = 0;
  v34 = 0;
  HvpGetBinContextInitialize(&v33);
  HvLockHiveWriter(BugCheckParameter3);
  CellMap = HvpGetCellMap(BugCheckParameter3, (unsigned int)v2);
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter3, v2, 0x6BEuLL);
  v6 = (unsigned int)v2 >> 31;
  BinAddress = HvpMapEntryGetBinAddress(v5, CellMap, &v33);
  v10 = (_DWORD *)BinAddress;
  if ( (*(_BYTE *)(v9 + 8) & 4) != 0 )
  {
    v28 = *(_DWORD *)(BinAddress + 4);
    v29 = v28 + *(_DWORD *)(BinAddress + 8);
    while ( v28 < v29 )
    {
      v30 = HvpGetCellMap(BugCheckParameter3, v28);
      *(_QWORD *)(v30 + 8) &= ~4uLL;
      v28 = v31 + 4096;
    }
  }
  v11 = (_DWORD *)((char *)v10 + *v8 + (v2 & 0xFFF));
  v12 = -*v11;
  v33 = v6 << 31;
  *v11 = v12;
  do
  {
    i = (int *)((char *)v11 + *v11);
    if ( (unsigned int)((_DWORD)v11 + *v11 - (_DWORD)v10) >= v10[2] || *i <= 0 )
    {
      for ( i = v10 + 8; ; i = (int *)((char *)i + *i) )
      {
        while ( 1 )
        {
          if ( i >= v11 )
            goto LABEL_19;
          v21 = *i;
          if ( (int)v21 > 0 )
            break;
          i = (int *)((char *)i - v21);
        }
        if ( (int *)((char *)i + *i) == v11 )
          break;
      }
      v14 = i;
      if ( v6 != 1 && (int)HvpMarkCellDirty(BugCheckParameter3, (unsigned int)((_DWORD)i + v10[1] - (_DWORD)v10), 1) < 0 )
      {
LABEL_19:
        v15 = v33;
        break;
      }
    }
    else
    {
      v14 = (int *)((char *)v11 + *v11);
    }
    v15 = v6 << 31;
    HvpDelistFreeCell(BugCheckParameter3, (unsigned int)i + (v6 << 31) + v10[1] - (_DWORD)v10, v6);
    v16 = *v14;
    v17 = v34;
    v18 = *v11;
    v19 = ++v34;
    if ( v14 <= v11 )
    {
      *v14 = v16 + v18;
      v20 = v2 - v16;
      v11 = v14;
    }
    else
    {
      *v11 = v16 + v18;
      v20 = v18 + v2;
    }
    v32[v17] = v16;
    v32[v17 + 2] = v20;
  }
  while ( v19 < 2 );
  v22 = v15 + (_DWORD)v11 + v10[1] - (_DWORD)v10;
  if ( v34 )
  {
    v23 = 0LL;
    v24 = v34;
    do
    {
      v25 = (unsigned int)((v32[v23] >> 3) - 1);
      if ( (unsigned int)v25 >= 0x10 )
      {
        v27 = (unsigned int)v25 >> 4;
        if ( v27 > 0xFF )
        {
          v25 = 23LL;
        }
        else
        {
          _BitScanReverse(&v27, v27);
          v25 = v27 + 16;
        }
      }
      HvpRemoveFreeCellHint(BugCheckParameter3, (unsigned int)v32[v23 + 2], v25, v6, v22);
      ++v23;
      --v24;
    }
    while ( v24 );
  }
  HvpEnlistFreeCell(BugCheckParameter3, v22);
  return HvUnlockHiveWriter(BugCheckParameter3);
}
