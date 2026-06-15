/*
 * XREFs of ??1AudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAA@XZ @ 0x140076DE4
 * Callers:
 *     ??_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x140077510 (--_GAudioDeviceBrokerChangedEventArgs@Internal@Devices@Media@Windows@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 */

void __fastcall Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::~AudioDeviceBrokerChangedEventArgs(
        Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *this)
{
  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)this + 8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>((__int64)this);
}
