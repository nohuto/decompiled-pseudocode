/*
 * XREFs of ??1AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAA@XZ @ 0x14003A74C
 * Callers:
 *     ??_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z @ 0x14003A710 (--_EAudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEAVAudioDeviceBrokerChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x14001AB54 (--1-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceBroker@Internal@Devices@Media@Windows@@PEA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Media::Devices::Internal::AudioDeviceBroker::~AudioDeviceBroker(
        Windows::Media::Devices::Internal::AudioDeviceBroker *this)
{
  __int64 *v2; // r14
  __int64 v3; // rcx
  __int64 *v4; // rdi
  unsigned int i; // esi
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // [rsp+50h] [rbp+30h] BYREF
  int v9; // [rsp+58h] [rbp+38h] BYREF
  __int64 v10; // [rsp+60h] [rbp+40h] BYREF
  __int64 v11; // [rsp+68h] [rbp+48h] BYREF

  *(_QWORD *)this = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable';
  *((_QWORD *)this + 1) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::Internal::AudioDeviceBroker::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (__int64 *)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
  {
    v8 = 0;
    v9 = 0;
    (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 56LL))(v3, &v8);
    v4 = (__int64 *)((char *)this + 72);
    (*(void (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 9) + 56LL))(*((_QWORD *)this + 9), &v9);
    for ( i = 0; i < v8; ++i )
    {
      v6 = (_QWORD *)*v2;
      v7 = *(_QWORD *)*v2;
      v10 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD *, _QWORD, __int64 *))(v7 + 48))(v6, i, &v10) >= 0 )
      {
        v11 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v4 + 48LL))(*v4, i, &v11) >= 0 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 72LL))(v10, v11);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v4 = (__int64 *)((char *)this + 72);
  }
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::~EventSource<Windows::Foundation::ITypedEventHandler<Windows::Media::Devices::Internal::AudioDeviceBroker *,Windows::Media::Devices::Internal::AudioDeviceBrokerChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>((__int64 *)this + 10);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v4);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(v2);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Media::Devices::Internal::IAudioDeviceBroker,Microsoft::WRL::FtmBase>((__int64)this);
}
