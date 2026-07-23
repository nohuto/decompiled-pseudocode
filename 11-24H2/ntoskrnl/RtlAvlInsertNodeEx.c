/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1402903E0
 * Callers:
 *     MiReferenceIoPages @ 0x140238698 (MiReferenceIoPages.c)
 *     MiInsertVad @ 0x140290150 (MiInsertVad.c)
 *     MiInsertSubsectionNode @ 0x140291B54 (MiInsertSubsectionNode.c)
 *     MiUpdateDriverLoadInProgress @ 0x1402EFC50 (MiUpdateDriverLoadInProgress.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiFlowThroughInsertNode @ 0x1403F01B0 (MiFlowThroughInsertNode.c)
 *     MiBeginPageAccessor @ 0x140425C90 (MiBeginPageAccessor.c)
 *     MiActivateCombineBlock @ 0x140462FC0 (MiActivateCombineBlock.c)
 *     MiInsertMappingNode @ 0x14049A260 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x14049E78C (MiUpdatePerSessionProto.c)
 *     IopMcAddMdlPagesToTable @ 0x1404B7C60 (IopMcAddMdlPagesToTable.c)
 *     MiInsertClone @ 0x1404C392C (MiInsertClone.c)
 *     MiAddMdlTracker @ 0x1404CBC78 (MiAddMdlTracker.c)
 *     MiCreateKernelStackNode @ 0x1404F7358 (MiCreateKernelStackNode.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405E4010 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405E4194 (PsLoadVsmEnclaveData.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140670158 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140671710 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x1406720BC (MiMarkHugePfnBad.c)
 *     MiAddPendingBadPageNode @ 0x140674684 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x140674820 (MiCheckLostBadPageNode.c)
 *     MiCreateIoPageExclusion @ 0x140676908 (MiCreateIoPageExclusion.c)
 *     MiMakeIoRangePermanent @ 0x140677564 (MiMakeIoRangePermanent.c)
 *     MiUpdatePageFileList @ 0x14067B43C (MiUpdatePageFileList.c)
 *     MiInsertExtentList @ 0x14067C57C (MiInsertExtentList.c)
 *     MmManageFaultRange @ 0x140681764 (MmManageFaultRange.c)
 *     MiCombiningInProgress @ 0x1406865CC (MiCombiningInProgress.c)
 *     MiActOnPartitionNodePages @ 0x14068A054 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14068AA6C (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14068B6B0 (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x14068BF00 (MiMergePageNodes.c)
 *     MiReplaceSystemProtoPtesNode @ 0x140693F18 (MiReplaceSystemProtoPtesNode.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x140787498 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x140787544 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertHotPatchRecord @ 0x1407F3934 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407F3AD0 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407F3BEC (MiInsertSecureImageActivePatch.c)
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x1409197A0 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x14098B9F0 (MiFinishCreateSection.c)
 *     MiProcessCrcList @ 0x1409E6C70 (MiProcessCrcList.c)
 *     MiFindLargePageMemory @ 0x140A8F22C (MiFindLargePageMemory.c)
 *     MiLoadHotPatchForUserSid @ 0x140A9AA90 (MiLoadHotPatchForUserSid.c)
 *     PspMakeSessionVisible @ 0x140AACF48 (PspMakeSessionVisible.c)
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140C52C28 (MiInitializeDriverPtes.c)
 *     MiCreateEnclaveRegions @ 0x140C5A06C (MiCreateEnclaveRegions.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, _QWORD *a4)
{
  unsigned __int64 v4; // rax
  bool v5; // bl
  unsigned __int64 v6; // r10
  char v8; // r9
  _BYTE *v9; // r11
  unsigned __int8 v10; // r8
  _BOOL8 v11; // rcx
  unsigned __int64 v12; // rbx
  unsigned int v13; // ecx
  __int64 v14; // rbx
  _QWORD *v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rbp
  _QWORD *v20; // rcx
  __int64 v21; // rcx
  char v22; // dl
  __int64 v23; // rbp
  __int64 v24; // r15
  __int64 v25; // rdi
  BOOL v26; // ecx
  _BOOL8 v27; // rdi
  _QWORD *v28; // rsi
  __int64 v29; // rbp
  __int64 v30; // r9

  LOBYTE(v4) = 0;
  v5 = a3;
  *a4 = 0LL;
  v6 = (unsigned __int64)a4;
  a4[1] = 0LL;
  a4[2] = a2;
  if ( !a2 )
  {
    *a1 = (unsigned __int64)a4;
    return v4;
  }
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a2 + 16);
    v9 = (_BYTE *)(a2 + 16);
    LOBYTE(v4) = 2 * v5 - 1;
    v10 = v8 & 3;
    if ( (v8 & 3) != 0 )
      break;
    v6 = a2;
    LOBYTE(v4) = v8 ^ (v8 ^ v4) & 3;
    *v9 = v4;
    a2 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return v4;
    v5 = *(_QWORD *)a2 != v6;
  }
  if ( v10 != (v4 & 3) )
  {
    *v9 = v8 & 0xFC;
    return v4;
  }
  v11 = v5;
  if ( (*(_BYTE *)(v6 + 16) & 3) == v10 )
  {
    v13 = !v5;
    if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
    {
      v14 = v13;
      v15 = (_QWORD *)(a2 + 8 * (v13 ^ 1LL));
      if ( *v15 == v6 )
      {
        v16 = *(_QWORD *)v9;
        v17 = (_QWORD *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v17 )
        {
          if ( v17[1] == a2 )
          {
            v17[1] = v6;
          }
          else
          {
            if ( *v17 != a2 )
              goto LABEL_13;
            *v17 = v6;
          }
        }
        else
        {
          if ( *a1 != a2 )
            goto LABEL_13;
          *a1 = v6;
        }
        *(_QWORD *)(v6 + 16) ^= (v16 ^ *(_QWORD *)(v6 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
        v18 = *(_QWORD *)(v6 + 8 * v14);
        if ( v18 )
        {
          v30 = *(_QWORD *)(v18 + 16);
          if ( (v30 & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
            goto LABEL_13;
          *(_QWORD *)(v18 + 16) = a2 | v30 & 3;
        }
        *v15 = v18;
        *(_QWORD *)(v6 + 8 * v14) = a2;
        v4 = v6 | *(_DWORD *)v9 & 3;
        *(_QWORD *)v9 = v4;
        *(_BYTE *)(v6 + 16) &= 0xFCu;
        *v9 &= 0xFCu;
        return v4;
      }
    }
LABEL_13:
    __fastfail(0x1Du);
  }
  v12 = *(_QWORD *)v6;
  if ( !v11 )
    v12 = *(_QWORD *)(v6 + 8);
  if ( (*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
    goto LABEL_13;
  if ( *(_QWORD *)(v6 + 8 * !v11) != v12 )
    goto LABEL_13;
  v24 = 8 * v11;
  if ( *(_QWORD *)(8 * v11 + a2) != v6 || (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_13;
  *(_QWORD *)(v24 + a2) = v12;
  *(_QWORD *)(v12 + 16) = a2 | *(_DWORD *)(v12 + 16) & 3;
  v25 = *(_QWORD *)(v24 + v12);
  if ( v25 )
  {
    v29 = *(_QWORD *)(v25 + 16);
    if ( (v29 & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
      goto LABEL_13;
    *(_QWORD *)(v25 + 16) = v6 | v29 & 3;
  }
  *(_QWORD *)(v6 + 8 * !v11) = v25;
  v26 = !v11;
  *(_QWORD *)(v24 + v12) = v6;
  *(_QWORD *)(v6 + 16) = v12 | *(_DWORD *)(v6 + 16) & 3;
  if ( (*(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_13;
  v27 = v26;
  v28 = (_QWORD *)(a2 + 8 * !v26);
  if ( *v28 != v12 )
    goto LABEL_13;
  v19 = *(_QWORD *)v9;
  v20 = (_QWORD *)(*(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( v20 )
  {
    if ( v20[1] == a2 )
    {
      v20[1] = v12;
    }
    else
    {
      if ( *v20 != a2 )
        goto LABEL_13;
      *v20 = v12;
    }
  }
  else
  {
    if ( *a1 != a2 )
      goto LABEL_13;
    *a1 = v12;
  }
  *(_QWORD *)(v12 + 16) ^= (v19 ^ *(_QWORD *)(v12 + 16)) & 0xFFFFFFFFFFFFFFFCuLL;
  v21 = *(_QWORD *)(v12 + 8 * v27);
  if ( v21 )
  {
    v23 = *(_QWORD *)(v21 + 16);
    if ( (v23 & 0xFFFFFFFFFFFFFFFCuLL) == v12 )
    {
      *(_QWORD *)(v21 + 16) = a2 | v23 & 3;
      goto LABEL_26;
    }
    goto LABEL_13;
  }
LABEL_26:
  *v28 = v21;
  *(_QWORD *)(v12 + 8 * v27) = a2;
  v4 = v12 | *(_DWORD *)v9 & 3;
  *(_QWORD *)v9 = v4;
  *v9 = v4 & 0xFC;
  v22 = *(_BYTE *)(v6 + 16);
  *(_BYTE *)(v6 + 16) = v22 & 0xFC;
  LODWORD(v4) = *(_BYTE *)(v12 + 16) & 3;
  if ( v10 == (_DWORD)v4 )
  {
    LOBYTE(v4) = *v9;
    *v9 ^= (*v9 ^ v10 ^ 0xFE) & 3;
  }
  else if ( v10 == ((*(_BYTE *)(v12 + 16) ^ 0xFE) & 3) )
  {
    LOBYTE(v4) = v22 ^ (v8 ^ v22) & 3;
    *(_BYTE *)(v6 + 16) = v4;
  }
  *(_BYTE *)(v12 + 16) &= 0xFCu;
  return v4;
}
