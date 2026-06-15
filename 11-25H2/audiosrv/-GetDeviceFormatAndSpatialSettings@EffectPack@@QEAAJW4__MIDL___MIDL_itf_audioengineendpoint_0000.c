/*
 * XREFs of ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180036E18
 * Callers:
 *     ?GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180037A98 (-GetDeviceFormatHelper@CPolicyConfig@@AEAAJPEBGW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x18006F4F0 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x180089E24 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18012E2DC (-ResetDeviceFormat@EffectPack@@QEAAJXZ.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180132F2C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180135110 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180036160 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@W4SED_RESOLVEOPT@@@Z @ 0x1800361B0 (-GetSupportedConnectorModesInternal@EffectPack@@AEAAPEAVCAudioSignalProcessingModeArray@@W4__MID.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180036840 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180037234 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     Create_SpatialAudioDevicePropertyReader @ 0x18003B888 (Create_SpatialAudioDevicePropertyReader.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall EffectPack::GetDeviceFormatAndSpatialSettings(
        CEndpointCharacteristics **this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        int a3,
        LPVOID *a4,
        struct SpatialAudioSettings **a5,
        unsigned int *a6,
        struct SpatialAudioEncoderDescriptor **a7)
{
  struct SpatialAudioSettings **v11; // rsi
  unsigned int *v12; // r15
  struct SpatialAudioEncoderDescriptor **v13; // r12
  char v14; // r13
  __int64 SupportedConnectorModesInternal; // rcx
  __int64 v16; // rcx
  GUID v17; // xmm0
  unsigned int DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02; // ebx
  __int64 result; // rax
  struct SpatialAudioEncoderDescriptor *v20; // rbx
  void *v21; // r14
  unsigned __int64 v22; // r13
  CEndpointCharacteristics *v23; // rdx
  int SpatialAudioDevicePropertyReader; // eax
  unsigned int v25; // edi
  int v26; // eax
  unsigned int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  void *v31; // rax
  struct SpatialAudioEncoderDescriptor *v32; // rax
  unsigned int v33; // [rsp+38h] [rbp-41h]
  __int64 v34; // [rsp+40h] [rbp-39h] BYREF
  struct SpatialAudioEncoderDescriptor *v35; // [rsp+48h] [rbp-31h] BYREF
  void *v36; // [rsp+50h] [rbp-29h] BYREF
  __m256i v37; // [rsp+58h] [rbp-21h]
  __m256i v38; // [rsp+78h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+47h]
  unsigned int v40; // [rsp+E0h] [rbp+67h] BYREF

  if ( !a4 )
  {
    v28 = 8630LL;
LABEL_37:
    DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 = -2147467261;
    goto LABEL_35;
  }
  *a4 = 0LL;
  v11 = a5;
  if ( a5 )
    *a5 = 0LL;
  v12 = a6;
  if ( a6 )
  {
    *a6 = 0;
    if ( !v11 )
    {
      v28 = 8641LL;
      goto LABEL_37;
    }
  }
  v13 = a7;
  if ( a7 )
  {
    *a7 = 0LL;
    if ( !v11 )
    {
      v28 = 8647LL;
      goto LABEL_37;
    }
    if ( !v12 )
    {
      v28 = 8648LL;
      goto LABEL_37;
    }
  }
  LOBYTE(v40) = (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(this[198]) != 0;
  v14 = a3 != 0;
  SupportedConnectorModesInternal = EffectPack::GetSupportedConnectorModesInternal(
                                      this,
                                      a2 & (unsigned int)-(((a2 - 2) & 0xFFFFFFFD) != 0),
                                      0,
                                      1);
  if ( *(_DWORD *)(SupportedConnectorModesInternal + 8) )
  {
    if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         SupportedConnectorModesInternal,
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
    {
      if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                           v16,
                           &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) == -1 )
        v17 = *(GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v30, 0LL);
      else
        v17 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    }
    else
    {
      v17 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
    }
  }
  else
  {
    v17 = GUID_00000000_0000_0000_0000_000000000000;
  }
  v37.m256i_i64[0] = (__int64)this;
  v37.m256i_i32[2] = a2;
  *(GUID *)((char *)&v37.m256i_u64[1] + 4) = v17;
  v38 = v37;
  DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 = CEndpointCharacteristics::GetDeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02___(
                                                                    this[198],
                                                                    v14,
                                                                    v40,
                                                                    a2,
                                                                    (__int64)&v38,
                                                                    a4);
  if ( (DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 & 0x80000000) != 0 )
  {
    result = 2290679812LL;
    if ( DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 != -2004287484 )
    {
      v28 = 8653LL;
LABEL_35:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02);
      return DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02;
    }
  }
  else
  {
    if ( !v11 )
      return 0LL;
    v20 = 0LL;
    v35 = 0LL;
    v21 = CoTaskMemAlloc(0x48uLL);
    v36 = v21;
    if ( !v21 )
    {
      v29 = 8663LL;
LABEL_39:
      DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v29,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007000ELL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v35,
        0LL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &v36,
        0LL);
      return DeviceFormatInternal__lambda_53e50f4d36d820af02fa3fa8c2905d02;
    }
    v22 = 0LL;
    if ( v13 )
    {
      v22 = 7506LL;
      v31 = CoTaskMemAlloc(0x1D52uLL);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v35,
        v31);
      v20 = v35;
      if ( !v35 )
      {
        v29 = 8670LL;
        goto LABEL_39;
      }
    }
    v23 = this[198];
    v33 = 0;
    v34 = 0LL;
    SpatialAudioDevicePropertyReader = Create_SpatialAudioDevicePropertyReader(
                                         0LL,
                                         *((struct IPropertyStore **)v23 + 9));
    v25 = SpatialAudioDevicePropertyReader;
    if ( SpatialAudioDevicePropertyReader < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BF9,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)SpatialAudioDevicePropertyReader);
    }
    else
    {
      v40 = 0;
      v26 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 96LL))(v34, &v40);
      v27 = v40;
      if ( v26 < 0 || !v20 || (v33 = 834 * v40, v22 >= 834 * v40) )
      {
        if ( (*(int (__fastcall **)(__int64, void *, struct SpatialAudioEncoderDescriptor *, _QWORD))(*(_QWORD *)v34 + 104LL))(
               v34,
               v21,
               v20,
               v33) < 0 )
        {
          memset_0(v21, 0, 0x48uLL);
          v27 = 0;
        }
        *v11 = (struct SpatialAudioSettings *)v21;
        if ( v13 )
        {
          v32 = v20;
          v20 = 0LL;
          *v13 = v32;
        }
        if ( v12 )
          *v12 = v27;
        if ( v20 )
          CoTaskMemFree(v20);
        return 0LL;
      }
      v25 = -2147024774;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1C04,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)0x8007007ALL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v34);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21E5,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v25);
    if ( v20 )
      CoTaskMemFree(v20);
    CoTaskMemFree(v21);
    return v25;
  }
  return result;
}
