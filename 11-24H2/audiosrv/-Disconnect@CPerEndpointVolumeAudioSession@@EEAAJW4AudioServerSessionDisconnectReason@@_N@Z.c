/*
 * XREFs of ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800C1410
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18001DA80 (-Disconnect@CAudioSession@@UEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ @ 0x180072C58 (-DestroyVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAXXZ.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Disconnect(CPerEndpointVolumeAudioSession *a1, int a2, char a3)
{
  int v6; // eax
  unsigned int v7; // ebx

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_ea93f1868512325b454513e390c361b8_Traceguids, a1);
  }
  v6 = CAudioSession::Disconnect((__int64)a1, a2, a3);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("CPerEndpointVolumeAudioSession::Disconnect", 2126, v6);
  else
    CPerEndpointVolumeAudioSession::DestroyVolumeStrip(a1);
  return v7;
}
