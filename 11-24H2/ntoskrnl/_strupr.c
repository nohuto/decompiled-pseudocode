/*
 * XREFs of _strupr @ 0x1404FAAD0
 * Callers:
 *     HalInitializeBios @ 0x140539620 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x14058C2E0 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140B77E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140C1C230 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140C1C310 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140C607D8 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strupr(char *String)
{
  char v3; // cl
  char *v4; // r8

  if ( String )
  {
    v3 = *String;
    v4 = String;
    while ( v3 )
    {
      if ( (unsigned __int8)(v3 - 97) <= 0x19u )
        *v4 = v3 - 32;
      v3 = *++v4;
    }
    return String;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
