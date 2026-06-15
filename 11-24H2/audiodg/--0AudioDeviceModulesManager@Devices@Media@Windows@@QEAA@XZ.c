/*
 * XREFs of ??0AudioDeviceModulesManager@Devices@Media@Windows@@QEAA@XZ @ 0x14001A8A4
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManager@234@PEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceModulesManager@Devices@Media@Windows@@$$QEAPEAX@Z @ 0x14001A7DC (--$MakeAndInitialize@VAudioDeviceModulesManager@Devices@Media@Windows@@UIAudioDeviceModulesManag.c)
 * Callees:
 *     ??0?$RuntimeClass@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x14001AAE4 (--0-$RuntimeClass@UIAudioDeviceModulesManager@Devices@Media@Windows@@VFtmBase@WRL@Microsoft@@@WR.c)
 */

RTL_SRWLOCK *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::AudioDeviceModulesManager(
        RTL_SRWLOCK *this)
{
  Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>::RuntimeClass<Windows::Media::Devices::IAudioDeviceModulesManager,Microsoft::WRL::FtmBase>();
  this->Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable';
  this[1].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &Windows::Media::Devices::AudioDeviceModulesManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[8].Ptr = 0LL;
  this[9].Ptr = 0LL;
  this[10].Ptr = 0LL;
  InitializeSRWLock(this + 11);
  InitializeSRWLock(this + 12);
  this[13].Ptr = 0LL;
  this[14].Ptr = 0LL;
  this[15].Ptr = 0LL;
  LOBYTE(this[16].Ptr) = 0;
  return this;
}
