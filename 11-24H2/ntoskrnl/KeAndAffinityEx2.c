/*
 * XREFs of KeAndAffinityEx2 @ 0x1402052E0
 * Callers:
 *     KiUpdateProcessAvailableCpuState @ 0x140204268 (KiUpdateProcessAvailableCpuState.c)
 *     KiGetDeepIdleProcessors @ 0x140204E08 (KiGetDeepIdleProcessors.c)
 *     KiComputeCpuSetAffinity @ 0x14029B010 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x14029D53C (KiForwardTick.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x1403CAED4 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     HalSendNMI @ 0x1405441C0 (HalSendNMI.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B5474 (KeUpdateProcessorRestrictionsEx.c)
 *     PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DF2CC (PpmEventTraceSoftCoreParkingSelectionEx.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405E07D4 (PpmHeteroDistributeUtilityEx.c)
 *     PpmParkBuildTopologyCandidatesEx @ 0x1405E1B44 (PpmParkBuildTopologyCandidatesEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405E1B9C (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405E2544 (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkRegisterParkingEx @ 0x1405E3C90 (PpmParkRegisterParkingEx.c)
 *     NtStartProfile @ 0x1407C4440 (NtStartProfile.c)
 *     PspSetEffectiveJobLimits @ 0x1408E6C38 (PspSetEffectiveJobLimits.c)
 *     PpmParkApplyForcedMask @ 0x140ACAD80 (PpmParkApplyForcedMask.c)
 * Callees:
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140206940 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 */

unsigned int __fastcall KeAndAffinityEx2(struct _KAFFINITY_EX *a1, struct _KAFFINITY_EX *a2, __int64 a3)
{
  unsigned __int16 v3; // r9
  int v4; // r11d
  unsigned __int16 Count; // r10
  unsigned __int16 v6; // r9
  __int64 v7; // rcx
  bool v9; // zf

  if ( !a3 )
    return KiAndAffinityExNoResult(a1, a2);
  v3 = *(_WORD *)(a3 + 2);
  v4 = 0;
  *(_WORD *)(a3 + 2) = v3;
  Count = a1->Count;
  if ( a1->Count >= a2->Count )
    Count = a2->Count;
  *(_WORD *)a3 = Count;
  if ( Count > v3 )
  {
    *(_WORD *)a3 = v3;
    Count = v3;
  }
  v6 = 0;
  if ( Count )
  {
    do
    {
      v9 = (a2->Bitmap[v6] & a1->Bitmap[v6]) == 0;
      *(_QWORD *)(a3 + 8LL * v6 + 8) = a2->Bitmap[v6] & a1->Bitmap[v6];
      if ( !v9 )
        v4 = 1;
      ++v6;
    }
    while ( v6 < *(_WORD *)a3 );
  }
  *(_DWORD *)(a3 + 4) = 0;
  while ( v6 < *(_WORD *)(a3 + 2) )
  {
    v7 = v6++;
    *(_QWORD *)(a3 + 8 * v7 + 8) = 0LL;
  }
  return v4;
}
