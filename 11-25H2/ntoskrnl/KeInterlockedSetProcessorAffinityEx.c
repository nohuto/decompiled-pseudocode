/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0
 * Callers:
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x140350788 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     PpmParkReportParkedCore @ 0x1403B0AB8 (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403DFE2C (PpmParkReportSoftParkChange.c)
 *     KiStartProfileTarget @ 0x14049A3B0 (KiStartProfileTarget.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404B1BE8 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405B37B0 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405B88D4 (KeDeepSleepProcessor.c)
 *     KiStartIdleThread @ 0x1405BF130 (KiStartIdleThread.c)
 *     PpmTestAndLockProcessor @ 0x1405CAB84 (PpmTestAndLockProcessor.c)
 *     PpmParkReportForceParkChange @ 0x1405D5E54 (PpmParkReportForceParkChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedSetProcessorAffinityEx(__int64 a1, unsigned int a2)
{
  unsigned int v3; // r10d
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v3 = *((_DWORD *)KiGlobalState + a2);
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = v3 >> 6;
  if ( v4 <= v3 >> 6 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8LL * v5 + 8));
  return ((1LL << (v3 & 0x3F)) & _InterlockedOr64((volatile signed __int64 *)(a1 + 8LL * v5 + 8), 1LL << (v3 & 0x3F))) != 0;
}
