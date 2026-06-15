/*
 * XREFs of ?UseAutoConvertPCMForLoopbackStreams@CEndpointCharacteristics@@QEAA_NXZ @ 0x18006B7EC
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800197F0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 * Callees:
 *     ??1?$out_param_t@V?$unique_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@@details@wil@@QEAA@XZ @ 0x18006B87C (--1-$out_param_t@V-$unique_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wi.c)
 *     ?TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18006B8B4 (-TryGetOverridingMixFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoin.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CEndpointCharacteristics::UseAutoConvertPCMForLoopbackStreams(CEndpointCharacteristics *this)
{
  char v1; // bl
  void *v2; // rcx
  struct _GUID v4; // [rsp+20h] [rbp-30h] BYREF
  LPVOID *p_pv; // [rsp+30h] [rbp-20h] BYREF
  struct tWAVEFORMATEX *v6; // [rsp+38h] [rbp-18h] BYREF
  char v7; // [rsp+40h] [rbp-10h]
  LPVOID pv; // [rsp+70h] [rbp+20h] BYREF

  pv = 0LL;
  p_pv = &pv;
  v6 = 0LL;
  v1 = 1;
  v7 = 1;
  v4 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( CEndpointCharacteristics::TryGetOverridingMixFormat(this, eHostProcessConnector, &v4, &v6) < 0 || !pv )
    v1 = 0;
  wil::details::out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>::~out_param_t<wistd::unique_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>>(&p_pv);
  v2 = pv;
  pv = 0LL;
  if ( v2 )
    CoTaskMemFree(v2);
  return v1;
}
