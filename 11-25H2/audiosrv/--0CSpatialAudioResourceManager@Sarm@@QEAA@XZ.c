/*
 * XREFs of ??0CSpatialAudioResourceManager@Sarm@@QEAA@XZ @ 0x180117CA4
 * Callers:
 *     ??$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Details@WRL@Microsoft@@YAJPEAPEAUISpatialAudioResourceManager@@AEAPEAUIAudioPolicyManager@@@Z @ 0x180117AA8 (--$MakeAndInitialize@VCSpatialAudioResourceManager@Sarm@@UISpatialAudioResourceManager@@AEAPEAUI.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18007F32C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@U.c)
 *     ??0?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@QEAA@IMMMI@Z @ 0x180117C48 (--0-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VRe.c)
 *     ??0CWorkFifo@@QEAA@XZ @ 0x180117DF4 (--0CWorkFifo@@QEAA@XZ.c)
 *     ?UpdateRehashThresholds@?$CAtlMap@PEAVResourceConsumer@@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@VResourceConsumerTraits@@V?$CElementTraits@PEAV?$CAtlList@U_ResourceInfo@@VResourceInfoTraits@@@ATL@@@3@@ATL@@AEAAXXZ @ 0x18011A9A4 (-UpdateRehashThresholds@-$CAtlMap@PEAVResourceConsumer@@PEAV-$CAtlList@U_ResourceInfo@@VResource.c)
 *     ??0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ @ 0x18011C184 (--0CSpatialAudioResourceManagerTraceLogger@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
Sarm::CSpatialAudioResourceManager *__fastcall Sarm::CSpatialAudioResourceManager::CSpatialAudioResourceManager(
        Sarm::CSpatialAudioResourceManager *this)
{
  __int64 v2; // rdx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::`vftable'{for `ISpatialAudioResourceManager'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioResourceManager,IAudioAppVolumePolicyChange>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioAppVolumePolicyChange>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &Sarm::CSpatialAudioResourceManager::`vftable'{for `ISpatialAudioResourceManager'};
  *((_QWORD *)this + 1) = &Sarm::CSpatialAudioResourceManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioAppVolumePolicyChange>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 24), 0, 0);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 64), 0, 0);
  *((_WORD *)this + 52) = 256;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 17;
  *((_QWORD *)this + 18) = 0xFFFFFFFFLL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 10;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_DWORD *)this + 33) = 1061158912;
  *((_DWORD *)this + 34) = 1048576000;
  *((_DWORD *)this + 35) = 1074790400;
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::UpdateRehashThresholds();
  ATL::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>::CAtlMap<ResourceConsumer *,ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *,ResourceConsumerTraits,ATL::CElementTraits<ATL::CAtlList<_ResourceInfo,ResourceInfoTraits> *>>(
    (__int64)this + 192,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  CWorkFifo::CWorkFifo((Sarm::CSpatialAudioResourceManager *)((char *)this + 304));
  CSpatialAudioResourceManagerTraceLogger::CSpatialAudioResourceManagerTraceLogger((Sarm::CSpatialAudioResourceManager *)((char *)this + 488));
  return this;
}
