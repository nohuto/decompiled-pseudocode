/*
 * XREFs of MiIncreaseUsedPtes @ 0x140299D80
 * Callers:
 *     MiLinkPoolCommitChain @ 0x1402077F0 (MiLinkPoolCommitChain.c)
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140211610 (MiProtectPrivateMemory.c)
 *     MiCompleteRestrictedImageFault @ 0x140213BC4 (MiCompleteRestrictedImageFault.c)
 *     MiAllocateKernelStackPages @ 0x14021639C (MiAllocateKernelStackPages.c)
 *     MiMakeHyperRangeAccessible @ 0x140241470 (MiMakeHyperRangeAccessible.c)
 *     MiInsertLargeUserMapping @ 0x14026AC6C (MiInsertLargeUserMapping.c)
 *     MiFinishPageTableForLargePage @ 0x14026B33C (MiFinishPageTableForLargePage.c)
 *     MiDecommitPages @ 0x140297F00 (MiDecommitPages.c)
 *     MiCommitExistingVad @ 0x140306380 (MiCommitExistingVad.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MiInitializePfnForOtherProcess @ 0x14038FF2C (MiInitializePfnForOtherProcess.c)
 *     MiInsertPhysicalPteMapping @ 0x1403910B8 (MiInsertPhysicalPteMapping.c)
 *     MiInPagePageTable @ 0x140391778 (MiInPagePageTable.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiSplitPrivatePage @ 0x1403C7720 (MiSplitPrivatePage.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FDC68 (MiReservePageFileSpaceForPage.c)
 *     MiMakeHyperPteDemandZero @ 0x140450460 (MiMakeHyperPteDemandZero.c)
 *     MiUpdateAwePageTable @ 0x14046E1F0 (MiUpdateAwePageTable.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404BC78C (MiUpdatePrivateDemandZeroView.c)
 *     MiAddMappedPtesPadding @ 0x1404C9B84 (MiAddMappedPtesPadding.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D1540 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404EDDA4 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404F0048 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F5A48 (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiCommitHotPatchTable @ 0x14067E0B4 (MiCommitHotPatchTable.c)
 *     MmMapDriverTablePage @ 0x14067EB4C (MmMapDriverTablePage.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiIncreaseUsedPtes(__int64 a1, unsigned __int64 CurrentThread, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // r10
  char v6; // bp
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // r8
  unsigned int v14; // r8d

  v4 = *(_QWORD *)CurrentThread;
  v5 = CurrentThread;
  v6 = a4;
  v7 = (unsigned int)a3;
  if ( CurrentThread >= 0xFFFFF6FB7DBED000uLL && CurrentThread <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v8 = *(_QWORD *)CurrentThread;
    if ( (v4 & 1) != 0 )
    {
      LOBYTE(a3) = (v4 & 0x42) != 0;
      LOBYTE(CurrentThread) = (v4 & 0x20) != 0;
      if ( ((unsigned __int8)a3 & (unsigned __int8)CurrentThread) == 0 && (MiFlags & 0x600000) != 0 )
      {
        CurrentThread = (unsigned __int64)KeGetCurrentThread();
        a3 = *(_QWORD *)(CurrentThread + 184);
        if ( *(_BYTE *)(a3 + 352) != 1 )
        {
          CurrentThread = *(_QWORD *)(a3 + 1288);
          if ( CurrentThread )
          {
            CurrentThread = *(_QWORD *)(CurrentThread + 8 * ((v5 >> 3) & 0x1FF));
            if ( (CurrentThread & 0x20) != 0 )
              v8 = v4 | 0x20;
            v4 = v8 | 0x42;
            if ( (CurrentThread & 0x42) == 0 )
              v4 = v8;
          }
        }
      }
    }
  }
  v9 = 0xFFFFFFFFFFLL;
  v10 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v11 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    v12 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9, CurrentThread, a3, a4) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v10 + 24) < 0 );
    }
  }
  if ( (*(_DWORD *)(v10 + 36) & 0x4000000) != 0 )
    v13 = HIDWORD(*(_QWORD *)v10);
  else
    v13 = *(_QWORD *)(v10 + 16) >> 16;
  v14 = v7 + (v13 & 0x3FF);
  if ( (*(_DWORD *)(v10 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v10 = ((unsigned __int64)v14 << 32) ^ (*(_QWORD *)v10 ^ ((unsigned __int64)v14 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(v10 + 16) = ((unsigned __int64)v14 << 16) ^ (*(_QWORD *)(v10 + 16) ^ ((unsigned __int64)v14 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  if ( (v6 & 4) != 0 )
    *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + v7) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + v7)) & 0xC000000000000000uLL;
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v14;
}
