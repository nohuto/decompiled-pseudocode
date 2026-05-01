/*
 * XREFs of ?RegisterNotifications@BroadcastDVRComponent@@QEAAXXZ @ 0x180062D14
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x180061E24 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ @ 0x180062EA4 (-BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates@GameDVRTraceProvider@@SAXXZ.c)
 *     ?RegisterForKGLOneSettingsUpdates@BroadcastDVRComponent@@AEAAJXZ @ 0x180062EFC (-RegisterForKGLOneSettingsUpdates@BroadcastDVRComponent@@AEAAJXZ.c)
 *     ?BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z @ 0x1802B8E90 (-BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error@GameDVRTraceProvider@@SAXJ@Z.c)
 */

void __fastcall BroadcastDVRComponent::RegisterNotifications(char *Context)
{
  HANDLE EventW; // rax
  int v3; // eax
  int v4; // edi
  _QWORD Recipient[3]; // [rsp+50h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0;
  if ( !RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\GameDVR",
          0,
          0LL,
          0,
          0x20019u,
          0LL,
          (PHKEY)Context + 47,
          0LL) )
  {
    EventW = CreateEventW(0LL, 0, 1, 0LL);
    *((_QWORD *)Context + 49) = EventW;
    if ( EventW )
      RegisterWaitForSingleObject(
        (PHANDLE)Context + 48,
        EventW,
        BroadcastDVRComponent::StaticRegistryChangeNotificationCallback,
        Context,
        0xFFFFFFFF,
        0);
  }
  v3 = BroadcastDVRComponent::RegisterForKGLOneSettingsUpdates(Context);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3B1,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\broadcastdvrprovider.cpp",
      (const char *)(unsigned int)v3);
    GameDVRTraceProvider::BroadcastDVRComponent_RegisterForKGLOneSettingsUpdates_Error(v4);
  }
  else
  {
    GameDVRTraceProvider::BroadcastDVRComponent_RegisteredKGLOneSettingsUpdates();
  }
  Recipient[1] = Context;
  Recipient[0] = BroadcastDVRComponent::StaticPowerNotificationCallback;
  PowerSettingRegisterNotification(&GUID_ACDC_POWER_SOURCE, 2u, Recipient, (PHPOWERNOTIFY)Context + 58);
  if ( !(unsigned int)RtlQueryWnfStateData(
                        &v7,
                        WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
                        BroadcastDVRComponent::StaticDisplayStateChangeWNFCallback,
                        Context,
                        0LL) )
    RtlSubscribeWnfStateChangeNotification(
      Context + 480,
      WNF_DX_NETWORK_DISPLAY_STATE_CHANGE_NOTIFICATION,
      v7,
      BroadcastDVRComponent::StaticDisplayStateChangeWNFCallback,
      Context,
      0LL,
      0,
      0);
}
