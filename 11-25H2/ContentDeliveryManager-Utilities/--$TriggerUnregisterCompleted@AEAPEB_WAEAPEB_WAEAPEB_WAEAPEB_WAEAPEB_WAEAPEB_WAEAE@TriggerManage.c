/*
 * XREFs of ??$TriggerUnregisterCompleted@AEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAPEB_WAEAE@TriggerManagerUnregisterActivity@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEB_W00000AEAEPEBD@Z @ 0x180079D4C
 * Callers:
 *     Windows::Services::TargetedContent::Internal::ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467e92bcd23893db___ @ 0x18007933C (Windows--Services--TargetedContent--Internal--ExecuteActionOnTrigger__lambda_fc3a11eeb0da6e3c467.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180001C8C (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@33333AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180002EB4 (--$Write@U-$_tlgWrapSz@_W@@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapSz@D@@@-$_tlgWrite.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044480 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 */

char __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TriggerManagerUnregisterActivity::TriggerUnregisterCompleted<wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,wchar_t const * &,unsigned char &>(
        const wchar_t **a1,
        const wchar_t **a2,
        const wchar_t **a3,
        const wchar_t **a4,
        const wchar_t **a5,
        const wchar_t **a6,
        _BYTE *a7,
        const wchar_t *a8)
{
  const struct _tlgProvider_t *v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  const wchar_t *v16; // rcx
  bool v18[8]; // [rsp+68h] [rbp-9h] BYREF
  const wchar_t *v19; // [rsp+70h] [rbp-1h] BYREF
  const wchar_t *v20; // [rsp+78h] [rbp+7h] BYREF
  const wchar_t *v21; // [rsp+80h] [rbp+Fh] BYREF
  const wchar_t *v22; // [rsp+88h] [rbp+17h] BYREF
  const wchar_t *v23; // [rsp+90h] [rbp+1Fh] BYREF
  const wchar_t *v24; // [rsp+98h] [rbp+27h] BYREF
  const wchar_t *v25; // [rsp+A0h] [rbp+2Fh] BYREF

  v12 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v12 > 5u )
  {
    LOBYTE(v12) = tlgKeywordOn((__int64)v12, 0x200000000000LL);
    if ( (_BYTE)v12 )
    {
      v19 = a8;
      v18[0] = *a7 != 0;
      v20 = *a6;
      v16 = *a5;
      v22 = *a4;
      v23 = *a3;
      v24 = *a2;
      v25 = *a1;
      v21 = v16;
      LOBYTE(v12) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapperByVal<1>,_tlgWrapSz<char>>(
                      v15,
                      byte_1801605F3,
                      v13,
                      v14,
                      &v25,
                      &v24,
                      &v23,
                      &v22,
                      &v21,
                      &v20,
                      (__int64)v18,
                      &v19);
    }
  }
  return (char)v12;
}
