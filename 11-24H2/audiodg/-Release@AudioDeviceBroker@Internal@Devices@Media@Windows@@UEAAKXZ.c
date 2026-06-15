/*
 * XREFs of ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAKXZ @ 0x14004DDC0
 * Callers:
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ @ 0x14007C7F0 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14007C800 (-Release@AudioDeviceBroker@Internal@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::Release(this);
}
