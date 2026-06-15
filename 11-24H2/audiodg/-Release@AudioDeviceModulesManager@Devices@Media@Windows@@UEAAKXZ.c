/*
 * XREFs of ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x14004DDD0
 * Callers:
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ @ 0x14007C8C0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@W7EAAKXZ.c)
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ @ 0x14007C8D0 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::Release(this);
}
