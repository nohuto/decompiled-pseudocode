/*
 * XREFs of ?GetSwitchAppFlags@CLauncherUIMode@@UEAAJPEAW4SWITCH_APP_FLAGS@@@Z @ 0x180220210
 * Callers:
 *     ?GetPinningSource@TaskbarLayoutItem@@W7EAAJPEAW4TaskbarPinningSource@@@Z @ 0x180322A50 (-GetPinningSource@TaskbarLayoutItem@@W7EAAJPEAW4TaskbarPinningSource@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLauncherUIMode::GetSwitchAppFlags(CLauncherUIMode *this, enum SWITCH_APP_FLAGS *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 30);
  return 0LL;
}
