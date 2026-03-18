/*
 * XREFs of ?IsNonClientDpiScalingEnabledX@@YA_NPEAUtagWND@@@Z @ 0x140194494
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x140099644 (xxxTrackPopupMenuEx.c)
 *     NtUserIsNonClientDpiScalingEnabled @ 0x1401943F0 (NtUserIsNonClientDpiScalingEnabled.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 */

bool __fastcall IsNonClientDpiScalingEnabledX(struct tagWND *a1)
{
  char v1; // r9

  v1 = 0;
  if ( (*((_DWORD *)a1 + 95) & 0x80000) != 0 )
    return IsTopLevelWindow((__int64)a1);
  return v1;
}
