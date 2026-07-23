/*
 * XREFs of MiUnlockWorkingSetOptimal @ 0x14020A46C
 * Callers:
 *     MmSetAddressRangeModifiedEx @ 0x140208750 (MmSetAddressRangeModifiedEx.c)
 *     MiDirtyPte @ 0x1402092D4 (MiDirtyPte.c)
 *     MiObtainSystemCacheView @ 0x140209EE0 (MiObtainSystemCacheView.c)
 *     MiMakeSystemCachePteValid @ 0x14021C440 (MiMakeSystemCachePteValid.c)
 *     MmUnmapViewInSystemCache @ 0x1402572A0 (MmUnmapViewInSystemCache.c)
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x140353754 (MiReturnSystemCacheRegionsToKva.c)
 *     MmMapViewInSystemCache @ 0x140356F24 (MmMapViewInSystemCache.c)
 *     MiAddMappedPtes @ 0x140391F90 (MiAddMappedPtes.c)
 *     MiBuildForkPageTable @ 0x14049DFAC (MiBuildForkPageTable.c)
 *     MiFinishLastForkPageTable @ 0x1404A345C (MiFinishLastForkPageTable.c)
 *     MiAddMappedPtesPadding @ 0x1404C9B84 (MiAddMappedPtesPadding.c)
 *     MiInitializeDynamicBitmap @ 0x14067A698 (MiInitializeDynamicBitmap.c)
 *     MiMarkBootGuardPage @ 0x1406810CC (MiMarkBootGuardPage.c)
 *     MiMapDummyPages @ 0x140C51DFC (MiMapDummyPages.c)
 *     MiProtectSharedUserPage @ 0x140C522E4 (MiProtectSharedUserPage.c)
 *     MiInitializeBootShadowStackPage @ 0x140C592BC (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     ExReleaseSpinLockRegardlessFromDpcLevel @ 0x14020BE60 (ExReleaseSpinLockRegardlessFromDpcLevel.c)
 *     MiUnlockWorkingSetShared @ 0x140241CF0 (MiUnlockWorkingSetShared.c)
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
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
      _InterlockedAnd(&dword_140E2F1EC[(unsigned __int64)v10 >> 5], a2);
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
