/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x1400046BC
 * Callers:
 *     ??1UpdateBindings@BindingMetrics@@QEAA@XZ @ 0x140082F20 (--1UpdateBindings@BindingMetrics@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140082180 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD v8[10]; // [rsp+30h] [rbp-68h] BYREF

  v8[8] = a7;
  v8[6] = a6;
  v8[9] = 8LL;
  v8[7] = 8LL;
  v8[5] = 16LL;
  v8[4] = *a5;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1401247B0, a2, a3, 0LL, 5, v8);
}
