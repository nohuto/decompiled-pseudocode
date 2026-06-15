/*
 * XREFs of ?LoadUserSettings@@YAXPEAVTSSession@@PEAUHKEY__@@@Z @ 0x180040D20
 * Callers:
 *     ?RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z @ 0x180011210 (-RpcTryInitializeUserSettings@@YAJPEAVTSSession@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800019F0 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18000B8F0 (-Provider@AudioSrvPolicyManagerTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall LoadUserSettings(DWORD *a1, HKEY a2)
{
  const struct _tlgProvider_t *v4; // rax
  DWORD v5; // ebx
  DWORD pvData; // [rsp+50h] [rbp+8h] BYREF
  DWORD pcbData; // [rsp+60h] [rbp+18h] BYREF

  v4 = AudioSrvPolicyManagerTelemetryProvider::Provider();
  if ( *(_DWORD *)v4 > 4u )
  {
    pvData = *a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      (__int64)v4,
      (__int64)&unk_18005B20D);
  }
  pvData = 0;
  v5 = 1;
  pcbData = 4;
  a1[272] = 1;
  if ( !RegGetValueW(a2, 0LL, L"UserDuckingPreference", 0x10u, 0LL, &pvData, &pcbData) )
  {
    if ( pvData <= 3 )
      v5 = pvData;
    a1[272] = v5;
  }
}
