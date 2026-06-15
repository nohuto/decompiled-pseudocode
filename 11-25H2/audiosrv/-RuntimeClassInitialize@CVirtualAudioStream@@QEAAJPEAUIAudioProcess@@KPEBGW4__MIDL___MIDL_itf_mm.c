/*
 * XREFs of ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010BE9C
 * Callers:
 *     ??$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Details@WRL@Microsoft@@YAJPEAPEAVCVirtualAudioStream@@AEAPEAUIAudioProcess@@$$QEAW4_AUDIO_STREAM_EXTENDED_CATEGORY@@AEAPEBGAEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800F5F10 (--$MakeAndInitialize@VCVirtualAudioStream@@V1@AEAPEAUIAudioProcess@@W4_AUDIO_STREAM_EXTENDED_CAT.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z @ 0x180020B2C (--$_AllocString@VCTCoAllocPolicy@@@@YAJPEAXKPEBGPEAPEAG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x180055680 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x180059010 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ??$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessionState@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualAudioSessionInfo@@AEAPEAUIAudioProcess@@AEAPEBG$$QEA_N3$$QEAW4_AudioSessionState@@@Z @ 0x18010BBA8 (--$MakeAndInitialize@VVirtualAudioSessionInfo@@V1@AEAPEAUIAudioProcess@@AEAPEBG_N_NW4_AudioSessi.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVirtualAudioStream::RuntimeClassInitialize(
        CVirtualAudioStream *this,
        struct IAudioProcess *a2,
        int a3,
        const unsigned __int16 *a4,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a5)
{
  enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v14; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v16; // [rsp+60h] [rbp+8h] BYREF
  struct IAudioProcess *v17; // [rsp+68h] [rbp+10h] BYREF
  bool v18; // [rsp+70h] [rbp+18h] BYREF
  const WCHAR *v19; // [rsp+78h] [rbp+20h] BYREF

  v19 = a4;
  v17 = a2;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=((__int64 *)this + 4, (__int64)a2);
  *((_DWORD *)this + 4) = a3;
  v8 = a5;
  *((_DWORD *)this + 10) = a5;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 3,
    0LL);
  v11 = _AllocString<CTCoAllocPolicy>(v10, v9, a4, (_QWORD *)this + 3);
  if ( v11 < 0 )
  {
    v12 = 26LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\virtualaudiostream.cpp",
      (const char *)(unsigned int)v11);
    return (unsigned int)v11;
  }
  v16 = 0;
  LOBYTE(a5) = a3 == 3;
  v18 = v8 == eCapture;
  v14 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  v11 = Microsoft::WRL::Details::MakeAndInitialize<VirtualAudioSessionInfo,VirtualAudioSessionInfo,IAudioProcess * &,unsigned short const * &,bool,bool,enum _AudioSessionState>(
          (_QWORD *)this + 6,
          (__int64 *)&v17,
          &v19,
          (char *)&v18,
          (char *)&a5,
          &v16);
  if ( v11 < 0 )
  {
    v12 = 28LL;
    goto LABEL_3;
  }
  return 0LL;
}
