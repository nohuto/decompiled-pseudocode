/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x140A6E4B0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x1407574E0 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140757974 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140758230 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x1407582D0 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A6DFC0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A6E038 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140A6E460 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA4630 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409A3F9C (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceInternalStateChange @ 0x140A6E7C4 (PopPowerAggregatorDiagTraceInternalStateChange.c)
 */

LARGE_INTEGER *__fastcall PopPowerAggregatorSetCurrentState(LARGE_INTEGER *a1, __int64 a2)
{
  LARGE_INTEGER *v2; // rbx
  LARGE_INTEGER *result; // rax
  __int128 v6; // xmm1

  v2 = a1 + 7;
  *(_DWORD *)(a2 + 4) = a1[3].LowPart;
  *(LARGE_INTEGER *)(a2 + 8) = a1[4];
  PopPowerAggregatorDiagTraceInternalStateChange(&a1[7]);
  result = PopPowerAggregatorAllocateLogEntry(a1, 2u);
  *(_OWORD *)&result[3].LowPart = *(_OWORD *)&v2->LowPart;
  *(_OWORD *)&result[5].LowPart = *(_OWORD *)&v2[2].LowPart;
  *(_OWORD *)&result[7].LowPart = *(_OWORD *)a2;
  *(_OWORD *)&result[9].LowPart = *(_OWORD *)(a2 + 16);
  *(_OWORD *)&v2->LowPart = *(_OWORD *)a2;
  v6 = *(_OWORD *)(a2 + 16);
  a1[1].LowPart |= 2u;
  *(_OWORD *)&v2[2].LowPart = v6;
  return result;
}
