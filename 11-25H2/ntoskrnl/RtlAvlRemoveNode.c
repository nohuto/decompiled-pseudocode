/*
 * XREFs of RtlAvlRemoveNode @ 0x1402A8F20
 * Callers:
 *     MiFreeCombineBlock @ 0x14023A47C (MiFreeCombineBlock.c)
 *     MiRemoveVad @ 0x1402A7E14 (MiRemoveVad.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402A87DC (MiUpdateSystemProtoPtesTree.c)
 *     MiRemoveFromSystemSpace @ 0x1402A8BCC (MiRemoveFromSystemSpace.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402B7680 (MiUnlockWorkingSetExclusive.c)
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiAllocateLargeZeroPages @ 0x140390BD8 (MiAllocateLargeZeroPages.c)
 *     MiFreeMdlTracker @ 0x14046F5D8 (MiFreeMdlTracker.c)
 *     MiFlowThroughRemoveNode @ 0x14049A4C0 (MiFlowThroughRemoveNode.c)
 *     MiRemoveMappingNode @ 0x1404A326C (MiRemoveMappingNode.c)
 *     MiUpdatePerSessionProto @ 0x1404A38CC (MiUpdatePerSessionProto.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1404CF3C8 (MiDeleteDeferredCloneDescriptors.c)
 *     MiRemoveFaultNode @ 0x1404F83B4 (MiRemoveFaultNode.c)
 *     IopMcRemoveMdlPagesFromTable @ 0x14059F624 (IopMcRemoveMdlPagesFromTable.c)
 *     PsAdjustBasicEnclaveThreadList @ 0x1405DA890 (PsAdjustBasicEnclaveThreadList.c)
 *     MiRemoveLoaderEntry @ 0x140660574 (MiRemoveLoaderEntry.c)
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x140663448 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiMakeEntireHugePfnGood @ 0x140665344 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnGood @ 0x1406658CC (MiMarkHugePfnGood.c)
 *     MiRemovePendingBadPageNode @ 0x14066877C (MiRemovePendingBadPageNode.c)
 *     MiDeleteKernelStackNode @ 0x140669850 (MiDeleteKernelStackNode.c)
 *     MiDeleteStaleCacheMaps @ 0x140669E20 (MiDeleteStaleCacheMaps.c)
 *     MiRemoveIoPageExclusion @ 0x14066AFAC (MiRemoveIoPageExclusion.c)
 *     MiUpdatePageFileList @ 0x14066E9BC (MiUpdatePageFileList.c)
 *     MiInsertCopyExtents @ 0x14066FB30 (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14066FF34 (MiMergeCopyExtents.c)
 *     MmManageFaultRange @ 0x140674D44 (MmManageFaultRange.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1406775E8 (MiRemoveUserPhysicalPagesView.c)
 *     MiCombiningInProgress @ 0x140679C0C (MiCombiningInProgress.c)
 *     MiActOnPartitionNodePages @ 0x14067D694 (MiActOnPartitionNodePages.c)
 *     MiClearRangeInPartitionTree @ 0x14067E5D4 (MiClearRangeInPartitionTree.c)
 *     MiDeletePartitionPageNodes @ 0x14067E790 (MiDeletePartitionPageNodes.c)
 *     MiFinishChildPartitionHotAdd @ 0x14067EAA0 (MiFinishChildPartitionHotAdd.c)
 *     MiFreePartitionTree @ 0x14067ECF0 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 *     MiMergePageNodes @ 0x14067F540 (MiMergePageNodes.c)
 *     MiPartitionDeleteMemoryNode @ 0x14067F8C0 (MiPartitionDeleteMemoryNode.c)
 *     MiReturnPartitionPagesToParent @ 0x14067F9FC (MiReturnPartitionPagesToParent.c)
 *     MiReplaceSystemProtoPtesNode @ 0x1406879E8 (MiReplaceSystemProtoPtesNode.c)
 *     PspProcessDynamicEHContinuationTargets @ 0x140765328 (PspProcessDynamicEHContinuationTargets.c)
 *     PspUnlinkSessionId @ 0x14076C55C (PspUnlinkSessionId.c)
 *     RtlRemoveDynamicEnforcedAddressRange @ 0x14077848C (RtlRemoveDynamicEnforcedAddressRange.c)
 *     MiDeleteFileExtentList @ 0x1407E043C (MiDeleteFileExtentList.c)
 *     MiInsertHotPatchRecord @ 0x1407E34B8 (MiInsertHotPatchRecord.c)
 *     MiInsertSecureImageActivePatch @ 0x1407E3770 (MiInsertSecureImageActivePatch.c)
 *     MmRemoveSecureImageActivePatch @ 0x1407E6418 (MmRemoveSecureImageActivePatch.c)
 *     MiHotAddPartitionMemory @ 0x1407EC3F4 (MiHotAddPartitionMemory.c)
 *     MiRemoveSharedCommitNode @ 0x1408B5520 (MiRemoveSharedCommitNode.c)
 *     ExpWnfDeleteNameInstance @ 0x1408E204C (ExpWnfDeleteNameInstance.c)
 *     MiProcessCrcList @ 0x1409F43E8 (MiProcessCrcList.c)
 *     MiSectionDelete @ 0x140A1D090 (MiSectionDelete.c)
 *     PsCallEnclave @ 0x140AC7FE0 (PsCallEnclave.c)
 *     MiInitializeDriverPtes @ 0x140C3F868 (MiInitializeDriverPtes.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1402A9550 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v4; // r10
  unsigned __int64 v6; // rdx
  char v7; // r10
  char v8; // bl
  _BYTE *v9; // rsi
  char v10; // bp
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // r11
  unsigned __int64 v15; // rcx
  unsigned int v16; // edi
  __int64 v17; // rbx
  __int64 v18; // r11
  __int64 v19; // r9
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  char v23; // r8
  __int64 v24; // rax
  _QWORD *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  char v30; // cl
  _QWORD *v31; // rax
  __int64 v32; // rax
  char v33; // r8
  __int64 v34; // r9

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v31 = *(_QWORD **)(v2 + 8);
        v15 = *(_QWORD *)a2;
        v6 = *(_QWORD *)a2;
        v16 = 0;
        if ( v31 )
        {
          v16 = 1;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v31;
            v31 = (_QWORD *)v31[1];
          }
          while ( v31 );
        }
        v17 = *(_QWORD *)v15;
      }
      else
      {
        v14 = *(_QWORD **)v4;
        v15 = *(_QWORD *)(a2 + 8);
        v6 = v15;
        v16 = 1;
        if ( *(_QWORD *)v4 )
        {
          v16 = 0;
          do
          {
            v6 = v15;
            v15 = (unsigned __int64)v14;
            v14 = (_QWORD *)*v14;
          }
          while ( v14 );
        }
        v17 = *(_QWORD *)(v15 + 8);
      }
      *(_QWORD *)v15 = v2;
      *(_QWORD *)(v15 + 8) = v4;
      v18 = *(_QWORD *)(v2 + 16);
      if ( (v18 & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
      {
        *(_QWORD *)(v2 + 16) = v15 | v18 & 3;
        v19 = *(_QWORD *)(v4 + 16);
        if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) == a2 )
        {
          *(_QWORD *)(v4 + 16) = v15 | v19 & 3;
          if ( (*(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == v6 )
          {
            *(_QWORD *)(v6 + 8LL * v16) = v17;
            if ( v17 )
            {
              if ( *(_QWORD *)(v17 + 16) != v15 )
                goto LABEL_18;
              *(_QWORD *)(v17 + 16) = v6;
            }
            *(_QWORD *)(v15 + 16) = *(_QWORD *)(a2 + 16);
            v7 = 3;
            if ( !v16 )
              v7 = 1;
            v20 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v20 )
            {
              v21 = 0LL;
              if ( *(_QWORD *)(v20 + 8) == a2 )
                v21 = 8LL;
              if ( *(_QWORD *)(v21 + v20) == a2 )
              {
                *(_QWORD *)(v21 + v20) = v15;
                goto LABEL_8;
              }
            }
            else if ( *a1 == a2 )
            {
              *a1 = v15;
              goto LABEL_8;
            }
          }
        }
      }
LABEL_18:
      __fastfail(0x1Du);
    }
  }
  else
  {
    v2 = *(_QWORD *)(a2 + 8);
  }
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 16) != a2 )
      goto LABEL_18;
    *(_QWORD *)(v2 + 16) = v6;
  }
  if ( !v6 )
  {
    if ( *a1 == a2 )
    {
      *a1 = v2;
      return;
    }
    goto LABEL_18;
  }
  if ( *(_QWORD *)(v6 + 8) == a2 )
  {
    v7 = 3;
    *(_QWORD *)(v6 + 8) = v2;
    goto LABEL_8;
  }
  if ( *(_QWORD *)v6 != a2 )
    goto LABEL_18;
  v7 = 1;
  *(_QWORD *)v6 = v2;
  while ( 1 )
  {
LABEL_8:
    v8 = *(_BYTE *)(v6 + 16);
    v9 = (_BYTE *)(v6 + 16);
    v10 = v8 & 3;
    if ( (v8 & 3) == ((unsigned __int8)v7 ^ 2) )
    {
      *v9 = v8 & 0xFC;
      v11 = *(_QWORD *)v9;
      goto LABEL_13;
    }
    if ( !v10 )
    {
      *v9 = v7 | v8 & 0xFC;
      return;
    }
    v11 = *(_QWORD *)v9;
    v22 = *(_QWORD *)v6;
    if ( v7 == 1 )
      v22 = *(_QWORD *)(v6 + 8);
    v23 = *(_BYTE *)(v22 + 16) & 3;
    if ( v23 != ((unsigned __int8)v7 ^ 2) )
      break;
    v32 = RtlpTreeDoubleRotateNodes(a1, v6, v22, v7 == 1);
    *v9 &= 0xFCu;
    v6 = v32;
    v33 = *(_BYTE *)(v22 + 16);
    *(_BYTE *)(v22 + 16) = v33 & 0xFC;
    if ( v10 == (*(_BYTE *)(v32 + 16) & 3) )
    {
      *v9 ^= (v10 ^ *v9 ^ 0xFE) & 3;
      *(_BYTE *)(v32 + 16) &= 0xFCu;
    }
    else
    {
      if ( v10 == ((*(_BYTE *)(v32 + 16) ^ 0xFE) & 3) )
        *(_BYTE *)(v22 + 16) = v33 ^ (v33 ^ v8) & 3;
      *(_BYTE *)(v32 + 16) &= 0xFCu;
    }
LABEL_13:
    v12 = v11 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v12 )
      return;
    v13 = *(_QWORD *)(v12 + 8) == v6;
    v7 = 3;
    v6 = v12;
    if ( !v13 )
      v7 = 1;
  }
  if ( (*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
    goto LABEL_18;
  v24 = 8LL;
  if ( v7 != 1 )
    v24 = 0LL;
  if ( *(_QWORD *)(v24 + v6) != v22 )
    goto LABEL_18;
  v25 = (_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( (v11 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( v25[1] == v6 )
    {
      v25[1] = v22;
    }
    else
    {
      if ( *v25 != v6 )
        goto LABEL_18;
      *v25 = v22;
    }
  }
  else
  {
    if ( *a1 != v6 )
      goto LABEL_18;
    *a1 = v22;
  }
  v26 = 0LL;
  *(_QWORD *)(v22 + 16) ^= (*(_QWORD *)(v22 + 16) ^ v11) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v7 != 1 )
    v26 = 8LL;
  v27 = *(_QWORD *)(v26 + v22);
  if ( v27 )
  {
    v34 = *(_QWORD *)(v27 + 16);
    if ( (v34 & 0xFFFFFFFFFFFFFFFCuLL) != v22 )
      goto LABEL_18;
    *(_QWORD *)(v27 + 16) = v6 | v34 & 3;
  }
  v28 = 0LL;
  if ( v7 == 1 )
    v28 = 8LL;
  *(_QWORD *)(v28 + v6) = v27;
  v29 = 0LL;
  if ( v7 != 1 )
    v29 = 8LL;
  *(_QWORD *)(v29 + v22) = v6;
  *(_QWORD *)v9 = v22 | *(_DWORD *)v9 & 3;
  v30 = *(_BYTE *)(v22 + 16);
  if ( v23 )
  {
    v6 = v22;
    *(_BYTE *)(v22 + 16) = v30 & 0xFC;
    *v9 &= 0xFCu;
    goto LABEL_13;
  }
  *(_BYTE *)(v22 + 16) = v30 ^ (v7 ^ v30 ^ 0xFE) & 3;
}
