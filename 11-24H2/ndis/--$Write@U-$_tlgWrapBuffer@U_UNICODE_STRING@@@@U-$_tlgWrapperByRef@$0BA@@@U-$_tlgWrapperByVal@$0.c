/*
 * XREFs of ??$Write@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x140004748
 * Callers:
 *     ??1Miniport@BindingMetrics@@QEAA@XZ @ 0x14006A4A0 (--1Miniport@BindingMetrics@@QEAA@XZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140045E80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int16 **a5,
        __int64 *a6,
        __int64 a7)
{
  __int64 v7; // rcx
  _BYTE v9[32]; // [rsp+30h] [rbp-31h] BYREF
  _DWORD *v10; // [rsp+50h] [rbp-11h]
  __int64 v11; // [rsp+58h] [rbp-9h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  _DWORD v13[2]; // [rsp+68h] [rbp+7h] BYREF
  __int64 v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  __int64 v17; // [rsp+88h] [rbp+27h]

  v16 = a7;
  v17 = 8LL;
  v15 = 16LL;
  v11 = 2LL;
  v7 = *a6;
  v10 = v13;
  v14 = v7;
  LODWORD(v7) = **a5;
  v12 = *((_QWORD *)*a5 + 1);
  v13[0] = v7;
  v13[1] = 0;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011A7B0, a2, a3, 0LL, 6, v9);
}
