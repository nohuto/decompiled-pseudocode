/*
 * XREFs of ?UpdateDeviceTypeRemoteCacheStatic@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801876CC
 * Callers:
 *     ?SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z @ 0x180186F50 (-SetDeviceType@BamoSimpleHapticsControllerPrincipal@@UEAAXW4HapticDeviceType@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTypeRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18018760C (-UpdateDeviceTypeRemoteCache@BamoSimpleHapticsControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStu.c)
 */

__int64 __fastcall BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateDeviceTypeRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoSimpleHapticsControllerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoSimpleHapticsControllerPrincipalImpl::UpdateDeviceTypeRemoteCache(this, a1);
  return 0LL;
}
