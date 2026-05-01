/*
 * XREFs of ??$MakeAndInitialize@VCVirtualDesktopCollection@@V1@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualDesktopCollection@@AEAPEAUIVirtualDesktopFactory@@AEAPEAUIVirtualDesktopPersistence@@AEA_N@Z @ 0x1801AF45C
 * Callers:
 *     ?CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_NAEBU_GUID@@PEAPEAX@Z @ 0x180097A08 (-CVirtualDesktopCollection_CreateInstance@@YAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPer.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801AF524 (-InternalRelease@-$ComPtr@VCVirtualDesktopVisibilityPolicy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopCollection@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801AF550 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIVirtualDesktopC.c)
 *     ?RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtualDesktopPersistence@@_N@Z @ 0x1801AF5AC (-RuntimeClassInitialize@CVirtualDesktopCollection@@QEAAJPEAUIVirtualDesktopFactory@@PEAUIVirtual.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CVirtualDesktopCollection@@QEAA@XZ @ 0x18054F13C (--0CVirtualDesktopCollection@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CVirtualDesktopCollection,CVirtualDesktopCollection,IVirtualDesktopFactory * &,IVirtualDesktopPersistence * &,bool &>(
        CVirtualDesktopCollection **a1,
        struct IVirtualDesktopFactory **a2,
        struct IVirtualDesktopPersistence **a3,
        bool *a4)
{
  CVirtualDesktopCollection *v8; // rax
  CVirtualDesktopCollection *v10; // rbx
  volatile int *v11; // rdx
  int v12; // esi
  void *v13; // [rsp+20h] [rbp-28h] BYREF
  CVirtualDesktopCollection *v14; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (CVirtualDesktopCollection *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v14 = v8;
  if ( !v8 )
    return 2147942414LL;
  v10 = CVirtualDesktopCollection::CVirtualDesktopCollection(v8);
  v14 = v10;
  v13 = 0LL;
  v12 = CVirtualDesktopCollection::RuntimeClassInitialize(v10, *a2, *a3, *a4);
  if ( v12 >= 0 )
  {
    if ( v10 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CVirtualDesktopCollection *)((char *)v10 + 12), v11);
    *a1 = v10;
    if ( v10 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IVirtualDesktopCollection>::Release(v10);
    return 0LL;
  }
  else
  {
    Microsoft::WRL::ComPtr<CVirtualDesktopVisibilityPolicy>::InternalRelease(&v14);
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v13);
    return (unsigned int)v12;
  }
}
