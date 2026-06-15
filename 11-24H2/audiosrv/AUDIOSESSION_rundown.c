/*
 * XREFs of AUDIOSESSION_rundown @ 0x18000FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x180010270 (-RemoveClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     WPP_SF_q @ 0x1800C34E4 (WPP_SF_q.c)
 */

__int64 __fastcall AUDIOSESSION_rundown(CServerAudioSessionControl *this)
{
  __int64 result; // rax

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, this);
  }
  result = CServerAudioSessionControl::RemoveClientReference(this);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    return WPP_SF_D(
             *((_QWORD *)WPP_GLOBAL_Control + 2),
             42LL,
             &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
             (unsigned int)result);
  }
  return result;
}
