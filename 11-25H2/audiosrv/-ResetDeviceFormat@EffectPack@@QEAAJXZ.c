/*
 * XREFs of ?ResetDeviceFormat@EffectPack@@QEAAJXZ @ 0x18012E2DC
 * Callers:
 *     ?ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z @ 0x180101270 (-ResetDeviceFormat@CPolicyConfig@@UEAAJPEBG@Z.c)
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x18012DCD8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180005730 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x180035CD0 (-GetDefaultConnectorProcessingModeConfiguration@EffectPack@@QEAAXW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180036E18 (-GetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x1800402BC (-ConfirmDeviceFormat@EffectPack@@AEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengine.c)
 *     ?ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z @ 0x180040B34 (-ClearMixFormatCache@CEndpointCharacteristics@@QEAAJW4CMFC_OPTIONS@@@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall EffectPack::ResetDeviceFormat(EffectPack *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int DeviceFormatAndSpatialSettings; // ebx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct tWAVEFORMATEX *v13; // [rsp+48h] [rbp+7h] BYREF
  struct tWAVEFORMATEX *v14; // [rsp+50h] [rbp+Fh] BYREF
  struct _GUID v15; // [rsp+58h] [rbp+17h] BYREF
  struct _GUID v16; // [rsp+68h] [rbp+27h] BYREF
  char v17; // [rsp+78h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+A0h] [rbp+5Fh]

  if ( **((_DWORD **)this + 265) > 4u && tlgKeywordOn(*((_QWORD *)this + 265), 16LL) )
  {
    v13 = *(struct tWAVEFORMATEX **)(*((_QWORD *)this + 198) + 48LL);
    v16 = *(struct _GUID *)*((_QWORD *)this + 196);
    *(_QWORD *)&v15.Data1 = &v16;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>>(
      v2,
      (int)&unk_1801A4776,
      v2,
      v3,
      (__int64 *)&v15,
      (const WCHAR **)&v13);
  }
  v15 = GUID_00000000_0000_0000_0000_000000000000;
  EffectPack::GetDefaultConnectorProcessingModeConfiguration(this, 0, &v15, 0LL, 0LL);
  v14 = 0LL;
  *(_QWORD *)&v16.Data1 = &v14;
  *(_QWORD *)v16.Data4 = 0LL;
  v17 = 1;
  DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                     (CEndpointCharacteristics **)this,
                                     eHostProcessConnector,
                                     0,
                                     (LPVOID *)v16.Data4,
                                     0LL,
                                     0LL,
                                     0LL);
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v16);
  if ( DeviceFormatAndSpatialSettings >= 0 )
  {
    v16 = v15;
    v7 = EffectPack::ConfirmDeviceFormat((CEndpointCharacteristics **)this, v14, &v16, eHostProcessConnector, 0);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        9075LL,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v7);
      v8 = EffectPack::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, 0LL, 0LL, 0);
      DeviceFormatAndSpatialSettings = v8;
      if ( v8 < 0 )
      {
        v6 = 9079LL;
LABEL_9:
        v5 = (unsigned int)v8;
        goto LABEL_10;
      }
      v8 = CEndpointCharacteristics::ClearMixFormatCache(*((_QWORD *)this + 198), 0);
      DeviceFormatAndSpatialSettings = v8;
      if ( v8 < 0 )
      {
        v6 = 9082LL;
        goto LABEL_9;
      }
      v13 = 0LL;
      *(_QWORD *)&v16.Data1 = &v13;
      *(_QWORD *)v16.Data4 = 0LL;
      v17 = 1;
      DeviceFormatAndSpatialSettings = EffectPack::GetDeviceFormatAndSpatialSettings(
                                         (CEndpointCharacteristics **)this,
                                         eHostProcessConnector,
                                         1,
                                         (LPVOID *)v16.Data4,
                                         0LL,
                                         0LL,
                                         0LL);
      wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v16);
      if ( DeviceFormatAndSpatialSettings < 0 )
      {
        v9 = (unsigned int)DeviceFormatAndSpatialSettings;
        v10 = 9086LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (const char *)v9);
        wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
          (void **)&v13,
          0LL);
        goto LABEL_20;
      }
      v11 = EffectPack::SetDeviceFormatAndSpatialSettings(this, eHostProcessConnector, v13, 0LL, 0);
      DeviceFormatAndSpatialSettings = v11;
      if ( v11 < 0 )
      {
        v9 = (unsigned int)v11;
        v10 = 9089LL;
        goto LABEL_15;
      }
      wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
        (void **)&v13,
        0LL);
    }
    DeviceFormatAndSpatialSettings = 0;
    goto LABEL_20;
  }
  v5 = (unsigned int)DeviceFormatAndSpatialSettings;
  v6 = 9072LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v5);
LABEL_20:
  wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
    (void **)&v14,
    0LL);
  return (unsigned int)DeviceFormatAndSpatialSettings;
}
