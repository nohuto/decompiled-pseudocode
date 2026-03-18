/*
 * XREFs of ?IsBetterYieldCandidate@VIDMM_DEVICE@@QEAA_NPEAV1@@Z @ 0x140104480
 * Callers:
 *     VidMmWorkerThreadProc @ 0x1400EE3E0 (VidMmWorkerThreadProc.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x14010FE48 (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 * Callees:
 *     ?VidMmiQuerySystemTime@@YA_JXZ @ 0x1400365E4 (-VidMmiQuerySystemTime@@YA_JXZ.c)
 */

bool __fastcall VIDMM_DEVICE::IsBetterYieldCandidate(VIDMM_DEVICE *this, struct VIDMM_DEVICE *a2)
{
  __int64 SystemTime; // rax

  if ( !a2 )
    return 1;
  SystemTime = VidMmiQuerySystemTime();
  return *((_QWORD *)this + 28) - SystemTime < *((_QWORD *)a2 + 28) - SystemTime;
}
