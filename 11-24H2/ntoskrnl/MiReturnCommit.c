/*
 * XREFs of MiReturnCommit @ 0x14029EB80
 * Callers:
 *     MiDeleteSegmentPages @ 0x140203D4C (MiDeleteSegmentPages.c)
 *     MiReturnCloneCharges @ 0x140206FD0 (MiReturnCloneCharges.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiResolveMappedFileFault @ 0x140214824 (MiResolveMappedFileFault.c)
 *     MiObtainSystemCharges @ 0x14021D05C (MiObtainSystemCharges.c)
 *     MmFreeIndependentPages @ 0x14021D100 (MmFreeIndependentPages.c)
 *     MiDeleteKernelStackPages @ 0x14021F734 (MiDeleteKernelStackPages.c)
 *     MiProbeLockFrame @ 0x140238050 (MiProbeLockFrame.c)
 *     MiGetSubsectionCharges @ 0x1402699F8 (MiGetSubsectionCharges.c)
 *     MiGetCloneCharges @ 0x140269B50 (MiGetCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14026A8C0 (MiCreateLargePfnList.c)
 *     MiRemoveMappedPtes @ 0x1402915D0 (MiRemoveMappedPtes.c)
 *     MiWriteCompletePfn @ 0x1402FA874 (MiWriteCompletePfn.c)
 *     MiLockProtoPoolPage @ 0x140302230 (MiLockProtoPoolPage.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MiLockProtoPoolPageForce @ 0x140333E20 (MiLockProtoPoolPageForce.c)
 *     MiResolveProtoPteFault @ 0x140334760 (MiResolveProtoPteFault.c)
 *     MiReferenceActiveSubsection @ 0x1403374A0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x140337FB0 (MiUnmapViewSubsections.c)
 *     MiCheckControlArea @ 0x140338330 (MiCheckControlArea.c)
 *     MiAcquireNonPagedResources @ 0x14033A560 (MiAcquireNonPagedResources.c)
 *     MiChargeForLockedPage @ 0x14033AE90 (MiChargeForLockedPage.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiAddLockedPageCharge @ 0x14033F050 (MiAddLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x140345BB0 (MiCheckProtoPtePageState.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiPfPutPagesInTransition @ 0x140347F6C (MiPfPutPagesInTransition.c)
 *     MiReturnExcessPoolCommit @ 0x14034BE10 (MiReturnExcessPoolCommit.c)
 *     MiInsertInSystemSpace @ 0x140393BFC (MiInsertInSystemSpace.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14039895C (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiUnlockWsle @ 0x1403DB664 (MiUnlockWsle.c)
 *     MiUnlockPageTableCharges @ 0x1403DB820 (MiUnlockPageTableCharges.c)
 *     NtLockVirtualMemory @ 0x1403DBC30 (NtLockVirtualMemory.c)
 *     MiAttemptPageFileReductionApc @ 0x1403EF420 (MiAttemptPageFileReductionApc.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140424B70 (MiReleaseOutSwappedProcessCommit.c)
 *     MiObtainPoolCharges @ 0x14044DFCC (MiObtainPoolCharges.c)
 *     MiReturnPoolCharges @ 0x14044FBA4 (MiReturnPoolCharges.c)
 *     MiReturnSystemCharges @ 0x14044FC38 (MiReturnSystemCharges.c)
 *     MiReturnFaultCharges @ 0x14047CD94 (MiReturnFaultCharges.c)
 *     MiMakePartitionActive @ 0x140485044 (MiMakePartitionActive.c)
 *     MiDeletePerSessionProtos @ 0x140490370 (MiDeletePerSessionProtos.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B34A4 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReleaseCommitForResetPages @ 0x14066B9B8 (MiReleaseCommitForResetPages.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiInsertPartitionPages @ 0x14068BA00 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x1407EA37C (MiRemovePhysicalMemory.c)
 *     MiDeletePagingFiles @ 0x1407EF674 (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1407FC86C (MiFreePartitionPhysicalPages.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     MiChargeSegmentCommit @ 0x140974EF8 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14098CB78 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14098DFC0 (MiCreateImageFileMap.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 *     MiUnmapReturnSystemCommit @ 0x140A20048 (MiUnmapReturnSystemCommit.c)
 *     MiRotateToFrameBuffer @ 0x140A233E4 (MiRotateToFrameBuffer.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 *     MiAllocatePerSessionProtos @ 0x140A46D70 (MiAllocatePerSessionProtos.c)
 *     MiUnmapReturnCharges @ 0x140A8BE9C (MiUnmapReturnCharges.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB2AE0 (MiCreateFileOnlyImageFixupList.c)
 *     MmCreateProcessAddressSpace @ 0x140AE7AA8 (MmCreateProcessAddressSpace.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
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
