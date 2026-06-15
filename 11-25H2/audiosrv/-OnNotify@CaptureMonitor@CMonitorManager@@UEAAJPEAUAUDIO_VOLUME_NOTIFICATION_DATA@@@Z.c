/*
 * XREFs of ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x180112F20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x1801152F4 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 */

__int64 __fastcall CMonitorManager::CaptureMonitor::OnNotify(
        CMonitor **this,
        struct AUDIO_VOLUME_NOTIFICATION_DATA *a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x5Bu,
      (__int64)&WPP_2686b636a530381dd1b5bdfbdd777686_Traceguids,
      a2->bMuted);
  }
  CMonitor::OnMuteStateChanged(this[26], a2->bMuted);
  return 0LL;
}
