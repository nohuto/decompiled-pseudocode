/*
 * XREFs of GetActiveTrackPwnd @ 0x1C01B60AC
 * Callers:
 *     xxxSystemTimerProc @ 0x1C0005B40 (xxxSystemTimerProc.c)
 *     xxxTrackMouseMove @ 0x1C0024474 (xxxTrackMouseMove.c)
 *     xxxActiveWindowTracking @ 0x1C01B6A30 (xxxActiveWindowTracking.c)
 *     zzzActiveCursorTracking @ 0x1C01B6B90 (zzzActiveCursorTracking.c)
 * Callees:
 *     ?CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C000F41C (-CompositeAppHasForeground@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     IsModelessMenuNotificationWindow @ 0x1C00E14A8 (IsModelessMenuNotificationWindow.c)
 *     DWP_GetEnabledPopup @ 0x1C0156ABC (DWP_GetEnabledPopup.c)
 */

struct tagWND *__fastcall GetActiveTrackPwnd(const struct tagWND *a1)
{
  struct tagWND *EnabledPopup; // rbx
  __int64 v2; // rcx

  EnabledPopup = a1;
  if ( (unsigned int)CoreWindowProp::CompositeAppHasForeground(a1) )
    return 0LL;
  for ( ;
        (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0xC0) == 0x40;
        EnabledPopup = (struct tagWND *)*((_QWORD *)EnabledPopup + 13) )
  {
    ;
  }
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 8) != 0 )
    EnabledPopup = DWP_GetEnabledPopup(EnabledPopup);
  if ( !EnabledPopup )
    return 0LL;
  if ( (*(_BYTE *)(*((_QWORD *)EnabledPopup + 5) + 31LL) & 0x10) == 0 )
    return 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)EnabledPopup + 2) + 432LL);
  if ( v2 == gpqForeground
    && (EnabledPopup == *(struct tagWND **)(v2 + 128) || (unsigned int)IsModelessMenuNotificationWindow()) )
  {
    return 0LL;
  }
  if ( EnabledPopup == *(struct tagWND **)(*(_QWORD *)(*((_QWORD *)EnabledPopup + 3) + 8LL) + 168LL) )
    return 0LL;
  else
    return EnabledPopup;
}
