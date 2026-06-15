/*
 * XREFs of ?RefreshDeviceFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180086E44
 * Callers:
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180032D50 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ?GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180068CE0 (-GetDevicePipeFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180002108 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_ptr@UKSMULTIPLE_ITEM@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAAXPEAUKSMULTIPLE_ITEM@@@Z @ 0x1800271EC (-reset@-$unique_ptr@UKSMULTIPLE_ITEM@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil.c)
 *     ?GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180036734 (-GetDeviceFormat@EffectPack@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180037234 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@_N@Z @ 0x18012E98C (-SetDeviceFormatAndSpatialSettings@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall EffectPack::RefreshDeviceFormat(
        EffectPack *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // esi
  int HasHardwareAudioEngine; // eax
  __int64 v8; // r8
  int DeviceFormat; // edi
  void *v10; // rcx
  int v12; // eax
  unsigned int v13; // ebx
  LPVOID pv; // [rsp+40h] [rbp-40h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v15; // [rsp+48h] [rbp-38h] BYREF
  const WCHAR *v16; // [rsp+50h] [rbp-30h] BYREF
  struct tWAVEFORMATEX **v17; // [rsp+58h] [rbp-28h] BYREF
  struct tWAVEFORMATEX *v18[2]; // [rsp+60h] [rbp-20h] BYREF
  char v19; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( **((_DWORD **)this + 265) > 4u && tlgKeywordOn(*((_QWORD *)this + 265), 16LL) )
  {
    v15 = a2;
    v16 = *(const WCHAR **)(*((_QWORD *)this + 198) + 48LL);
    *(_OWORD *)v18 = *(_OWORD *)*((_QWORD *)this + 196);
    v17 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v4,
      (int)&unk_1801A4729,
      v4,
      v5,
      (__int64 *)&v17,
      &v16,
      (__int64)&v15);
  }
  v6 = eKeywordDetectorConnector;
  if ( a2 != eKeywordDetectorConnector )
    v6 = eHostProcessConnector;
  HasHardwareAudioEngine = CEndpointCharacteristics::HasHardwareAudioEngine(*((CEndpointCharacteristics **)this + 198));
  pv = 0LL;
  v18[0] = (struct tWAVEFORMATEX *)&pv;
  v18[1] = 0LL;
  v19 = 1;
  LOBYTE(v8) = HasHardwareAudioEngine != 0;
  DeviceFormat = EffectPack::GetDeviceFormat(this, 0LL, v8, v6, &v18[1]);
  if ( v19 )
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      (void **)v18[0],
      v18[1]);
  if ( DeviceFormat >= 0 )
  {
    v12 = EffectPack::SetDeviceFormatAndSpatialSettings(this, v6, (const struct tWAVEFORMATEX *)pv, 0LL, 0);
    v13 = v12;
    if ( v12 >= 0 )
      v13 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x232D,
        (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v12);
    wistd::unique_ptr<KSMULTIPLE_ITEM,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::reset(
      &pv,
      0LL);
    return v13;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232B,
      (int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)(unsigned int)DeviceFormat);
    v10 = pv;
    pv = 0LL;
    if ( v10 )
      CoTaskMemFree(v10);
    return (unsigned int)DeviceFormat;
  }
}
