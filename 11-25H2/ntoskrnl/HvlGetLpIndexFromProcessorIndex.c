/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x1403ED2C0
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1403E955C (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x1404D3598 (HvlEnlightenProcessor.c)
 *     HvlGetVpSintMessagePage @ 0x14057FC70 (HvlGetVpSintMessagePage.c)
 *     HvlpInitializeBootProcessor @ 0x140580E74 (HvlpInitializeBootProcessor.c)
 *     HvlSetPlatformIdleState @ 0x140586110 (HvlSetPlatformIdleState.c)
 *     HvlInitializeProcessor @ 0x140702EEC (HvlInitializeProcessor.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x140754360 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned int *v3; // rax

  v1 = 0;
  if ( byte_140E0A6F4 )
    return a1;
  v3 = (unsigned int *)HvlpLogicalProcessorRegions;
  while ( v1 < (unsigned int)HvlpLogicalProcessorCount )
  {
    if ( v3[5] == a1 )
      return v3[1];
    ++v1;
    v3 += 26;
  }
  return 0xFFFFFFFFLL;
}
