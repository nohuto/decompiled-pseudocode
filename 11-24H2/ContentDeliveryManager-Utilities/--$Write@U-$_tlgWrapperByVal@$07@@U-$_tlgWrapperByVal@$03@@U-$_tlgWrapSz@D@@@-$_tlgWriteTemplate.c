/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1800038DC
 * Callers:
 *     ?StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007E260 (-StartActivity@TriggerManagerRegisterActivity@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     ?StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@QEAAXPEBD@Z @ 0x18007E2F4 (-StartActivity@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@Conte.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180001CB8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        const GUID *a4,
        __int64 a5,
        __int64 a6,
        const wchar_t **a7)
{
  const wchar_t *v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+30h] [rbp-68h] BYREF
  __int64 v13; // [rsp+50h] [rbp-48h]
  __int64 v14; // [rsp+58h] [rbp-40h]
  __int64 v15; // [rsp+60h] [rbp-38h]
  __int64 v16; // [rsp+68h] [rbp-30h]
  const wchar_t *v17; // [rsp+70h] [rbp-28h]
  int v18; // [rsp+78h] [rbp-20h]
  int v19; // [rsp+7Ch] [rbp-1Ch]

  v8 = *a7;
  if ( *a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *((_BYTE *)v8 + v9) );
    v10 = v9 + 1;
  }
  else
  {
    v8 = &word_1800E78B8;
    v10 = 1;
  }
  v18 = v10;
  v15 = a6;
  v13 = a5;
  v17 = v8;
  v19 = 0;
  v16 = 4LL;
  v14 = 8LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, a4, 5u, &v12);
}
