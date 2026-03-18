/*
 * XREFs of MiIncreaseUsedPtes @ 0x1403837D0
 * Callers:
 *     MiAllocateKernelStackPages @ 0x1402282B8 (MiAllocateKernelStackPages.c)
 *     MiLinkPoolCommitChain @ 0x140238250 (MiLinkPoolCommitChain.c)
 *     MiMakeHyperRangeAccessible @ 0x1402B94E0 (MiMakeHyperRangeAccessible.c)
 *     MiInitializePfnForOtherProcess @ 0x1402D0D28 (MiInitializePfnForOtherProcess.c)
 *     MiAddMappedPtes @ 0x140323A90 (MiAddMappedPtes.c)
 *     MiInsertPhysicalPteMapping @ 0x140338440 (MiInsertPhysicalPteMapping.c)
 *     MiSetProtectionOnSection @ 0x14037E180 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14037F8B0 (MiProtectPrivateMemory.c)
 *     MiDecommitPages @ 0x140381AE0 (MiDecommitPages.c)
 *     MiCommitExistingVad @ 0x1403840D0 (MiCommitExistingVad.c)
 *     MiInsertLargeUserMapping @ 0x140384EB8 (MiInsertLargeUserMapping.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MiInPagePageTable @ 0x1403EBC5C (MiInPagePageTable.c)
 *     MiReservePageFileSpaceForPage @ 0x1403FAC48 (MiReservePageFileSpaceForPage.c)
 *     MiUpdateAwePageTable @ 0x1403FD730 (MiUpdateAwePageTable.c)
 *     MiMakeHyperPteDemandZero @ 0x14045BD40 (MiMakeHyperPteDemandZero.c)
 *     MiCompleteRestrictedImageFault @ 0x140464CC4 (MiCompleteRestrictedImageFault.c)
 *     MiSplitPrivatePage @ 0x1404672C0 (MiSplitPrivatePage.c)
 *     MiUpdatePrivateDemandZeroView @ 0x1404C29AC (MiUpdatePrivateDemandZeroView.c)
 *     MiFinishPageTableForLargePage @ 0x1404C998C (MiFinishPageTableForLargePage.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D9074 (MiMakeSystemLeavesNonZero.c)
 *     MiMapMdlCommon @ 0x1404ECDC4 (MiMapMdlCommon.c)
 *     MiMapKernelScp @ 0x1404EE5D8 (MiMapKernelScp.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 *     MiAddMappedPtesPadding @ 0x14066B030 (MiAddMappedPtesPadding.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiCommitHotPatchTable @ 0x140671714 (MiCommitHotPatchTable.c)
 *     MmMapDriverTablePage @ 0x14067213C (MmMapDriverTablePage.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall MiIncreaseUsedPtes(__int64 a1, unsigned __int64 a2, unsigned int a3, char a4)
{
  unsigned __int64 v4; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  int v9; // esi
  int v10; // edi
  __int64 v11; // r8
  unsigned int v12; // r8d
  __int64 v14; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // rdx
  __int64 v17; // rdx

  v4 = *(_QWORD *)a2;
  v7 = a3;
  if ( a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    v14 = *(_QWORD *)a2;
    if ( (v4 & 1) != 0 && ((v4 & 0x42) == 0 || (v4 & 0x20) == 0) && (MiFlags & 0x600000) != 0 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process->AddressPolicy != 1 )
      {
        KernelWaitTime = Process[2].KernelWaitTime;
        if ( KernelWaitTime )
        {
          v17 = *(_QWORD *)(KernelWaitTime + 8 * ((a2 >> 3) & 0x1FF));
          if ( (v17 & 0x20) != 0 )
            v14 = v4 | 0x20;
          v4 = v14 | 0x42;
          if ( (v17 & 0x42) == 0 )
            v4 = v14;
        }
      }
    }
  }
  v8 = 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v9 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    v10 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait();
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v8 + 24) < 0 );
    }
  }
  if ( (*(_DWORD *)(v8 + 36) & 0x4000000) != 0 )
    v11 = HIDWORD(*(_QWORD *)v8);
  else
    v11 = *(_QWORD *)(v8 + 16) >> 16;
  v12 = v7 + (v11 & 0x3FF);
  if ( (*(_DWORD *)(v8 + 36) & 0x4000000) != 0 )
    *(_QWORD *)v8 = ((unsigned __int64)v12 << 32) ^ (*(_QWORD *)v8 ^ ((unsigned __int64)v12 << 32)) & 0xFFFFFC00FFFFFFFFuLL;
  else
    *(_QWORD *)(v8 + 16) = ((unsigned __int64)v12 << 16) ^ (*(_QWORD *)(v8 + 16) ^ ((unsigned __int64)v12 << 16)) & 0xFFFFFFFFFC00FFFFuLL;
  if ( (a4 & 4) != 0 )
    *(_QWORD *)(v8 + 24) = (*(_QWORD *)(v8 + 24) + v7) ^ (*(_QWORD *)(v8 + 24) ^ (*(_QWORD *)(v8 + 24) + v7)) & 0xC000000000000000uLL;
  if ( !v9 )
    _InterlockedAnd64((volatile signed __int64 *)(v8 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return v12;
}
