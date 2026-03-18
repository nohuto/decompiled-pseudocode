/*
 * XREFs of CreateMonitorRegion @ 0x1400461D8
 * Callers:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x140010DA0 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     GetMonitorDC @ 0x14009B3A0 (GetMonitorDC.c)
 * Callees:
 *     GetCurrentThreadCompositedDpi @ 0x140045288 (GetCurrentThreadCompositedDpi.c)
 *     CreateMonitorRegionForDpi @ 0x140045D90 (CreateMonitorRegionForDpi.c)
 */

struct HOBJ__ *__fastcall CreateMonitorRegion(__int64 a1)
{
  unsigned __int16 CurrentThreadCompositedDpi; // ax

  CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(a1);
  return CreateMonitorRegionForDpi(a1, CurrentThreadCompositedDpi);
}
