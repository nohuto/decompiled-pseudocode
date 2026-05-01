/*
 * XREFs of ?ShouldWakeOnRPCCalls@CLauncherUIMode@@UEAAJXZ @ 0x1803A4520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLauncherUIMode::ShouldWakeOnRPCCalls(CLauncherUIMode *this)
{
  return (*((_DWORD *)this + 16) & 8) == 0;
}
