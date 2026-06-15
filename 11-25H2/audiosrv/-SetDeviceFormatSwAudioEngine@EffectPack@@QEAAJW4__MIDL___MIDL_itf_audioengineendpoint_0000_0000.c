/*
 * XREFs of ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003FDC4
 * Callers:
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180036E18 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18003ED58 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800402BC (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180040350 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@AEAVCAudioSignalProcessingModeMap@@W4PeriodicityType@@PEAI555@Z @ 0x1800404B0 (-GetSharedModeEnginePeriodicityForTranslatedProcessingMode@CEndpointCharacteristics@@QEAAJW4__MI.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180040B34 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800869E4 (-SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087A70 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_ @ 0x1800B6FEC (_lambda_dacf159241f8e1fef226fb2cfac8af81_--_lambda_dacf159241f8e1fef226fb2cfac8af81_.c)
 *     wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___ @ 0x1800EE920 (wil--scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___.c)
 *     wil::details::lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___::_lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___ @ 0x1801286AC (wil--details--lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___--_lambda_call__lambda_4bcc.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18012B1FC (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 *     ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18012F8D4 (-TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall EffectPack::SetDeviceFormatSwAudioEngine(
        CEndpointCharacteristics **this,
        __int32 a2,
        const struct tWAVEFORMATEX *a3)
{
  int v6; // eax
  unsigned int DeviceFormatAndSpatialSettings; // esi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // esi
  CEndpointCharacteristics *v13; // r15
  __int64 v14; // rdx
  struct _GUID v15; // xmm6
  int v16; // edx
  unsigned int SharedModeEnginePeriodicityForTranslatedProcessingMode; // edi
  struct EffectPack *v18; // rdx
  int v19; // eax
  int v20; // eax
  void *v21; // rcx
  int updated; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+28h] [rbp-89h]
  struct _GUID v29; // [rsp+58h] [rbp-59h] BYREF
  char v30; // [rsp+68h] [rbp-49h]
  EffectPack *v31; // [rsp+78h] [rbp-39h]
  char v32; // [rsp+80h] [rbp-31h]
  _BYTE v33[24]; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v34[32]; // [rsp+A0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  int v36; // [rsp+118h] [rbp+67h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v37; // [rsp+120h] [rbp+6Fh] BYREF
  LPVOID pv; // [rsp+128h] [rbp+77h] BYREF
  __int64 v39; // [rsp+130h] [rbp+7Fh] BYREF

  v37 = a2;
  v31 = (EffectPack *)this;
  v32 = 1;
  if ( a3 )
  {
    v9 = ValidateUncompressedWaveFormatEx(a3);
    DeviceFormatAndSpatialSettings = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2147,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v9);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v29 = 0LL;
    EffectPack::GetDefaultConnectorProcessingModeConfiguration((EffectPack *)this, a2, &v29, 0LL, 0LL);
    v12 = v37;
    v13 = this[198];
    if ( (int)v37 >= (unsigned __int64)this[236] )
    {
      _o_terminate(v11, v10);
      __debugbreak();
      JUMPOUT(0x1800402B5LL);
    }
    v14 = (__int64)this[237] + 24 * v37;
    v36 = 0;
    v15 = v29;
    SharedModeEnginePeriodicityForTranslatedProcessingMode = CEndpointCharacteristics::GetSharedModeEnginePeriodicityForTranslatedProcessingMode(
                                                               v13,
                                                               (unsigned int)v37,
                                                               a3,
                                                               &v29,
                                                               v14,
                                                               0,
                                                               &v36,
                                                               0LL,
                                                               0LL,
                                                               0LL);
    if ( SharedModeEnginePeriodicityForTranslatedProcessingMode == -2004287480 )
    {
      v29 = v15;
      if ( CEndpointCharacteristics::ConnectorProbablySupportsFormat(v13, v12, &v29, a3) )
        SharedModeEnginePeriodicityForTranslatedProcessingMode = -2005139389;
    }
    DeviceFormatAndSpatialSettings = 0;
    if ( !AEError::DeviceInUse((AEError *)SharedModeEnginePeriodicityForTranslatedProcessingMode, v16) )
      DeviceFormatAndSpatialSettings = SharedModeEnginePeriodicityForTranslatedProcessingMode;
    if ( (DeviceFormatAndSpatialSettings & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2092,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)DeviceFormatAndSpatialSettings);
      if ( DeviceFormatAndSpatialSettings != -2004287480 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x215B,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)DeviceFormatAndSpatialSettings);
        CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
        return DeviceFormatAndSpatialSettings;
      }
      v19 = CEndpointCharacteristics::TryAddFormat(this[198], v18, a3);
      DeviceFormatAndSpatialSettings = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2154,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v19);
        CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
        return DeviceFormatAndSpatialSettings;
      }
      v29 = v15;
      v20 = EffectPack::ConfirmDeviceFormat((EffectPack *)this, a3, &v29, v37, 0);
      DeviceFormatAndSpatialSettings = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2157,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)(unsigned int)v20);
        CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
        return DeviceFormatAndSpatialSettings;
      }
    }
    pv = 0LL;
    *(_QWORD *)&v29.Data1 = &pv;
    *(_QWORD *)v29.Data4 = 0LL;
    v30 = 1;
    DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                       this,
                                       eHostProcessConnector,
                                       0,
                                       (LPVOID *)v29.Data4,
                                       0LL,
                                       0LL,
                                       0LL);
    if ( v30 )
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        *(void ***)&v29.Data1,
        *(void **)v29.Data4);
    if ( (DeviceFormatAndSpatialSettings & 0x80000000) != 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2160,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)DeviceFormatAndSpatialSettings);
      v21 = pv;
      pv = 0LL;
      if ( v21 )
        CoTaskMemFree(v21);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this[198], 0, v37, a3);
    DeviceFormatAndSpatialSettings = updated;
    if ( updated < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2163,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)updated);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v23 = lambda_dacf159241f8e1fef226fb2cfac8af81_::_lambda_dacf159241f8e1fef226fb2cfac8af81_(v33, this, &v37, &pv);
    wil::scope_exit__lambda_dacf159241f8e1fef226fb2cfac8af81___(v34, v23);
    v24 = EffectPack::DeriveAndCacheMixFormatsForConnector((EffectPack *)this, eHostProcessConnector);
    DeviceFormatAndSpatialSettings = v24;
    if ( v24 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x216C,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v24);
      wil::details::lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___::_lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___(v34);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v25 = EffectPack::DeriveAndCacheMixFormatsForConnector((EffectPack *)this, eKeywordDetectorConnector);
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2170,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v25,
        v28);
    v39 = 0LL;
    v26 = CEndpointCharacteristics::SetProcessingPeriod(this[198], &v39);
    DeviceFormatAndSpatialSettings = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2179,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v26);
      wil::details::lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___::_lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___(v34);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v29 = 0LL;
    EffectPack::GetDefaultConnectorProcessingModeConfiguration((EffectPack *)this, v37, &v29, 0LL, 0LL);
    v27 = EffectPack::ConfirmDeviceFormat((EffectPack *)this, a3, &v29, v37, 1);
    DeviceFormatAndSpatialSettings = v27;
    if ( v27 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2185,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v27);
      wil::details::lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___::_lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___(v34);
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        &pv,
        0LL);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
    v34[24] = 0;
    wil::details::lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___::_lambda_call__lambda_4bcc11d60dabc74bd188251f6149c558___(v34);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
  }
  else
  {
    v6 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
           this[198],
           0,
           (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)a2,
           0LL);
    DeviceFormatAndSpatialSettings = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2141,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v6);
      CEndpointCharacteristics::ClearMixFormatCache(this[198], 0LL);
      return DeviceFormatAndSpatialSettings;
    }
  }
  return 0LL;
}
