/*
 * XREFs of ??$MakeAndInitialize@VCMMNotificationDelegator@AudioEffectsWatcher@@UIMMNotificationClient@@AEAPEBGPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIMMNotificationClient@@AEAPEBG$$QEAPEAX@Z @ 0x1800A4C48
 * Callers:
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800580B0 (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18002CC1C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800B5080 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AudioEffectsWatcher::CMMNotificationDelegator,IMMNotificationClient,unsigned short const * &,void *>(
        _QWORD *a1,
        const unsigned __int16 **a2,
        void **a3)
{
  AudioEffectsWatcher::CMMNotificationDelegator *v6; // rax
  AudioEffectsWatcher::CMMNotificationDelegator *v7; // rdi
  int v9; // ebx
  __int64 v10; // rax
  AudioEffectsWatcher::CMMNotificationDelegator *v11; // [rsp+40h] [rbp+8h] BYREF
  AudioEffectsWatcher::CMMNotificationDelegator *v12; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v6 = (AudioEffectsWatcher::CMMNotificationDelegator *)operator new(
                                                          0x20uLL,
                                                          (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  v11 = v6;
  if ( !v6 )
    return 2147942414LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>((__int64)v6);
  *(_QWORD *)v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IMMNotificationClient>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v7 = &AudioEffectsWatcher::CMMNotificationDelegator::`vftable';
  *((_QWORD *)v7 + 2) = 0LL;
  *((_QWORD *)v7 + 3) = 0LL;
  v12 = v7;
  v11 = 0LL;
  v9 = AudioEffectsWatcher::CMMNotificationDelegator::RuntimeClassInitialize(v7, *a2, *a3);
  v10 = *(_QWORD *)v7;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(AudioEffectsWatcher::CMMNotificationDelegator *, GUID *, _QWORD *))v10)(
           v7,
           &GUID_7991eec9_7e89_4d85_8390_6c703cec60c0,
           a1);
    (*(void (__fastcall **)(AudioEffectsWatcher::CMMNotificationDelegator *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  else
  {
    (*(void (__fastcall **)(AudioEffectsWatcher::CMMNotificationDelegator *))(v10 + 16))(v7);
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
  return (unsigned int)v9;
}
