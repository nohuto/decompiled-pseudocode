/*
 * XREFs of ??0CCpuMemoryBufferFactory@@QEAA@XZ @ 0x140034760
 * Callers:
 *     ??$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphBufferFactory@@AEB_K11@Z @ 0x140034558 (--$MakeAndInitialize@VCCpuMemoryBufferFactory@@UIDeviceGraphBufferFactory@@AEB_KAEB_KAEB_K@Detai.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1400116B4 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CCpuMemoryBufferFactory *__fastcall CCpuMemoryBufferFactory::CCpuMemoryBufferFactory(CCpuMemoryBufferFactory *this)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphBufferFactory>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CCpuMemoryBufferFactory::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 24) = 0;
  return this;
}
