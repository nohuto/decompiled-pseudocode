/*
 * XREFs of IsModelessMenuNotificationWindow @ 0x1C00E14A8
 * Callers:
 *     xxxDWP_DoNCActivate @ 0x1C00E1260 (xxxDWP_DoNCActivate.c)
 *     GetActiveTrackPwnd @ 0x1C01B60AC (GetActiveTrackPwnd.c)
 * Callees:
 *     GetpwndNotifypMenuState @ 0x1C00E14CC (GetpwndNotifypMenuState.c)
 */

__int64 IsModelessMenuNotificationWindow()
{
  __int64 v0; // rax
  unsigned int v1; // ecx

  v0 = GetpwndNotifypMenuState();
  v1 = 0;
  if ( v0 )
    return (*(_DWORD *)(v0 + 8) & 0x100) != 0;
  return v1;
}
