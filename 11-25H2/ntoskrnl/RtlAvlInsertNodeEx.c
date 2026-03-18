/*
 * XREFs of RtlAvlInsertNodeEx @ 0x1402A8320
 * Callers:
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiActivateCombineBlock @ 0x1402A6830 (MiActivateCombineBlock.c)
 *     MiInsertSubsectionNode @ 0x1402A7D14 (MiInsertSubsectionNode.c)
 *     MiInsertVad @ 0x1402A80AC (MiInsertVad.c)
 *     MiReferenceIoPages @ 0x1402AD138 (MiReferenceIoPages.c)
 *     MiUpdateDriverLoadInProgress @ 0x140410330 (MiUpdateDriverLoadInProgress.c)
 *     MiBeginPageAccessor @ 0x14043DDD0 (MiBeginPageAccessor.c)
 *     MiInsertMappingNode @ 0x1404A02F0 (MiInsertMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x1404A38CC (MiUpdatePerSessionProto.c)
 *     MiFlowThroughInsertNode @ 0x1404AA7FC (MiFlowThroughInsertNode.c)
 *     IopMcAddMdlPagesToTable @ 0x1404BDAC4 (IopMcAddMdlPagesToTable.c)
 *     MiInsertClone @ 0x1404CA2E8 (MiInsertClone.c)
 *     MiAddMdlTracker @ 0x1404D2BE8 (MiAddMdlTracker.c)
 *     MiCreateKernelStackNode @ 0x1404F7278 (MiCreateKernelStackNode.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405DA890 (PsAdjustBasicEnclaveThreadList.c)
 *     PsLoadVsmEnclaveData @ 0x1405DAA14 (PsLoadVsmEnclaveData.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140663448 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiMarkHugePfnBad @ 0x140665444 (MiMarkHugePfnBad.c)
 *     MiAddPendingBadPageNode @ 0x140667A54 (MiAddPendingBadPageNode.c)
 *     MiCheckLostBadPageNode @ 0x140667BF0 (MiCheckLostBadPageNode.c)
 *     MiCreateIoPageExclusion @ 0x140669CD8 (MiCreateIoPageExclusion.c)
 *     MiMakeIoRangePermanent @ 0x14066A934 (MiMakeIoRangePermanent.c)
 *     MiUpdatePageFileList @ 0x14066E9BC (MiUpdatePageFileList.c)
 *     MiInsertExtentList @ 0x14066FBDC (MiInsertExtentList.c)
 *     MmManageFaultRange @ 0x140674D44 (MmManageFaultRange.c)
 *     MiCombiningInProgress @ 0x140679C0C (MiCombiningInProgress.c)
 *     MiActOnPartitionNodePages @ 0x14067D694 (MiActOnPartitionNodePages.c)
 *     MiAddRangeToPartitionTree @ 0x14067E0AC (MiAddRangeToPartitionTree.c)
 *     MiFreePartitionTree @ 0x14067ECF0 (MiFreePartitionTree.c)
 *     MiMergePageNodes @ 0x14067F540 (MiMergePageNodes.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1406879E8 (MiReplaceSystemProtoPtesNode.c)
 *     RtlAddDynamicEHContinuationTarget @ 0x140778318 (RtlAddDynamicEHContinuationTarget.c)
 *     RtlAddDynamicEnforcedAddressRange @ 0x1407783C4 (RtlAddDynamicEnforcedAddressRange.c)
 *     MiInsertHotPatchRecord @ 0x1407E34B8 (MiInsertHotPatchRecord.c)
 *     MiInsertPreviouslyRegisteredHotPatchRecord @ 0x1407E3654 (MiInsertPreviouslyRegisteredHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407E3770 (MiInsertSecureImageActivePatch.c)
 *     ExpWnfCreateNameInstance @ 0x140898930 (ExpWnfCreateNameInstance.c)
 *     MiInsertSharedCommitNode @ 0x140900A50 (MiInsertSharedCommitNode.c)
 *     MiFinishCreateSection @ 0x14093CE8C (MiFinishCreateSection.c)
 *     MiProcessCrcList @ 0x1409F43E8 (MiProcessCrcList.c)
 *     MiFindLargePageMemory @ 0x140A8E124 (MiFindLargePageMemory.c)
 *     MiLoadHotPatchForUserSid @ 0x140A98B50 (MiLoadHotPatchForUserSid.c)
 *     PspMakeSessionVisible @ 0x140AACD68 (PspMakeSessionVisible.c)
 *     PsCallEnclave @ 0x140AC7FE0 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140C3F868 (MiInitializeDriverPtes.c)
 *     MiCreateEnclaveRegions @ 0x140C46BFC (MiCreateEnclaveRegions.c)
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
