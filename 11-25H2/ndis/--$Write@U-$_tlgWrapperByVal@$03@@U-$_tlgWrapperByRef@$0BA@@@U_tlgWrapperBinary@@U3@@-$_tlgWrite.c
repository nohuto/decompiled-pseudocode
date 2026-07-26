/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperBinary@@5@Z @ 0x140002B90
 * Callers:
 *     ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1400B74E0 (-NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140082180 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperBinary,_tlgWrapperBinary>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7,
        __int64 *a8)
{
  __int64 v8; // rcx
  _BYTE v10[32]; // [rsp+30h] [rbp-59h] BYREF
  __int64 v11; // [rsp+50h] [rbp-39h]
  __int64 v12; // [rsp+58h] [rbp-31h]
  __int64 v13; // [rsp+60h] [rbp-29h]
  __int64 v14; // [rsp+68h] [rbp-21h]
  _DWORD *v15; // [rsp+70h] [rbp-19h]
  __int64 v16; // [rsp+78h] [rbp-11h]
  __int64 v17; // [rsp+80h] [rbp-9h]
  _DWORD v18[2]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD *v19; // [rsp+90h] [rbp+7h]
  __int64 v20; // [rsp+98h] [rbp+Fh]
  __int64 v21; // [rsp+A0h] [rbp+17h]
  _DWORD v22[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  v19 = v22;
  v20 = 2LL;
  v22[1] = 0;
  v21 = *a8;
  v22[0] = *((unsigned __int16 *)a8 + 4);
  v15 = v18;
  v16 = 2LL;
  v17 = *a7;
  v18[0] = *((unsigned __int16 *)a7 + 4);
  v18[1] = 0;
  v14 = 16LL;
  v12 = 4LL;
  v8 = *a6;
  v11 = a5;
  v13 = v8;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1401247E8, a2, 0LL, 0LL, 8, v10);
}
