/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@33333AEBU?$_tlgWrapperByVal@$03@@5@Z @ 0x180006C00
 * Callers:
 *     ?GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z @ 0x180140298 (-GetDCompStatisticsAndLogTelemetry@GestureServices@@AEAAXUtagPOINT@@_KPEAVGestureHandler@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180010FC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const WCHAR **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  const WCHAR *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  _BYTE v17[32]; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v18; // [rsp+50h] [rbp-91h]
  __int64 v19; // [rsp+58h] [rbp-89h]
  const WCHAR *v20; // [rsp+60h] [rbp-81h]
  int v21; // [rsp+68h] [rbp-79h]
  int v22; // [rsp+6Ch] [rbp-75h]
  __int64 v23; // [rsp+70h] [rbp-71h]
  __int64 v24; // [rsp+78h] [rbp-69h]
  __int64 v25; // [rsp+80h] [rbp-61h]
  __int64 v26; // [rsp+88h] [rbp-59h]
  __int64 v27; // [rsp+90h] [rbp-51h]
  __int64 v28; // [rsp+98h] [rbp-49h]
  __int64 v29; // [rsp+A0h] [rbp-41h]
  __int64 v30; // [rsp+A8h] [rbp-39h]
  __int64 v31; // [rsp+B0h] [rbp-31h]
  __int64 v32; // [rsp+B8h] [rbp-29h]
  __int64 v33; // [rsp+C0h] [rbp-21h]
  __int64 v34; // [rsp+C8h] [rbp-19h]
  __int64 v35; // [rsp+D0h] [rbp-11h]
  __int64 v36; // [rsp+D8h] [rbp-9h]

  v35 = a13;
  v33 = a12;
  v31 = a11;
  v29 = a10;
  v27 = a9;
  v25 = a8;
  v23 = a7;
  v36 = 4LL;
  v34 = 4LL;
  v32 = 8LL;
  v13 = *a6;
  v30 = 8LL;
  v28 = 8LL;
  v26 = 8LL;
  v24 = 8LL;
  if ( v13 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &WindowName;
    v15 = 2;
  }
  v21 = v15;
  v18 = a5;
  v20 = v13;
  v22 = 0;
  v19 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(&dword_180244248, a2, 0LL, 0LL, 11, v17);
}
