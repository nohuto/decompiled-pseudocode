/*
 * XREFs of ??0CExclusiveModeListener@@QEAA@XZ @ 0x180131F98
 * Callers:
 *     ??$MakeAndInitialize@VCExclusiveModeListener@@V1@AEAPEBU_tlgProvider_t@@AEA_N@Details@WRL@Microsoft@@YAJPEAPEAVCExclusiveModeListener@@AEAPEBU_tlgProvider_t@@AEA_N@Z @ 0x180131E2C (--$MakeAndInitialize@VCExclusiveModeListener@@V1@AEAPEBU_tlgProvider_t@@AEA_N@Details@WRL@Micros.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003BC60 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ @ 0x18011C184 (--0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
CExclusiveModeListener *__fastcall CExclusiveModeListener::CExclusiveModeListener(CExclusiveModeListener *this)
{
  _QWORD *v2; // rax

  Microsoft::WRL::FtmBase::FtmBase((CExclusiveModeListener *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IMixedRealitySpatialAudioFormatPolicyChange,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CExclusiveModeListener::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IMixedRealitySpatialAudioFormatPolicyChange,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IMixedRealitySpatialAudioFormatPolicyChange,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 2, 0, 0);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *(GUID *)((char *)this + 136) = GUID_00000000_0000_0000_0000_000000000000;
  *((_DWORD *)this + 38) = 4;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x48uLL);
  *v2 = v2;
  v2[1] = v2;
  v2[2] = v2;
  *((_WORD *)v2 + 12) = 257;
  *((_QWORD *)this + 20) = v2;
  *((_DWORD *)this + 44) = 0;
  CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 184));
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_DWORD *)this + 95) = 0;
  *((_WORD *)this + 192) = 0;
  return this;
}
