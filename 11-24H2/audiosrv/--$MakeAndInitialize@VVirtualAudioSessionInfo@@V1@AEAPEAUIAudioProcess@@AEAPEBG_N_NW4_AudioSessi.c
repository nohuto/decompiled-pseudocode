/*
 * XREFs of ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x1801125E8
 * Callers:
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1801128DC (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x18000B60C (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMMNotificationClient@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180029154 (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004A320 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18004B180 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800A25D0 (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
        _QWORD *a1,
        __int64 *a2,
        const WCHAR **a3,
        char *a4,
        char *a5,
        int *a6)
{
  void *v10; // rax
  void *v11; // r15
  unsigned int v12; // ebx
  int v13; // esi
  char v14; // di
  char v15; // bl
  const WCHAR *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v22; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  v22 = v10;
  if ( v10 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMMNotificationClient>((__int64)v10);
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionInfo>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v11 = &VirtualAudioSessionInfo::`vftable';
    *((_QWORD *)v11 + 2) = 0LL;
    *((_QWORD *)v11 + 3) = 0LL;
    v22 = 0LL;
    v13 = *a6;
    v14 = *a5;
    v15 = *a4;
    v16 = *a3;
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)v11 + 2, *a2);
    *((_BYTE *)v11 + 32) = v15;
    *((_BYTE *)v11 + 33) = v14;
    *((_DWORD *)v11 + 9) = v13;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)v11 + 3,
      0LL);
    v19 = _AllocString<CTCoAllocPolicy>(v18, v17, v16, (_QWORD *)v11 + 3);
    v12 = v19;
    if ( v19 >= 0 )
    {
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
      *a1 = v11;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\VirtualAudioStream.h",
        (const char *)(unsigned int)v19);
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    v12 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v22);
  return v12;
}
