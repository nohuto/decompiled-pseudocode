/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1405488E4
 * Callers:
 *     HalpInitializeTimers @ 0x14053A610 (HalpInitializeTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x14053B40C (HalpTimerInitializeEarlyStallSource.c)
 * Callees:
 *     HalpHvDiscover @ 0x14055F020 (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x14055F328 (HalpWdatDiscover.c)
 *     HalpPmTimerDiscover @ 0x1405604A0 (HalpPmTimerDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x140560630 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x140560784 (HalpArtDiscover.c)
 *     HalpHpetDiscover @ 0x140560868 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x140560DA0 (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x1405610F8 (HalpTscDiscover.c)
 */

__int64 __fastcall HalpTimerRegisterBuiltinPluginsCommon(int a1)
{
  __int64 result; // rax

  if ( !a1 )
    return HalpTscDiscover();
  if ( a1 != 1 )
    return 0LL;
  result = HalpPmTimerDiscover();
  if ( (int)result >= 0 )
  {
    result = HalpHpetDiscover();
    if ( (int)result >= 0 )
    {
      result = HalpApicTimerDiscover();
      if ( (int)result >= 0 )
      {
        result = HalpArtDiscover();
        if ( (int)result >= 0 )
        {
          result = HalpHvWatchdogDiscover();
          if ( (int)result >= 0 )
          {
            result = HalpHvDiscover();
            if ( (int)result >= 0 )
              return HalpWdatDiscover();
          }
        }
      }
    }
  }
  return result;
}
