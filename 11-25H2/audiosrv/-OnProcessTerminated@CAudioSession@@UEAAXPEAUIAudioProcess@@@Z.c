/*
 * XREFs of ?OnProcessTerminated@CAudioSession@@UEAAXPEAUIAudioProcess@@@Z @ 0x180081DA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 */

void __fastcall CAudioSession::OnProcessTerminated(CAudioSession *this, struct IAudioProcess *a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      62LL,
      &WPP_6681b08aa41435022487e8d1ae4eb6cc_Traceguids,
      (char *)this - 8);
  }
  CAudioSession::PostStateCheckExpirationWork((CAudioSession *)((char *)this - 8));
}
