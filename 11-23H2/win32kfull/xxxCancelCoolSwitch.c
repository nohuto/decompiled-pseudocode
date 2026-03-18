/*
 * XREFs of xxxCancelCoolSwitch @ 0x1C0152EF2
 * Callers:
 *     EditionHandleAltTabCancel @ 0x1C0094720 (EditionHandleAltTabCancel.c)
 *     EditionHandleAltTab @ 0x1C009F640 (EditionHandleAltTab.c)
 *     EditionCancelCoolSwitch @ 0x1C0152ED0 (EditionCancelCoolSwitch.c)
 *     xxxNextWindow @ 0x1C01C9C54 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01CA428 (xxxOldNextWindow.c)
 *     xxxSwitchWndProc @ 0x1C01CAD30 (xxxSwitchWndProc.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00F0BC0 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C00F2000 (xxxDestroyWindow.c)
 */

__int64 xxxCancelCoolSwitch()
{
  __int64 v0; // rcx
  __int64 *v1; // rax

  if ( gspwndAltTab )
    v0 = *(_QWORD *)(gspwndAltTab + 16);
  else
    v0 = 0LL;
  if ( v0 != gptiCurrent )
    return 0LL;
  xxxWindowEvent(0x15u, (struct tagWND *)gspwndAltTab, -4, 0, 1);
  v1 = (__int64 *)HMAssignmentUnlock(&gspwndAltTab);
  if ( !v1 )
    return 0LL;
  xxxDestroyWindow(v1);
  return 1LL;
}
