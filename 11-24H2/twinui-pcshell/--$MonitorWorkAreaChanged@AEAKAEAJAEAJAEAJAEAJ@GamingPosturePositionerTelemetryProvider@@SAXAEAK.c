/*
 * XREFs of ??$MonitorWorkAreaChanged@AEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAKAEAJ111@Z @ 0x1804F6134
 * Callers:
 *     ?DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1804FC0C0 (-DisplaySettingsChange@GamingPosturePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333@Z @ 0x1800CB804 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEB.c)
 *     ?Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180505628 (-Provider@GamingPosturePositionerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GamingPosturePositionerTelemetryProvider::MonitorWorkAreaChanged<unsigned long &,long &,long &,long &,long &>(
        _DWORD *a1,
        int *a2,
        unsigned int *a3,
        unsigned int *a4,
        int *a5)
{
  const struct _tlgProvider_t *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  int v12; // r11d
  int v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  int v16; // [rsp+58h] [rbp-20h] BYREF
  int v17; // [rsp+5Ch] [rbp-1Ch] BYREF
  _DWORD v18[4]; // [rsp+60h] [rbp-18h] BYREF

  v9 = GamingPosturePositionerTelemetryProvider::Provider();
  if ( *(_DWORD *)v9 > 5u )
  {
    v10 = *a4;
    v11 = *a3;
    v17 = *a2;
    v12 = *a5;
    v18[0] = *a1;
    v14 = v12;
    v15 = v10;
    v16 = v11;
    LODWORD(v9) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v9,
                    byte_1808088AF,
                    v11,
                    v10,
                    (__int64)v18,
                    (__int64)&v17,
                    (__int64)&v16,
                    (__int64)&v15,
                    (__int64)&v14);
  }
  return (int)v9;
}
