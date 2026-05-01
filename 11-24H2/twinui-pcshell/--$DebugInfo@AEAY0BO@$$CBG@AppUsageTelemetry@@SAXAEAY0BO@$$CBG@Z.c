/*
 * XREFs of ??$DebugInfo@AEAY0BO@$$CBG@AppUsageTelemetry@@SAXAEAY0BO@$$CBG@Z @ 0x180573584
 * Callers:
 *     ?OnTerminateTimer@Win32AppStateManager@@AEAAXXZ @ 0x180575090 (-OnTerminateTimer@Win32AppStateManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180164DB8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180208910 (-Provider@AppUsageTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall AppUsageTelemetry::DebugInfo<unsigned short const (&)[30]>(const WCHAR *a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r9
  const WCHAR *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = AppUsageTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v1 > 5u )
  {
    v4 = L"Termination timer event fired";
    LODWORD(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v1,
                    byte_1808115A6,
                    0LL,
                    v2,
                    &v4);
  }
  return (int)v1;
}
