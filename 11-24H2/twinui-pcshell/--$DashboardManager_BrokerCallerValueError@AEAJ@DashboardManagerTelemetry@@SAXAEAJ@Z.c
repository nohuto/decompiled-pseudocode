/*
 * XREFs of ??$DashboardManager_BrokerCallerValueError@AEAJ@DashboardManagerTelemetry@@SAXAEAJ@Z @ 0x1805C3344
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x180283A40 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x180191A90 (-Provider@DashboardManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall DashboardManagerTelemetry::DashboardManager_BrokerCallerValueError<long &>(int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = DashboardManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                    (__int64)v2,
                    byte_18081705C,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}
