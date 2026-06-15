/*
 * XREFs of ??0CBridgeSourceEndpoint@@QEAA@XZ @ 0x140067204
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@AEA_JAEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004A538 (--$MakeAndInitialize@VCBridgeSourceEndpoint@@UIAudioEndpointRT@@AEAPEAUIDeviceGraphObjectCache@@.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudioEndpointRT@@UIAudioOutputEndpointRT@@UIBridgeSourceEndpointControl@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1400671F0 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioEndpoint@@UIAudio.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CBridgeSourceEndpoint *__fastcall CBridgeSourceEndpoint::CBridgeSourceEndpoint(CBridgeSourceEndpoint *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpoint,IWeakReferenceSource,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>'};
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `IAudioOutputEndpointRT'};
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IBridgeSourceEndpointControl>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CBridgeSourceEndpoint::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CBridgeSourceEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpoint,IWeakReferenceSource,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IAudioEndpoint,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CBridgeSourceEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAudioEndpointRT,IAudioOutputEndpointRT,IBridgeSourceEndpointControl>'};
  *((_QWORD *)this + 4) = &CBridgeSourceEndpoint::`vftable'{for `IAudioOutputEndpointRT'};
  *((_QWORD *)this + 5) = &CBridgeSourceEndpoint::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IBridgeSourceEndpointControl>'};
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_OWORD *)this + 6) = 0LL;
  *((_OWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  return this;
}
