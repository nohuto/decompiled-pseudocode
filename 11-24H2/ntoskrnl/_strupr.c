/*
 * XREFs of _strupr @ 0x1404FD210
 * Callers:
 *     HalInitializeBios @ 0x14053BD40 (HalInitializeBios.c)
 *     InbvDetermineFunction @ 0x14058F2C0 (InbvDetermineFunction.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     InbvDriverInitialize @ 0x140C1A1F0 (InbvDriverInitialize.c)
 *     BvgaDriverInitialize @ 0x140C1A2D0 (BvgaDriverInitialize.c)
 *     RamdiskStart @ 0x140C5E688 (RamdiskStart.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
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
