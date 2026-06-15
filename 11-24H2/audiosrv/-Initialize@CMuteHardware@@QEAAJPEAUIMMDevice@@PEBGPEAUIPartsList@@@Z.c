/*
 * XREFs of ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEBGPEAUIPartsList@@@Z @ 0x180101EF8
 * Callers:
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1801025B4 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEBGPEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMut.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@344@Z @ 0x180003B9C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgP.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180019F28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     _lambda_48ab4a51811d1fd17847d009bb0945ca_::operator() @ 0x180101338 (_lambda_48ab4a51811d1fd17847d009bb0945ca_--operator().c)
 *     ?Initialize_old@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180102274 (-Initialize_old@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@@@details@wil@@QEAA_NXZ @ 0x180103030 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMuteHardware::Initialize(
        CMuteHardware *this,
        struct IMMDevice *a2,
        const unsigned __int16 *a3,
        struct IPartsList *a4)
{
  unsigned int v6; // edi
  _DWORD *v7; // rcx
  int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+58h] [rbp-9h] BYREF
  int v13; // [rsp+5Ch] [rbp-5h] BYREF
  int v14; // [rsp+60h] [rbp-1h] BYREF
  unsigned int v15; // [rsp+64h] [rbp+3h] BYREF
  const WCHAR *v16; // [rsp+68h] [rbp+7h] BYREF
  const WCHAR *v17; // [rsp+70h] [rbp+Fh] BYREF
  const WCHAR *v18; // [rsp+78h] [rbp+17h] BYREF
  _QWORD v19[7]; // [rsp+80h] [rbp+1Fh] BYREF
  struct IMMDevice *v20; // [rsp+D0h] [rbp+6Fh] BYREF
  struct IPartsList *v21; // [rsp+E0h] [rbp+7Fh] BYREF

  v21 = a4;
  v20 = a2;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnhancedAudioTracing_2>::GetImpl'::`2'::impl) )
    return CMuteHardware::Initialize_old(this, v20, v21);
  v12 = 0;
  v16 = 0LL;
  v19[0] = this;
  v19[1] = &v20;
  v19[2] = &v21;
  v19[3] = &v16;
  v19[4] = &v12;
  v6 = lambda_48ab4a51811d1fd17847d009bb0945ca_::operator()((__int64)v19);
  v7 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v7 > 4u && tlgKeywordOn((__int64)v7, 2LL) )
  {
    v13 = *((_DWORD *)this + 6);
    v14 = v12;
    v17 = v16;
    v15 = v6;
    v18 = a3;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v8,
      (int)&unk_1801AD0EB,
      v9,
      v10,
      &v18,
      (__int64)&v15,
      &v17,
      (__int64)&v14,
      (__int64)&v13);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v16);
  return v6;
}
