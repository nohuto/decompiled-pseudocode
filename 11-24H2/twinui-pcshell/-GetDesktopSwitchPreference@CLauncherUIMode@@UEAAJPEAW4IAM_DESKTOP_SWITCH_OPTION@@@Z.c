/*
 * XREFs of ?GetDesktopSwitchPreference@CLauncherUIMode@@UEAAJPEAW4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x1803A3150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLauncherUIMode::GetDesktopSwitchPreference(
        CLauncherUIMode *this,
        enum IAM_DESKTOP_SWITCH_OPTION *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 33);
  return 0LL;
}
