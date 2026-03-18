/*
 * XREFs of KdPowerTransition @ 0x1404F6150
 * Callers:
 *     PopHandleNextState @ 0x140B55D00 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1404CF5D0 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  return KdPowerTransitionEx(a1, 1);
}
