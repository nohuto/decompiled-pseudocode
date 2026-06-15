/*
 * XREFs of ?GetVolume@CServerAudioSessionControl@@UEAAJPEAM@Z @ 0x180065600
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_SS @ 0x1800C5D00 (WPP_SF_SS.c)
 */

__int64 __fastcall CServerAudioSessionControl::GetVolume(CServerAudioSessionControl *this, float *a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      26,
      (unsigned int)&WPP_ab1375f163c73c4b99e57586ff560771_Traceguids,
      0,
      0LL);
  }
  return (*(__int64 (__fastcall **)(_QWORD, float *))(**((_QWORD **)this + 9) + 272LL))(*((_QWORD *)this + 9), a2);
}
