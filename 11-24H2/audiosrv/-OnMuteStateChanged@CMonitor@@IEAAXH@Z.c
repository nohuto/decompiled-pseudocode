/*
 * XREFs of ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x18011D134
 * Callers:
 *     ?OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x18011AD80 (-OnNotify@CaptureMonitor@CMonitorManager@@UEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x1800C0208 (WPP_SF_.c)
 *     ?Start@CMonitor@@QEAAJXZ @ 0x18011D984 (-Start@CMonitor@@QEAAJXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011DCE0 (-Stop@CMonitor@@QEAAXXZ.c)
 *     WPP_SF_ldl @ 0x18011E36C (WPP_SF_ldl.c)
 */

void __fastcall CMonitor::OnMuteStateChanged(CMonitor *this, __int64 a2, __int64 a3)
{
  int v3; // edi
  _QWORD *v5; // rcx
  int v6; // eax

  v3 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ldl(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      a2,
      a3,
      (unsigned int)a2,
      *((_DWORD *)this + 18),
      *((unsigned __int8 *)this + 78));
    v5 = WPP_GLOBAL_Control;
  }
  if ( *((_BYTE *)this + 78) )
  {
    v6 = *((_DWORD *)this + 18);
    if ( v3 )
    {
      if ( v6 == 3 )
      {
        if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x800000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
          WPP_SF_(v5[2], 40LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
        CMonitor::Stop(this);
      }
    }
    else if ( ((v6 - 2) & 0xFFFFFFFD) == 0 )
    {
      if ( v5 != &WPP_GLOBAL_Control && (*((_DWORD *)v5 + 7) & 0x800000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
        WPP_SF_(v5[2], 41LL, &WPP_755387bd23fa3df5d8dd9259737f5712_Traceguids);
      CMonitor::Start(this);
    }
  }
}
