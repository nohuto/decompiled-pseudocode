/*
 * XREFs of ??$EM_IhmChange@AEAW4IHM_DISPLAY_MODE@@@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXAEAW4IHM_DISPLAY_MODE@@@Z @ 0x18036B3EC
 * Callers:
 *     ?OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x18021CA78 (-OnInputHostChanging@CActionCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800D09B8 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800E925C (-Provider@NotificationCenterLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall NotificationCenterUITelemetry::NotificationCenterTelemetry::EM_IhmChange<enum IHM_DISPLAY_MODE &>(
        int *a1)
{
  const struct _tlgProvider_t *v2; // rax
  __int64 v3; // r9
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v2 = NotificationCenterLogging::Provider((__int64)a1);
  if ( *(_DWORD *)v2 > 5u )
  {
    v5 = *a1;
    LODWORD(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
                    (__int64)v2,
                    byte_1807E7CC3,
                    0LL,
                    v3,
                    (__int64)&v5);
  }
  return (int)v2;
}
