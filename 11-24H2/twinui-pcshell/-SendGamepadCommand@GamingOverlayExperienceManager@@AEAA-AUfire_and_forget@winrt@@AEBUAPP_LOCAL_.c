/*
 * XREFs of ?SendGamepadCommand@GamingOverlayExperienceManager@@AEAA?AUfire_and_forget@winrt@@AEBUAPP_LOCAL_DEVICE_ID@@W4SystemButtons@Gaming@Internal@Windows@@W4GamepadButtonEventKind@@@Z @ 0x18035A2C0
 * Callers:
 *     ?HandleNexusButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x180351840 (-HandleNexusButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadB.c)
 *     ?HandleShareButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadButtonEventKind@@@Z @ 0x180351870 (-HandleShareButtonEvent@GamingOverlayExperienceManager@@AEAAXAEBUAPP_LOCAL_DEVICE_ID@@W4GamepadB.c)
 *     ?HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z @ 0x180351968 (-HandleTrackedButtonChange@GamingOverlayExperienceManager@@AEAAXUwrite_lock_required@wil@@_N_K@Z.c)
 *     ?OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Windows@winrt@@@Z @ 0x180355CF0 (-OnShortPressTimer@GamingOverlayExperienceManager@@AEAAXUThreadPoolTimer@Threading@System@Window.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     GamingOverlayExperienceManager::SendGamepadCommand$_InitCoro$2 @ 0x180359C98 (GamingOverlayExperienceManager--SendGamepadCommand$_InitCoro$2.c)
 */

_BYTE *GamingOverlayExperienceManager::SendGamepadCommand(__int64 a1, _BYTE *a2, __int64 a3, int a4, ...)
{
  char *v7; // rax
  int v9; // [rsp+178h] [rbp+10h] BYREF
  int v10; // [rsp+188h] [rbp+20h] BYREF
  va_list va; // [rsp+190h] [rbp+28h] BYREF

  va_start(va, a4);
  v10 = a4;
  v7 = (char *)operator new(0x110uLL);
  v9 = 0;
  GamingOverlayExperienceManager::SendGamepadCommand__InitCoro_2(&v9, v7, a2, a3, &v10, (int *)va, a1);
  return a2;
}
