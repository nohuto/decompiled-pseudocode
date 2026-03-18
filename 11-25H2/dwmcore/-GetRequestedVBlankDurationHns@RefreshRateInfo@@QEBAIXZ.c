/*
 * XREFs of ?GetRequestedVBlankDurationHns@RefreshRateInfo@@QEBAIXZ @ 0x180218614
 * Callers:
 *     ?SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z @ 0x1802184D0 (-SetVBlankDuration@CLegacySwapChain@@UEAA_NI_K@Z.c)
 *     ?ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1802C7F64 (-ExecutePresent@CDDisplaySwapChain@@IEAAJPEAUIDisplayScanout@Core@Display@Devices@Windows@@PEBUD.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RefreshRateInfo::GetRequestedVBlankDurationHns(RefreshRateInfo *this)
{
  if ( *((_QWORD *)this + 4) )
    return (unsigned __int64)(10000000LL * *((_QWORD *)this + 4)) / g_qpcFrequency.QuadPart;
  else
    return 0LL;
}
