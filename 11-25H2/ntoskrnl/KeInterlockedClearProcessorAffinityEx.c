/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x1403E0820
 * Callers:
 *     PpmUnlockProcessors @ 0x140205028 (PpmUnlockProcessors.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x140275710 (KiTransitionSchedulingGroupGeneration.c)
 *     PpmParkReportUnparkedCore @ 0x1403B0910 (PpmParkReportUnparkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x1403DFE2C (PpmParkReportSoftParkChange.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404B1BE8 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405B37B0 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405B88D4 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405B8E30 (KeWakeProcessor.c)
 *     PpmTestAndLockProcessor @ 0x1405CAB84 (PpmTestAndLockProcessor.c)
 *     PpmParkReportForceParkChange @ 0x1405D5E54 (PpmParkReportForceParkChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, unsigned int a2)
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
  return ((1LL << (v3 & 0x3F)) & _InterlockedAnd64(
                                   (volatile signed __int64 *)(a1 + 8LL * v5 + 8),
                                   ~(1LL << (v3 & 0x3F)))) != 0;
}
