/*
 * XREFs of ??$MakeAndInitialize@VCPPIAllUpViewController@@V1@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Details@WRL@Microsoft@@YAJPEAPEAVCPPIAllUpViewController@@AEAPEAUIWeakReference@WeakReference@@AEAPEAUIMultitaskingViewManagerInternal@@AEAPEAUIApplicationViewSwitcher@@AEAPEAUIImmersiveAppCrusher@@AEAPEAUITabletModeViewManager@@@Z @ 0x1804BEB84
 * Callers:
 *     ?CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingViewManagerInternal@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUITabletModeViewManager@@AEBU_GUID@@PEAPEAX@Z @ 0x1804BED2C (-CPPIAllUpViewController_CreateInstance@@YAJPEAUIWeakReference@WeakReference@@PEAUIMultitaskingV.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL@Microsoft@@QEAA@XZ @ 0x1804B87A8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCMultitaskingViewControllerBase@@@WRL.c)
 *     ?InternalRelease@?$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ @ 0x1804B8A84 (-InternalRelease@-$ComPtr@VCAltTabViewController@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPPIAllUpViewController,CPPIAllUpViewController,WeakReference::IWeakReference * &,IMultitaskingViewManagerInternal * &,IApplicationViewSwitcher * &,IImmersiveAppCrusher * &,ITabletModeViewManager * &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  unsigned int v7; // r15d
  void *v10; // rax
  __int64 *v11; // r12
  __int64 *v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  volatile int *v19; // rdx
  __int64 *v21; // [rsp+20h] [rbp-48h] BYREF
  void *v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v23; // [rsp+78h] [rbp+10h]

  v23 = a2;
  v7 = 0;
  *a1 = 0LL;
  v10 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v10;
  v11 = (__int64 *)v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>((CMultitaskingViewControllerBase *)v10);
    v12 = v23;
    *v11 = (__int64)&CPPIAllUpViewController::`vftable'{for `IMultitaskingViewController'};
    v21 = v11;
    v11[1] = (__int64)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewControllerBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IFrameInteractionEvents,ISwitchItemController,IDismissAnimationController>'};
    v11[2] = (__int64)&CPPIAllUpViewController::`vftable'{for `ISwitchItemController'};
    v11[3] = (__int64)&CPPIAllUpViewController::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDismissAnimationController>'};
    v13 = a6;
    v11[15] = 0LL;
    v14 = *v12;
    v15 = *a4;
    v16 = *v13;
    v17 = *a3;
    v22 = 0LL;
    v18 = *a5;
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11 + 5, v14);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11 + 6, v15);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11 + 7, v18);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11 + 15, v17);
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11 + 8, v16);
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v11 + 116), v19);
    *a1 = v11;
    Microsoft::WRL::ComPtr<CAltTabViewController>::InternalRelease((__int64 *)&v21);
  }
  else
  {
    v7 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v22);
  return v7;
}
