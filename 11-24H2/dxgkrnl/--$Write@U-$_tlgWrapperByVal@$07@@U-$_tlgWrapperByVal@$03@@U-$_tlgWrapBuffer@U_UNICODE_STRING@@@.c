/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x140004FC8
 * Callers:
 *     _lambda_34fe7687b77d331a2bb10033e5c8a81c_::operator() @ 0x140082994 (_lambda_34fe7687b77d331a2bb10033e5c8a81c_--operator().c)
 *     _lambda_995b1012b958866616d8e16870c72d2c_::operator() @ 0x140082EAC (_lambda_995b1012b958866616d8e16870c72d2c_--operator().c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400401E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 **a7)
{
  int v7; // ecx
  _BYTE v9[32]; // [rsp+30h] [rbp-31h] BYREF
  __int64 v10; // [rsp+50h] [rbp-11h]
  __int64 v11; // [rsp+58h] [rbp-9h]
  __int64 v12; // [rsp+60h] [rbp-1h]
  __int64 v13; // [rsp+68h] [rbp+7h]
  _DWORD *v14; // [rsp+70h] [rbp+Fh]
  __int64 v15; // [rsp+78h] [rbp+17h]
  __int64 v16; // [rsp+80h] [rbp+1Fh]
  _DWORD v17[2]; // [rsp+88h] [rbp+27h] BYREF

  v15 = 2LL;
  v14 = v17;
  v7 = **a7;
  v16 = *((_QWORD *)*a7 + 1);
  v12 = a6;
  v10 = a5;
  v17[0] = v7;
  v17[1] = 0;
  v13 = 4LL;
  v11 = 8LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14015E5A8, a2, 0LL, 0LL, 6, v9);
}
