/*
 * XREFs of MiIncreaseUsedPtes @ 0x14028A180
 * Callers:
 *     MiCommitExistingVad @ 0x140213020 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x140237480 (MiProtectPrivateMemory.c)
 *     MiCompleteRestrictedImageFault @ 0x140238F64 (MiCompleteRestrictedImageFault.c)
 *     MiLinkPoolCommitChain @ 0x14023F6A0 (MiLinkPoolCommitChain.c)
 *     MiAddMappedPtes @ 0x140243C60 (MiAddMappedPtes.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 *     MiMakeHyperRangeAccessible @ 0x1402DFB90 (MiMakeHyperRangeAccessible.c)
 *     MiReservePageFileSpaceForPage @ 0x1403687E0 (MiReservePageFileSpaceForPage.c)
 *     MiInsertLargeUserMapping @ 0x14036ECE0 (MiInsertLargeUserMapping.c)
 *     MiInitializePfnForOtherProcess @ 0x140396C84 (MiInitializePfnForOtherProcess.c)
 *     MiAllocateKernelStackPages @ 0x14039F96C (MiAllocateKernelStackPages.c)
 *     MiFinishPageTableForLargePage @ 0x1403A7F88 (MiFinishPageTableForLargePage.c)
 *     MiInsertPhysicalPteMapping @ 0x1403CFC94 (MiInsertPhysicalPteMapping.c)
 *     MiInPagePageTable @ 0x1403F2FCC (MiInPagePageTable.c)
 *     MiSplitPrivatePage @ 0x1404051C4 (MiSplitPrivatePage.c)
 *     MiMakeHyperPteDemandZero @ 0x14045B0C0 (MiMakeHyperPteDemandZero.c)
 *     MiUpdateAwePageTable @ 0x140474584 (MiUpdateAwePageTable.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C119C (MiUpdatePrivateDemandZeroView.c)
 *     MiAddMappedPtesPadding @ 0x1404D0B44 (MiAddMappedPtesPadding.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D80F4 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404F0304 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404F25A8 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F8168 (MiMakeLargePageTable.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiCommitHotPatchTable @ 0x14067CF28 (MiCommitHotPatchTable.c)
 *     MmMapDriverTablePage @ 0x14067D94C (MmMapDriverTablePage.c)
 *     MiMapDummyPages @ 0x140C4FC6C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiIncreaseUsedPtes(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rbx
  int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // r8
  unsigned int v14; // r8d
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v18; // rdx

  v4 = *(_QWORD *)a2;
  v7 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v8 = *(_QWORD *)a2;
    if ( (v4 & 1) != 0 && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v18 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v18 & 0x20) != 0 )
            v8 = v4 | 0x20;
          v4 = v8 | 0x42;
          if ( (v18 & 0x42) == 0 )
            v4 = v8;
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v9) )
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
  if ( (a4 & 4) != 0 )
    *(_QWORD *)(v10 + 24) = (*(_QWORD *)(v10 + 24) + v7) ^ (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + v7)) & 0xC000000000000000uLL;
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v14;
}
