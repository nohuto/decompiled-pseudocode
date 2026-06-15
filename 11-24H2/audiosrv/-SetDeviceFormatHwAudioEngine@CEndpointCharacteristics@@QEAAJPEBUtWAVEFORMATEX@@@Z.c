/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18013822C
 * Callers:
 *     _lambda_32c34d17e9a23d2a6a4d348487551253_::operator() @ 0x180130C84 (_lambda_32c34d17e9a23d2a6a4d348487551253_--operator().c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x180137A54 (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x180019F4C (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002F15C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18005DA98 (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180074CAC (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800A2140 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     ?GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x180134B58 (-GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x1801383AC (-SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CEndpointCharacteristics::SetDeviceFormatHwAudioEngine(
        CEndpointCharacteristics *this,
        const struct tWAVEFORMATEX *a2)
{
  int updated; // ebx
  __int64 v5; // rdx
  int v7; // esi
  __int64 v8; // rdx
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // eax
  struct tagPROPVARIANT v12; // [rsp+20h] [rbp-30h] BYREF
  BYTE **v13; // [rsp+38h] [rbp-18h] BYREF
  struct tWAVEFORMATEX *v14; // [rsp+40h] [rbp-10h] BYREF
  char v15; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  BYTE *v17; // [rsp+68h] [rbp+18h] BYREF

  if ( !a2 )
  {
    updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, 0, 0LL);
    if ( updated >= 0 )
      return 0LL;
    v5 = 8773LL;
    goto LABEL_4;
  }
  v7 = ValidateUncompressedWaveFormatEx(a2);
  if ( v7 < 0 )
  {
    v8 = 8782LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v7 = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(this, 1, 0, a2);
  if ( v7 < 0 )
  {
    v8 = 8785LL;
    goto LABEL_8;
  }
  updated = CEndpointCharacteristics::SetOffloadDeviceFormat(this, a2);
  if ( updated >= 0 )
  {
    v17 = 0LL;
    v13 = &v17;
    v14 = 0LL;
    v15 = 1;
    updated = CEndpointCharacteristics::GetOffloadMixFormat(this, &v14);
    wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>((__int64)&v13);
    if ( updated >= 0 )
    {
      memset(&v12, 0, sizeof(v12));
      v12.vt = 65;
      v12.lVal = *((unsigned __int16 *)v17 + 8) + 18;
      v12.bstrblobVal.pData = v17;
      v11 = CEndpointCharacteristics::SetPropertyStoreProperty(this, &PKEY_AudioEngine_HWMixFormat, &v12);
      updated = v11;
      if ( v11 >= 0 )
      {
        updated = 0;
        goto LABEL_19;
      }
      v9 = (unsigned int)v11;
      v10 = 8801LL;
    }
    else
    {
      v9 = (unsigned int)updated;
      v10 = 8792LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)v9);
LABEL_19:
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)&v17,
      0LL);
    return (unsigned int)updated;
  }
  v5 = 8788LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
