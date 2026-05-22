/*
 * XREFs of ?LogRawInputDeviceAttached@RawInputProvidersTelemetry@@SAXIGGG@Z @ 0x1800DC940
 * Callers:
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18005F2B0 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@44@Z @ 0x1800040B4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U2@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry@@P6AXXZ@Z @ 0x1800857B8 (-get@-$static_lazy@VRawInputProvidersTelemetry@@@details@wil@@QEAAPEAVRawInputProvidersTelemetry.c)
 */

void __fastcall RawInputProvidersTelemetry::LogRawInputDeviceAttached(__int64 a1, __int16 a2, __int16 a3, __int16 a4)
{
  __int64 v5; // rbp
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int16 v12; // [rsp+40h] [rbp-18h] BYREF
  __int16 v13; // [rsp+42h] [rbp-16h] BYREF
  __int16 v14; // [rsp+44h] [rbp-14h] BYREF
  __int64 v15; // [rsp+48h] [rbp-10h] BYREF

  v5 = (unsigned int)a1;
  v8 = (_DWORD *)wil::details::static_lazy<RawInputProvidersTelemetry>::get(
                   a1,
                   (void (__cdecl *)())_lambda_57da4f32860180830fc4458af3e8f3e0_::_lambda_invoker_cdecl_)[1];
  if ( *v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
  {
    v12 = a4;
    v13 = a3;
    v14 = a2;
    v15 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>,_tlgWrapperByVal<2>>(
      v9,
      (__int64)&unk_180209C84,
      v10,
      v11,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12);
  }
}
