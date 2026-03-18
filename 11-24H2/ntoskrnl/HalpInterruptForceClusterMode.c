/*
 * XREFs of HalpInterruptForceClusterMode @ 0x1405422A8
 * Callers:
 *     HalpMiscGetParameters @ 0x140C0F650 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptForceClusterMode(int a1)
{
  HalpInterruptClusterModeForced = 1;
  if ( a1 )
    HalpInterruptMaxClusterSize = a1;
}
