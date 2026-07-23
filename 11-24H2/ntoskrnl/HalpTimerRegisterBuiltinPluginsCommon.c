/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x1405461A4
 * Callers:
 *     HalpInitializeTimers @ 0x140537E50 (HalpInitializeTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140538C4C (HalpTimerInitializeEarlyStallSource.c)
 * Callees:
 *     HalpHvDiscover @ 0x14055CC50 (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x14055CF58 (HalpWdatDiscover.c)
 *     HalpPmTimerDiscover @ 0x14055E0D0 (HalpPmTimerDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x14055E260 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x14055E3B4 (HalpArtDiscover.c)
 *     HalpHpetDiscover @ 0x14055E498 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x14055E9D0 (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x14055ED28 (HalpTscDiscover.c)
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
