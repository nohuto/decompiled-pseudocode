/*
 * XREFs of ?RmpGameModeTryApplyPowerProfile@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008DA90
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18003C080 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z @ 0x180068840 (-RmpSystemEnableDisableGameModePowerProfile@@YAJE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180091A10 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall RmpGameModeTryApplyPowerProfile(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v7; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 26) || (*((_BYTE *)a2 + 144) & 8) == 0 )
    return 255LL;
  v2 = RmpSystemEnableDisableGameModePowerProfile(1);
  if ( v2 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
  {
    v7 = v2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v3,
      byte_1800D9527,
      v4,
      v5,
      (__int64)&v7);
  }
  return (unsigned int)v2;
}
