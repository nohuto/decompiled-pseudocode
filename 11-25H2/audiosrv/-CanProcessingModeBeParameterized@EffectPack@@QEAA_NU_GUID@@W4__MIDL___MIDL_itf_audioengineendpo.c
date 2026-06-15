/*
 * XREFs of ?CanProcessingModeBeParameterized@EffectPack@@QEAA_NU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800331CC
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@KU_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180032190 (-DeriveDeviceGraphFormatsForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@_NW4__MIDL___MIDL_.c)
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800328EC (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@PEBUMODE_PARAMS@@PEAUIAudioStreamInfo@@AEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x1800A12DC (-DeriveStreamGroupParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL.c)
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@44KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@88PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N66W4_BridgeStreamProperties@@6KPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@AEAV?$unique_ptr@UMODE_PARAMS@@U?$default_delete@UMODE_PARAMS@@@std@@@std@@@Z @ 0x1800BE314 (-InitializeStreamAndModeDescriptors@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREM.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18002203C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@?$_Default_allocator_traits@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@std@@SAXAEAV?$allocator@UAudioEffectState@CProcessingModeParameters@@@1@QEAUAudioEffectState@CProcessingModeParameters@@AEBU34@@Z @ 0x18002256C (--$construct@UAudioEffectState@CProcessingModeParameters@@AEBU12@@-$_Default_allocator_traits@V-.c)
 *     ?GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18004B200 (-GetModeEffect@EffectPack@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800CFBC0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=10 #try_helpers=1
char __fastcall EffectPack::CanProcessingModeBeParameterized(
        EffectPack *this,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3)
{
  __int64 **v6; // rsi
  __int64 *i; // rax
  __int64 v8; // rcx
  int ModeEffect; // eax
  struct IAudioProcessingObject *v10; // rbx
  __int64 v11; // rax
  struct ICompositeSystemEffect *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  LPVOID v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // r9
  char v18; // si
  _QWORD *v19; // rdx
  int v20; // [rsp+20h] [rbp-D8h]
  struct ICompositeSystemEffect *v21; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+50h] [rbp-A8h] BYREF
  struct IAudioProcessingObject *v24; // [rsp+58h] [rbp-A0h] BYREF
  struct _GUID v25; // [rsp+60h] [rbp-98h] BYREF
  struct _GUID v26; // [rsp+70h] [rbp-88h] BYREF
  char v27; // [rsp+80h] [rbp-78h]
  _QWORD v28[7]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v29; // [rsp+C8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  if ( *(_DWORD *)(*((_QWORD *)this + 198) + 236LL) != 1 || !*((_BYTE *)this + 2128) || a3 == eKeywordDetectorConnector )
    return 0;
  if ( (unsigned __int64)(int)a3 >= *((_QWORD *)this + 194) )
  {
    _o_terminate(a3, a2);
    __debugbreak();
    __debugbreak();
    JUMPOUT(0x1800334B7LL);
  }
  v6 = (__int64 **)(*((_QWORD *)this + 195) + 8LL * (int)a3);
  for ( i = *v6; i; i = (__int64 *)*i )
  {
    v8 = i[1] - *(_QWORD *)&a2->Data1;
    if ( !v8 )
      v8 = i[2] - *(_QWORD *)a2->Data4;
    if ( !v8 )
      return *((_BYTE *)i + 24);
  }
  v24 = 0LL;
  v21 = 0LL;
  v25 = *a2;
  ModeEffect = EffectPack::GetModeEffect(this, &v25, 0, a3, &v21, &v24, 0LL);
  if ( ModeEffect < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x24E3,
      (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)ModeEffect,
      v20);
  v23 = 0LL;
  v10 = v24;
  if ( v24 )
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v24->lpVtbl->QueryInterface)(
      v24,
      &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
      &v23);
  v11 = 0LL;
  v22 = 0LL;
  if ( v10 )
  {
    ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v10->lpVtbl->QueryInterface)(
      v10,
      &GUID_25385759_3236_4101_a943_25693dfb5d2d,
      &v22);
    v11 = v22;
  }
  v26 = *a2;
  v27 = 0;
  if ( v23 && v11 )
  {
    v27 = 1;
    v12 = v21;
  }
  else
  {
    v12 = v21;
    if ( v21 )
    {
      v13 = *(_QWORD *)v21;
      v28[0] = off_1801747C8;
      v28[1] = &v26;
      v29 = v28;
      v14 = (*(__int64 (__fastcall **)(struct ICompositeSystemEffect *, _QWORD *))(v13 + 40))(v21, v28);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x24FC,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v14,
          v20);
      if ( v29 )
      {
        v19 = v28;
        LOBYTE(v19) = v29 != v28;
        (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v29 + 32LL))(v29, v19);
      }
    }
  }
  *(_QWORD *)&v25.Data1 = v6;
  *(_QWORD *)v25.Data4 = 0LL;
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x20uLL);
  std::_Default_allocator_traits<std::allocator<CProcessingModeParameters::AudioEffectState>>::construct<CProcessingModeParameters::AudioEffectState,CProcessingModeParameters::AudioEffectState const &>(
    v16,
    (__int64)v15 + 8,
    (__int64)&v26);
  *v17 = (__int64)*v6;
  *v6 = v17;
  v18 = v27;
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  if ( v10 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v10->lpVtbl->Release)(v10);
  if ( v12 )
    (*(void (__fastcall **)(struct ICompositeSystemEffect *))(*(_QWORD *)v12 + 16LL))(v12);
  return v18;
}
