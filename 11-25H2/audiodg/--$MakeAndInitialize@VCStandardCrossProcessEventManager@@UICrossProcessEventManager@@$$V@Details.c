/*
 * XREFs of ??$MakeAndInitialize@VCStandardCrossProcessEventManager@@UICrossProcessEventManager@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUICrossProcessEventManager@@@Z @ 0x140043B54
 * Callers:
 *     ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14004F470 (-Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPropertyChangeNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x140011684 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioSystemEffectsPro.c)
 *     ??1?$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x14005562C (--1-$MakeAllocator@VGraphStreamingResourceManager@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x140058E48 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CStandardCrossProcessEventManager,ICrossProcessEventManager,>(
        _QWORD *a1)
{
  void *v2; // rax
  void *v3; // rdi
  unsigned int v4; // ebx
  void *v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v6 = v2;
  if ( v2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioSystemEffectsPropertyChangeNotificationClient>((__int64)v2);
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ICrossProcessEventManager>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v3 = &CStandardCrossProcessEventManager::`vftable';
    v4 = ((__int64 (__fastcall *)(void *, GUID *, _QWORD *))CStandardCrossProcessEventManager::`vftable')(
           v3,
           &GUID_c4e70434_407d_416b_94be_9717b79065fb,
           a1);
    (*(void (__fastcall **)(void *))(*(_QWORD *)v3 + 16LL))(v3);
    return v4;
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<GraphStreamingResourceManager>::~MakeAllocator<GraphStreamingResourceManager>(&v6);
    return 2147942414LL;
  }
}
