/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x14000448C
 * Callers:
 *     ??1MiniportDriverUnload@AzTelemetry@@UEAA@XZ @ 0x14008BEC0 (--1MiniportDriverUnload@AzTelemetry@@UEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140045E80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 **a5,
        __int64 a6)
{
  int v6; // ecx
  _BYTE v8[32]; // [rsp+30h] [rbp-19h] BYREF
  _DWORD *v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  __int64 v11; // [rsp+60h] [rbp+17h]
  _DWORD v12[2]; // [rsp+68h] [rbp+1Fh] BYREF
  __int64 v13; // [rsp+70h] [rbp+27h]
  __int64 v14; // [rsp+78h] [rbp+2Fh]

  v13 = a6;
  v9 = v12;
  v14 = 8LL;
  v10 = 2LL;
  v6 = **a5;
  v11 = *((_QWORD *)*a5 + 1);
  v12[0] = v6;
  v12[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011A7B0, a2, a3, 0LL, 5, v8);
}
