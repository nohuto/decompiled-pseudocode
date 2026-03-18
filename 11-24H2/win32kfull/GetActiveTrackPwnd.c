/*
 * XREFs of GetActiveTrackPwnd @ 0x14027F30C
 * Callers:
 *     xxxActiveWindowTracking @ 0x140187404 (xxxActiveWindowTracking.c)
 *     xxxSystemTimerProc @ 0x14023EF10 (xxxSystemTimerProc.c)
 *     xxxTrackMouseMove @ 0x140255AC4 (xxxTrackMouseMove.c)
 *     zzzActiveCursorTracking @ 0x14027F630 (zzzActiveCursorTracking.c)
 * Callees:
 *     IsModelessMenuNotificationWindow @ 0x14006CD9C (IsModelessMenuNotificationWindow.c)
 *     DWP_GetEnabledPopup @ 0x1401BFF68 (DWP_GetEnabledPopup.c)
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x140252698 (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 */

struct tagWND *__fastcall GetActiveTrackPwnd(const struct tagWND *a1, __int64 a2)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1, a2) )
    return 0LL;
  LOBYTE(v4) = *(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0xC0;
  if ( (_BYTE)v4 == 64 )
  {
    do
    {
      EnabledPopup = (struct tagWND *)*((_QWORD *)EnabledPopup + 13);
      LOBYTE(v3) = *(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0xC0;
    }
    while ( (_BYTE)v3 == 64 );
  }
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  v5 = *(_QWORD *)(*((_QWORD *)EnabledPopup + 2) + 472LL);
  if ( v5 == *(_QWORD *)(W32GetUserSessionState(v4, v3) + 18944)
    && (EnabledPopup == *(struct tagWND **)(v5 + 128)
     || (unsigned int)IsModelessMenuNotificationWindow((__int64)EnabledPopup)) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)EnabledPopup + 3) + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
