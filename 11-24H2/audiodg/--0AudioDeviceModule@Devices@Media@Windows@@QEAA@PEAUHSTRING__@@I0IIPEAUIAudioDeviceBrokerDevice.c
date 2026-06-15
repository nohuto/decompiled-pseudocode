/*
 * XREFs of ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBrokerDevice@Internal@123@@Z @ 0x140076780
 * Callers:
 *     ??$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDeviceBrokerDevice@Internal@234@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VAudioDeviceModule@Devices@Media@Windows@@@12@$$QEAPEAUHSTRING__@@AEAK011$$QEAPEAVAudioDeviceBrokerDevice@Internal@Devices@Media@Windows@@@Z @ 0x140076050 (--$Make@VAudioDeviceModule@Devices@Media@Windows@@PEAUHSTRING__@@AEAKPEAU5@AEAKAEAKPEAVAudioDevi.c)
 * Callees:
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140018FCC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14001A6E4 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x14007D3A0 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
Windows::Media::Devices::AudioDeviceModule *__fastcall Windows::Media::Devices::AudioDeviceModule::AudioDeviceModule(
        Windows::Media::Devices::AudioDeviceModule *this,
        HSTRING a2,
        int a3,
        HSTRING a4,
        unsigned int a5,
        unsigned int a6,
        struct Windows::Media::Devices::Internal::IAudioDeviceBrokerDevice *a7)
{
  _QWORD *v9; // rbx
  HSTRING v11; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a2;
  v9 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>((__int64)this + 8);
  *((_QWORD *)this + 7) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable';
  *v9 = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Windows::Media::Devices::IAudioDeviceModule,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Windows::Media::Devices::AudioDeviceModule::`vftable';
  *v9 = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &Windows::Media::Devices::AudioDeviceModule::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 10, &v11);
  *((_DWORD *)this + 18) = a3;
  Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this + 11, &v12);
  *((_DWORD *)this + 16) = a5;
  *((_DWORD *)this + 17) = a6;
  wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 12, (__int64)a7);
  return this;
}
