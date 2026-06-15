/*
 * XREFs of ?SkipVoiceClarityEffectPack@EffectPackConfigurationManager@@AEAA_NU_GUID@@@Z @ 0x1800FC528
 * Callers:
 *     ?OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z @ 0x1800FBD50 (-OnMediaNotification@EffectPackConfigurationManager@@UEAAJPEAUMEDIA_NOTIFICATION_BLOCK@@@Z.c)
 *     ?ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ @ 0x1800FC164 (-ScanForInstalledEffectPacks@EffectPackConfigurationManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800020BC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

char __fastcall EffectPackConfigurationManager::SkipVoiceClarityEffectPack(
        EffectPackConfigurationManager *this,
        struct _GUID *a2)
{
  bool v2; // zf
  _DWORD *v3; // rcx
  int v5; // [rsp+50h] [rbp+8h] BYREF
  int v6; // [rsp+54h] [rbp+Ch]
  DWORD v7; // [rsp+60h] [rbp+18h] BYREF

  v6 = HIDWORD(this);
  v5 = 0;
  v2 = *(_QWORD *)&a2->Data1 == *(_QWORD *)&CLSID_VOCAAudioEffectPackID.Data1;
  v7 = 4;
  if ( !v2
    || *(_QWORD *)a2->Data4 != *(_QWORD *)CLSID_VOCAAudioEffectPackID.Data4
    || RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
         L"SkipVoiceClarity",
         0x10u,
         0LL,
         &v5,
         &v7)
    || !v5 )
  {
    return 0;
  }
  v3 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v3 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v3,
      (int)&unk_1801ACF62);
  return 1;
}
