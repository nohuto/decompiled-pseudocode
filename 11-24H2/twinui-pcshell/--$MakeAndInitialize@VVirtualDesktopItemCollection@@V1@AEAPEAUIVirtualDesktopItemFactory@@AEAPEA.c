/*
 * XREFs of ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B3CA0
 * Callers:
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x1804B45F8 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDes.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0VirtualDesktopItemCollection@@QEAA@XZ @ 0x1804B3D84 (--0VirtualDesktopItemCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B4174 (-InternalRelease@-$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@@Z @ 0x1804B42C4 (-RuntimeClassInitialize@VirtualDesktopItemCollection@@QEAAJPEAUIVirtualDesktopItemFactory@@PEAUI.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualDesktopItemCollection,VirtualDesktopItemCollection,IVirtualDesktopItemFactory * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopNotificationService * &>(
        VirtualDesktopItemCollection **a1,
        struct IVirtualDesktopItemFactory **a2,
        struct IVirtualDesktopManagerInternal **a3,
        struct IVirtualDesktopNotificationService **a4)
{
  void *v8; // rax
  int v9; // edi
  VirtualDesktopItemCollection *v10; // rbx
  volatile int *v11; // rdx
  void *v13; // [rsp+20h] [rbp-28h] BYREF
  VirtualDesktopItemCollection *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = operator new(0xC0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = v8;
  v14 = (VirtualDesktopItemCollection *)v8;
  if ( v8 )
  {
    v10 = VirtualDesktopItemCollection::VirtualDesktopItemCollection((VirtualDesktopItemCollection *)v8);
    v14 = v10;
    v13 = 0LL;
    v9 = VirtualDesktopItemCollection::RuntimeClassInitialize(v10, *a2, *a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        Microsoft::WRL::Details::SafeUnknownIncrementReference((VirtualDesktopItemCollection *)((char *)v10 + 156), v11);
      *a1 = v10;
      Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v14);
      v9 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(&v14);
    }
  }
  else
  {
    v9 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
  return (unsigned int)v9;
}
