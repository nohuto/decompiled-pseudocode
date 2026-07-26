/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U_tlgWrapperPtrSize@@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@444AEBU_tlgWrapperPtrSize@@55@Z @ 0x140001F30
 * Callers:
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B728C (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140082180 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400EDF40 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperPtrSize,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 *a10,
        __int64 *a11,
        __int64 *a12)
{
  _BYTE v13[32]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v14; // [rsp+50h] [rbp-79h]
  __int64 v15; // [rsp+58h] [rbp-71h]
  __int64 v16; // [rsp+60h] [rbp-69h]
  __int64 v17; // [rsp+68h] [rbp-61h]
  __int64 v18; // [rsp+70h] [rbp-59h]
  __int64 v19; // [rsp+78h] [rbp-51h]
  __int64 v20; // [rsp+80h] [rbp-49h]
  __int64 v21; // [rsp+88h] [rbp-41h]
  __int64 v22; // [rsp+90h] [rbp-39h]
  __int64 v23; // [rsp+98h] [rbp-31h]
  __int64 v24; // [rsp+A0h] [rbp-29h]
  int v25; // [rsp+A8h] [rbp-21h]
  int v26; // [rsp+ACh] [rbp-1Dh]
  __int64 v27; // [rsp+B0h] [rbp-19h]
  int v28; // [rsp+B8h] [rbp-11h]
  int v29; // [rsp+BCh] [rbp-Dh]
  __int64 v30; // [rsp+C0h] [rbp-9h]
  int v31; // [rsp+C8h] [rbp-1h]
  int v32; // [rsp+CCh] [rbp+3h]

  v32 = 0;
  v29 = 0;
  v26 = 0;
  v30 = *a12;
  v31 = *((_DWORD *)a12 + 2);
  v23 = 4LL;
  v21 = 4LL;
  v27 = *a11;
  v28 = *((_DWORD *)a11 + 2);
  v19 = 4LL;
  v17 = 4LL;
  v24 = *a10;
  v25 = *((_DWORD *)a10 + 2);
  v22 = a9;
  v20 = a8;
  v18 = a7;
  v16 = a6;
  v15 = 16LL;
  v14 = *a5;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_1401247E8, a2, 0LL, 0LL, 10, v13);
}
