/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@U2@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@4AEBU?$_tlgWrapSz@D@@@Z @ 0x180003AC4
 * Callers:
 *     ?StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x18008A038 (-StartActivity@DiagTrackRuleSetHandlerAddRule@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_WIPEBD@Z @ 0x18008A110 (-StartActivity@DiagTrackRuleSetHandlerRemoveRule@ContentDeliveryManagerTelemetry@Background@Cont.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        __int64 a8,
        const wchar_t **a9)
{
  __int64 v11; // rcx
  const wchar_t *v12; // rdx
  __int64 v13; // rax
  int v14; // eax
  const wchar_t *v15; // rdx
  int v16; // ecx
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+30h] [rbp-61h] BYREF
  __int64 v19; // [rsp+50h] [rbp-41h]
  __int64 v20; // [rsp+58h] [rbp-39h]
  __int64 v21; // [rsp+60h] [rbp-31h]
  __int64 v22; // [rsp+68h] [rbp-29h]
  const wchar_t *v23; // [rsp+70h] [rbp-21h]
  int v24; // [rsp+78h] [rbp-19h]
  int v25; // [rsp+7Ch] [rbp-15h]
  __int64 v26; // [rsp+80h] [rbp-11h]
  __int64 v27; // [rsp+88h] [rbp-9h]
  const wchar_t *v28; // [rsp+90h] [rbp-1h]
  int v29; // [rsp+98h] [rbp+7h]
  int v30; // [rsp+9Ch] [rbp+Bh]

  v11 = -1LL;
  v12 = *a9;
  if ( *a9 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( *((_BYTE *)v12 + v13) );
    v14 = v13 + 1;
  }
  else
  {
    v12 = &word_1800E6298;
    v14 = 1;
  }
  v29 = v14;
  v26 = a8;
  v28 = v12;
  v30 = 0;
  v27 = 4LL;
  v15 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( v15[v11] );
    v16 = 2 * v11 + 2;
  }
  else
  {
    v15 = &word_1800E629C;
    v16 = 2;
  }
  v21 = a6;
  v19 = a5;
  v23 = v15;
  v24 = v16;
  v25 = 0;
  v22 = 4LL;
  v20 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 7u, &v18);
}
