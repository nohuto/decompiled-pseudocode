/*
 * XREFs of MiUnlockWorkingSetOptimal @ 0x14024231C
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x140240600 (MmSetAddressRangeModifiedEx.c)
 *     MiDirtyPte @ 0x140241184 (MiDirtyPte.c)
 *     MiObtainSystemCacheView @ 0x140241D90 (MiObtainSystemCacheView.c)
 *     MiAddMappedPtes @ 0x140243C60 (MiAddMappedPtes.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402D24DC (MiReturnSystemCacheRegionsToKva.c)
 *     MmMapViewInSystemCache @ 0x1402D5CA4 (MmMapViewInSystemCache.c)
 *     MmUnmapViewInSystemCache @ 0x1402F1760 (MmUnmapViewInSystemCache.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     MiMakeSystemCachePteValid @ 0x14046F7A8 (MiMakeSystemCachePteValid.c)
 *     MiBuildForkPageTable @ 0x1404A304C (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1404A903C (MiFinishLastForkPageTable.c)
 *     MiAddMappedPtesPadding @ 0x1404D0B44 (MiAddMappedPtesPadding.c)
 *     MiInitializeDynamicBitmap @ 0x1406794B8 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x14067FECC (MiMarkBootGuardPage.c)
 *     MiMapDummyPages @ 0x140C4FC6C (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C50154 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C5712C (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x1402E2460 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 */

__int64 __fastcall MiUnlockWorkingSetOptimal(__int64 a1, unsigned __int64 a2, char a3)
{
  struct _KPRCB *CurrentPrcb; // rcx
  char v7; // al
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned int v10; // r8d

  if ( a2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *(_DWORD *)(a1 + 184) & 0xF;
    if ( v7 )
    {
      if ( v7 == 7 )
        v8 = 24LL;
      else
        v8 = v7 != 5 ? 0x48 : 0;
    }
    else
    {
      v8 = 48LL;
    }
    KxReleaseQueuedSpinLock((char *)CurrentPrcb->SelfmapLockHandle + v8);
  }
  else if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
         || a2 < 0xFFFFF6FB7DBED000uLL
         || a2 > 0xFFFFF6FB7DBEDFFFuLL
         || (v9 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[5].StaticBitmap[7]) == 0 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0 && a2 >= 0xFFFFF6FB7DBED000uLL && a2 <= 0xFFFFF6FB7DBEDFFFuLL )
    {
      v10 = 2 * ((__int64)(a2 + 0x90482413000LL) >> 3);
      a2 = (unsigned int)~(2 << ((2 * ((__int64)(a2 + 0x90482413000LL) >> 3)) & 0x1F));
      LODWORD(a2) = a2 & ~(1 << (v10 & 0x1F));
      _InterlockedAnd(&dword_140E2F0AC[(unsigned __int64)v10 >> 5], a2);
    }
    else
    {
      _InterlockedAnd64((volatile signed __int64 *)a2, 0xCFFFFFFFFFFFFFFFuLL);
    }
  }
  else
  {
    ExReleaseSpinLockRegardlessFromDpcLevel(v9 + 4 * ((a2 >> 3) & 0x1FF));
  }
  LOBYTE(a2) = a3;
  return MiUnlockWorkingSetShared(a1, a2);
}
