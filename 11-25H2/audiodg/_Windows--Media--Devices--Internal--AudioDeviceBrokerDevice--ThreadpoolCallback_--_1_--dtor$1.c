/*
 * XREFs of _Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback_::_1_::dtor$1 @ 0x1400951DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::ThreadpoolCallback_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>::~com_ptr_t<Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs,wil::err_returncode_policy>((_QWORD *)(a2 + 48));
}
