/*
 * XREFs of _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$8 @ 0x14009503D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::AudioDeviceModuleNotificationEventArgs,wil::err_returncode_policy>((_QWORD *)(a2 + 112));
}
