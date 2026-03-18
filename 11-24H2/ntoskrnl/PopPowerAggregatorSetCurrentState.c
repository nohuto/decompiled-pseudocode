/*
 * XREFs of PopPowerAggregatorSetCurrentState @ 0x140902BD0
 * Callers:
 *     PopPowerAggregatorActiveToScreenOffStateHandler @ 0x140759060 (PopPowerAggregatorActiveToScreenOffStateHandler.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x140759514 (PopPowerAggregatorEngageModernStandby.c)
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140759DE0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorSystemTransitionExitStateHandler @ 0x140759E80 (PopPowerAggregatorSystemTransitionExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1409026E0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x140902758 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x140902B80 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopPowerAggregatorDisplayPoweringOnStateHandler @ 0x140AA9580 (PopPowerAggregatorDisplayPoweringOnStateHandler.c)
 * Callees:
 *     PopPowerAggregatorDiagTraceInternalStateChange @ 0x140902EE4 (PopPowerAggregatorDiagTraceInternalStateChange.c)
 *     PopPowerAggregatorAllocateLogEntry @ 0x1409BD94C (PopPowerAggregatorAllocateLogEntry.c)
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
  result = PopPowerAggregatorAllocateLogEntry(a1, 2LL);
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
