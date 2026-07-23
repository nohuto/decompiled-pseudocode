/*
 * XREFs of PpmScaleIdleStateValues @ 0x1404374C4
 * Callers:
 *     PpmPerfApplyProcessorState @ 0x1402ADC20 (PpmPerfApplyProcessorState.c)
 *     PpmResetIdlePolicy @ 0x1404372B8 (PpmResetIdlePolicy.c)
 * Callees:
 *     HvlGetLpIndexFromProcessorIndex @ 0x140440D30 (HvlGetLpIndexFromProcessorIndex.c)
 *     HvlRegisterLogicalProcessorFrequency @ 0x1404B8884 (HvlRegisterLogicalProcessorFrequency.c)
 */

void __fastcall PpmScaleIdleStateValues(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  unsigned __int8 v4; // al
  unsigned int v5; // ebx
  int v6; // ecx
  unsigned int LpIndexFromProcessorIndex; // eax

  if ( *(_BYTE *)(a1 + 72) )
  {
    v2 = *(_QWORD *)(a1 + 376);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 368);
      if ( v3 )
      {
        if ( *(_DWORD *)(v2 + 80) >= *(_DWORD *)(v3 + 528) )
          v4 = *(_BYTE *)(v3 + 528);
        else
          v4 = *(_BYTE *)(v2 + 80);
        v5 = v4;
        v6 = *(unsigned __int8 *)(a1 + 71);
        *(_BYTE *)(a1 + 68) = v4 * v4 * (unsigned int)*(unsigned __int8 *)(a1 + 70) / 0x2710;
        *(_BYTE *)(a1 + 69) = v4 * (unsigned int)v4 * v6 / 0x2710;
        if ( *(_DWORD *)(a1 + 224) == 3 )
        {
          LpIndexFromProcessorIndex = HvlGetLpIndexFromProcessorIndex(*(unsigned int *)(a1 - 34844));
          HvlRegisterLogicalProcessorFrequency(LpIndexFromProcessorIndex, v5);
        }
      }
    }
  }
}
