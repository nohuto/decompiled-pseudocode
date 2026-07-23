/*
 * XREFs of PopFxDebuggerPowerCriticalTransitionCallback @ 0x1405D61D0
 * Callers:
 *     <none>
 * Callees:
 *     PopFxBugCheck @ 0x1403A9948 (PopFxBugCheck.c)
 *     KdPowerTransitionEx @ 0x1404C8870 (KdPowerTransitionEx.c)
 *     KdCallPowerHandlers @ 0x1405AC7AC (KdCallPowerHandlers.c)
 */

__int64 __fastcall PopFxDebuggerPowerCriticalTransitionCallback(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rdx

  if ( PopAutomaticDebuggerTransitions )
    PopFxBugCheck(0x61EuLL, 0LL, 0LL, 0LL);
  if ( a3 )
  {
    KdCallPowerHandlers(1u);
    LOBYTE(v3) = 1;
    return KdPowerTransitionEx(2147483649LL, v3);
  }
  else
  {
    LOBYTE(a2) = 1;
    KdPowerTransitionEx(2147483652LL, a2);
    return KdCallPowerHandlers(4u);
  }
}
