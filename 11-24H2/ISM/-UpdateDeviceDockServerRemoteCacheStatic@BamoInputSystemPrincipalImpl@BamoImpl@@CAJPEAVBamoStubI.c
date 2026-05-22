/*
 * XREFs of ?UpdateDeviceDockServerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EC58
 * Callers:
 *     ?SetDeviceDockServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoDeviceDockServerPrincipal@@@Z @ 0x180091008 (-SetDeviceDockServer@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoDeviceDockServerPrincip.c)
 * Callees:
 *     ?UpdateDeviceDockServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180046890 (-UpdateDeviceDockServerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateDeviceDockServerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateDeviceDockServerRemoteCache(this, a1);
  return 0LL;
}
