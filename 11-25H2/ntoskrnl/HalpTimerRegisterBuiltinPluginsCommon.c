/*
 * XREFs of HalpTimerRegisterBuiltinPluginsCommon @ 0x140545FF4
 * Callers:
 *     HalpInitializeTimers @ 0x140537E60 (HalpInitializeTimers.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x140538C5C (HalpTimerInitializeEarlyStallSource.c)
 * Callees:
 *     HalpHvDiscover @ 0x14055C720 (HalpHvDiscover.c)
 *     HalpWdatDiscover @ 0x14055CA28 (HalpWdatDiscover.c)
 *     HalpPmTimerDiscover @ 0x14055DBA0 (HalpPmTimerDiscover.c)
 *     HalpHvWatchdogDiscover @ 0x14055DD30 (HalpHvWatchdogDiscover.c)
 *     HalpArtDiscover @ 0x14055DE84 (HalpArtDiscover.c)
 *     HalpHpetDiscover @ 0x14055DF68 (HalpHpetDiscover.c)
 *     HalpApicTimerDiscover @ 0x14055E4A0 (HalpApicTimerDiscover.c)
 *     HalpTscDiscover @ 0x14055E7F8 (HalpTscDiscover.c)
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
