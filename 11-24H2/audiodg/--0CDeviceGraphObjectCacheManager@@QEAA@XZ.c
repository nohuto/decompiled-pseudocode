/*
 * XREFs of ??0CDeviceGraphObjectCacheManager@@QEAA@XZ @ 0x140038904
 * Callers:
 *     ??$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCDeviceGraphObjectCacheManager@@@12@XZ @ 0x14004BD10 (--$Make@VCDeviceGraphObjectCacheManager@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VCDeviceGraphO.c)
 * Callees:
 *     ??0?$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V?$CElementTraits@PEAUIUnknown@@@ATL@@V?$CElementTraits@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@@6@@ATL@@QEAA@IMMMI@Z @ 0x1400127C0 (--0-$CAtlMap@PEAUIUnknown@@UListValue@DeviceRegistrations@GraphStreamingResourceManager@@V-$CEle.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@WRL@Microsoft@@QEAA@XZ @ 0x140038CFC (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAud.c)
 */

CDeviceGraphObjectCacheManager *__fastcall CDeviceGraphObjectCacheManager::CDeviceGraphObjectCacheManager(
        CDeviceGraphObjectCacheManager *this)
{
  __int64 v2; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>();
  *(_QWORD *)this = &CDeviceGraphObjectCacheManager::`vftable'{for `IDeviceGraphObjectCacheManager'};
  *((_QWORD *)this + 1) = &CDeviceGraphObjectCacheManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioLogging>'};
  ATL::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>::CAtlMap<IUnknown *,GraphStreamingResourceManager::DeviceRegistrations::ListValue,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<GraphStreamingResourceManager::DeviceRegistrations::ListValue>>(
    (__int64)this + 24,
    v2,
    0.75,
    0.25,
    SLODWORD(FLOAT_2_25));
  InitializeSRWLock((PSRWLOCK)this + 12);
  *((_QWORD *)this + 13) = 0LL;
  return this;
}
