/*
 * XREFs of ??$MakeAndInitialize@VCEndpointVolumeStateManager@@UIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointVolumeStateManager@@AEAPEAUIVolumeProvider@@@Z @ 0x18001A848
 * Callers:
 *     ?Create@TSSession@@SAJKAEAV?$unique_ptr@VTSSession@@U?$default_delete@VTSSession@@@std@@@std@@@Z @ 0x18004069C (-Create@TSSession@@SAJKAEAV-$unique_ptr@VTSSession@@U-$default_delete@VTSSession@@@std@@@std@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180012090 (InlineIsEqualGUID.c)
 *     ??1?$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001F970 (--1-$MakeAllocator@VCAudioSessionPropertyStore@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002060C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessionCallbacks@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180040FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIBackgroundSessi.c)
 *     ??0CEndpointVolumeStateManager@@QEAA@XZ @ 0x1800462D0 (--0CEndpointVolumeStateManager@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18004F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CEndpointVolumeStateManager,IEndpointVolumeStateManager,IVolumeProvider * &>(
        CEndpointVolumeStateManager **a1,
        __int64 *a2)
{
  CEndpointVolumeStateManager *v4; // rax
  CEndpointVolumeStateManager *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdi
  _DWORD *v9; // rcx
  unsigned int v10; // edi
  CEndpointVolumeStateManager *v11; // [rsp+40h] [rbp+8h] BYREF
  CEndpointVolumeStateManager *v12; // [rsp+50h] [rbp+18h]
  CEndpointVolumeStateManager *v13; // [rsp+58h] [rbp+20h]

  *a1 = 0LL;
  v4 = (CEndpointVolumeStateManager *)operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  v12 = v4;
  if ( !v4 )
    return 2147942414LL;
  v13 = v4;
  v6 = CEndpointVolumeStateManager::CEndpointVolumeStateManager(v4);
  v11 = 0LL;
  v7 = *a2;
  v8 = *((_QWORD *)v6 + 15);
  *((_QWORD *)v6 + 15) = v7;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  *a1 = 0LL;
  if ( InlineIsEqualGUID(&GUID_59d5b9a9_5e6e_4cd4_baae_95ad8d257a28, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a1 = v6;
    (*(void (__fastcall **)(CEndpointVolumeStateManager *))(*(_QWORD *)v6 + 8LL))(v6);
    v10 = 0;
  }
  else if ( InlineIsEqualGUID(v9, v9) )
  {
    *a1 = v6;
    v10 = 0;
    (*(void (__fastcall **)(CEndpointVolumeStateManager *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    v10 = -2147467262;
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IBackgroundSessionCallbacks>::Release(v6);
  Microsoft::WRL::Details::MakeAllocator<CAudioSessionPropertyStore>::~MakeAllocator<CAudioSessionPropertyStore>(&v11);
  return v10;
}
