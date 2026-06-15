/*
 * XREFs of ??0CServerAudioSessionControl@@IEAA@XZ @ 0x1800536B0
 * Callers:
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x1800533D0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 * Callees:
 *     WPP_SF_S @ 0x1800C17A4 (WPP_SF_S.c)
 */

CServerAudioSessionControl *__fastcall CServerAudioSessionControl::CServerAudioSessionControl(
        CServerAudioSessionControl *this)
{
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 32), 0, 0);
  *((_QWORD *)this + 9) = 0LL;
  *((_BYTE *)this + 84) = 0;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 10LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids);
  }
  return this;
}
