/*
 * XREFs of ?GetRuntimeClassName@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x140079B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::GetRuntimeClassName(
        Windows::Media::Devices::Internal::AudioDeviceBrokerDevice *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Windows.Media.Devices.Internal.AudioDeviceBrokerDevice", 0x36u, a2);
}
