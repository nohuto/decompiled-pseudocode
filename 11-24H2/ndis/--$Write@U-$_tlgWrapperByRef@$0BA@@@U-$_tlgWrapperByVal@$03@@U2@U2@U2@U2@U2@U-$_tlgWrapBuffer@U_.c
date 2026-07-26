/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@44444AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@44@Z @ 0x14000423C
 * Callers:
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x14004AC50 (--$TraceLoggingWriteOidRequestCompletedActivity@$01@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ??$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z @ 0x14004ADB0 (--$TraceLoggingWriteOidRequestCompletedActivity@$0A@@@YAXPEBU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140045E80 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400E70B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned __int16 **a12,
        __int64 a13,
        __int64 a14)
{
  int v14; // ecx
  _BYTE v16[32]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int64 v20; // [rsp+68h] [rbp-98h]
  __int64 v21; // [rsp+70h] [rbp-90h]
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+88h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-70h]
  __int64 v26; // [rsp+98h] [rbp-68h]
  __int64 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+A8h] [rbp-58h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+B8h] [rbp-48h]
  _DWORD *v31; // [rsp+C0h] [rbp-40h]
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h]
  _DWORD v34[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v35; // [rsp+E0h] [rbp-20h]
  __int64 v36; // [rsp+E8h] [rbp-18h]
  __int64 v37; // [rsp+F0h] [rbp-10h]
  __int64 v38; // [rsp+F8h] [rbp-8h]

  v37 = a14;
  v35 = a13;
  v31 = v34;
  v38 = 4LL;
  v36 = 4LL;
  v32 = 2LL;
  v14 = **a12;
  v33 = *((_QWORD *)*a12 + 1);
  v29 = a11;
  v27 = a10;
  v25 = a9;
  v23 = a8;
  v21 = a7;
  v19 = a6;
  v34[0] = v14;
  v34[1] = 0;
  v30 = 4LL;
  v17 = *a5;
  v28 = 4LL;
  v26 = 4LL;
  v24 = 4LL;
  v22 = 4LL;
  v20 = 4LL;
  v18 = 16LL;
  return tlgWriteTransfer_EtwWriteTransfer(&dword_14011A7B0, a2, a3, 0LL, 13, v16);
}
