/*
 * XREFs of ACPIEcStopRemoveDeviceCommon @ 0x14005FF00
 * Callers:
 *     ACPIEcRemoveDevice @ 0x14005FA50 (ACPIEcRemoveDevice.c)
 *     ACPIEcStopDevice @ 0x14005FEB0 (ACPIEcStopDevice.c)
 * Callees:
 *     ACPIEcDisconnectInterrupt @ 0x14009C9B0 (ACPIEcDisconnectInterrupt.c)
 *     ACPIEcRemoveOpRegionHandler @ 0x14009CB48 (ACPIEcRemoveOpRegionHandler.c)
 */

__int64 __fastcall ACPIEcStopRemoveDeviceCommon(__int64 a1)
{
  int v1; // ebx
  int v3; // eax
  int v4; // eax

  v1 = 0;
  if ( *(_BYTE *)(a1 + 120) )
  {
    v3 = ACPIEcDisconnectInterrupt();
    if ( v3 < 0 )
      v1 = v3;
    v4 = ACPIEcRemoveOpRegionHandler(a1);
    if ( v4 < 0 && v1 >= 0 )
      v1 = v4;
    *(_BYTE *)(a1 + 120) = 0;
  }
  return (unsigned int)v1;
}
