/*
 * XREFs of PbmRegisterPlaybackManagerNotifications @ 0x18003DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000AA80 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18003B4D0 (-RegisterSoundLevelNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 *     ?RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18003B5A8 (-RegisterTrackStateNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@W4__MIDL___MIDL_it.c)
 */

__int64 __fastcall PbmRegisterPlaybackManagerNotifications(void *a1, int a2, int a3)
{
  int Process; // edi
  struct _RTL_CRITICAL_SECTION *v6; // rcx
  struct CProcess *v9; // [rsp+48h] [rbp+20h] BYREF

  Process = 0;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v9);
    if ( Process >= 0 )
    {
      if ( !a2 )
        return (unsigned int)CApplicationManager::RegisterSoundLevelNotificationClient(v6, 0LL, a3);
      if ( a2 == 1 )
        return (unsigned int)CApplicationManager::RegisterTrackStateNotificationClient(v6, 0LL, a3);
    }
  }
  return (unsigned int)Process;
}
