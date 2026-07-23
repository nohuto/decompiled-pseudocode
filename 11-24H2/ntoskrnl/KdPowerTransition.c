/*
 * XREFs of KdPowerTransition @ 0x1404F6260
 * Callers:
 *     PopHandleNextState @ 0x140B67F50 (PopHandleNextState.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     KdPowerTransitionEx @ 0x1404C8870 (KdPowerTransitionEx.c)
 */

__int64 __fastcall KdPowerTransition(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return KdPowerTransitionEx(a1, a2);
}
