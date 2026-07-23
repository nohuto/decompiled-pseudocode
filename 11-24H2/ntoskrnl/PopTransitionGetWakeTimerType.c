/*
 * XREFs of PopTransitionGetWakeTimerType @ 0x1406F9C68
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopTransitionGetWakeTimerType(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( a1 == -1 )
    {
      return 4LL;
    }
    else if ( a1 == -2 )
    {
      return 5LL;
    }
    else
    {
      result = 6LL;
      if ( a1 != -3 )
        return *(unsigned int *)(a1 + 8);
    }
  }
  return result;
}
