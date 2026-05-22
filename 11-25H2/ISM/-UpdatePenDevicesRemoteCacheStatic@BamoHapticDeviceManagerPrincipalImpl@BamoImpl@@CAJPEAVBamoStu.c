/*
 * XREFs of ?UpdatePenDevicesRemoteCacheStatic@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180187E3C
 * Callers:
 *     ?SetPenDevices@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180187C98 (-SetPenDevices@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_PenDevicePrincip.c)
 * Callees:
 *     ?UpdatePenDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180187D58 (-UpdatePenDevicesRemoteCache@BamoHapticDeviceManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImp.c)
 */

__int64 __fastcall BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdatePenDevicesRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoHapticDeviceManagerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoHapticDeviceManagerPrincipalImpl::UpdatePenDevicesRemoteCache(this, a1);
  return 0LL;
}
