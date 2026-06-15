/*
 * XREFs of ??0CDeviceGraphObjectCache@@QEAA@XZ @ 0x140045C74
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@WRL@Microsoft@@YAJPEAPEAVCDeviceGraphObjectCache@@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Z @ 0x140022E0C (--$MakeAndInitialize@VCDeviceGraphObjectCache@@V1@AEA_JAEAMAEAIAEAPEBU_tlgProvider_t@@@Details@W.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache@@UIDeviceGraphObjectCacheInternal@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x140045D90 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIDeviceGraphObjectCache.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CDeviceGraphObjectCache *__fastcall CDeviceGraphObjectCache::CDeviceGraphObjectCache(CDeviceGraphObjectCache *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>();
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCacheInternal>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDeviceGraphObjectCache::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCache,IWeakReferenceSource,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IDeviceGraphObjectCache,IDeviceGraphObjectCacheInternal>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &CDeviceGraphObjectCache::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IDeviceGraphObjectCacheInternal>'};
  *((_QWORD *)this + 6) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 10;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 48) = 10;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = 0LL;
  return this;
}
