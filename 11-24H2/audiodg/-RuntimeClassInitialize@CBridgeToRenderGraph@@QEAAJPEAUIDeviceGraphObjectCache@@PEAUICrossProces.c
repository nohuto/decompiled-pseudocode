/*
 * XREFs of ?RuntimeClassInitialize@CBridgeToRenderGraph@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUICrossProcessMemory@@PEAUSYSTEM_AUDIO_STREAM@@KII@Z @ 0x140067CCC
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAKAEAIAEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUICrossProcessMemory@@AEAPEAUSYSTEM_AUDIO_STREAM@@AEAKAEAI5@Z @ 0x140067AEC (--$MakeAndInitialize@VCBridgeToRenderGraph@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140006CB0 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14000AC24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@U?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x14000EDB0 (-reset@-$com_ptr_t@U-$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundati.c)
 *     ??4?$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z @ 0x140018FCC (--4-$com_ptr_t@UISubmix@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUISubmix@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@UAPO_REG_PROPERTIES@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x14003D914 (--1-$out_param_t@V-$unique_ptr@UAPO_REG_PROPERTIES@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 *     CreateAudioMediaType @ 0x14005B104 (CreateAudioMediaType.c)
 *     CreateCrossProcessClientEndpoint @ 0x140081C24 (CreateCrossProcessClientEndpoint.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CBridgeToRenderGraph::RuntimeClassInitialize(
        CBridgeToRenderGraph *this,
        struct IDeviceGraphObjectCache *a2,
        struct ICrossProcessMemory *a3,
        struct SYSTEM_AUDIO_STREAM *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  __int64 **v12; // rbx
  __int64 v13; // rcx
  int CrossProcessClientEndpoint; // edi
  __int64 v15; // rdx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 *v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // ebx
  HRESULT v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 (__fastcall *v28)(__int64, _DWORD *, char *); // rdi
  _DWORD v29[2]; // [rsp+40h] [rbp-40h] BYREF
  IAudioMediaType *v30; // [rsp+48h] [rbp-38h]
  GUID v31; // [rsp+50h] [rbp-30h] BYREF
  __int128 v32; // [rsp+60h] [rbp-20h] BYREF
  char v33; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  IAudioMediaType *ppIAudioMediaType; // [rsp+C0h] [rbp+40h] BYREF
  struct IDeviceGraphObjectCache *v36; // [rsp+C8h] [rbp+48h]

  v36 = a2;
  v10 = a7;
  v11 = a6;
  v12 = (__int64 **)((char *)this + 40);
  v13 = *((_QWORD *)this + 5);
  *v12 = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v31 = GUID_00000000_0000_0000_0000_000000000000;
  v32 = *(_OWORD *)a4;
  CrossProcessClientEndpoint = CreateCrossProcessClientEndpoint(
                                 (unsigned int)&v32,
                                 (unsigned int)&v31,
                                 a5,
                                 (_DWORD)a4,
                                 (__int64)v12);
  if ( CrossProcessClientEndpoint < 0 )
  {
    v15 = 57LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
      (const char *)(unsigned int)CrossProcessClientEndpoint);
    return (unsigned int)CrossProcessClientEndpoint;
  }
  v17 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))**v12)(
          *v12,
          &GUID_5d48237d_438a_42fb_8ad8_3e90bc6c605f,
          (char *)this + 32);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
      (const char *)(unsigned int)v18);
    return v19;
  }
  CrossProcessClientEndpoint = (*(__int64 (__fastcall **)(_QWORD, struct ICrossProcessMemory *, _QWORD, _QWORD, _QWORD, _DWORD))(**((_QWORD **)this + 4) + 24LL))(
                                 *((_QWORD *)this + 4),
                                 a3,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0);
  if ( CrossProcessClientEndpoint < 0 )
  {
    v15 = 60LL;
    goto LABEL_5;
  }
  v20 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 6) = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  CrossProcessClientEndpoint = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))**v12)(
                                 *v12,
                                 &GUID_8fa906e4_c31c_4e31_932e_19a66385e9aa,
                                 (char *)this + 48);
  if ( CrossProcessClientEndpoint < 0 )
  {
    v15 = 62LL;
    goto LABEL_5;
  }
  v21 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  CrossProcessClientEndpoint = (*(__int64 (__fastcall **)(__int64 *, GUID *, char *))**v12)(
                                 *v12,
                                 &GUID_8182e82c_629b_44c8_a50b_e26d190d2ffc,
                                 (char *)this + 56);
  if ( CrossProcessClientEndpoint < 0 )
  {
    v15 = 63LL;
    goto LABEL_5;
  }
  v22 = *v12;
  v23 = **v12;
  v32 = (unsigned __int64)this + 16;
  v33 = 1;
  v24 = (*(__int64 (__fastcall **)(__int64 *, char *))(v23 + 24))(v22, (char *)&v32 + 8);
  wil::details::out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<APO_REG_PROPERTIES,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v32);
  if ( (v24 & 0x80000000) == 0 )
  {
    ppIAudioMediaType = 0LL;
    v25 = CreateAudioMediaType(
            *((const WAVEFORMATEX **)this + 2),
            *(unsigned __int16 *)(*((_QWORD *)this + 2) + 16LL) + 18,
            &ppIAudioMediaType);
    v24 = v25;
    if ( v25 >= 0 )
    {
      if ( v11 >= v10 )
        v11 = v10;
      *((_DWORD *)this + 21) = 2 * v11;
      wil::com_ptr_t<ISubmix,wil::err_returncode_policy>::operator=((__int64 *)this + 3, (__int64)v36);
      v29[1] = 0;
      v29[0] = v10;
      v30 = ppIAudioMediaType;
      v27 = *((_QWORD *)this + 3);
      v28 = *(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v27 + 40LL);
      wil::com_ptr_t<Windows::Foundation::Collections::IVector<Windows::Media::Devices::AudioDeviceModule *>,wil::err_returncode_policy>::reset((__int64 *)this + 8);
      v25 = v28(v27, v29, (char *)this + 64);
      v24 = v25;
      if ( v25 >= 0 )
      {
        *((_DWORD *)this + 18) = v10;
        *((_BYTE *)this + 81) = 1;
        v24 = 0;
        goto LABEL_30;
      }
      v26 = 86LL;
    }
    else
    {
      v26 = 68LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
      (const char *)(unsigned int)v25);
LABEL_30:
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&ppIAudioMediaType);
    return v24;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\bridgetorendergraph.cpp",
    (const char *)v24);
  return v24;
}
