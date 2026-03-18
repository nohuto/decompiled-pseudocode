/*
 * XREFs of KdPowerTransition @ 0x1404F8980
 * Callers:
 *     PopHandleNextState @ 0x140B65E10 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1404CF5B0 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(int a1)
{
  return KdPowerTransitionEx(a1, 1);
}
