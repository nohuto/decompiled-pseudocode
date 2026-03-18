/*
 * XREFs of ?GetPresentCount@CDDisplaySwapChain@@UEBAIXZ @ 0x1801F9040
 * Callers:
 *     ?GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z @ 0x1801051C0 (-GetStats@CLegacyRenderTarget@@UEAA_N_KPEAUtagCOMPOSITION_TARGET_STATS_2@@@Z.c)
 *     ?GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z @ 0x180105710 (-GetLastMonitorTime@CTargetStats@@QEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?UpdatePresentStats@CTargetStats@@IEAA_NXZ @ 0x1801059F0 (-UpdatePresentStats@CTargetStats@@IEAA_NXZ.c)
 *     ?GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z @ 0x180105C80 (-GetLastMonitorTime@CLegacyRenderTarget@@UEAA_NPEAVMonitorTime@@0_N@Z.c)
 *     ?Update@CTargetStats@@IEAAX_K@Z @ 0x180105FB0 (-Update@CTargetStats@@IEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetPresentCount(CDDisplaySwapChain *this)
{
  return *((unsigned int *)this + 126);
}
