/*
 * XREFs of HalpMiscInitSystem @ 0x140B3D290
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x1406F2894 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x1406F70A4 (HalpMiscInitializeKsr.c)
 *     HalpMiscGetParameters @ 0x140BFE650 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140BFEA24 (HalpMiscInitDiscard.c)
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
