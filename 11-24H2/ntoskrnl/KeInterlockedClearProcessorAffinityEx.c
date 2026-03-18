/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x1403E9E90
 * Callers:
 *     PpmParkReportUnparkedCore @ 0x140351950 (PpmParkReportUnparkedCore.c)
 *     PpmUnlockProcessors @ 0x1403B66C4 (PpmUnlockProcessors.c)
 *     PpmParkReportSoftParkChange @ 0x1403E9474 (PpmParkReportSoftParkChange.c)
 *     ?KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z @ 0x1404B2F48 (-KiForceIdleParkUnparkProcessor@@YAXPEAU_KPRCB@@E@Z.c)
 *     KiProcessNMI @ 0x1405B7670 (KiProcessNMI.c)
 *     KeDeepSleepProcessor @ 0x1405BC774 (KeDeepSleepProcessor.c)
 *     KeWakeProcessor @ 0x1405BCCD0 (KeWakeProcessor.c)
 *     PpmTestAndLockProcessor @ 0x1405CF234 (PpmTestAndLockProcessor.c)
 *     PpmParkReportForceParkChange @ 0x1405DA8CC (PpmParkReportForceParkChange.c)
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
