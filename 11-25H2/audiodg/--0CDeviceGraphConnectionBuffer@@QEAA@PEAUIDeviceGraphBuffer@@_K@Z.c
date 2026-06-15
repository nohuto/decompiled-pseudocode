/*
 * XREFs of ??0CDeviceGraphConnectionBuffer@@QEAA@PEAUIDeviceGraphBuffer@@_K@Z @ 0x140011600
 * Callers:
 *     ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEBUDEVICE_GRAPH_CONNECTION_DESCRIPTOR@@PEAPEAUIDeviceGraphConnectionBuffer@@@Z @ 0x140010510 (-AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEBUDEVICE_GRAPH_CONNECTION_DESCRIPTOR@@.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140011684 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
CDeviceGraphConnectionBuffer *__fastcall CDeviceGraphConnectionBuffer::CDeviceGraphConnectionBuffer(
        CDeviceGraphConnectionBuffer *this,
        struct IDeviceGraphBuffer *a2,
        __int64 a3)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>();
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDeviceGraphConnectionBuffer>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDeviceGraphConnectionBuffer::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDeviceGraphBuffer *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 3) = a3;
  return this;
}
