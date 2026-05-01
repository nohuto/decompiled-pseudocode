/*
 * XREFs of ??$MakeAndInitialize@VScreenManager@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VScreenManager@@@WRL@Microsoft@@@012@@Z @ 0x1802A89A4
 * Callers:
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A88F8 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ @ 0x18003C668 (-InternalAddRef@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18021CA1C (-InternalRelease@-$ComPtr@VScreenManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0ScreenManager@@QEAA@XZ @ 0x1802A5CC4 (--0ScreenManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ScreenManager,ScreenManager,>(volatile int **a1)
{
  unsigned int v2; // edi
  void *v3; // rax
  volatile int *v4; // rdx
  volatile int *v5; // r8
  ScreenManager *v7; // [rsp+30h] [rbp+8h] BYREF
  void *v8; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease(a1);
  v2 = 0;
  *a1 = 0LL;
  v3 = operator new(0x160uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v3;
  if ( v3 )
  {
    v7 = ScreenManager::ScreenManager((ScreenManager *)v3);
    v8 = 0LL;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalAddRef((__int64 *)&v7, v4);
    *a1 = v5;
    Microsoft::WRL::ComPtr<ScreenManager>::InternalRelease((volatile int **)&v7);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
