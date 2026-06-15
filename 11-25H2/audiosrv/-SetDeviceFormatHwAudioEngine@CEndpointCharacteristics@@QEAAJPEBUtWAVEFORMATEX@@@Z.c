/*
 * XREFs of ?SetDeviceFormatHwAudioEngine@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18012F164
 * Callers:
 *     _lambda_9137dbba075d897e82b5fd8c66242eba_::operator() @ 0x180129718 (_lambda_9137dbba075d897e82b5fd8c66242eba_--operator().c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033F1C (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087A70 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x1800A5D30 (-SetPropertyStoreProperty@CEndpointCharacteristics@@QEAAJAEBU_tagpropertykey@@AEBUtagPROPVARIANT.c)
 *     ?GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18012C60C (-GetOffloadMixFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18012F2E4 (-SetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
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
    v5 = 8698LL;
    goto LABEL_4;
  }
  v7 = ValidateUncompressedWaveFormatEx(a2);
  if ( v7 < 0 )
  {
    v8 = 8707LL;
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
    v8 = 8710LL;
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
      v10 = 8726LL;
    }
    else
    {
      v9 = (unsigned int)updated;
      v10 = 8717LL;
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
  v5 = 8713LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
