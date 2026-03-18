/*
 * XREFs of HalpMiscInitSystem @ 0x140B4D290
 * Callers:
 *     <none>
 * Callees:
 *     HalpMiscInitializeTelemetry @ 0x1406FE684 (HalpMiscInitializeTelemetry.c)
 *     HalpMiscInitializeKsr @ 0x140702E94 (HalpMiscInitializeKsr.c)
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 *     HalpMiscInitDiscard @ 0x140C0FA24 (HalpMiscInitDiscard.c)
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
