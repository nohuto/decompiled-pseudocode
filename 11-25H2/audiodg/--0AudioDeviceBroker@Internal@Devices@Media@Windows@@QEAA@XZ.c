/*
 * XREFs of ??0AudioDeviceBroker@Internal@Devices@Media@Windows@@QEAA@XZ @ 0x14001AFDC
 * Callers:
 *     ??$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIAudioDeviceBroker@Internal@Devices@Media@Windows@@AEAPEAX@Z @ 0x14001AD44 (--$MakeAndInitialize@VAudioDeviceBroker@Internal@Devices@Media@Windows@@UIAudioDeviceBroker@2345.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UIAudioDeviceBroker@Internal@Devices@Media@Windows@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x14001B048 (--0-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UIAudioDeviceBroker@Internal@Devices@M.c)
 */

RTL_SRWLOCK *__fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::AudioDeviceBroker(RTL_SRWLOCK *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>();
  this->Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  this[1].Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  this[2].Ptr = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  this[8].Ptr = 0LL;
  this[9].Ptr = 0LL;
  this[10].Ptr = 0LL;
  InitializeSRWLock(this + 11);
  InitializeSRWLock(this + 12);
  return this;
}
