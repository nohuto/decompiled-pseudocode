/*
 * XREFs of ?Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14004D3E0
 * Callers:
 *     ?Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14007C840 (-Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14007C850 (-Release@AudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerDevice::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice,Microsoft::WRL::FtmBase>::Release(this);
}
