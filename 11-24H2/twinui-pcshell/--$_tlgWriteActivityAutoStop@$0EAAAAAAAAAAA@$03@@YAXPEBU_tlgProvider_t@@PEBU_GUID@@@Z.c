/*
 * XREFs of ??$_tlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x180459E6C
 * Callers:
 *     ??1?$_TlgActivityBase@V?$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VLauncherTelemetryLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$03@@IEAA@XZ @ 0x180212D2C (--1-$_TlgActivityBase@V-$ActivityData@VLauncherTelemetryLogging@@U_TlgReflectorTag__ea_180212D2C.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$03@@IEAA@XZ @ 0x18050A178 (--1-$_TlgActivityBase@V-$ActivityData@VWindowManagementLogging@@U_TlgReflectorTag_P_ea_18050A178.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800B40C4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 */

void __fastcall _tlgWriteActivityAutoStop<70368744177664,4>(_DWORD *a1)
{
  __int64 v1; // rcx
  const GUID *v2; // r9

  if ( *a1 > 4u )
  {
    if ( tlgKeywordOn((__int64)a1, 0x400000000000LL) )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        v1,
        byte_1807F97E2,
        v2);
  }
}
