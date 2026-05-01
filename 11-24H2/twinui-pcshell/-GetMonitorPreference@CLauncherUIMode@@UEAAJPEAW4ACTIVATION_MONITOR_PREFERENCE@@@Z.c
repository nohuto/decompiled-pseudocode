/*
 * XREFs of ?GetMonitorPreference@CLauncherUIMode@@UEAAJPEAW4ACTIVATION_MONITOR_PREFERENCE@@@Z @ 0x1803A3230
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLauncherUIMode::GetMonitorPreference(CLauncherUIMode *this, enum ACTIVATION_MONITOR_PREFERENCE *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 24);
  return 0LL;
}
