/*
 * XREFs of ?UpdateDeviceTypeRemoteCacheStatic@BamoDockableDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801821DC
 * Callers:
 *     ?SetDeviceType@BamoDockableDevicePrincipal@@UEAAXW4DockableDeviceObjectType@@@Z @ 0x180181890 (-SetDeviceType@BamoDockableDevicePrincipal@@UEAAXW4DockableDeviceObjectType@@@Z.c)
 * Callees:
 *     ?UpdateDeviceTypeRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180182114 (-UpdateDeviceTypeRemoteCache@BamoDockableDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Mi.c)
 */

__int64 __fastcall BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceTypeRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockableDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockableDevicePrincipalImpl::UpdateDeviceTypeRemoteCache(this, a1);
  return 0LL;
}
