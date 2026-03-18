/*
 * XREFs of PspComputeExecutionState @ 0x1408E7EA8
 * Callers:
 *     PspSetJobFreezeCountCallback @ 0x1404AA670 (PspSetJobFreezeCountCallback.c)
 *     PsSwapProcessWorkingSet @ 0x140774624 (PsSwapProcessWorkingSet.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408E7DA0 (PspApplyJobChainLimitsToProcess.c)
 * Callees:
 *     PspInitializeProcessExecutionState @ 0x1404B4F74 (PspInitializeProcessExecutionState.c)
 */

char PspComputeExecutionState()
{
  _DWORD *v0; // rdx
  unsigned int v1; // r8d
  char result; // al
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  PspInitializeProcessExecutionState(&v3);
  result = v3;
  if ( v0[269] > v1 )
    result = v3 | 2;
  if ( v0[266] > v1 )
    result |= 1u;
  if ( v0[267] > v1 )
    return result | 4;
  return result;
}
