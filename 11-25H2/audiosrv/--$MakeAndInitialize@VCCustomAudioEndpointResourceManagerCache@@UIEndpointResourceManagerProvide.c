/*
 * XREFs of ??$MakeAndInitialize@VCCustomAudioEndpointResourceManagerCache@@UIEndpointResourceManagerProvider@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIEndpointResourceManagerProvider@@@Z @ 0x1800EC1CC
 * Callers:
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800CF034 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18002CC1C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A6194 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCBluetoothAudioEndpointResourceManagerProvider@@@Z @ 0x1800EBEC0 (--$MakeAndInitialize@VCBluetoothAudioEndpointResourceManagerProvider@@V1@$$V@Details@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CCustomAudioEndpointResourceManagerCache,IEndpointResourceManagerProvider,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  unsigned int v4; // edi
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  v8 = v2;
  if ( v2 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>((__int64)v2);
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IEndpointResourceManagerProvider>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *v3 = &CCustomAudioEndpointResourceManagerCache::`vftable';
    v8 = 0LL;
    v3[2] = 0LL;
    v5 = Microsoft::WRL::Details::MakeAndInitialize<CBluetoothAudioEndpointResourceManagerProvider,CBluetoothAudioEndpointResourceManagerProvider,>(v3 + 2);
    v4 = v5;
    if ( v5 >= 0 )
      v4 = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v3)(
             v3,
             &GUID_f4f46e04_decd_4a21_961b_5de15d9870a3,
             a1);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC8,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\customaudioresourcemanagerprovider.cpp",
        (const char *)(unsigned int)v5);
    (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  else
  {
    v4 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v8);
  return v4;
}
