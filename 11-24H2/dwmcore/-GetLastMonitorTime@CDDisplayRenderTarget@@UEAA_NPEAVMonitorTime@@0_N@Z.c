/*
 * XREFs of ?GetLastMonitorTime@CDDisplayRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180104220
 * Callers:
 *     ?UpdateTiming@CMonitorClock@@UEAA_KXZ @ 0x180242DA0 (-UpdateTiming@CMonitorClock@@UEAA_KXZ.c)
 * Callees:
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1801059F0 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 */

bool __fastcall CDDisplayRenderTarget::GetLastMonitorTime(
        CDDisplayRenderTarget *this,
        struct MonitorTime *a2,
        struct MonitorTime *a3,
        char a4)
{
  char *v4; // rbx
  bool updated; // di
  LARGE_INTEGER v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)this + 32984;
  updated = 1;
  if ( !a4 && (v9.QuadPart = 0LL, QueryPerformanceCounter(&v9), v9.QuadPart <= *((_QWORD *)v4 + 16))
    || (updated = CTargetStats::UpdatePresentStats((CTargetStats *)v4)) )
  {
    *(_OWORD *)a2 = *((_OWORD *)v4 + 9);
    *((_QWORD *)a2 + 2) = *((_QWORD *)v4 + 20);
    *(_OWORD *)a3 = *(_OWORD *)(v4 + 168);
    *((_QWORD *)a3 + 2) = *((_QWORD *)v4 + 23);
  }
  return updated;
}
