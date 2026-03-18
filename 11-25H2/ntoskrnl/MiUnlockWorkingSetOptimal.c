/*
 * XREFs of MiUnlockWorkingSetOptimal @ 0x1402C04C8
 * Callers:
 *     MiMakeSystemCachePteValid @ 0x140225760 (MiMakeSystemCachePteValid.c)
 *     MmUnmapViewInSystemCache @ 0x14023D300 (MmUnmapViewInSystemCache.c)
 *     MiObtainSystemCacheView @ 0x1402C0010 (MiObtainSystemCacheView.c)
 *     MmSetAddressRangeModifiedEx @ 0x1402C18C0 (MmSetAddressRangeModifiedEx.c)
 *     MiBuildForkPageTable @ 0x1402D13B0 (MiBuildForkPageTable.c)
 *     MiAddMappedPtes @ 0x140323A90 (MiAddMappedPtes.c)
 *     MiExpandSystemCache @ 0x1403903C8 (MiExpandSystemCache.c)
 *     MmMapViewInSystemCache @ 0x1403B44EC (MmMapViewInSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403B6388 (MiReturnSystemCacheRegionsToKva.c)
 *     MiDirtyPte @ 0x1404516E0 (MiDirtyPte.c)
 *     MiFinishLastForkPageTable @ 0x1404AEE2C (MiFinishLastForkPageTable.c)
 *     MiAddMappedPtesPadding @ 0x14066B030 (MiAddMappedPtesPadding.c)
 *     MiInitializeDynamicBitmap @ 0x14066DC0C (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x1406746AC (MiMarkBootGuardPage.c)
 *     MiMapDummyPages @ 0x140C3EA3C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C3EF24 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C45E4C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x1402B9D50 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402BBC90 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 */

char __fastcall MiUnlockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  char v8; // al
  __int64 v9; // rax

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v8 )
    {
      if ( v8 == 7 )
        v9 = 24LL;
      else
        v9 = v8 != 5 ? 0x48 : 0;
    }
    else
    {
      v9 = 48LL;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)CurrentPrcb->SelfmapLockHandle + v9));
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v6 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
      _InterlockedAnd(
        &dword_140E2EE6C[(unsigned __int64)(2 * (unsigned int)((__int64)(a2 + 0x90482413000LL) >> 3)) >> 5],
        ~(2 << ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F)) & ~(1 << ((2
                                                                               * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F)));
    else
      _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel((volatile signed __int32 *)(v6 + 4 * ((a2 >> 3) & 0x1FF)));
  }
  return MiUnlockWorkingSetShared(a1, a3);
}
