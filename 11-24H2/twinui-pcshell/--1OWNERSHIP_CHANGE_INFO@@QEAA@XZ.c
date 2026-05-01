/*
 * XREFs of ??1OWNERSHIP_CHANGE_INFO@@QEAA@XZ @ 0x18022C070
 * Callers:
 *     _CApplicationManager::_HandleWindowBecameOwned_::_1_::dtor$0 @ 0x1806CE6E5 (_CApplicationManager--_HandleWindowBecameOwned_--_1_--dtor$0.c)
 *     _CImmersiveWindowManager::Set_::_1_::dtor$1 @ 0x1806CE71B (_CImmersiveWindowManager--Set_--_1_--dtor$1.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x1806D130B (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 *     _UwpWindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$29 @ 0x1806D131D (_UwpWindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$29.c)
 *     _CApplicationManager::_HandleWindowChangedOwner_::_1_::dtor$0 @ 0x1806D9405 (_CApplicationManager--_HandleWindowChangedOwner_--_1_--dtor$0.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$3 @ 0x1806D9CBC (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$3.c)
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$4 @ 0x1806D9CCE (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$4.c)
 *     _CApplicationManager::GetRunningApplicationsFromPackageId_::_1_::dtor$2 @ 0x1806DF208 (_CApplicationManager--GetRunningApplicationsFromPackageId_--_1_--dtor$2.c)
 *     _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$0 @ 0x1806E854C (_UwpWindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$0.c)
 *     _UwpWindowingEnvironmentSettings::AddWindowingEnvironmentSettings_::_1_::dtor$1 @ 0x1806E855E (_UwpWindowingEnvironmentSettings--AddWindowingEnvironmentSettings_--_1_--dtor$1.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$27 @ 0x1806E898F (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$27.c)
 *     _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::dtor$28 @ 0x1806E89A1 (_WindowEventDispatcher--ApplyWindowingEnvironmentSettingsRequested_--_1_--dtor$28.c)
 * Callees:
 *     <none>
 */

void __fastcall OWNERSHIP_CHANGE_INFO::~OWNERSHIP_CHANGE_INFO(OWNERSHIP_CHANGE_INFO *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 2);
}
