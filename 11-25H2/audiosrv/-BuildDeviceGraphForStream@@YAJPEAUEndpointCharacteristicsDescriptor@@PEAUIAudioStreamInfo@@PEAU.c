/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180083E1C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x180025924 (--1-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ.c)
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x180025D78 (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEB.c)
 *     ??R?$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z @ 0x180027218 (--R-$default_delete@UStreamGroupParams@@@std@@QEBAXPEAUStreamGroupParams@@@Z.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180027248 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18005190C (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800661B8 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18007988C (--1-$out_param_t@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@w.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800799C4 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@de.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800A12DC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A5C5C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall BuildDeviceGraphForStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        _OWORD *a10,
        __int64 a11,
        __int64 a12,
        struct tWAVEFORMATEX *Src,
        int a14,
        __int64 a15,
        unsigned int a16,
        char a17,
        __int64 a18,
        __int64 a19)
{
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // edi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rax
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v40; // [rsp+20h] [rbp-D1h]
  unsigned int v41; // [rsp+20h] [rbp-D1h]
  __int64 v42; // [rsp+60h] [rbp-91h] BYREF
  __int64 v43; // [rsp+68h] [rbp-89h] BYREF
  StreamGroupParams *v44; // [rsp+70h] [rbp-81h] BYREF
  char v45; // [rsp+79h] [rbp-78h]
  unsigned int *v46; // [rsp+80h] [rbp-71h] BYREF
  __int64 v47; // [rsp+88h] [rbp-69h] BYREF
  char v48; // [rsp+90h] [rbp-61h]
  __int64 v49[2]; // [rsp+A0h] [rbp-51h] BYREF
  __int64 v50; // [rsp+B0h] [rbp-41h]
  char v51; // [rsp+B8h] [rbp-39h]
  __int64 v52; // [rsp+C0h] [rbp-31h]
  unsigned int v53[2]; // [rsp+C8h] [rbp-29h] BYREF
  __int64 v54; // [rsp+D8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+47h]

  v43 = a4;
  v50 = a1;
  v54 = a15;
  v52 = a19;
  if ( (a6 & 0xFFF8) == 0 && (a7 != 1 || a6 >= 0) && (a6 & 0x88000000) != 0x8000000 )
  {
    v44 = 0LL;
    *(_OWORD *)v49 = *a10;
    v21 = DeriveStreamGroupParametersForStream(
            a1,
            a8,
            a14,
            *(_QWORD *)(a11 + 32),
            v40,
            (__int64)v49,
            a17,
            a6 & 1,
            Src,
            a12,
            a2,
            (__int64)&v44);
    v22 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x467,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v21);
      if ( v44 )
        std::default_delete<StreamGroupParams>::operator()(v23, v44);
      return v22;
    }
    v49[0] = 0LL;
    v24 = v44;
    v25 = DeriveProcessSubmixParametersForStream(a3, a6, a5, a14, (__int64)v44, v49);
    v28 = v25;
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x46B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v25);
LABEL_36:
      std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>((__int64 **)v49);
      std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>(&v44);
      return (unsigned int)v28;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v26,
        (__int64)&AudioResourceManager_StreamSettings_Derived,
        v27,
        1,
        (__int64)v53);
    v42 = 0LL;
    if ( a18 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v42, a18);
    }
    else
    {
      *(_QWORD *)v53 = 0LL;
      v29 = *(_QWORD *)g_DeviceGraphManager;
      v46 = v53;
      v47 = 0LL;
      v48 = 1;
      v41 = a16;
      v28 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, _QWORD *))(v29 + 48))(
              g_DeviceGraphManager,
              v50,
              v43,
              v24);
      wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>((__int64 **)&v46);
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x474,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v28);
LABEL_15:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v53);
LABEL_16:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
        goto LABEL_36;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v42, *(__int64 *)v53);
      if ( v49[0] )
      {
        v43 = 0LL;
        v30 = **(_QWORD **)v53;
        v46 = (unsigned int *)&v43;
        v47 = 0LL;
        v48 = 1;
        v28 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(v30 + 312))(
                *(_QWORD *)v53,
                v49[0],
                a16,
                &v47);
        wil::details::out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>((__int64 **)&v46);
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x47D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v28);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
          goto LABEL_15;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v42, v43);
        *(_DWORD *)(a11 + 188) = 1;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v53);
    }
    v31 = RpcImpersonateClient(0LL);
    if ( v31 )
    {
      v28 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x48D,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v31,
              v41);
    }
    else
    {
      v45 = 1;
      *(_QWORD *)(a11 + 144) = *v24;
      v50 = a11;
      v51 = 1;
      v32 = v42;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v42 + 88LL))(v42, a11 + 276);
      if ( a12 )
      {
        *(_DWORD *)(a11 + 280) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a12 + 8) + 16LL) + 16LL) + 18;
        *(_QWORD *)(a11 + 288) = *(_QWORD *)(*(_QWORD *)(a12 + 8) + 16LL);
      }
      else
      {
        v33 = v24[2];
        if ( v33 )
        {
          *(_DWORD *)(a11 + 280) = *(unsigned __int16 *)(v33 + 16) + 18;
          *(_QWORD *)(a11 + 288) = v24[2];
        }
      }
      v34 = v52;
      v35 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __int64))(*(_QWORD *)v32 + 24LL))(
              v32,
              a2,
              a11,
              v54,
              a16,
              v52);
      v28 = v35;
      if ( v35 >= 0 )
      {
        *(_DWORD *)(v34 + 1284) = v24[10] != 0LL;
        v36 = a2 - 8;
        if ( !a2 )
          v36 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v36 + 48LL))(v36, v24, a12);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            v37,
            (__int64)&AudioResourceManager_Stream_Created,
            v38,
            1,
            (__int64)&v54);
        *(_QWORD *)(a11 + 144) = 0LL;
        RpcRevertToSelf();
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v42);
        v28 = 0;
        goto LABEL_36;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4A1,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v35);
      *(_QWORD *)(a11 + 144) = 0LL;
      RpcRevertToSelf();
    }
    goto LABEL_16;
  }
  v22 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x461,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x80070057LL);
  return v22;
}
