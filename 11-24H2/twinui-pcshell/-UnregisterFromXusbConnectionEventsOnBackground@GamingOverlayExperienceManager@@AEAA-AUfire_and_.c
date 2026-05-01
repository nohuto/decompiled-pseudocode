/*
 * XREFs of ?UnregisterFromXusbConnectionEventsOnBackground@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x18035CF58
 * Callers:
 *     ?HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z @ 0x180351A38 (-HandleXusbDeviceConnectionEvent@GamingOverlayExperienceManager@@AEAAXW4_CM_NOTIFY_ACTION@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2 @ 0x18035CDAC (GamingOverlayExperienceManager--UnregisterFromXusbConnectionEventsOnBackground$_InitCoro$2.c)
 */

_BYTE *__fastcall GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground(__int64 a1, _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x40uLL);
  v6 = 0;
  GamingOverlayExperienceManager::UnregisterFromXusbConnectionEventsOnBackground__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
