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

__int64 __fastcall PopPowerAggregatorSetCurrentState(__int64 a1, __int64 a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int128 v6; // xmm1

  v2 = (_OWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 24);
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 32);
  PopPowerAggregatorDiagTraceInternalStateChange(a1 + 56);
  result = PopPowerAggregatorAllocateLogEntry(a1, 2);
  *(_OWORD *)(result + 24) = *v2;
  *(_OWORD *)(result + 40) = v2[1];
  *(_OWORD *)(result + 56) = *(_OWORD *)a2;
  *(_OWORD *)(result + 72) = *(_OWORD *)(a2 + 16);
  *v2 = *(_OWORD *)a2;
  v6 = *(_OWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 8) |= 2u;
  v2[1] = v6;
  return result;
}
