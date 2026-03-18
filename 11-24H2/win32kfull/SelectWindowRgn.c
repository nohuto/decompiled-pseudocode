/*
 * XREFs of SelectWindowRgn @ 0x140030A9C
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x140226CB0 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 *     ?FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z @ 0x14022ABC8 (-FixupMonitorRgn@@YAXPEAUtagWND@@_N@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x14022D690 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     NtUserSetWindowRgnEx @ 0x14029F2D0 (NtUserSetWindowRgnEx.c)
 * Callees:
 *     ?GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ @ 0x140031010 (-GetExplicitClipRgn@tagWND@@QEBAPEAUHRGN__@@XZ.c)
 *     ?ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ @ 0x140031194 (-ClearClipRgnOrMaxClip@tagWND@@QEAAXXZ.c)
 *     SetOrClrWF @ 0x140049160 (SetOrClrWF.c)
 *     DirtyVisRgnTrackers @ 0x1400497E8 (DirtyVisRgnTrackers.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 *     GreUpdateSpriteClipRgn @ 0x1400914A8 (GreUpdateSpriteClipRgn.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400A5B9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1400F74E0 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     ?GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z @ 0x1401C0128 (-GetWindowCompositedDpi@@YAGPEBUtagWND@@@Z.c)
 */

void __fastcall SelectWindowRgn(struct tagWND *a1, __int64 a2, unsigned int a3)
{
  bool v5; // bp
  __int64 v6; // r9
  __int64 MonitorRegionForDpi; // rsi
  char v8; // bl
  __int64 v9; // rcx
  unsigned __int16 WindowCompositedDpi; // ax
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  bool v14; // bp
  __int64 UserSessionState; // rax
  int v16; // r8d
  int v17; // edx

  v5 = *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) != 0LL;
  if ( tagWND::GetExplicitClipRgn(a1) && v6 == 2 )
    return;
  MonitorRegionForDpi = 0LL;
  v8 = 1;
  if ( v6 != 1 )
    MonitorRegionForDpi = v6;
  SetOrClrWF(0LL, a1, 1288LL, 1LL);
  tagWND::ClearClipRgnOrMaxClip(a1);
  if ( MonitorRegionForDpi == 2 )
  {
    MonitorRegionForDpi = 0LL;
    if ( ***(_DWORD ***)(W32GetUserSessionState() + 57008) > 1u )
    {
      v9 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v9 + 31) & 1) != 0 && (*(_BYTE *)(v9 + 19) & 0x40) != 0 )
      {
        if ( _MonitorFromWindowInternal(a1, 0, 0) )
        {
          WindowCompositedDpi = GetWindowCompositedDpi(a1);
          MonitorRegionForDpi = CreateMonitorRegionForDpi(v11, WindowCompositedDpi);
          if ( MonitorRegionForDpi )
          {
            SetOrClrWF(1LL, a1, 1288LL, 1LL);
            if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
              || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 0x80u) == 0
              || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 4u )
            {
              v8 = 0;
            }
            v14 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
            if ( v8 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            {
              UserSessionState = W32GetUserSessionState();
              LOBYTE(v16) = v14;
              LOBYTE(v17) = v8;
              WPP_RECORDER_AND_TRACE_SF_q(
                *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
                v17,
                v16,
                *(_QWORD *)(UserSessionState + 69416),
                4,
                8,
                34,
                (__int64)&WPP_203c4b46951733b4726feca591f84008_Traceguids,
                (char)a1);
            }
            goto LABEL_7;
          }
        }
      }
    }
LABEL_15:
    if ( !v5 )
      return;
    goto LABEL_16;
  }
  if ( !MonitorRegionForDpi )
    goto LABEL_15;
  GreOffsetRgn(
    MonitorRegionForDpi,
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 88LL),
    *(unsigned int *)(*((_QWORD *)a1 + 5) + 92LL));
LABEL_7:
  GreSetRegionOwner(MonitorRegionForDpi, 0LL);
  *(_QWORD *)(*((_QWORD *)a1 + 5) + 168LL) = MonitorRegionForDpi;
LABEL_16:
  if ( (unsigned int)IsWindowDesktopComposed(a1) )
  {
    if ( (unsigned int)IsTopLevelWindow(a1) )
    {
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 8) != 0 )
      {
        v12 = *(_QWORD *)a1;
        v13 = W32GetUserSessionState();
        GreUpdateSpriteClipRgn(*(_QWORD *)(*(_QWORD *)(v13 + 57008) + 48LL), v12, MonitorRegionForDpi, a3);
      }
    }
    DirtyVisRgnTrackers(a1);
  }
}
