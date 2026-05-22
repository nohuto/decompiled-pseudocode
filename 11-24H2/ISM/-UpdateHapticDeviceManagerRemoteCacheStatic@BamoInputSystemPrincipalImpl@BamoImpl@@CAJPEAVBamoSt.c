/*
 * XREFs of ?UpdateHapticDeviceManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EDBC
 * Callers:
 *     ?SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerPrincipal@@@Z @ 0x18012E808 (-SetHapticDeviceManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHapticDeviceManagerP.c)
 * Callees:
 *     ?UpdateHapticDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18012ECDC (-UpdateHapticDeviceManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateHapticDeviceManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateHapticDeviceManagerRemoteCache(this, a1);
  return 0LL;
}
