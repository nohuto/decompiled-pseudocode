/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5AEBU?$_tlgWrapperByVal@$00@@33335@Z @ 0x1802110E4
 * Callers:
 *     ?TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ @ 0x1801A4F7C (-TraceSwapChainTelemetry@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18012ADD4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        void **a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  _WORD *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-C9h] BYREF
  __int64 v19; // [rsp+50h] [rbp-A9h]
  __int64 v20; // [rsp+58h] [rbp-A1h]
  _WORD *v21; // [rsp+60h] [rbp-99h]
  int v22; // [rsp+68h] [rbp-91h]
  int v23; // [rsp+6Ch] [rbp-8Dh]
  __int64 v24; // [rsp+70h] [rbp-89h]
  __int64 v25; // [rsp+78h] [rbp-81h]
  __int64 v26; // [rsp+80h] [rbp-79h]
  __int64 v27; // [rsp+88h] [rbp-71h]
  __int64 v28; // [rsp+90h] [rbp-69h]
  __int64 v29; // [rsp+98h] [rbp-61h]
  __int64 v30; // [rsp+A0h] [rbp-59h]
  __int64 v31; // [rsp+A8h] [rbp-51h]
  __int64 v32; // [rsp+B0h] [rbp-49h]
  __int64 v33; // [rsp+B8h] [rbp-41h]
  __int64 v34; // [rsp+C0h] [rbp-39h]
  __int64 v35; // [rsp+C8h] [rbp-31h]
  __int64 v36; // [rsp+D0h] [rbp-29h]
  __int64 v37; // [rsp+D8h] [rbp-21h]
  __int64 v38; // [rsp+E0h] [rbp-19h]
  __int64 v39; // [rsp+E8h] [rbp-11h]

  v38 = a14;
  v36 = a13;
  v34 = a12;
  v32 = a11;
  v30 = a10;
  v28 = a9;
  v26 = a8;
  v24 = a7;
  v39 = 4LL;
  v37 = 8LL;
  v35 = 8LL;
  v14 = *a6;
  v33 = 8LL;
  v31 = 8LL;
  v29 = 1LL;
  v27 = 4LL;
  v25 = 4LL;
  if ( v14 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( v14[v15] );
    v16 = 2 * v15 + 2;
  }
  else
  {
    v14 = &unk_180381440;
    v16 = 2;
  }
  v22 = v16;
  v19 = a5;
  v21 = v14;
  v23 = 0;
  v20 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1803F8CA8, a2, 0LL, 0LL, 0xCu, &v18);
}
