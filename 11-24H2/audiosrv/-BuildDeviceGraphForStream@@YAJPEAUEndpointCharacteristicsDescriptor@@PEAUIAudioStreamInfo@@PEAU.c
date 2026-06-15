/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUMODE_PARAMS@@PEAUStreamGroupParams@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B7A8C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x1800186F4 (--1-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ.c)
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x180018B48 (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEB.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x180046DBC (McGenEventWrite_EtwEventWriteTransfer.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x180059B18 (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ??1?$out_param_t@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x18006858C (--1-$out_param_t@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@details@w.c)
 *     ??1?$out_param_ptr_t@PEAPEAXV?$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x1800686C4 (--1-$out_param_ptr_t@PEAPEAXV-$com_ptr_t@UIDeviceTopology@@Uerr_returncode_policy@wil@@@wil@@@de.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800A206C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall BuildDeviceGraphForStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        _QWORD *a10,
        int a11,
        __int64 a12,
        unsigned int a13,
        __int64 a14,
        __int64 a15)
{
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v19; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned int v22; // eax
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v31; // [rsp+40h] [rbp-81h] BYREF
  __int64 v32; // [rsp+48h] [rbp-79h] BYREF
  char v33; // [rsp+51h] [rbp-70h]
  __int64 *v34; // [rsp+58h] [rbp-69h] BYREF
  unsigned int *v35; // [rsp+60h] [rbp-61h] BYREF
  __int64 v36; // [rsp+68h] [rbp-59h] BYREF
  char v37; // [rsp+70h] [rbp-51h]
  __int64 v38; // [rsp+78h] [rbp-49h]
  char v39; // [rsp+80h] [rbp-41h]
  __int64 v40; // [rsp+88h] [rbp-39h]
  unsigned int v41[2]; // [rsp+90h] [rbp-31h] BYREF
  __int64 v42; // [rsp+A0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+47h]

  v32 = a4;
  v38 = a1;
  v42 = a12;
  v40 = a15;
  if ( (a6 & 0xFFF8) != 0 || a7 == 1 && a6 < 0 || (a6 & 0x88000000) == 0x8000000 )
  {
    v19 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4BA,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v19;
  }
  v34 = 0LL;
  v16 = DeriveProcessSubmixParametersForStream(a3, a6, a5, a11, (__int64)a10, &v34);
  v19 = v16;
  if ( v16 >= 0 )
  {
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McGenEventWrite_EtwEventWriteTransfer(
        v17,
        (__int64)&AudioResourceManager_StreamSettings_Derived,
        v18,
        1LL,
        (__int64)v41);
    v31 = 0LL;
    if ( a14 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v31, a14);
    }
    else
    {
      *(_QWORD *)v41 = 0LL;
      v20 = *(_QWORD *)g_DeviceGraphManager;
      v35 = v41;
      v36 = 0LL;
      v37 = 1;
      v19 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, __int64, _QWORD *, unsigned int, __int64, __int64 *))(v20 + 48))(
              g_DeviceGraphManager,
              v38,
              v32,
              a10,
              a13,
              a9,
              &v36);
      wil::details::out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>::~out_param_ptr_t<void * *,wil::com_ptr_t<IDeviceTopology,wil::err_returncode_policy>>((__int64 **)&v35);
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C7,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v19);
LABEL_12:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v41);
LABEL_13:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
        goto LABEL_33;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v31, *(__int64 *)v41);
      if ( v34 )
      {
        v32 = 0LL;
        v21 = **(_QWORD **)v41;
        v35 = (unsigned int *)&v32;
        v36 = 0LL;
        v37 = 1;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, _QWORD, __int64 *))(v21 + 312))(
                *(_QWORD *)v41,
                v34,
                a13,
                &v36);
        wil::details::out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>>((__int64 **)&v35);
        if ( v19 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4D0,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v19);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
          goto LABEL_12;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v31, v32);
        *(_DWORD *)(a8 + 188) = 1;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v41);
    }
    v22 = RpcImpersonateClient(0LL);
    if ( v22 )
    {
      v19 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x4E0,
              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v22);
    }
    else
    {
      v33 = 1;
      *(_QWORD *)(a8 + 144) = *a10;
      v38 = a8;
      v39 = 1;
      v23 = v31;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v31 + 88LL))(v31, a8 + 276);
      if ( a9 )
      {
        *(_DWORD *)(a8 + 280) = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)(a9 + 8) + 16LL) + 16LL) + 18;
        *(_QWORD *)(a8 + 288) = *(_QWORD *)(*(_QWORD *)(a9 + 8) + 16LL);
      }
      else
      {
        v24 = a10[2];
        if ( v24 )
        {
          *(_DWORD *)(a8 + 280) = *(unsigned __int16 *)(v24 + 16) + 18;
          *(_QWORD *)(a8 + 288) = a10[2];
        }
      }
      v25 = v40;
      v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __int64))(*(_QWORD *)v23 + 24LL))(
              v23,
              a2,
              a8,
              v42,
              a13,
              v40);
      v19 = v26;
      if ( v26 >= 0 )
      {
        *(_DWORD *)(v25 + 1284) = a10[10] != 0LL;
        v27 = a2 - 8;
        if ( !a2 )
          v27 = 0LL;
        (*(void (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v27 + 48LL))(v27, a10, a9);
        if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
          McGenEventWrite_EtwEventWriteTransfer(
            v28,
            (__int64)&AudioResourceManager_Stream_Created,
            v29,
            1LL,
            (__int64)&v42);
        *(_QWORD *)(a8 + 144) = 0LL;
        RpcRevertToSelf();
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
        v19 = 0;
        goto LABEL_33;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4F4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v26);
      *(_QWORD *)(a8 + 144) = 0LL;
      RpcRevertToSelf();
    }
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x4BE,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v16);
LABEL_33:
  std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(&v34);
  return (unsigned int)v19;
}
