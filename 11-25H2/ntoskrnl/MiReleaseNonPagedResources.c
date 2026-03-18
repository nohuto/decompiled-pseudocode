/*
 * XREFs of MiReleaseNonPagedResources @ 0x14021133C
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     MiFindContiguousPagesEx @ 0x14021E3E0 (MiFindContiguousPagesEx.c)
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiCreateUltraThreadContext @ 0x14022CB40 (MiCreateUltraThreadContext.c)
 *     MiFinishHardFault @ 0x14023BBC0 (MiFinishHardFault.c)
 *     MiMapPageFileHash @ 0x1402D1A18 (MiMapPageFileHash.c)
 *     MiGetFileHashPage @ 0x1402D1F24 (MiGetFileHashPage.c)
 *     MiReplenishSlabAllocator @ 0x1403769E8 (MiReplenishSlabAllocator.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiFreePageFileHashPfns @ 0x1403793FC (MiFreePageFileHashPfns.c)
 *     MiPrefetchVirtualMemory @ 0x1403799D0 (MiPrefetchVirtualMemory.c)
 *     MiFreeLargePageCharges @ 0x14038BC4C (MiFreeLargePageCharges.c)
 *     MiFreeSmallPageFromMdl @ 0x14038C9A8 (MiFreeSmallPageFromMdl.c)
 *     MiFreeSlabEntry @ 0x1403B6480 (MiFreeSlabEntry.c)
 *     MiRebuildLargePage @ 0x1403BC60C (MiRebuildLargePage.c)
 *     MmFreeNonChargedSecurePages @ 0x140413B08 (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x140413C84 (MiFreeSecureKernelPage.c)
 *     MiObtainMdlCharges @ 0x140415E40 (MiObtainMdlCharges.c)
 *     MiCreateUltraThreadContextHelper @ 0x140436B50 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x140436CB8 (MiReplenishUltraPageTables.c)
 *     MiDeleteUltraMapContext @ 0x140450D20 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x140450E6C (MiManageUltraSpacePageTable.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14045B210 (MiPrefetchReleasePreallocatedPages.c)
 *     MiDeleteProcessShadow @ 0x14045CFAC (MiDeleteProcessShadow.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049E89C (MmAllocateNonChargedSecurePages.c)
 *     MiReturnMdlCharges @ 0x1404C47D4 (MiReturnMdlCharges.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CAC68 (MiDeleteSubsectionLargePages.c)
 *     MiIdealClusterPage @ 0x1404D210C (MiIdealClusterPage.c)
 *     MiPfnRangeIsZero @ 0x14066276C (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x140668D9C (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406690F0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140677DDC (MiMoveBadPageChargesCrossPartition.c)
 *     MmAllocateSecureKernelPages @ 0x14067D234 (MmAllocateSecureKernelPages.c)
 *     MiMoveBadPagePartition @ 0x14067F7C4 (MiMoveBadPagePartition.c)
 *     MiStoreReleaseReservedPageCharges @ 0x140680EF4 (MiStoreReleaseReservedPageCharges.c)
 *     MiProcessVaContiguityInformation @ 0x14068184C (MiProcessVaContiguityInformation.c)
 *     MiAllocateFastAwePages @ 0x1407E84AC (MiAllocateFastAwePages.c)
 *     MiAllocateProcessShadow @ 0x140A47EB0 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140A988C4 (MiChargeSystemImageCommitment.c)
 *     MiCreateBootSlabEntries @ 0x140C47CFC (MiCreateBootSlabEntries.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     MiRestockOverCommit @ 0x14040ADD4 (MiRestockOverCommit.c)
 */

void __fastcall MiReleaseNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rsi
  KIRQL v5; // r15
  struct _KPRCB *CurrentPrcb; // r8
  __int64 i; // rdx
  signed __int32 v8; // eax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rcx
  bool v14; // cf
  struct _KPRCB *v15; // r9
  signed __int32 CachedResidentAvailable; // edx
  bool v17; // zf
  signed __int32 v18; // eax
  volatile LONG *v19; // rcx
  unsigned __int64 v20; // rdx
  struct _KEVENT *v21; // rcx
  struct _KEVENT *v22; // rcx
  struct _KEVENT *v23; // rcx
  struct _KEVENT *v24; // rcx
  __int64 v25; // rbp
  volatile LONG *v26; // rcx
  KIRQL v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx

  v2 = a2;
  v4 = a2;
  if ( a2 )
  {
    v5 = 17;
    if ( !*(_QWORD *)(a1 + 16904) )
      goto LABEL_3;
    v25 = a1 + 16888;
    v26 = (volatile LONG *)(a1 + 16888);
    if ( KeGetCurrentIrql() == 2 )
    {
      v27 = 17;
      ExAcquireSpinLockExclusiveAtDpcLevel(v26);
    }
    else
    {
      v27 = ExAcquireSpinLockExclusive(v26);
    }
    v28 = MiRestockOverCommit(a1, v2);
    LOBYTE(v29) = v27;
    v4 = v28;
    MiReleaseSpinLockExclusive(v25, v29);
    if ( v4 )
    {
LABEL_3:
      if ( (ULONG *)a1 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
        for ( i = CurrentPrcb->CachedCommit; (unsigned __int64)(i + v4) <= 0x100; i = v8 )
        {
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)&CurrentPrcb->CachedCommit, i + v4, i);
          if ( v8 == i )
          {
            v9 = v2;
            goto LABEL_14;
          }
        }
      }
      _InterlockedAdd64((volatile signed __int64 *)(a1 + 19328), -v4);
      v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 19264), -v4);
      v11 = *(_QWORD *)(a1 + 16864);
      v12 = *(_QWORD *)(a1 + 16856);
      v13 = v10 - v4;
      if ( v10 - v4 > v10 )
      {
        if ( v13 >= v11 && v10 < v11 )
          goto LABEL_32;
        if ( v10 >= v12 )
          goto LABEL_13;
        v14 = v13 < v12;
      }
      else
      {
        if ( v10 >= v11 && v13 < v11 )
          goto LABEL_32;
        if ( v13 >= v12 )
          goto LABEL_13;
        v14 = v10 < v12;
      }
      if ( v14 )
        goto LABEL_13;
LABEL_32:
      v19 = (volatile LONG *)(a1 + 16888);
      if ( KeGetCurrentIrql() == 2 )
        ExAcquireSpinLockExclusiveAtDpcLevel(v19);
      else
        v5 = ExAcquireSpinLockExclusive(v19);
      v20 = *(_QWORD *)(a1 + 19264);
      if ( v20 < *(_QWORD *)(a1 + 16856) )
      {
        v23 = *(struct _KEVENT **)(a1 + 296);
        if ( !v23->Header.SignalState )
          KeSetEvent(v23, 0, 0);
        v24 = *(struct _KEVENT **)(a1 + 304);
        if ( v24->Header.SignalState != 1 )
          goto LABEL_40;
        KeResetEvent(v24);
        v22 = *(struct _KEVENT **)(a1 + 312);
      }
      else
      {
        v21 = *(struct _KEVENT **)(a1 + 304);
        if ( v20 >= *(_QWORD *)(a1 + 16864) )
        {
          if ( !v21->Header.SignalState )
            KeSetEvent(v21, 0, 0);
          if ( *(_QWORD *)(a1 + 19608) == *(_QWORD *)(a1 + 16840) )
            KeSetEvent(*(PRKEVENT *)(a1 + 312), 0, 0);
        }
        else if ( v21->Header.SignalState == 1 )
        {
          KeResetEvent(v21);
          KeResetEvent(*(PRKEVENT *)(a1 + 312));
        }
        v22 = *(struct _KEVENT **)(a1 + 296);
        if ( v22->Header.SignalState != 1 )
          goto LABEL_40;
      }
      KeResetEvent(v22);
LABEL_40:
      LOBYTE(v20) = v5;
      MiReleaseSpinLockExclusive(a1 + 16888, v20);
    }
  }
LABEL_13:
  v9 = v2;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
LABEL_14:
    v15 = KeGetCurrentPrcb();
    CachedResidentAvailable = v15->CachedResidentAvailable;
    if ( CachedResidentAvailable != -1 )
    {
      do
      {
        if ( v2 + CachedResidentAvailable > 0x100 || v2 >= 0x80000 )
          break;
        v18 = _InterlockedCompareExchange(
                (volatile signed __int32 *)&v15->CachedResidentAvailable,
                v2 + CachedResidentAvailable,
                CachedResidentAvailable);
        v17 = CachedResidentAvailable == v18;
        CachedResidentAvailable = v18;
        if ( v17 )
          return;
      }
      while ( v18 != -1 );
      if ( CachedResidentAvailable > 192
        && CachedResidentAvailable == _InterlockedCompareExchange(
                                        (volatile signed __int32 *)&v15->CachedResidentAvailable,
                                        192,
                                        CachedResidentAvailable) )
      {
        v9 = v2 + CachedResidentAvailable - 192;
      }
      v2 = v9;
    }
  }
  if ( v2 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 18752), v2);
}
