/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x140448610
 * Callers:
 *     PpmScaleIdleStateValues @ 0x14032D1B4 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x1404D33C4 (HvlEnlightenProcessor.c)
 *     HvlGetVpSintMessagePage @ 0x140583420 (HvlGetVpSintMessagePage.c)
 *     HvlpInitializeBootProcessor @ 0x140584624 (HvlpInitializeBootProcessor.c)
 *     HvlSetPlatformIdleState @ 0x140589780 (HvlSetPlatformIdleState.c)
 *     HvlInitializeProcessor @ 0x14070EDCC (HvlInitializeProcessor.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x140763E20 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned int *v3; // rax

  v1 = 0;
  if ( byte_140E0A834 )
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
