/*
 * XREFs of MiReleasePageFileInfo @ 0x1402346B0
 * Callers:
 *     MiUnlockStoreLockedPages @ 0x14020D220 (MiUnlockStoreLockedPages.c)
 *     MiMigratePfn @ 0x140217D00 (MiMigratePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x14021ADE0 (MiPfnReferenceCountIsZero.c)
 *     MiOutSwapWorkingSetPte @ 0x140225A10 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteSectionCluster @ 0x140229404 (MiDeleteSectionCluster.c)
 *     MiWsleFree @ 0x14022FD60 (MiWsleFree.c)
 *     MiCompleteProtoPteFault @ 0x140232170 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140233060 (MiResolveTransitionFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140234CD0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402353A0 (MiUnlockProtoPoolPage.c)
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiActOnPte @ 0x140237188 (MiActOnPte.c)
 *     MiLockPageAndSetDirty @ 0x14023A2A0 (MiLockPageAndSetDirty.c)
 *     MiReservePageFileSpace @ 0x1402471FC (MiReservePageFileSpace.c)
 *     MiLockPageTablePage @ 0x1402AC2E0 (MiLockPageTablePage.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiDeleteClusterPage @ 0x1402C48B0 (MiDeleteClusterPage.c)
 *     MiStealPage @ 0x1402C80F0 (MiStealPage.c)
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402CB6C0 (MiStoreMarkLockedPagesModified.c)
 *     MiProbeUnlockPage @ 0x1402CB9A0 (MiProbeUnlockPage.c)
 *     MiBuildForkPte @ 0x1402CCF80 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x1402CE290 (MiCombineInitialInstance.c)
 *     MiHandleForkTransitionPte @ 0x1402CF714 (MiHandleForkTransitionPte.c)
 *     MiWalkEntireImage @ 0x14033BD50 (MiWalkEntireImage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033D068 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteMergedPte @ 0x14033FD38 (MiDeleteMergedPte.c)
 *     MiPurgeSubsection @ 0x1403400A0 (MiPurgeSubsection.c)
 *     MiDeleteTransitionPte @ 0x140340900 (MiDeleteTransitionPte.c)
 *     MiDecommitSharedPageTail @ 0x140340E30 (MiDecommitSharedPageTail.c)
 *     MiPfnShareCountIsZero @ 0x140342440 (MiPfnShareCountIsZero.c)
 *     MiDecrementShareCountEx @ 0x1403427F0 (MiDecrementShareCountEx.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProcessWsInSwapFault @ 0x140388C2C (MiProcessWsInSwapFault.c)
 *     MiResolveProtoCombine @ 0x14038AD20 (MiResolveProtoCombine.c)
 *     MmProtectPool @ 0x14039FEDC (MmProtectPool.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403DB700 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiReleasePageFileSpace @ 0x1403E1160 (MiReleasePageFileSpace.c)
 *     MiCompleteSecureProcessFault @ 0x1403F3164 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x1403F3480 (MiSetSystemCodeProtection.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiMakeFaultPfnActive @ 0x1403FD984 (MiMakeFaultPfnActive.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x1403FDF58 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockCode @ 0x1403FE950 (MiLockCode.c)
 *     MiBuildReservationCluster @ 0x14040BF84 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x14040E620 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14040F088 (MiMakeOutswappedPageResident.c)
 *     MiInPageSingleKernelStack @ 0x14046BDAC (MiInPageSingleKernelStack.c)
 *     MiLockPagedAddress @ 0x140478BA0 (MiLockPagedAddress.c)
 *     MmUpdateUserShadowStackValue @ 0x14048789C (MmUpdateUserShadowStackValue.c)
 *     MiSetPagesModified @ 0x140493EB0 (MiSetPagesModified.c)
 *     MiTrimSystemImagePages @ 0x1404A70E0 (MiTrimSystemImagePages.c)
 *     MiDecommitPrivatePageTail @ 0x1404EE270 (MiDecommitPrivatePageTail.c)
 *     MiFreeModifiedReservations @ 0x1404F6770 (MiFreeModifiedReservations.c)
 *     MiLockDriverPageRange @ 0x14065F370 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x1406605EC (MiReplaceImportEntry.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140674508 (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x1407DF910 (MiScanPagefileSpace.c)
 *     MiFreeReservationRun @ 0x140A39448 (MiFreeReservationRun.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1402120E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402121B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiFlushSingleTbEntry @ 0x140219200 (MiFlushSingleTbEntry.c)
 *     MiSwizzleInvalidPte @ 0x14021A0C0 (MiSwizzleInvalidPte.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1403A2D94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403DA600 (MiCoalescePageFileBitmapsCache.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageHashBugCheck @ 0x140685E58 (MiPageHashBugCheck.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rbx
  int v9; // r13d
  __int64 v10; // rbp
  volatile signed __int32 *v11; // rsi
  unsigned int v12; // r14d
  __int64 i; // rcx
  __int64 v14; // rsi
  int v15; // r11d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  char v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // r11
  _QWORD *v25; // rbx
  unsigned int j; // r8d
  volatile LONG *v27; // rcx
  int v28; // ecx
  unsigned __int64 v29; // r10
  __int64 *v30; // r9
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  int v33; // edx
  _SLIST_ENTRY *Next; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // r9
  unsigned __int64 v38; // r10
  __int64 v39; // r11
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 *v44; // r9
  __int64 v45; // rdx
  void *retaddr; // [rsp+98h] [rbp+0h]
  PSLIST_ENTRY ListEntrya; // [rsp+A0h] [rbp+8h]
  KIRQL v49; // [rsp+B0h] [rbp+18h]

  v4 = a1;
  v5 = a2;
  if ( qword_140E2D940 && (a2 & 0x10) == 0 )
    v5 = a2 & ~qword_140E2D940;
  v6 = HIDWORD(v5);
  v7 = (a2 >> 1) & 1;
  v8 = (a2 >> 2) & 1;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 18528);
  v11 = (volatile signed __int32 *)(v10 + 200);
  if ( (a3 & 1) != 0 )
  {
    v49 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v12 = 0;
      if ( _interlockedbittestandset(v11, 0x1Fu) )
        v12 = ExpWaitForSpinLockExclusiveAndAcquire((int *)(v10 + 200), 0xFFu);
      for ( i = *(unsigned int *)v11; (*v11 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v11 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v11, 0x40000000u);
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      v4 = a1;
    }
    else
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented((int *)(v10 + 200), 0xFFu);
    }
  }
  else
  {
    v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v10 + 200));
  }
  v14 = *(_QWORD *)(v10 + 80);
  if ( (_DWORD)v7 )
  {
    *(_BYTE *)(*(_QWORD *)(v14 + 32) + (v6 >> 3)) &= ~(1 << (v6 & 7));
    ++*(_DWORD *)(v10 + 20);
  }
  if ( !(_DWORD)v8 )
    goto LABEL_41;
  v15 = 1;
  if ( (a3 & 2) == 0 )
  {
    v16 = *(_QWORD *)(v10 + 184);
    if ( v16 )
    {
      v29 = v16 + (unsigned int)(dword_140E3704C * v6);
      v30 = (__int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v31 = *v30;
      if ( (*v30 & 1) != 0 )
      {
        v32 = 0LL;
        if ( *(_DWORD *)v29 == 1 && !dword_140E2FF0C )
          MiPageHashBugCheck(0x62uLL, (unsigned int)v6, v29);
        if ( dword_140E37050 && (v45 = *(_QWORD *)(v29 + 8)) != 0 )
        {
          if ( (v45 & 1) == 0 && !dword_140E2FF0C )
            MiPageHashBugCheck(0x61uLL, (unsigned int)v6, v29);
          v33 = *(_DWORD *)(v29 + 4);
          v32 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        }
        else
        {
          v33 = 0;
        }
        *(_DWORD *)v29 = 1;
        if ( dword_140E37050 )
        {
          *(_QWORD *)(v29 + 8) = v32;
          *(_DWORD *)(v29 + 4) = v33;
        }
        ListEntrya = (PSLIST_ENTRY)(48 * ((v31 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        Next = ListEntrya[1].Next;
        HIDWORD(v35) = HIDWORD(Next);
        if ( qword_140E2D940 && ((unsigned __int8)Next & 0x10) == 0 )
          v35 = (unsigned __int64)Next & ~qword_140E2D940;
        if ( Next && qword_140E2D940 )
        {
          if ( ((unsigned __int8)Next & 0x10) != 0 )
            LODWORD(Next) = (unsigned int)Next & 0xFFFFFFEF;
          else
            LODWORD(Next) = ~(_DWORD)qword_140E2D940 & (unsigned int)Next;
        }
        v36 = MiSwizzleInvalidPte((unsigned int)Next | ((unsigned __int64)(unsigned int)(HIDWORD(v35) - 1) << 32));
        *(_QWORD *)(v39 + 16) = v36;
        if ( !v40 )
        {
          --*(_DWORD *)(v10 + 176);
          *v37 = CLFS_LSN_NULL_EXT;
          MiFlushSingleTbEntry(v38, 2, 1);
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v10 + 48), ListEntrya);
        }
        v15 = 1;
      }
      else
      {
        v41 = *v30;
        if ( qword_140E2D940 )
        {
          if ( (v31 & 0x10) != 0 )
            HIDWORD(v41) = HIDWORD(*v30);
          else
            v41 = v31 & ~qword_140E2D940;
        }
        v42 = (unsigned int)(HIDWORD(v41) - 1);
        if ( v31 && qword_140E2D940 )
        {
          if ( (v31 & 0x10) != 0 )
            LODWORD(v31) = v31 & 0xFFFFFFEF;
          else
            LODWORD(v31) = ~(_DWORD)qword_140E2D940 & v31;
        }
        v43 = MiSwizzleInvalidPte((unsigned int)v31 | (unsigned __int64)(v42 << 32));
        *v44 = v43;
      }
    }
  }
  v17 = v6 >> 3;
  v18 = v6 & 7;
  if ( (*(_BYTE *)(v10 + 172) & 0x40) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(v14 + 16) + v17) &= ~(1 << v18);
    v28 = *(_DWORD *)(v10 + 12);
    *(_DWORD *)(v10 + 12) = v28 + 1;
    if ( (unsigned int)v6 < *(_DWORD *)(v10 + 88) )
      *(_DWORD *)(v10 + 88) = v6;
    ++*(_DWORD *)(v10 + 96);
    if ( !v28 && (*(_BYTE *)(v10 + 174) & 1) != 0 )
      v9 = v15;
LABEL_41:
    if ( ((_DWORD)v7 || !_bittest64(*(const signed __int64 **)(v14 + 32), v6))
      && ((_DWORD)v8 || !_bittest64(*(const signed __int64 **)(v14 + 16), v6)) )
    {
      MiCoalescePageFileBitmapsCache(v10, (unsigned int)v7, (unsigned int)v6);
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(v10 + 216) + 920LL),
        (*(_DWORD *)(*(_QWORD *)(v10 + 216) + 920LL) & 0xFFFFFC00 | 0x200) + 1024);
    }
    goto LABEL_32;
  }
  v19 = *(_QWORD *)(v10 + 216);
  *(_BYTE *)(v17 + *(_QWORD *)(*(_QWORD *)(v10 + 80) + 32LL)) &= ~(1 << v18);
  if ( (unsigned int)v6 < *(_DWORD *)(v10 + 104) )
    *(_DWORD *)(v10 + 104) = v6;
  v20 = *(_DWORD *)(v10 + 168);
  *(_DWORD *)(v10 + 168) = v20 + 1;
  if ( v20 != 255 )
  {
    v21 = *(_QWORD *)(v19 + 18688);
    if ( v21 >= 0xA0 )
      goto LABEL_32;
    v22 = 0;
    v23 = *(_QWORD *)(v19 + 16) + 14944LL;
    while ( v22 < (unsigned __int16)KeNumberNodes )
    {
      v24 = 0LL;
      v25 = (_QWORD *)v23;
      while ( v24 <= 1 )
      {
        for ( j = 0; j < dword_140E2D98C; ++j )
        {
          v21 += *(unsigned __int16 *)(*v25 + 16LL * j);
          if ( v21 >= 0xA0 )
            goto LABEL_32;
        }
        ++v24;
        ++v25;
      }
      v23 += 57216LL;
      ++v22;
    }
  }
  KeSetEvent((PRKEVENT)(v19 + 1328), 0, 0);
LABEL_32:
  v27 = (volatile LONG *)(v10 + 200);
  if ( (a3 & 1) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
      *v27 = 0;
    else
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v27, retaddr);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(v27);
    if ( v49 != 17 )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v49);
      __writecr8(v49);
    }
  }
  if ( v9 )
    KeSetEvent((PRKEVENT)(v4 + 928), 0, 0);
}
