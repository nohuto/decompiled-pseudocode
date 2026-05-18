/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180003C55
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x1800032FC (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x1800033DC (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x1800034BC (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180003628 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
