/*
 * XREFs of MiReleaseNonPagedResources @ 0x14020C57C
 * Callers:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MiDeleteUltraMapContext @ 0x1402D1B78 (MiDeleteUltraMapContext.c)
 *     MiManageUltraSpacePageTable @ 0x1402D1CC4 (MiManageUltraSpacePageTable.c)
 *     MiFreeSlabEntry @ 0x1402D2150 (MiFreeSlabEntry.c)
 *     MiFreePageFileHashPfns @ 0x1402D2BA0 (MiFreePageFileHashPfns.c)
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiCreateUltraThreadContext @ 0x1402F3EF0 (MiCreateUltraThreadContext.c)
 *     MiFindContiguousPagesEx @ 0x140304960 (MiFindContiguousPagesEx.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiFreeSmallPageFromMdl @ 0x1403A2098 (MiFreeSmallPageFromMdl.c)
 *     MiReturnMdlCharges @ 0x1403A8ECC (MiReturnMdlCharges.c)
 *     MiFreeLargePageCharges @ 0x1403A9C50 (MiFreeLargePageCharges.c)
 *     MiCreateUltraThreadContextHelper @ 0x1403C6C4C (MiCreateUltraThreadContextHelper.c)
 *     MiReplenishUltraPageTables @ 0x1403C6DB8 (MiReplenishUltraPageTables.c)
 *     MiRebuildLargePage @ 0x1403D2BAC (MiRebuildLargePage.c)
 *     MmFreeNonChargedSecurePages @ 0x14041098C (MmFreeNonChargedSecurePages.c)
 *     MiFreeSecureKernelPage @ 0x140410B08 (MiFreeSecureKernelPage.c)
 *     MiObtainMdlCharges @ 0x1404128E0 (MiObtainMdlCharges.c)
 *     MiReplenishSlabAllocator @ 0x140413B18 (MiReplenishSlabAllocator.c)
 *     MiPrefetchReleasePreallocatedPages @ 0x14045AD24 (MiPrefetchReleasePreallocatedPages.c)
 *     MiDeleteProcessShadow @ 0x14045BC70 (MiDeleteProcessShadow.c)
 *     MiMapPageFileHash @ 0x140486688 (MiMapPageFileHash.c)
 *     MiGetFileHashPage @ 0x140486B9C (MiGetFileHashPage.c)
 *     MmAllocateNonChargedSecurePages @ 0x14049D980 (MmAllocateNonChargedSecurePages.c)
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
 *     MiIdealClusterPage @ 0x1404D205C (MiIdealClusterPage.c)
 *     MiPfnRangeIsZero @ 0x14066E2AC (MiPfnRangeIsZero.c)
 *     MiUnlinkBadPages @ 0x1406747FC (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x140674B50 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x1406835E0 (MiMoveBadPageChargesCrossPartition.c)
 *     MmAllocateSecureKernelPages @ 0x140688AC4 (MmAllocateSecureKernelPages.c)
 *     MiMoveBadPagePartition @ 0x14068B054 (MiMoveBadPagePartition.c)
 *     MiStoreReleaseReservedPageCharges @ 0x14068C784 (MiStoreReleaseReservedPageCharges.c)
 *     MiProcessVaContiguityInformation @ 0x14068D0DC (MiProcessVaContiguityInformation.c)
 *     MiAllocateFastAwePages @ 0x1407F833C (MiAllocateFastAwePages.c)
 *     MiAllocateProcessShadow @ 0x140A5A1B0 (MiAllocateProcessShadow.c)
 *     MiChargeSystemImageCommitment @ 0x140A9E2DC (MiChargeSystemImageCommitment.c)
 *     MiCreateBootSlabEntries @ 0x140C58FDC (MiCreateBootSlabEntries.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiRestockOverCommit @ 0x14043A6C0 (MiRestockOverCommit.c)
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
