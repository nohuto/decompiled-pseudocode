/*
 * XREFs of MiReturnCommit @ 0x140329900
 * Callers:
 *     MiWriteCompletePfn @ 0x14020D42C (MiWriteCompletePfn.c)
 *     MiReferenceActiveSubsection @ 0x1402140B0 (MiReferenceActiveSubsection.c)
 *     MmFreeIndependentPages @ 0x140227210 (MmFreeIndependentPages.c)
 *     MiResolveMappedFileFault @ 0x1402276BC (MiResolveMappedFileFault.c)
 *     MiObtainSystemCharges @ 0x14022A218 (MiObtainSystemCharges.c)
 *     MiAddLockedPageCharge @ 0x14022C890 (MiAddLockedPageCharge.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiChargeForLockedPage @ 0x14022E1E0 (MiChargeForLockedPage.c)
 *     MiAcquireNonPagedResources @ 0x14022E560 (MiAcquireNonPagedResources.c)
 *     MiCheckControlArea @ 0x14022F1E0 (MiCheckControlArea.c)
 *     MiLockProtoPoolPageForce @ 0x140231620 (MiLockProtoPoolPageForce.c)
 *     MiLockProtoPoolPage @ 0x140240A70 (MiLockProtoPoolPage.c)
 *     MiInsertInSystemSpace @ 0x1402A4B54 (MiInsertInSystemSpace.c)
 *     MiRemoveMappedPtes @ 0x1402A9320 (MiRemoveMappedPtes.c)
 *     MiProbeLockFrame @ 0x1402ACAF0 (MiProbeLockFrame.c)
 *     MiReturnExcessPoolCommit @ 0x1402C3C24 (MiReturnExcessPoolCommit.c)
 *     MiUnlockPageTableCharges @ 0x1402CBD20 (MiUnlockPageTableCharges.c)
 *     MiUnlockWsle @ 0x1402CC3B4 (MiUnlockWsle.c)
 *     MiGetCloneCharges @ 0x1402CF39C (MiGetCloneCharges.c)
 *     MiPfPutPagesInTransition @ 0x14033A50C (MiPfPutPagesInTransition.c)
 *     MiCheckProtoPtePageState @ 0x14033E110 (MiCheckProtoPtePageState.c)
 *     MiReturnCloneCharges @ 0x14033FDD4 (MiReturnCloneCharges.c)
 *     MiReturnPoolCharges @ 0x140377D44 (MiReturnPoolCharges.c)
 *     MiReturnSystemCharges @ 0x140377DD8 (MiReturnSystemCharges.c)
 *     MiObtainPoolCharges @ 0x1403790F8 (MiObtainPoolCharges.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     NtLockVirtualMemory @ 0x140388E00 (NtLockVirtualMemory.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x14038B398 (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiDeleteKernelStackPages @ 0x1403B3258 (MiDeleteKernelStackPages.c)
 *     MiCreateLargePfnList @ 0x140405A3C (MiCreateLargePfnList.c)
 *     MiCreateUltraThreadContextHelper @ 0x140436B50 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x140436CB8 (MiReplenishUltraPageTables.c)
 *     MiDeleteSegmentPages @ 0x14044A758 (MiDeleteSegmentPages.c)
 *     MiAttemptPageFileReductionApc @ 0x14045A0D0 (MiAttemptPageFileReductionApc.c)
 *     MiReturnFaultCharges @ 0x140480970 (MiReturnFaultCharges.c)
 *     MiGetSubsectionCharges @ 0x1404873D0 (MiGetSubsectionCharges.c)
 *     MiMakePartitionActive @ 0x14048C0A0 (MiMakePartitionActive.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiDeletePerSessionProtos @ 0x1404967DC (MiDeletePerSessionProtos.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404B9590 (MiReturnCrossPartitionSectionCharges.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1404D5BE8 (MiReleaseOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x14065ED04 (MiReleaseCommitForResetPages.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiInsertPartitionPages @ 0x14067F040 (MiInsertPartitionPages.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 *     MiDeletePagingFiles @ 0x1407DF204 (MiDeletePagingFiles.c)
 *     MiFreePartitionPhysicalPages @ 0x1407EC26C (MiFreePartitionPhysicalPages.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 *     MiDecommitRegion @ 0x1408F7010 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x140901C48 (MiRemoveVadCharges.c)
 *     MiCreatePagingFileMap @ 0x14093E008 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14093F578 (MiCreateImageFileMap.c)
 *     MiReturnFullProcessCommitment @ 0x1409E454C (MiReturnFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x1409FC7C8 (MiChargeSegmentCommit.c)
 *     MiUnmapReturnSystemCommit @ 0x140A23170 (MiUnmapReturnSystemCommit.c)
 *     MiRotateToFrameBuffer @ 0x140A28F1C (MiRotateToFrameBuffer.c)
 *     MiDeleteVadBitmap @ 0x140A33648 (MiDeleteVadBitmap.c)
 *     MmCreateProcessAddressSpace @ 0x140A47B88 (MmCreateProcessAddressSpace.c)
 *     MiAllocatePerSessionProtos @ 0x140A58B44 (MiAllocatePerSessionProtos.c)
 *     MiUnmapReturnCharges @ 0x140A8A838 (MiUnmapReturnCharges.c)
 *     MiCreateFileOnlyImageFixupList @ 0x140AB4254 (MiCreateFileOnlyImageFixupList.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
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
    MiReleaseSpinLockExclusive(a1 + 16888, v23);
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
      MiReleaseSpinLockExclusive(a1 + 16888, v17);
    }
  }
}
