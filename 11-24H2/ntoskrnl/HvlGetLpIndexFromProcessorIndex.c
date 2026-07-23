/*
 * XREFs of HvlGetLpIndexFromProcessorIndex @ 0x140440D30
 * Callers:
 *     PpmScaleIdleStateValues @ 0x1404374C4 (PpmScaleIdleStateValues.c)
 *     HvlEnlightenProcessor @ 0x1404CC584 (HvlEnlightenProcessor.c)
 *     HvlGetVpSintMessagePage @ 0x1405807A0 (HvlGetVpSintMessagePage.c)
 *     HvlpInitializeBootProcessor @ 0x1405819A4 (HvlpInitializeBootProcessor.c)
 *     HvlSetPlatformIdleState @ 0x140586A70 (HvlSetPlatformIdleState.c)
 *     HvlInitializeProcessor @ 0x14070C95C (HvlInitializeProcessor.c)
 *     PpmPerfRegisterHvPerfStateCounters @ 0x1407637F0 (PpmPerfRegisterHvPerfStateCounters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlGetLpIndexFromProcessorIndex(unsigned int a1)
{
  unsigned int v1; // edx
  unsigned int *v3; // rax

  v1 = 0;
  if ( byte_140E0A8BC )
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
