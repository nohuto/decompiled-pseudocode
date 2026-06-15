/*
 * XREFs of ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIDeviceGraphObjectCacheManager@@UIAudioLogging@@@WRL@Microsoft@@QEAA@XZ @ 0x140038FFC
 * Callers:
 *     ??0CDeviceGraphObjectCacheManager@@QEAA@XZ @ 0x140038C04 (--0CDeviceGraphObjectCacheManager@@QEAA@XZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStreamingResourceRegistration@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140013760 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@UIAudioStrea.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>(
        _QWORD *a1)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown,IAudioStreamingResourceRegistration>((__int64)a1);
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::`vftable'{for `IDeviceGraphObjectCacheManager'};
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphObjectCacheManager,IAudioLogging>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IAudioLogging>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
