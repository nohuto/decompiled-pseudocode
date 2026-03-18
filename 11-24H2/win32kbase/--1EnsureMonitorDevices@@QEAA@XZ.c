/*
 * XREFs of ??1EnsureMonitorDevices@@QEAA@XZ @ 0x14011E230
 * Callers:
 *     DrvEnumDisplayDevices @ 0x140018880 (DrvEnumDisplayDevices.c)
 *     DrvCreatePhysicalMonitorObjects @ 0x14008C4A0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14008DF80 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     PruneModesByDisplayDeviceCaps @ 0x14008F098 (PruneModesByDisplayDeviceCaps.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140122CD0 (DrvUpdateDisplayDriverParameters.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401CAF00 (DrvGetMonitorPhysicalDimensions.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401CB224 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall EnsureMonitorDevices::~EnsureMonitorDevices(EnsureMonitorDevices *this)
{
  void *v1; // rcx

  v1 = (void *)*((_QWORD *)this + 2);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
