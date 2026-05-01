/*
 * XREFs of ?RmpGameModeUnapplyGraphicsPriority@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x1800673A0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180060FEC (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z @ 0x18006744C (-RmpSystemSetGpuYieldPercentage@@YAJKPEAU_D3DKMT_SCHEDULING_YIELDPERCENTAGE_FLAGS@@@Z.c)
 *     ?RmpSystemSetGpuMemoryBudget@@YAJKK@Z @ 0x1800675FC (-RmpSystemSetGpuMemoryBudget@@YAJKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x1800915B0 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpGameModeUnapplyGraphicsPriority(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+50h] [rbp+8h] BYREF
  int v7; // [rsp+60h] [rbp+18h] BYREF
  int v8; // [rsp+68h] [rbp+20h] BYREF

  if ( (*((_BYTE *)a1 + 149) & 1) == 0 )
  {
    if ( (int)RmpSystemSetGpuYieldPercentage(*((_DWORD *)a1 + 12), (struct _RM_GAME_MODE_CONTEXT *)((char *)a1 + 60)) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( (int)RmpSystemSetGpuMemoryBudget(*((_DWORD *)a1 + 13), *((_DWORD *)a1 + 14)) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    {
      v6 = *((_DWORD *)a1 + 14);
      v7 = *((_DWORD *)a1 + 13);
      v8 = *((_DWORD *)a1 + 12);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v3,
        byte_1800D831B,
        v4,
        v5,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6);
    }
  }
}
