/*
 * XREFs of ?load@?$_Atomic_storage@W4PreloadPreference@KeyboardHosting@@$03@std@@QEBA?AW4PreloadPreference@KeyboardHosting@@W4memory_order@2@@Z @ 0x1802DDF1C
 * Callers:
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18007E590 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180080818 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ??$HandleInputModalityInfoChanged@AEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Windows@@@std@@AEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x180082F28 (--$HandleInputModalityInfoChanged@AEAU-$atomic@W4CoreKeyboardModality@Core@Text@Internal@UI@Wind.c)
 *     ?CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA?AW4TapInvokeSettingValue@TouchKeyboard@Shell@Internal@Windows@winrt@@XZ @ 0x180112DBC (-CalculateEffectiveSetting@TouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@AEBA-AW4TapInv.c)
 *     WINRT_CanUnloadNow @ 0x180170598 (WINRT_CanUnloadNow.c)
 *     ?IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x1801C3334 (-IsPreloadEnabledByIme@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 *     ?IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ @ 0x18022EA70 (-IsPreloadEnabled@InputAppPreloader@KeyboardHosting@@AEAA_NXZ.c)
 *     ?GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z @ 0x18034F9A0 (-GetFramesPerSecondInstantaneous@GamingOverlayExperienceManager@@UEAAJKPEAH@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18046FD10 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z @ 0x1804731F8 (-OnSizeOrModeChangeStoryboardCompleted@TouchKeyboardExperienceManager@@QEAAXW4AnimationType@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180474600 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 *     ?get_EffectiveSetting@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAH@Z @ 0x1804795E0 (-get_EffectiveSetting@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInv.c)
 *     ?get_EffectiveSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180479620 (-get_EffectiveSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITa.c)
 *     ?get_IsManagedByOrganization@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeSetting@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEA_N@Z @ 0x180479690 (-get_IsManagedByOrganization@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U.c)
 *     ?get_OrganizationSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804796D0 (-get_OrganizationSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@U.c)
 *     ?get_UserSettingData@?$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvokeTelemetryDataProvider@TouchKeyboard@Shell@Internal@Windows@winrt@@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180479890 (-get_UserSettingData@-$produce@UTouchKeyboardTapInvokeSetting@Keyboard@SystemSettings@@UITapInvo.c)
 *     ?HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x1804861C0 (-HandleInputPaneTryHide@TabTipAdapterPolicy@KeyboardHosting@@UEAAJIPEAW4ShellRequestType@Text@Sh.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Atomic_storage<enum KeyboardHosting::PreloadPreference,4>::load(unsigned int *a1)
{
  return *a1;
}
