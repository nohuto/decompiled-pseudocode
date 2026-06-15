/*
 * XREFs of PbmIsPlaying @ 0x18003B2F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008880 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 *     ?IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z @ 0x180038054 (-IsPlaying@CApplicationManager@@QEAAHPEAVCProcess@@H@Z.c)
 *     WPP_SF_dS @ 0x18003A1A0 (WPP_SF_dS.c)
 */

__int64 __fastcall PbmIsPlaying(void *a1, _DWORD *a2)
{
  int Process; // ebx
  CApplicationManager *v4; // rcx
  struct CProcess *v5; // rcx
  const wchar_t *v6; // rax
  struct CProcess *v8; // [rsp+48h] [rbp+10h] BYREF

  Process = 0;
  v8 = 0LL;
  if ( a2 )
  {
    *a2 = 0;
    if ( g_ApplicationManager )
    {
      Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v8);
      if ( Process >= 0 )
        *a2 = CApplicationManager::IsPlaying(v4, v8);
      v5 = v8;
      if ( v8 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v6 = L"Playing";
          if ( !*a2 )
            v6 = L"Paused";
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xCu,
            &WPP_07b734c94d88371036da2903467df5b5_Traceguids,
            *((_DWORD *)v8 + 40),
            v6);
          v5 = v8;
        }
        if ( v5 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release((volatile signed __int32 *)v5);
      }
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)Process;
}
