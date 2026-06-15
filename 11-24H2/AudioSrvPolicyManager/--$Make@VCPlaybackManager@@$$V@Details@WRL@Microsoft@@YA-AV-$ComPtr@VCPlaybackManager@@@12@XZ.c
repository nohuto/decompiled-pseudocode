/*
 * XREFs of ??$Make@VCPlaybackManager@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VCPlaybackManager@@@12@XZ @ 0x18002781C
 * Callers:
 *     ?RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ @ 0x18002A830 (-RuntimeClassInitialize@CWindowsPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateManager@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18001F5DC (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIEndpointVolumeStateMa.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F850 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800206BC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029EE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004C010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Microsoft::WRL::Details::Make<CPlaybackManager,>(_QWORD *a1)
{
  _QWORD *v2; // rbx
  void *v4; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v2;
  if ( v2 )
  {
    *(_OWORD *)v2 = 0LL;
    v2[2] = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IEndpointVolumeStateManager>((__int64)v2);
    *v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISessionInternalEvents>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v2 = &CPlaybackManager::`vftable';
    *((_BYTE *)v2 + 16) = 0;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release();
    *a1 = v2;
    v4 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v4);
  return a1;
}
