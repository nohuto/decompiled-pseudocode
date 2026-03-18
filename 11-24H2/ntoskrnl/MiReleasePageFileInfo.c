/*
 * XREFs of MiReleasePageFileInfo @ 0x14021B9A0
 * Callers:
 *     MiResolveTransitionFault @ 0x14021A2F0 (MiResolveTransitionFault.c)
 *     MiWsleFree @ 0x14021BFD0 (MiWsleFree.c)
 *     MiLockPageAndSetDirty @ 0x14021D080 (MiLockPageAndSetDirty.c)
 *     MiCompletePrivateZeroFault @ 0x14021D340 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x140220590 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x1402209B0 (MiPfnShareCountIsZero.c)
 *     MiStealPage @ 0x1402263B0 (MiStealPage.c)
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 *     MiMigratePfn @ 0x14022C0A0 (MiMigratePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x14022C950 (MiPfnReferenceCountIsZero.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiPurgeSubsection @ 0x14023C9F0 (MiPurgeSubsection.c)
 *     MiDeleteTransitionPte @ 0x14023D260 (MiDeleteTransitionPte.c)
 *     MiLockCode @ 0x14023D6F0 (MiLockCode.c)
 *     MiDeleteMergedPte @ 0x14023E00C (MiDeleteMergedPte.c)
 *     MiDecommitSharedPageTail @ 0x14023E140 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x14023E790 (MiDecommitFreePage.c)
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiLockPageTablePage @ 0x140284A20 (MiLockPageTablePage.c)
 *     MiProbeUnlockPage @ 0x14028A3B0 (MiProbeUnlockPage.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiActOnPte @ 0x14028B7E0 (MiActOnPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14028C530 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14028CBF0 (MiUnlockProtoPoolPage.c)
 *     MiBuildForkPte @ 0x1402C53E8 (MiBuildForkPte.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1402C86D0 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiWalkEntireImage @ 0x1402E85C0 (MiWalkEntireImage.c)
 *     MiCompleteProtoPteFault @ 0x1402EBD20 (MiCompleteProtoPteFault.c)
 *     MiDeleteClusterPage @ 0x1402ED270 (MiDeleteClusterPage.c)
 *     MiOutSwapWorkingSetPte @ 0x140302690 (MiOutSwapWorkingSetPte.c)
 *     MiReservePageFileSpace @ 0x140368314 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiBuildReservationCluster @ 0x140368F90 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x14036B660 (MiWriteComplete.c)
 *     MiCombineInitialInstance @ 0x14036C3E0 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x14036D640 (MiHandleForkTransitionPte.c)
 *     MmProtectPool @ 0x1403889FC (MmProtectPool.c)
 *     MiUnlockStoreLockedPages @ 0x14039D370 (MiUnlockStoreLockedPages.c)
 *     MiDeleteSectionCluster @ 0x1403A0124 (MiDeleteSectionCluster.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403E4774 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReleasePageFileSpace @ 0x1403E4F90 (MiReleasePageFileSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140403D20 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiStoreMarkLockedPagesModified @ 0x140432B70 (MiStoreMarkLockedPagesModified.c)
 *     MiCompleteSecureProcessFault @ 0x140435C20 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x140435F3C (MiSetSystemCodeProtection.c)
 *     MiMakeFaultPfnActive @ 0x140462FB4 (MiMakeFaultPfnActive.c)
 *     MiInPageSingleKernelStack @ 0x14046A150 (MiInPageSingleKernelStack.c)
 *     MiProcessWsInSwapFault @ 0x14046DEB4 (MiProcessWsInSwapFault.c)
 *     MiLockPagedAddress @ 0x14047910C (MiLockPagedAddress.c)
 *     MiResolveProtoCombine @ 0x140481604 (MiResolveProtoCombine.c)
 *     MmUpdateUserShadowStackValue @ 0x1404873D8 (MmUpdateUserShadowStackValue.c)
 *     MiSetPagesModified @ 0x140492C90 (MiSetPagesModified.c)
 *     MiTrimSystemImagePages @ 0x1404A7A78 (MiTrimSystemImagePages.c)
 *     MiMakeOutswappedPageResident @ 0x1404A8280 (MiMakeOutswappedPageResident.c)
 *     MiDecommitPrivatePageTail @ 0x1404F2240 (MiDecommitPrivatePageTail.c)
 *     MiFreeModifiedReservations @ 0x1404F8E8C (MiFreeModifiedReservations.c)
 *     MiLockDriverPageRange @ 0x14066AEB0 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066C12C (MiReplaceImportEntry.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x14067FD28 (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x1407EF7B0 (MiScanPagefileSpace.c)
 *     MiFreeReservationRun @ 0x140A3D6A4 (MiFreeReservationRun.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14020D580 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14020D650 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSwizzleInvalidPte @ 0x14022A3B0 (MiSwizzleInvalidPte.c)
 *     MiFlushSingleTbEntry @ 0x14022A7E0 (MiFlushSingleTbEntry.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140366840 (MiCoalescePageFileBitmapsCache.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageHashBugCheck @ 0x1406912B8 (MiPageHashBugCheck.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  char v3; // r15
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rsi
  volatile signed __int32 *v11; // r14
  __int64 i; // rcx
  __int64 v13; // r14
  int v14; // r11d
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  char v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // r11
  _QWORD *v24; // rbx
  unsigned int j; // r8d
  volatile LONG *v26; // rcx
  int v27; // ecx
  unsigned __int64 v28; // r10
  __int64 *v29; // r9
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rcx
  int v32; // edx
  _SLIST_ENTRY *Next; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // r9
  __int64 v37; // r10
  __int64 v38; // r11
  int v39; // edx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 *v43; // r9
  __int64 v44; // rdx
  void *retaddr; // [rsp+98h] [rbp+0h]
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp+8h]
  KIRQL v47; // [rsp+B0h] [rbp+18h]

  v3 = a3;
  v5 = a2;
  if ( qword_140E2DB80 && (a2 & 0x10) == 0 )
    v5 = a2 & ~qword_140E2DB80;
  v6 = HIDWORD(v5);
  v7 = 0;
  v8 = (a2 >> 1) & 1;
  v9 = (a2 >> 2) & 1;
  v10 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 18528);
  v11 = (volatile signed __int32 *)(v10 + 200);
  if ( (a3 & 1) != 0 )
  {
    v47 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v11, 0x1Fu) )
        v7 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v10 + 200), 0xFFu, a3);
      for ( i = *(unsigned int *)v11; (*v11 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v11 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v11, 0x40000000u);
        if ( (++v7 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i) )
        {
          HvlNotifyLongSpinWait(v7);
        }
        else
        {
          _mm_pause();
        }
      }
      v7 = 0;
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v10 + 200), 0xFFu);
    }
  }
  else
  {
    v47 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 200));
  }
  v13 = *(_QWORD *)(v10 + 80);
  if ( (_DWORD)v8 )
  {
    *(_BYTE *)(*(_QWORD *)(v13 + 32) + (v6 >> 3)) &= ~(1 << (v6 & 7));
    ++*(_DWORD *)(v10 + 20);
  }
  if ( !(_DWORD)v9 )
    goto LABEL_43;
  v14 = 1;
  if ( (v3 & 2) == 0 )
  {
    v15 = *(_QWORD *)(v10 + 184);
    if ( v15 )
    {
      v28 = v15 + (unsigned int)(dword_140E3728C * v6);
      v29 = (__int64 *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v30 = *v29;
      if ( (*v29 & 1) != 0 )
      {
        v31 = 0LL;
        if ( *(_DWORD *)v28 == 1 && !dword_140E30154 )
          MiPageHashBugCheck(0x62uLL, (unsigned int)v6, v28);
        if ( dword_140E37290 && (v44 = *(_QWORD *)(v28 + 8)) != 0 )
        {
          if ( (v44 & 1) == 0 && !dword_140E30154 )
            MiPageHashBugCheck(0x61uLL, (unsigned int)v6, v28);
          v32 = *(_DWORD *)(v28 + 4);
          v31 = *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        }
        else
        {
          v32 = 0;
        }
        *(_DWORD *)v28 = 1;
        if ( dword_140E37290 )
        {
          *(_QWORD *)(v28 + 8) = v31;
          *(_DWORD *)(v28 + 4) = v32;
        }
        ListEntry = (PSLIST_ENTRY)(48 * ((v30 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        Next = ListEntry[1].Next;
        HIDWORD(v34) = HIDWORD(Next);
        if ( qword_140E2DB80 && ((unsigned __int8)Next & 0x10) == 0 )
          v34 = (unsigned __int64)Next & ~qword_140E2DB80;
        if ( Next && qword_140E2DB80 )
        {
          if ( ((unsigned __int8)Next & 0x10) != 0 )
            LODWORD(Next) = (unsigned int)Next & 0xFFFFFFEF;
          else
            LODWORD(Next) = ~(_DWORD)qword_140E2DB80 & (unsigned int)Next;
        }
        v35 = MiSwizzleInvalidPte((unsigned int)Next | ((unsigned __int64)(unsigned int)(HIDWORD(v34) - 1) << 32));
        *(_QWORD *)(v38 + 16) = v35;
        if ( !v39 )
        {
          --*(_DWORD *)(v10 + 176);
          *v36 = CLFS_LSN_NULL_EXT;
          MiFlushSingleTbEntry(v37, 2LL, 1LL);
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v10 + 48), ListEntry);
        }
        v14 = 1;
      }
      else
      {
        v40 = *v29;
        if ( qword_140E2DB80 )
        {
          if ( (v30 & 0x10) != 0 )
            HIDWORD(v40) = HIDWORD(*v29);
          else
            v40 = v30 & ~qword_140E2DB80;
        }
        v41 = (unsigned int)(HIDWORD(v40) - 1);
        if ( v30 && qword_140E2DB80 )
        {
          if ( (v30 & 0x10) != 0 )
            LODWORD(v30) = v30 & 0xFFFFFFEF;
          else
            LODWORD(v30) = ~(_DWORD)qword_140E2DB80 & v30;
        }
        v42 = MiSwizzleInvalidPte((unsigned int)v30 | (unsigned __int64)(v41 << 32));
        *v43 = v42;
      }
    }
  }
  v16 = v6 >> 3;
  v17 = v6 & 7;
  if ( (*(_BYTE *)(v10 + 172) & 0x40) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(v13 + 16) + v16) &= ~(1 << v17);
    v27 = *(_DWORD *)(v10 + 12);
    *(_DWORD *)(v10 + 12) = v27 + 1;
    if ( (unsigned int)v6 < *(_DWORD *)(v10 + 88) )
      *(_DWORD *)(v10 + 88) = v6;
    ++*(_DWORD *)(v10 + 96);
    if ( !v27 && (*(_BYTE *)(v10 + 174) & 1) != 0 )
      v7 = v14;
LABEL_43:
    if ( ((_DWORD)v8 || !_bittest64(*(const signed __int64 **)(v13 + 32), v6))
      && ((_DWORD)v9 || !_bittest64(*(const signed __int64 **)(v13 + 16), v6)) )
    {
      MiCoalescePageFileBitmapsCache(v10, (unsigned int)v8, (unsigned int)v6);
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(v10 + 216) + 920LL),
        (*(_DWORD *)(*(_QWORD *)(v10 + 216) + 920LL) & 0xFFFFFC00 | 0x200) + 1024);
    }
    goto LABEL_32;
  }
  v18 = *(_QWORD *)(v10 + 216);
  *(_BYTE *)(v16 + *(_QWORD *)(*(_QWORD *)(v10 + 80) + 32LL)) &= ~(1 << v17);
  if ( (unsigned int)v6 < *(_DWORD *)(v10 + 104) )
    *(_DWORD *)(v10 + 104) = v6;
  v19 = *(_DWORD *)(v10 + 168);
  *(_DWORD *)(v10 + 168) = v19 + 1;
  if ( v19 != 255 )
  {
    v20 = *(_QWORD *)(v18 + 18688);
    if ( v20 >= 0xA0 )
      goto LABEL_32;
    v21 = 0;
    v22 = *(_QWORD *)(v18 + 16) + 14944LL;
    while ( v21 < (unsigned __int16)KeNumberNodes )
    {
      v23 = 0LL;
      v24 = (_QWORD *)v22;
      while ( v23 <= 1 )
      {
        for ( j = 0; j < dword_140E2DBCC; ++j )
        {
          v20 += *(unsigned __int16 *)(*v24 + 16LL * j);
          if ( v20 >= 0xA0 )
            goto LABEL_32;
        }
        ++v23;
        ++v24;
      }
      v22 += 57216LL;
      ++v21;
    }
  }
  KeSetEvent((PRKEVENT)(v18 + 1328), 0, 0);
LABEL_32:
  v26 = (volatile LONG *)(v10 + 200);
  if ( (v3 & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v26 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v26, retaddr);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v26);
    if ( v47 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v47);
      __writecr8(v47);
    }
  }
  if ( v7 )
    KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
}
