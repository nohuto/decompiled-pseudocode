/*
 * XREFs of ?Reactivate@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@1@Z @ 0x18003E8B0
 * Callers:
 *     ?RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800B4688 (-RaisePropertyChangedEvent@CToastCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z @ 0x1800E6568 (-RaiseHideExperienceRequestedEvent@CActionCenterExperienceManager@@AEAAJ_N@Z.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1801220A8 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x1801228CC (-RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z.c)
 *     ?OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180165430 (-OnViewHidden@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x18020EC28 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z @ 0x18036F630 (-RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z.c)
 *     ?RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z @ 0x180376150 (-RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z.c)
 *     ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x18038C4A0 (-FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x18038D150 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x180391780 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z @ 0x180391D00 (-ReactivateForDrag@CStartExperienceManager@@UEAAJ_K00@Z.c)
 *     ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z @ 0x180391EF0 (-ReactivateHelper@CStartExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180395A50 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ @ 0x18039EA58 (-HideInternal@CVirtualTouchpadExperienceManager@@AEAAJXZ.c)
 *     ?Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@@Z @ 0x1803A08E4 (-Uncloack@CVirtualTouchpadExperienceManager@@AEAAJAEAVTouchpadLaunched@TouchpadControllerExperie.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1803A45F4 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?OnViewHidden@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4D00 (-OnViewHidden@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OnViewShown@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1803C4DD0 (-OnViewShown@CNetworkExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C5C70 (-NotifyView@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections.c)
 * Callees:
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003E8E4 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 */

__int64 __fastcall CSingleViewShellExperience::Reactivate(
        CSingleViewShellExperience *this,
        HSTRING a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  struct Windows::Foundation::Collections::IPropertySet *v5; // [rsp+30h] [rbp-18h]
  struct Windows::Foundation::Collections::IPropertySet *v6; // [rsp+38h] [rbp-10h]

  return ExperienceManagerUtils::RaiseReactivatedEvent(
           *((ExperienceManagerUtils **)this + 3),
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 32),
           *((_QWORD *)this + 1),
           *((HSTRING *)this + 2),
           a2,
           (HSTRING)a3,
           v5,
           v6);
}
