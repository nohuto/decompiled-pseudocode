/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@5@Z @ 0x14000A034
 * Callers:
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1400E791C (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 *a8)
{
  _BYTE v9[32]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v10; // [rsp+50h] [rbp-39h]
  __int64 v11; // [rsp+58h] [rbp-31h]
  __int64 v12; // [rsp+60h] [rbp-29h]
  __int64 v13; // [rsp+68h] [rbp-21h]
  _DWORD *v14; // [rsp+70h] [rbp-19h]
  __int64 v15; // [rsp+78h] [rbp-11h]
  __int64 v16; // [rsp+80h] [rbp-9h]
  _DWORD v17[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD *v18; // [rsp+90h] [rbp+7h]
  __int64 v19; // [rsp+98h] [rbp+Fh]
  __int64 v20; // [rsp+A0h] [rbp+17h]
  _DWORD v21[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  v18 = v21;
  v19 = 2LL;
  v21[1] = 0;
  v20 = *a8;
  v21[0] = *((unsigned __int16 *)a8 + 4);
  v14 = v17;
  v15 = 2LL;
  v16 = *a7;
  v17[0] = *((unsigned __int16 *)a7 + 4);
  v12 = a6;
  v10 = a5;
  v11 = 8LL;
  v17[1] = 0;
  v13 = 4LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14029AE68, a2, 0LL, 0LL, 8, v9);
}
