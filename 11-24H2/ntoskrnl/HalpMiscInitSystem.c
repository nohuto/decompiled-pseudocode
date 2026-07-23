/*
 * XREFs of HalpMiscInitSystem @ 0x140B4F2D0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x1406FC2C4 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x140700AD4 (HalpMiscInitializeKsr.c)
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140C11A24 (HalpMiscInitDiscard.c)
 */

__int64 __fastcall HalpMiscInitSystem(int a1, __int64 a2, __int64 a3)
{
  if ( a1 )
  {
    if ( a1 == 7 )
    {
      HalpMiscInitDiscard();
    }
    else if ( a1 == 31 )
    {
      HalpMiscInitializeTelemetry();
      HalpMiscInitializeKsr();
    }
  }
  else
  {
    HalpMiscGetParameters(a3);
  }
  return 0LL;
}
