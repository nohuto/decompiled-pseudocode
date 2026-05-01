/*
 * XREFs of ??$SnapBar_ShowSnapBarOnMonitor@AEBMAEBM@SnapFlyoutTelemetry@@SAXAEBM0@Z @ 0x1800E943C
 * Callers:
 *     ?ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z @ 0x180272A2C (-ShowSnapBarOnMonitor@SnapFlyoutHost@@AEAAXUPoint@Foundation@Windows@winrt@@@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800E8EDC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

int __fastcall SnapFlyoutTelemetry::SnapBar_ShowSnapBarOnMonitor<float const &,float const &>(int *a1, int *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  int v6; // xmm1_4
  int v8; // [rsp+50h] [rbp+18h] BYREF
  int v9; // [rsp+58h] [rbp+20h] BYREF

  v4 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v6 = *a1;
    v8 = *a2;
    v9 = v6;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v4,
                    byte_180815995,
                    0LL,
                    v5,
                    (__int64)&v9,
                    (__int64)&v8);
  }
  return (int)v4;
}
