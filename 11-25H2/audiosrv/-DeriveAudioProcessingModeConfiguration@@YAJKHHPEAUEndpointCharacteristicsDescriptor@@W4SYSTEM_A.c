/*
 * XREFs of ?DeriveAudioProcessingModeConfiguration@@YAJKHHPEAUEndpointCharacteristicsDescriptor@@W4SYSTEM_AUDIO_STREAM_TYPE@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIProcessSubmixProxy@@HHPEBUtWAVEFORMATEX@@PEAU_GUID@@6666@Z @ 0x18003A4AC
 * Callers:
 *     AudioServerGetDevicePeriod @ 0x1800380C0 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180038600 (AudioServerGetSharedModeEnginePeriod.c)
 *     AudioServerIsFormatSupported @ 0x180038EE0 (AudioServerIsFormatSupported.c)
 *     ?ReloadApos@AudioEffectsWatcher@@AEAAJXZ @ 0x18007B660 (-ReloadApos@AudioEffectsWatcher@@AEAAJXZ.c)
 *     AudioServerGetMixFormat @ 0x18008D5F0 (AudioServerGetMixFormat.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAUIBridgeStreamInstanceProxy@@@Z @ 0x1800B88DC (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_J_NPEAUIStreamGroupProxy@@PEAPEAU.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800D7450 (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180109760 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@U_GUID@@@Z @ 0x180035B48 (-IsConnectorModeSupported@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_000.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetInternalModePriorityList@@YAPEBUModeList@@W4SYSTEM_AUDIO_STREAM_TYPE@@KPEAVCEndpointCharacteristics@@H@Z @ 0x18003B118 (-GetInternalModePriorityList@@YAPEBUModeList@@W4SYSTEM_AUDIO_STREAM_TYPE@@KPEAVCEndpointCharacte.c)
 *     ?IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18004B4A8 (-IsAPOModeSupported@EffectPack@@QEAAHW4FXEnablementConsideration@@U_GUID@@W4__MIDL___MIDL_itf_au.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180066618 (-GetExclusiveModeProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineend.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007576C (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18007A690 (-AllowRawStreamCreation@EffectPack@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001.c)
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18008D0EC (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall DeriveAudioProcessingModeConfiguration(
        unsigned int a1,
        int a2,
        unsigned int a3,
        CEndpointCharacteristics **a4,
        unsigned int a5,
        int a6,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a7,
        __int64 a8,
        int a9,
        int a10,
        __int64 a11,
        struct _GUID *a12,
        struct _GUID *a13,
        struct _GUID *a14,
        struct _GUID *a15,
        _OWORD *a16)
{
  __int64 v18; // r12
  _OWORD *v19; // r13
  GUID v20; // xmm9
  int v21; // eax
  unsigned int v22; // ebx
  struct _GUID v24; // xmm6
  struct _GUID v25; // xmm7
  struct _GUID v26; // xmm8
  EffectPack *v27; // rcx
  __int64 v28; // rbx
  int v29; // esi
  __int64 InternalModePriorityList; // rax
  unsigned int i; // r15d
  int v32; // eax
  unsigned int v33; // r14d
  bool v34; // zf
  struct _GUID *v35; // rax
  __int64 (__fastcall *v36)(__int64, void **); // rbx
  int v37; // eax
  unsigned int v38; // ebx
  bool v39; // [rsp+30h] [rbp-F8h] BYREF
  void *v40; // [rsp+38h] [rbp-F0h] BYREF
  struct _GUID v41; // [rsp+40h] [rbp-E8h] BYREF
  struct _GUID v42; // [rsp+50h] [rbp-D8h] BYREF
  struct _GUID *v43; // [rsp+60h] [rbp-C8h]
  struct _GUID *v44; // [rsp+68h] [rbp-C0h]
  struct _GUID *v45; // [rsp+70h] [rbp-B8h]
  struct _GUID *v46; // [rsp+78h] [rbp-B0h]
  struct _GUID v47; // [rsp+80h] [rbp-A8h] BYREF
  struct _GUID v48; // [rsp+90h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]

  v18 = a1;
  v43 = a12;
  v44 = a13;
  v45 = a14;
  v46 = a15;
  v19 = a16;
  v40 = a16;
  v20 = GUID_00000000_0000_0000_0000_000000000000;
  v48 = GUID_00000000_0000_0000_0000_000000000000;
  v41 = GUID_00000000_0000_0000_0000_000000000000;
  v42 = GUID_00000000_0000_0000_0000_000000000000;
  if ( a6 == 1 )
  {
    EffectPack::GetExclusiveModeProcessingModeConfiguration(a4[1], a7, &v48, &v41, &v42);
    v40 = 0LL;
    if ( (int)CEndpointCharacteristics::TryGetCustomResourceManagerService(
                *a4,
                &GUID_4d3814ae_3db5_4fb3_819c_1493075ce6e3,
                &v40) < 0
      || !v40
      || (v47 = 0LL,
          v21 = (*(__int64 (__fastcall **)(void *, CEndpointCharacteristics **, __int64, struct _GUID *))(*(_QWORD *)v40 + 112LL))(
                  v40,
                  a4,
                  a11,
                  &v47),
          v22 = v21,
          v21 == -2147467263) )
    {
      v24 = v48;
    }
    else
    {
      if ( v21 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x341,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v21);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        return v22;
      }
      v24 = v47;
    }
    v25 = v41;
    v20 = v41;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
    v26 = v42;
  }
  else if ( a5 - 2 <= 1 )
  {
    if ( a8 )
    {
      v40 = 0LL;
      v36 = *(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a8 + 64LL);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v40);
      v37 = v36(a8, &v40);
      v38 = v37;
      if ( v37 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x34E,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v37);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
        return v38;
      }
      v26 = *(struct _GUID *)(*(__int64 (__fastcall **)(void *, struct _GUID *))(*(_QWORD *)v40 + 136LL))(v40, &v47);
      v25 = v26;
      v24 = v26;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v40);
    }
    else
    {
      EffectPack::GetDefaultConnectorProcessingModeConfiguration(a4[1], 0, &v48, &v41, &v42);
      v26 = v42;
      v25 = v41;
      v24 = v48;
    }
    v20 = v25;
  }
  else
  {
    v27 = a4[1];
    if ( a2 )
    {
      if ( !EffectPack::AllowRawStreamCreation(v27, a7) )
        return 2290679847LL;
      v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v25 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v26 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
      v20 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      EffectPack::GetDefaultConnectorProcessingModeConfiguration(v27, a7, &v48, &v41, &v42);
      v28 = 0LL;
      if ( a5 <= 1 && (unsigned int)v18 < 0x18 )
      {
        if ( a5 )
          v28 = (__int64)*(&off_180177A00 + v18);
        else
          v28 = (__int64)*(&off_1801777B0 + v18);
        v29 = 0;
        if ( *(_DWORD *)v28 )
          v20 = *(GUID *)*(_QWORD *)(v28 + 8);
      }
      else
      {
        v29 = -2147024809;
      }
      InternalModePriorityList = GetInternalModePriorityList(a5, (unsigned int)v18, *a4, a3);
      if ( InternalModePriorityList )
      {
        v28 = InternalModePriorityList;
      }
      else if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39F,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v29);
        return (unsigned int)v29;
      }
      for ( i = 0; ; ++i )
      {
        if ( i >= *(_DWORD *)v28 )
        {
          v24 = v48;
          v25 = v41;
          v26 = v42;
          goto LABEL_36;
        }
        v39 = 0;
        v47 = *(struct _GUID *)(*(_QWORD *)(v28 + 8) + 16LL * i);
        v32 = UseSupportedConnectorMode((struct EndpointCharacteristicsDescriptor *)a4, v18, a7, &v47, a10, &v39);
        v33 = v32;
        if ( v32 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3AB,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v32);
          return v33;
        }
        if ( v39 )
          break;
        v47 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
        if ( (unsigned int)EffectPack::IsConnectorModeSupported(a4[1], (unsigned int)a7, 0, &v47) )
        {
          v47 = *(struct _GUID *)(*(_QWORD *)(v28 + 8) + 16LL * i);
          if ( (unsigned int)EffectPack::IsAPOModeSupported(a4[1], 0LL, &v47, (unsigned int)a7) )
          {
            v24 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
            v25 = *(struct _GUID *)(*(_QWORD *)(v28 + 8) + 16LL * i);
            v26 = v25;
            goto LABEL_36;
          }
        }
      }
      v24 = *(struct _GUID *)(*(_QWORD *)(v28 + 8) + 16LL * i);
      v48 = v24;
      if ( a9
        || (v47 = v24,
            v34 = (unsigned int)EffectPack::IsAPOModeSupported(a4[1], 0LL, &v47, (unsigned int)a7) == 0,
            v35 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf,
            !v34) )
      {
        v35 = &v48;
      }
      v25 = *v35;
      v26 = v24;
LABEL_36:
      v19 = v40;
    }
  }
  if ( v43 )
    *v43 = v24;
  if ( v44 )
    *v44 = v25;
  if ( v45 )
    *v45 = v26;
  if ( v46 )
    *v46 = v26;
  if ( v19 )
    *v19 = v20;
  return 0LL;
}
