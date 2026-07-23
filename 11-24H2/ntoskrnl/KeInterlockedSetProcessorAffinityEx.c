/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0
 * Callers:
 *     KiUpdateGroupSchedulingRank @ 0x1402A87A0 (KiUpdateGroupSchedulingRank.c)
 *     PpmParkReportParkedCore @ 0x1402B0804 (PpmParkReportParkedCore.c)
 *     ?KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_HANDLE@@PEAU_KSCB@@@Z @ 0x1402DBA34 (-KiComputeGroupSchedulingRank@@YAXPEAU_KSCHEDULING_GROUP@@PEAU_KPRCB@@PEAT_KISOLATION_UNIT_LOCK_.c)
 *     PpmParkReportSoftParkChange @ 0x1403D7120 (PpmParkReportSoftParkChange.c)
 *     KiStartProfileTarget @ 0x140494D80 (KiStartProfileTarget.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404AD758 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405B4C40 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405B9DA4 (KeDeepSleepProcessor.c)
 *     KiStartIdleThread @ 0x1405C07E0 (KiStartIdleThread.c)
 *     PpmTestAndLockProcessor @ 0x1405CC954 (PpmTestAndLockProcessor.c)
 *     PpmParkReportForceParkChange @ 0x1405D7BEC (PpmParkReportForceParkChange.c)
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
