/*
 * XREFs of ??0CCpuMemoryBuffer@@QEAA@PEAVCCpuMemoryBufferFactory@@_K@Z @ 0x140019BC4
 * Callers:
 *     ?AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z @ 0x140019AC0 (-AllocateBuffer@CCpuMemoryBufferFactory@@UEAAJ_KPEAPEAUIDeviceGraphBuffer@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140011684 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x140019FC0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CCpuMemoryBuffer *__fastcall CCpuMemoryBuffer::CCpuMemoryBuffer(
        CCpuMemoryBuffer *this,
        struct CCpuMemoryBufferFactory *a2,
        __int64 a3)
{
  volatile int *v6; // rdx

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphBuffer>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CCpuMemoryBuffer::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((struct CCpuMemoryBufferFactory *)((char *)a2 + 12), v6);
  *((_QWORD *)this + 3) = a3;
  return this;
}
