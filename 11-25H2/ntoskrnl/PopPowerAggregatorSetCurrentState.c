/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x140A2C210
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x14074CE00 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x14074D254 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x14074D990 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x14074DA30 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x140A2BD10 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140A2BD88 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140A2C1C0 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA4520 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopPowerAggregatorAllocateLogEntry @ 0x140965C40 (PopPowerAggregatorAllocateLogEntry.c)
 *     PopPowerAggregatorDiagTraceInternalStateChange @ 0x140A2C524 (PopPowerAggregatorDiagTraceInternalStateChange.c)
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
