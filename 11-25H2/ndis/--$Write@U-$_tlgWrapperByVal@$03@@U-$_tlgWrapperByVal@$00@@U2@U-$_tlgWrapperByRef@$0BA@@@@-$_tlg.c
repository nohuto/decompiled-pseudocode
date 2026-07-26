/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x140001560
 * Callers:
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x14004E390 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140082180 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByRef<16>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v8; // rcx
  _QWORD v10[12]; // [rsp+30h] [rbp-78h] BYREF

  v10[11] = 16LL;
  v10[9] = 1LL;
  v10[7] = 1LL;
  v8 = *a8;
  v10[8] = a7;
  v10[6] = a6;
  v10[4] = a5;
  v10[10] = v8;
  v10[5] = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1401247E8, a2, 0LL, 0LL, 6, v10);
}
