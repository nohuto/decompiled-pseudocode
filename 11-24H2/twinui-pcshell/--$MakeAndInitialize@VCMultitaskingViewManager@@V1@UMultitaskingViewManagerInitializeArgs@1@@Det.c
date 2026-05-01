/*
 * XREFs of ??$MakeAndInitialize@VCMultitaskingViewManager@@V1@UMultitaskingViewManagerInitializeArgs@1@@Details@WRL@Microsoft@@YAJPEAPEAVCMultitaskingViewManager@@$$QEAUMultitaskingViewManagerInitializeArgs@3@@Z @ 0x1801A681C
 * Callers:
 *     ?CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUITabletModeController@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewVisibilityServiceInternal@@PEAUIMultitaskingViewGestureState@@PEAUIImmersiveSettingsCache@@PEAUITabletModeViewManager@@PEAUIShellTargetingContractManager@@PEAUISnapServiceProvider@@PEAUISnapAssistSwitchItemRelevanceProvider@@PEAUIApplicationViewIconLoader@@PEAUIInspectable@@PEAUIInspectable@@PEAUIImmersiveMonitorManager@@PEAUITouchGestureSettings@@PEAUIImmersiveShellHookService@@PEAUIWindowTabExtension@Shell@UI@Internal@Windows@@PEAUIRemoteSessionWindowManager@Shell@Internal@Windows@@AEBU_GUID@@PEAPEAX@Z @ 0x1801A6664 (-CMultitaskingViewManager_CreateInstance@@YAJPEAUIMultitaskingViewServiceProvider@@PEAUIApplicat.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003C230 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingViewManager@@UIMultitaskingViewManagerInternal@@UIMultitaskingViewDismissCallback@@UIMultitaskingViewForegroundStaging@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180099410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMultitaskingVie.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs@1@@Z @ 0x1801A68D8 (-RuntimeClassInitialize@CMultitaskingViewManager@@QEAAJAEBUMultitaskingViewManagerInitializeArgs.c)
 *     ?InternalRelease@?$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1802B1F10 (-InternalRelease@-$ComPtr@VCMultitaskingViewManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CMultitaskingViewManager@@QEAA@XZ @ 0x1804A2424 (--0CMultitaskingViewManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CMultitaskingViewManager,CMultitaskingViewManager,CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs>(
        CMultitaskingViewManager **a1,
        const struct CMultitaskingViewManager::MultitaskingViewManagerInitializeArgs *a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  CMultitaskingViewManager *v6; // rdi
  volatile int *v7; // rdx
  int v8; // esi
  void *v10; // [rsp+40h] [rbp+8h] BYREF
  CMultitaskingViewManager *v11; // [rsp+50h] [rbp+18h] BYREF
  void *v12; // [rsp+58h] [rbp+20h]

  v4 = 0;
  *a1 = 0LL;
  v5 = operator new(0x1E8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  v11 = (CMultitaskingViewManager *)v5;
  if ( !v5 )
  {
    v4 = -2147024882;
LABEL_10:
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
    return v4;
  }
  v12 = v5;
  v6 = CMultitaskingViewManager::CMultitaskingViewManager((CMultitaskingViewManager *)v5);
  v11 = v6;
  v10 = 0LL;
  v8 = CMultitaskingViewManager::RuntimeClassInitialize(v6, a2);
  if ( v8 >= 0 )
  {
    if ( v6 )
      Microsoft::WRL::Details::SafeUnknownIncrementReference((CMultitaskingViewManager *)((char *)v6 + 36), v7);
    *a1 = v6;
    Microsoft::WRL::ComPtr<CMultitaskingViewManager>::InternalRelease(&v11);
    goto LABEL_10;
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMultitaskingViewManager,IMultitaskingViewManagerInternal,IMultitaskingViewDismissCallback,IMultitaskingViewForegroundStaging>::Release(
      (__int64)v6,
      v7);
  return (unsigned int)v8;
}
