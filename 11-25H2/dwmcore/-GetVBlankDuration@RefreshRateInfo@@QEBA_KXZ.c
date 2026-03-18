/*
 * XREFs of ?GetVBlankDuration@RefreshRateInfo@@QEBA_KXZ @ 0x180141F34
 * Callers:
 *     ?GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x180140E00 (-GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z @ 0x180141350 (-GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x180141630 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 *     ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x1801418C0 (-GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?Update@CTargetStats@@IEAAX_K@Z @ 0x180141BF0 (-Update@CTargetStats@@IEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RefreshRateInfo::GetVBlankDuration(RefreshRateInfo *this)
{
  unsigned __int64 result; // rax

  result = *((_QWORD *)this + 5);
  if ( !result || result == 0xFFFFFFFF )
    return g_qpcFrequency.QuadPart * (unsigned __int64)*((unsigned int *)this + 1) / *(unsigned int *)this;
  return result;
}
