/*
 * XREFs of PspApplyJobChainLimitsToProcess @ 0x1408E7DA0
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1408E7184 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     PspNotifyProcessEffectiveIoLimitChanged @ 0x1403EF8F4 (PspNotifyProcessEffectiveIoLimitChanged.c)
 *     PsUpdateComponentPower @ 0x14042D9F0 (PsUpdateComponentPower.c)
 *     KeSetProcessSchedulingGroup @ 0x14047C244 (KeSetProcessSchedulingGroup.c)
 *     RtlInterlockedSetClearBits @ 0x14048B890 (RtlInterlockedSetClearBits.c)
 *     PspComputeExecutionState @ 0x1408E7EA8 (PspComputeExecutionState.c)
 *     PspApplyJobLimitsToProcess @ 0x1408E7EF8 (PspApplyJobLimitsToProcess.c)
 *     PspSetProcessSchedulingGroup @ 0x1408E8064 (PspSetProcessSchedulingGroup.c)
 */

__int64 __fastcall PspApplyJobChainLimitsToProcess(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  __int64 v7; // rdx

  PspApplyJobLimitsToProcess((struct _KPROCESS *)a3);
  if ( *(_QWORD *)(a1 + 1248) )
  {
    if ( a2 && *(_QWORD *)(a2 + 1248) || PsCpuFairShareEnabled )
      KeSetProcessSchedulingGroup(a3, 0LL);
    PspSetProcessSchedulingGroup(a3, *(_QWORD *)(a1 + 1248));
  }
  v6 = PspComputeExecutionState(a1);
  if ( (*(_DWORD *)(a3 + 1532) & 1) != 0 )
    v6 &= ~2u;
  *(_BYTE *)(a3 + 2043) = v6;
  if ( a2 )
    v7 = *(unsigned int *)(a2 + 1084);
  else
    v7 = 5LL;
  if ( (_DWORD)v7 != *(_DWORD *)(a1 + 1084) )
    PspNotifyProcessEffectiveIoLimitChanged(a3, v7, 0);
  if ( (*(_DWORD *)(a1 + 1552) & 0x40000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a3 + 136), 4u);
  PsUpdateComponentPower((PEPROCESS)a3, 8u, *(_QWORD *)(a1 + 1808));
  return RtlInterlockedSetClearBits((volatile signed __int32 *)(a3 + 496), 4, 32);
}
