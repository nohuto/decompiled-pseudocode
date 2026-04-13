/*
 * XREFs of ??$TaskUnregistered@PEB_WAEAY0CH@_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WAEAY0CH@_WPEBD@Z @ 0x1800B5294
 * Callers:
 *     _lambda_7779f375762769ec339d0b17f2cf373b_::operator() @ 0x1800B5624 (_lambda_7779f375762769ec339d0b17f2cf373b_--operator().c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@_W@@U1@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@_W@@3AEBU?$_tlgWrapSz@D@@@Z @ 0x180003D90 (--$Write@U-$_tlgWrapSz@_W@@U1@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@@XZ @ 0x180044660 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAPEBU_tlgProvider_t@.c)
 */

int __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::TaskUnregistered<wchar_t const *,wchar_t (&)[39]>(
        const wchar_t **a1,
        const wchar_t *a2,
        const wchar_t *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  const wchar_t *v10; // [rsp+40h] [rbp-18h] BYREF
  const wchar_t *v11; // [rsp+48h] [rbp-10h] BYREF
  const wchar_t *v12; // [rsp+78h] [rbp+20h] BYREF

  v6 = ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v11 = *a1;
    v12 = a3;
    v10 = a2;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<wchar_t>,_tlgWrapSz<wchar_t>,_tlgWrapSz<char>>(
                    (__int64)v6,
                    byte_18016449F,
                    v7,
                    v8,
                    &v11,
                    &v10,
                    &v12);
  }
  return (int)v6;
}
