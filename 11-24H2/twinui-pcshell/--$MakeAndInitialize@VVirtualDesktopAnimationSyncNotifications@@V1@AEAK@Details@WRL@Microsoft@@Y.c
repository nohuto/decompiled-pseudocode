/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopAnimationSyncNotifications@@V1@AEAK@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VVirtualDesktopAnimationSyncNotifications@@@WRL@Microsoft@@@012@AEAK@Z @ 0x1802A14C8
 * Callers:
 *     ?VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1802A1418 (-VirtualDesktopAnimationSyncNotifications_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x180098E7C (-InternalRelease@-$ComPtr@VCPrivilegedForegroundOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ @ 0x18029D378 (--0VirtualDesktopAnimationSyncNotifications@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopAnimationSyncNotifications,VirtualDesktopAnimationSyncNotifications,unsigned long &>(
        __int64 *a1,
        int *a2)
{
  unsigned int v4; // edi
  void *v5; // rax
  VirtualDesktopAnimationSyncNotifications *v6; // rax
  int v7; // ecx
  volatile int *v8; // rdx
  __int64 v9; // r8
  void *v11; // [rsp+30h] [rbp+8h] BYREF
  VirtualDesktopAnimationSyncNotifications *v12; // [rsp+38h] [rbp+10h] BYREF

  Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease(a1);
  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v5;
  if ( v5 )
  {
    v6 = VirtualDesktopAnimationSyncNotifications::VirtualDesktopAnimationSyncNotifications((VirtualDesktopAnimationSyncNotifications *)v5);
    v7 = *a2;
    v12 = v6;
    v11 = 0LL;
    *((_DWORD *)v6 + 22) = v7;
    Microsoft::WRL::Details::SafeUnknownIncrementReference(
      (VirtualDesktopAnimationSyncNotifications *)((char *)v6 + 44),
      v8);
    *a1 = v9;
    Microsoft::WRL::ComPtr<CPrivilegedForegroundOperations>::InternalRelease((__int64 *)&v12);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
