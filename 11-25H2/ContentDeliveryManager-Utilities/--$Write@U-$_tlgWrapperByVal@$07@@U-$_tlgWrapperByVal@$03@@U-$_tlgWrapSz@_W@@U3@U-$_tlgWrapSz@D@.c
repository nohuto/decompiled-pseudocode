/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@_W@@U3@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@_W@@5AEBU?$_tlgWrapSz@D@@@Z @ 0x18000399C
 * Callers:
 *     ?StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEB_W0PEBD@Z @ 0x18007DD58 (-StartActivity@TriggerManagerGetTriggeredItemsForStateActivity@ContentDeliveryManagerTelemetry@B.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7,
        const wchar_t **a8,
        const wchar_t **a9)
{
  __int64 v11; // rcx
  const wchar_t *v13; // rdx
  __int64 v14; // rax
  int v15; // eax
  int v16; // r8d
  const wchar_t *v17; // rdx
  __int64 v18; // rax
  int v19; // eax
  const wchar_t *v20; // rdx
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+30h] [rbp-61h] BYREF
  __int64 v23; // [rsp+50h] [rbp-41h]
  __int64 v24; // [rsp+58h] [rbp-39h]
  __int64 v25; // [rsp+60h] [rbp-31h]
  __int64 v26; // [rsp+68h] [rbp-29h]
  const wchar_t *v27; // [rsp+70h] [rbp-21h]
  int v28; // [rsp+78h] [rbp-19h]
  int v29; // [rsp+7Ch] [rbp-15h]
  const wchar_t *v30; // [rsp+80h] [rbp-11h]
  int v31; // [rsp+88h] [rbp-9h]
  int v32; // [rsp+8Ch] [rbp-5h]
  const wchar_t *v33; // [rsp+90h] [rbp-1h]
  int v34; // [rsp+98h] [rbp+7h]
  int v35; // [rsp+9Ch] [rbp+Bh]

  v11 = -1LL;
  v13 = *a9;
  if ( *a9 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_BYTE *)v13 + v14) );
    v15 = v14 + 1;
  }
  else
  {
    v13 = &word_1800E6298;
    v15 = 1;
  }
  v34 = v15;
  v16 = 2;
  v33 = v13;
  v35 = 0;
  v17 = *a8;
  if ( *a8 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v17[v18] );
    v19 = 2 * v18 + 2;
  }
  else
  {
    v17 = &word_1800E629C;
    v19 = 2;
  }
  v31 = v19;
  v30 = v17;
  v32 = 0;
  v20 = *a7;
  if ( *a7 )
  {
    do
      ++v11;
    while ( v20[v11] );
    v16 = 2 * v11 + 2;
  }
  else
  {
    v20 = &word_1800E629C;
  }
  v25 = a6;
  v23 = a5;
  v27 = v20;
  v28 = v16;
  v29 = 0;
  v26 = 4LL;
  v24 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 7u, &v22);
}
