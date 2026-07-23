/*
 * XREFs of KeAndAffinityEx2 @ 0x14032C8C0
 * Callers:
 *     KiComputeCpuSetAffinity @ 0x1402A9B00 (KiComputeCpuSetAffinity.c)
 *     KiForwardTick @ 0x1402AC02C (KiForwardTick.c)
 *     KiUpdateProcessAvailableCpuState @ 0x14032B848 (KiUpdateProcessAvailableCpuState.c)
 *     KiGetDeepIdleProcessors @ 0x14032C3E8 (KiGetDeepIdleProcessors.c)
 *     ?KiForceIdleUpdateSchedulerParkState@@YAXE@Z @ 0x140484B24 (-KiForceIdleUpdateSchedulerParkState@@YAXE@Z.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     HalSendNMI @ 0x140541B10 (HalSendNMI.c)
 *     KeUpdateProcessorRestrictionsEx @ 0x1405B273C (KeUpdateProcessorRestrictionsEx.c)
 *     PpmEventTraceSoftCoreParkingSelectionEx @ 0x1405DC3F8 (PpmEventTraceSoftCoreParkingSelectionEx.c)
 *     PpmHeteroDistributeUtilityEx @ 0x1405DDDF4 (PpmHeteroDistributeUtilityEx.c)
 *     PpmParkBuildTopologyCandidatesEx @ 0x1405DF150 (PpmParkBuildTopologyCandidatesEx.c)
 *     PpmParkCalculateCoreParkingMaskEx @ 0x1405DF1A8 (PpmParkCalculateCoreParkingMaskEx.c)
 *     PpmParkComputeUnparkMaskEx @ 0x1405DFACC (PpmParkComputeUnparkMaskEx.c)
 *     PpmParkRegisterParkingEx @ 0x1405E1218 (PpmParkRegisterParkingEx.c)
 *     NtStartProfile @ 0x1407C2260 (NtStartProfile.c)
 *     PspSetEffectiveJobLimits @ 0x140A2C888 (PspSetEffectiveJobLimits.c)
 *     PpmParkApplyForcedMask @ 0x140AC893C (PpmParkApplyForcedMask.c)
 * Callees:
 *     ?KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x14032DF20 (-KiAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
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
