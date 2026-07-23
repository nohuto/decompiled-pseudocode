/*
 * XREFs of MiReleaseNonPagedResources @ 0x1403358DC
 * Callers:
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiFreeSmallPageFromMdl @ 0x140218CC8 (MiFreeSmallPageFromMdl.c)
 *     MiReplenishSlabAllocator @ 0x14021E544 (MiReplenishSlabAllocator.c)
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiFindContiguousPagesEx @ 0x14030E840 (MiFindContiguousPagesEx.c)
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     MiCreateUltraThreadContext @ 0x14033BC80 (MiCreateUltraThreadContext.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MiDeleteUltraMapContext @ 0x140352DF0 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x140352F3C (MiManageUltraSpacePageTable.c)
 *     MiFreeSlabEntry @ 0x1403533C8 (MiFreeSlabEntry.c)
 *     MiFreePageFileHashPfns @ 0x140353E18 (MiFreePageFileHashPfns.c)
 *     MiObtainMdlCharges @ 0x140394D20 (MiObtainMdlCharges.c)
 *     MiReturnMdlCharges @ 0x140397B54 (MiReturnMdlCharges.c)
 *     MiFreeLargePageCharges @ 0x1403988E0 (MiFreeLargePageCharges.c)
 *     MiRebuildLargePage @ 0x1403F7120 (MiRebuildLargePage.c)
 *     MiCreateUltraThreadContextHelper @ 0x140412880 (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1404129EC (MiReplenishUltraPageTables.c)
 *     MiMapPageFileHash @ 0x140425FA8 (MiMapPageFileHash.c)
 *     MiGetFileHashPage @ 0x1404264BC (MiGetFileHashPage.c)
 *     MmFreeNonChargedSecurePages @ 0x140433BCC (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x140433D48 (MiFreeSecureKernelPage.c)
 *     MiDeleteProcessShadow @ 0x140451008 (MiDeleteProcessShadow.c)
 *     MmAllocateNonChargedSecurePages @ 0x140498780 (MmAllocateNonChargedSecurePages.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x1404AE77C (MiPrefetchReleasePreallocatedPages.c)
 *     MiDeleteSubsectionLargePages @ 0x1404C3EC4 (MiDeleteSubsectionLargePages.c)
 *     MiIdealClusterPage @ 0x1404CB218 (MiIdealClusterPage.c)
 *     MiPfnRangeIsZero @ 0x14066F480 (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x1406759CC (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140675D20 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14068478C (MiMoveBadPageChargesCrossPartition.c)
 *     MmAllocateSecureKernelPages @ 0x140689BF4 (MmAllocateSecureKernelPages.c)
 *     MiMoveBadPagePartition @ 0x14068C184 (MiMoveBadPagePartition.c)
 *     MiStoreReleaseReservedPageCharges @ 0x14068D8B4 (MiStoreReleaseReservedPageCharges.c)
 *     MiProcessVaContiguityInformation @ 0x14068E20C (MiProcessVaContiguityInformation.c)
 *     MiAllocateFastAwePages @ 0x1407F8AAC (MiAllocateFastAwePages.c)
 *     MiAllocateProcessShadow @ 0x140A51A70 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140A9984C (MiChargeSystemImageCommitment.c)
 *     MiCreateBootSlabEntries @ 0x140C5B16C (MiCreateBootSlabEntries.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRestockOverCommit @ 0x14042CEF4 (MiRestockOverCommit.c)
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
  _DWORD *v25; // rbp
  volatile LONG *v26; // rcx
  KIRQL v27; // r14

  v2 = a2;
  v4 = a2;
  if ( a2 )
  {
    v5 = 17;
    if ( !*(_QWORD *)(a1 + 16904) )
      goto LABEL_3;
    v25 = (_DWORD *)(a1 + 16888);
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
    v4 = MiRestockOverCommit(a1, v2);
    MiReleaseSpinLockExclusive(v25, v27);
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
      MiReleaseSpinLockExclusive((_DWORD *)(a1 + 16888), v5);
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
