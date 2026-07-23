/*
 * XREFs of MiReleasePageFileInfo @ 0x1402486F0
 * Callers:
 *     MiReservePageFileSpace @ 0x140202948 (MiReservePageFileSpace.c)
 *     MiPurgeSubsection @ 0x140204780 (MiPurgeSubsection.c)
 *     MiDeleteTransitionPte @ 0x140204FF0 (MiDeleteTransitionPte.c)
 *     MiLockCode @ 0x140205480 (MiLockCode.c)
 *     MiDeleteMergedPte @ 0x140205D9C (MiDeleteMergedPte.c)
 *     MiLockPageTablePage @ 0x140205E40 (MiLockPageTablePage.c)
 *     MiDecommitSharedPageTail @ 0x140206290 (MiDecommitSharedPageTail.c)
 *     MiDecommitFreePage @ 0x1402068E0 (MiDecommitFreePage.c)
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProcessWsInSwapFault @ 0x140215CA4 (MiProcessWsInSwapFault.c)
 *     MiDeleteSectionCluster @ 0x140216B54 (MiDeleteSectionCluster.c)
 *     MiResolveTransitionFault @ 0x140247040 (MiResolveTransitionFault.c)
 *     MiWsleFree @ 0x140248D20 (MiWsleFree.c)
 *     MiLockPageAndSetDirty @ 0x140249DD0 (MiLockPageAndSetDirty.c)
 *     MiCompletePrivateZeroFault @ 0x14024A090 (MiCompletePrivateZeroFault.c)
 *     MiDecrementShareCountEx @ 0x14024D2E0 (MiDecrementShareCountEx.c)
 *     MiPfnShareCountIsZero @ 0x14024D700 (MiPfnShareCountIsZero.c)
 *     MiStealPage @ 0x140253D10 (MiStealPage.c)
 *     MiMakeFaultPfnActive @ 0x14025A13C (MiMakeFaultPfnActive.c)
 *     MiHandleForkTransitionPte @ 0x1402678C4 (MiHandleForkTransitionPte.c)
 *     MiBuildForkPte @ 0x1402687D0 (MiBuildForkPte.c)
 *     MiCombineInitialInstance @ 0x140294F94 (MiCombineInitialInstance.c)
 *     MiProbeUnlockPage @ 0x140299FB0 (MiProbeUnlockPage.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiActOnPte @ 0x14029B3E0 (MiActOnPte.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14029C130 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x14029C7F0 (MiUnlockProtoPoolPage.c)
 *     MiStoreMarkLockedPagesModified @ 0x1402E9CB0 (MiStoreMarkLockedPagesModified.c)
 *     MiBuildReservationCluster @ 0x1402EAD30 (MiBuildReservationCluster.c)
 *     MiWriteComplete @ 0x1402ED400 (MiWriteComplete.c)
 *     MiMakeOutswappedPageResident @ 0x1402EF6F4 (MiMakeOutswappedPageResident.c)
 *     MiUnlockStoreLockedPages @ 0x1402FA670 (MiUnlockStoreLockedPages.c)
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 *     MiMigratePfn @ 0x1402FF9B0 (MiMigratePfn.c)
 *     MiPfnReferenceCountIsZero @ 0x140300260 (MiPfnReferenceCountIsZero.c)
 *     MiOutSwapWorkingSetPte @ 0x140346260 (MiOutSwapWorkingSetPte.c)
 *     MiWalkEntireImage @ 0x140349C00 (MiWalkEntireImage.c)
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiDeleteClusterPage @ 0x14034E8B0 (MiDeleteClusterPage.c)
 *     MmProtectPool @ 0x14038233C (MmProtectPool.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403C5F70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403D2314 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReleasePageFileSpace @ 0x1403D2B30 (MiReleasePageFileSpace.c)
 *     MiSetPagesModified @ 0x1403DA5EC (MiSetPagesModified.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiCompleteSecureProcessFault @ 0x1404286A0 (MiCompleteSecureProcessFault.c)
 *     MiSetSystemCodeProtection @ 0x1404289BC (MiSetSystemCodeProtection.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14043A2FC (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiLockPagedAddress @ 0x14047499C (MiLockPagedAddress.c)
 *     MiInPageSingleKernelStack @ 0x14047BE44 (MiInPageSingleKernelStack.c)
 *     MiResolveProtoCombine @ 0x14047C8C4 (MiResolveProtoCombine.c)
 *     MmUpdateUserShadowStackValue @ 0x140482448 (MmUpdateUserShadowStackValue.c)
 *     MiTrimSystemImagePages @ 0x1404A24CC (MiTrimSystemImagePages.c)
 *     MiDecommitPrivatePageTail @ 0x1404EFCE0 (MiDecommitPrivatePageTail.c)
 *     MiFreeModifiedReservations @ 0x1404F676C (MiFreeModifiedReservations.c)
 *     MiLockDriverPageRange @ 0x14066C080 (MiLockDriverPageRange.c)
 *     MiReplaceImportEntry @ 0x14066D2FC (MiReplaceImportEntry.c)
 *     MmDbgMarkPfnModifiedWorker @ 0x140680F28 (MmDbgMarkPfnModifiedWorker.c)
 *     MiScanPagefileSpace @ 0x1407EFD80 (MiScanPagefileSpace.c)
 *     MiFreeReservationRun @ 0x140A32FB4 (MiFreeReservationRun.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiSwizzleInvalidPte @ 0x1402FD620 (MiSwizzleInvalidPte.c)
 *     MiFlushSingleTbEntry @ 0x1402FDA50 (MiFlushSingleTbEntry.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1403368E0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1403369B0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1403C4F10 (MiCoalescePageFileBitmapsCache.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiPageHashBugCheck @ 0x140692388 (MiPageHashBugCheck.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B4870 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiReleasePageFileInfo(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned int v8; // r12d
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rsi
  volatile signed __int32 *v12; // r14
  __int64 i; // rcx
  __int64 v14; // r14
  int v15; // r11d
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  char v18; // r8
  __int64 v19; // r9
  int v20; // ecx
  unsigned __int64 v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rbp
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
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // r9
  __int64 v39; // r10
  __int64 v40; // r11
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 *v45; // r9
  __int64 v46; // rdx
  void *retaddr; // [rsp+98h] [rbp+0h]
  PSLIST_ENTRY ListEntry; // [rsp+A0h] [rbp+8h]
  KIRQL v49; // [rsp+B0h] [rbp+18h]

  v4 = a3;
  v6 = a2;
  if ( qword_140E2DCC0 && (a2 & 0x10) == 0 )
    v6 = a2 & ~qword_140E2DCC0;
  v7 = HIDWORD(v6);
  v8 = 0;
  v9 = (a2 >> 1) & 1;
  v10 = (a2 >> 2) & 1;
  v11 = *(_QWORD *)(a1 + 8LL * ((unsigned __int16)a2 >> 12) + 18528);
  v12 = (volatile signed __int32 *)(v11 + 200);
  if ( (a3 & 1) != 0 )
  {
    v49 = 17;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset(v12, 0x1Fu) )
      {
        LOBYTE(a2) = -1;
        v8 = ExpWaitForSpinLockExclusiveAndAcquire(v11 + 200, a2);
      }
      for ( i = *(unsigned int *)v12; (*v12 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v12 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedOr(v12, 0x40000000u);
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(i, a2, a3, a4) )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
      v8 = 0;
    }
    else
    {
      LOBYTE(a2) = -1;
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11 + 200, a2);
    }
  }
  else
  {
    v49 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v11 + 200));
  }
  v14 = *(_QWORD *)(v11 + 80);
  if ( (_DWORD)v9 )
  {
    *(_BYTE *)(*(_QWORD *)(v14 + 32) + (v7 >> 3)) &= ~(1 << (v7 & 7));
    ++*(_DWORD *)(v11 + 20);
  }
  if ( !(_DWORD)v10 )
    goto LABEL_43;
  v15 = 1;
  if ( (v4 & 2) == 0 )
  {
    v16 = *(_QWORD *)(v11 + 184);
    if ( v16 )
    {
      v29 = v16 + (unsigned int)(dword_140E373CC * v7);
      v30 = (__int64 *)(((v29 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v31 = *v30;
      if ( (*v30 & 1) != 0 )
      {
        v32 = 0LL;
        if ( *(_DWORD *)v29 == 1 && !dword_140E30294 )
          MiPageHashBugCheck(0x62uLL, (unsigned int)v7, v29);
        if ( dword_140E373D0 && (v46 = *(_QWORD *)(v29 + 8)) != 0 )
        {
          if ( (v46 & 1) == 0 && !dword_140E30294 )
            MiPageHashBugCheck(0x61uLL, (unsigned int)v7, v29);
          v33 = *(_DWORD *)(v29 + 4);
          v32 = *(_QWORD *)(v29 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        }
        else
        {
          v33 = 0;
        }
        *(_DWORD *)v29 = 1;
        if ( dword_140E373D0 )
        {
          *(_QWORD *)(v29 + 8) = v32;
          *(_DWORD *)(v29 + 4) = v33;
        }
        ListEntry = (PSLIST_ENTRY)(48 * ((v31 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
        Next = ListEntry[1].Next;
        HIDWORD(v35) = HIDWORD(Next);
        if ( qword_140E2DCC0 && ((unsigned __int8)Next & 0x10) == 0 )
          v35 = (unsigned __int64)Next & ~qword_140E2DCC0;
        v36 = (unsigned int)(HIDWORD(v35) - 1);
        if ( Next && qword_140E2DCC0 )
        {
          if ( ((unsigned __int8)Next & 0x10) != 0 )
            LODWORD(Next) = (unsigned int)Next & 0xFFFFFFEF;
          else
            LODWORD(Next) = ~(_DWORD)qword_140E2DCC0 & (unsigned int)Next;
        }
        v37 = MiSwizzleInvalidPte((unsigned int)Next | ((unsigned __int64)(unsigned int)v36 << 32), v36);
        *(_QWORD *)(v40 + 16) = v37;
        if ( !v41 )
        {
          --*(_DWORD *)(v11 + 176);
          *v38 = CLFS_LSN_NULL_EXT;
          MiFlushSingleTbEntry(v39, 2LL, 1LL);
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)(v11 + 48), ListEntry);
        }
        v15 = 1;
      }
      else
      {
        v42 = *v30;
        if ( qword_140E2DCC0 )
        {
          if ( (v31 & 0x10) != 0 )
            HIDWORD(v42) = HIDWORD(*v30);
          else
            v42 = v31 & ~qword_140E2DCC0;
        }
        v43 = (unsigned int)(HIDWORD(v42) - 1);
        if ( v31 && qword_140E2DCC0 )
        {
          if ( (v31 & 0x10) != 0 )
            LODWORD(v31) = v31 & 0xFFFFFFEF;
          else
            LODWORD(v31) = ~(_DWORD)qword_140E2DCC0 & v31;
        }
        v44 = MiSwizzleInvalidPte((unsigned int)v31 | (unsigned __int64)(v43 << 32), (unsigned int)v31);
        *v45 = v44;
      }
    }
  }
  v17 = v7 >> 3;
  v18 = v7 & 7;
  if ( (*(_BYTE *)(v11 + 172) & 0x40) == 0 )
  {
    *(_BYTE *)(*(_QWORD *)(v14 + 16) + v17) &= ~(1 << v18);
    v28 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(v11 + 12) = v28 + 1;
    if ( (unsigned int)v7 < *(_DWORD *)(v11 + 88) )
      *(_DWORD *)(v11 + 88) = v7;
    ++*(_DWORD *)(v11 + 96);
    if ( !v28 && (*(_BYTE *)(v11 + 174) & 1) != 0 )
      v8 = v15;
LABEL_43:
    if ( ((_DWORD)v9 || !_bittest64(*(const signed __int64 **)(v14 + 32), v7))
      && ((_DWORD)v10 || !_bittest64(*(const signed __int64 **)(v14 + 16), v7)) )
    {
      MiCoalescePageFileBitmapsCache(v11, (unsigned int)v9, (unsigned int)v7);
      _InterlockedExchange(
        (volatile __int32 *)(*(_QWORD *)(v11 + 216) + 920LL),
        (*(_DWORD *)(*(_QWORD *)(v11 + 216) + 920LL) & 0xFFFFFC00 | 0x200) + 1024);
    }
    goto LABEL_32;
  }
  v19 = *(_QWORD *)(v11 + 216);
  *(_BYTE *)(v17 + *(_QWORD *)(*(_QWORD *)(v11 + 80) + 32LL)) &= ~(1 << v18);
  if ( (unsigned int)v7 < *(_DWORD *)(v11 + 104) )
    *(_DWORD *)(v11 + 104) = v7;
  v20 = *(_DWORD *)(v11 + 168);
  *(_DWORD *)(v11 + 168) = v20 + 1;
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
        for ( j = 0; j < dword_140E2DD0C; ++j )
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
  v27 = (volatile LONG *)(v11 + 200);
  if ( (v4 & 1) != 0 )
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
  if ( v8 )
    KeSetEvent((PRKEVENT)(a1 + 928), 0, 0);
}
