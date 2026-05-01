/*
 * XREFs of ??1?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@QEAA@XZ @ 0x1804AE7FC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_MultitaskingData_MultitaskingData_IApplicationViewCollection___&_IApplicationViewVisibilityDebouncedNotificationService___&_IVirtualDesktopThumbnailWindowFilter___&_IVirtualDesktopManagerInternal___&_IVirtualDesktopPinnedApps___&_IVirtualDesktopNotificationService___&_IImmersiveSettingsCache___&_ISnapServiceProvider___&_IApplicationViewIconLoader___&_enum_SwitchItemFilterBehavior_&__::_1_::dtor$1 @ 0x1806EF9AA (_Microsoft--WRL--Details--MakeAndInitialize_MultitaskingData_MultitaskingData_IApplicationViewCo.c)
 *     _MultitaskingData_CreateInstance_::_1_::dtor$0 @ 0x1806EF9BC (_MultitaskingData_CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<MultitaskingData>::~ComPtr<MultitaskingData>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease(a1);
}
