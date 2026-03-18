/*
 * XREFs of MiReturnCommit @ 0x14028EF80
 * Callers:
 *     MiReferenceActiveSubsection @ 0x14020E140 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x14020EC50 (MiUnmapViewSubsections.c)
 *     MiCheckControlArea @ 0x14020EFD0 (MiCheckControlArea.c)
 *     MiAcquireNonPagedResources @ 0x140211200 (MiAcquireNonPagedResources.c)
 *     MiChargeForLockedPage @ 0x140211B30 (MiChargeForLockedPage.c)
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiResolveProtoPteFault @ 0x140214BB0 (MiResolveProtoPteFault.c)
 *     MiLockProtoPoolPageForce @ 0x140215A80 (MiLockProtoPoolPageForce.c)
 *     MiLockProtoPoolPage @ 0x14022E920 (MiLockProtoPoolPage.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiResolveMappedFileFault @ 0x140239490 (MiResolveMappedFileFault.c)
 *     MiCheckProtoPtePageState @ 0x14023BE50 (MiCheckProtoPtePageState.c)
 *     MiReturnCloneCharges @ 0x14023EE80 (MiReturnCloneCharges.c)
 *     MiRemoveMappedPtes @ 0x140260FC0 (MiRemoveMappedPtes.c)
 *     MiDeleteKernelStackPages @ 0x14026A1A4 (MiDeleteKernelStackPages.c)
 *     MiProbeLockFrame @ 0x140282AC0 (MiProbeLockFrame.c)
 *     MiUnlockWsle @ 0x1402C7B94 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x1402C7D50 (MiUnlockPageTableCharges.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x1402E692C (MiPfPutPagesInTransition.c)
 *     MiReturnExcessPoolCommit @ 0x1402EA7D0 (MiReturnExcessPoolCommit.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiAddLockedPageCharge @ 0x1402F6F40 (MiAddLockedPageCharge.c)
 *     MiObtainSystemCharges @ 0x1402F779C (MiObtainSystemCharges.c)
 *     MiGetSubsectionCharges @ 0x14036DF10 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x14036E068 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14036E934 (MiCreateLargePfnList.c)
 *     MiDeleteSegmentPages @ 0x1403707BC (MiDeleteSegmentPages.c)
 *     MiWriteCompletePfn @ 0x14039D574 (MiWriteCompletePfn.c)
 *     MmFreeIndependentPages @ 0x14039EC60 (MmFreeIndependentPages.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403A9CCC (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403C6C4C (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 *     MiAttemptPageFileReductionApc @ 0x1403F9310 (MiAttemptPageFileReductionApc.c)
 *     NtLockVirtualMemory @ 0x1403FD910 (NtLockVirtualMemory.c)
 *     MiInsertInSystemSpace @ 0x140415F30 (MiInsertInSystemSpace.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14042D608 (MiReleaseOutSwappedProcessCommit.c)
 *     MiObtainPoolCharges @ 0x140458B1C (MiObtainPoolCharges.c)
 *     MiReturnPoolCharges @ 0x14045A754 (MiReturnPoolCharges.c)
 *     MiReturnSystemCharges @ 0x14045A7E8 (MiReturnSystemCharges.c)
 *     MiReturnFaultCharges @ 0x140481AD4 (MiReturnFaultCharges.c)
 *     MiMakePartitionActive @ 0x14048A21C (MiMakePartitionActive.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiDeletePerSessionProtos @ 0x140495AB0 (MiDeletePerSessionProtos.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B8B54 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReleaseCommitForResetPages @ 0x14066A7E8 (MiReleaseCommitForResetPages.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiInsertPartitionPages @ 0x14068A8D0 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 *     MiDeletePagingFiles @ 0x1407EF0A4 (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1407FC0FC (MiFreePartitionPhysicalPages.c)
 *     MiDecommitRegion @ 0x1408DC180 (MiDecommitRegion.c)
 *     MiChargeSegmentCommit @ 0x1408F7C78 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x140944150 (MiCreateImageFileMap.c)
 *     MiRemoveVadCharges @ 0x1409B0374 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 *     MiUnmapReturnSystemCommit @ 0x140A2C120 (MiUnmapReturnSystemCommit.c)
 *     MiRotateToFrameBuffer @ 0x140A2E9A4 (MiRotateToFrameBuffer.c)
 *     MiDeleteVadBitmap @ 0x140A37CD0 (MiDeleteVadBitmap.c)
 *     MiAllocatePerSessionProtos @ 0x140A4FFC0 (MiAllocatePerSessionProtos.c)
 *     MiUnmapReturnCharges @ 0x140A8F804 (MiUnmapReturnCharges.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB861C (MiCreateFileOnlyImageFixupList.c)
 *     MmCreateProcessAddressSpace @ 0x140AE61C8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiRestockOverCommit @ 0x14043A6C0 (MiRestockOverCommit.c)
 */

void __fastcall MiReturnCommit(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v8; // eax
  _QWORD *v9; // rsi
  unsigned __int64 v10; // rax
  _QWORD *v11; // r14
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rcx
  volatile LONG *v16; // rcx
  KIRQL v17; // bp
  struct _KEVENT *v18; // rcx
  struct _KEVENT *v19; // rcx
  struct _KEVENT *v20; // rcx
  struct _KEVENT *v21; // rcx
  volatile LONG *v22; // rcx
  KIRQL v23; // r14

  if ( !a2 )
    return;
  v4 = a2;
  if ( *(_QWORD *)(a1 + 16904) && (a3 & 0x10) == 0 )
  {
    v22 = (volatile LONG *)(a1 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v23 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v22);
    }
    else
    {
      v23 = ExAcquireSpinLockExclusive(v22);
    }
    v4 = MiRestockOverCommit(a1, v4);
    MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v23);
    if ( !v4 )
      return;
  }
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    if ( (a3 & 0x10) != 0 )
      goto LABEL_11;
    CurrentPrcb = KeGetCurrentPrcb();
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v4) <= 0x100; i = v8 )
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v4, i);
      if ( v8 == i )
        return;
    }
  }
  else if ( (a3 & 0x10) != 0 )
  {
    goto LABEL_11;
  }
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 19328), -v4);
LABEL_11:
  v9 = (_QWORD *)(a1 + 19264);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 19264), -v4);
  v11 = (_QWORD *)(a1 + 16864);
  v12 = *(_QWORD *)(a1 + 16864);
  v13 = v10 - v4;
  v14 = (_QWORD *)(a1 + 16856);
  v15 = *(_QWORD *)(a1 + 16856);
  if ( v13 > v10 )
  {
    if ( v13 >= v12 && v10 < v12 )
      goto LABEL_22;
    if ( v13 >= v15 && v10 < v15 )
      goto LABEL_15;
  }
  else
  {
    if ( v10 >= v12 && v13 < v12 )
      goto LABEL_22;
    if ( v10 >= v15 && v13 < v15 )
    {
LABEL_15:
      v11 = (_QWORD *)(a1 + 16864);
      v14 = (_QWORD *)(a1 + 16856);
      v9 = (_QWORD *)(a1 + 19264);
LABEL_22:
      v16 = (volatile LONG *)(a1 + 16888);
      if ( KeGetCurrentIrql() == 2 )
      {
        v17 = 17;
        ExAcquireSpinLockExclusiveAtDpcLevel(v16);
      }
      else
      {
        v17 = ExAcquireSpinLockExclusive(v16);
      }
      if ( *v9 < *v14 )
      {
        v20 = *(struct _KEVENT **)(a1 + 296);
        if ( !v20->Header.SignalState )
          KeSetEvent(v20, 0, 0);
        v21 = *(struct _KEVENT **)(a1 + 304);
        if ( v21->Header.SignalState != 1 )
          goto LABEL_30;
        KeResetEvent(v21);
        v19 = *(struct _KEVENT **)(a1 + 312);
      }
      else
      {
        v18 = *(struct _KEVENT **)(a1 + 304);
        if ( *v9 >= *v11 )
        {
          if ( !v18->Header.SignalState )
            KeSetEvent(v18, 0, 0);
          if ( *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
            KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
          v19 = *(struct _KEVENT **)(a1 + 296);
          if ( v19->Header.SignalState != 1 )
            goto LABEL_30;
        }
        else
        {
          if ( v18->Header.SignalState == 1 )
          {
            KeResetEvent(v18);
            KeResetEvent(*(PRKEVENT *)(a1 + 312));
          }
          v19 = *(struct _KEVENT **)(a1 + 296);
          if ( v19->Header.SignalState != 1 )
            goto LABEL_30;
        }
      }
      KeResetEvent(v19);
LABEL_30:
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v17);
    }
  }
}
