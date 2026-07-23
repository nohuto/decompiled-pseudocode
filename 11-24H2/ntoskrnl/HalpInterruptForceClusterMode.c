/*
 * XREFs of HalpInterruptForceClusterMode @ 0x14053FBF8
 * Callers:
 *     HalpMiscGetParameters @ 0x140C11650 (HalpMiscGetParameters.c)
 * Callees:
 *     <none>
 */

void __fastcall HalpInterruptForceClusterMode(int a1)
{
  HalpInterruptClusterModeForced = 1;
  if ( a1 )
    HalpInterruptMaxClusterSize = a1;
}
