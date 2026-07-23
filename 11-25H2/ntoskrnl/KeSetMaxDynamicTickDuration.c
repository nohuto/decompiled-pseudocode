/*
 * XREFs of KeSetMaxDynamicTickDuration @ 0x1405AD284
 * Callers:
 *     PopEnforceDeepSleep @ 0x140AA6B7C (PopEnforceDeepSleep.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeSetMaxDynamicTickDuration(unsigned __int64 a1)
{
  __int64 result; // rax

  result = KeMaximumIncrement;
  if ( KeMaximumIncrement < a1 )
    a1 = KeMaximumIncrement;
  _InterlockedExchange64(&KiMaxDynamicTickDuration, a1);
  return result;
}
