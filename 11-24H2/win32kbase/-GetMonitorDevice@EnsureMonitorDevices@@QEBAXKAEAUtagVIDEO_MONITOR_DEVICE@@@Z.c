/*
 * XREFs of ?GetMonitorDevice@EnsureMonitorDevices@@QEBAXKAEAUtagVIDEO_MONITOR_DEVICE@@@Z @ 0x14008FA68
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x14008C4A0 (DrvCreatePhysicalMonitorObjects.c)
 *     DrvSetMonitorBrightness @ 0x14008DCD0 (DrvSetMonitorBrightness.c)
 *     DrvGetSuggestedPhysicalMonitorArraySize @ 0x14008DF80 (DrvGetSuggestedPhysicalMonitorArraySize.c)
 *     PruneModesByDisplayDeviceCaps @ 0x14008F098 (PruneModesByDisplayDeviceCaps.c)
 *     DrvSetMonitorsDimState @ 0x1400911C4 (DrvSetMonitorsDimState.c)
 *     ?DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z @ 0x1400F64B4 (-DrvGetPreferredMode@@YAJPEAU_devicemodeW@@PEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvUpdateDisplayDriverParameters @ 0x140122CD0 (DrvUpdateDisplayDriverParameters.c)
 *     DrvGetMonitorPhysicalDimensions @ 0x1401CAF00 (DrvGetMonitorPhysicalDimensions.c)
 *     DrvPVPGetFirstActiveMonitor @ 0x1401CB224 (DrvPVPGetFirstActiveMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall EnsureMonitorDevices::GetMonitorDevice(
        EnsureMonitorDevices *this,
        unsigned int a2,
        struct tagVIDEO_MONITOR_DEVICE *a3)
{
  int v3; // r9d

  *(_DWORD *)a3 = 0;
  v3 = 0;
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2) & 1) != 0 )
  {
    *(_DWORD *)a3 = 1;
    v3 = 1;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2) & 2) == 0 )
  {
    v3 |= 2u;
    *(_DWORD *)a3 = v3;
  }
  if ( *(int *)(*((_QWORD *)this + 2) + 20LL * a2) >= 0 )
  {
    v3 |= 0x80000000;
    *(_DWORD *)a3 = v3;
  }
  if ( (*(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2) & 0x40000000) == 0 )
    *(_DWORD *)a3 = v3 | 0x40000000;
  *((_DWORD *)a3 + 1) = *(_DWORD *)(*((_QWORD *)this + 2) + 20LL * a2 + 4);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(*((_QWORD *)this + 2) + 20LL * a2 + 8);
  *((_BYTE *)a3 + 16) = *(_BYTE *)(*((_QWORD *)this + 2) + 20LL * a2 + 16);
}
