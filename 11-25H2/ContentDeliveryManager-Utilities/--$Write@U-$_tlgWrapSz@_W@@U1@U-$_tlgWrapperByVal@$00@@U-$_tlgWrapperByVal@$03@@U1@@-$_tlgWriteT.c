/*
 * XREFs of ??$Write@U?$_tlgWrapSz@_W@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180003BBC
 * Callers:
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x180090B94 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        const wchar_t **a5,
        const wchar_t **a6,
        __int64 a7,
        __int64 a8,
        const wchar_t **a9)
{
  __int64 v11; // rcx
  int v12; // r8d
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  const wchar_t *v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  const wchar_t *v19; // rdx
  struct _EVENT_DATA_DESCRIPTOR v21; // [rsp+30h] [rbp-51h] BYREF
  const wchar_t *v22; // [rsp+50h] [rbp-31h]
  int v23; // [rsp+58h] [rbp-29h]
  int v24; // [rsp+5Ch] [rbp-25h]
  const wchar_t *v25; // [rsp+60h] [rbp-21h]
  int v26; // [rsp+68h] [rbp-19h]
  int v27; // [rsp+6Ch] [rbp-15h]
  __int64 v28; // [rsp+70h] [rbp-11h]
  __int64 v29; // [rsp+78h] [rbp-9h]
  __int64 v30; // [rsp+80h] [rbp-1h]
  __int64 v31; // [rsp+88h] [rbp+7h]
  const wchar_t *v32; // [rsp+90h] [rbp+Fh]
  int v33; // [rsp+98h] [rbp+17h]
  int v34; // [rsp+9Ch] [rbp+1Bh]

  v11 = -1LL;
  v12 = 2;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v13 = &word_1800E629C;
    v15 = 2;
  }
  v33 = v15;
  v30 = a8;
  v28 = a7;
  v32 = v13;
  v34 = 0;
  v31 = 4LL;
  v16 = *a6;
  v29 = 1LL;
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v16[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v16 = &word_1800E629C;
    v18 = 2;
  }
  v26 = v18;
  v25 = v16;
  v27 = 0;
  v19 = *a5;
  if ( *a5 )
  {
    do
      ++v11;
    while ( v19[v11] );
    v12 = 2 * v11 + 2;
  }
  else
  {
    v19 = &word_1800E629C;
  }
  v22 = v19;
  v23 = v12;
  v24 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 7u, &v21);
}
