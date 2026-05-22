/*
 * XREFs of ?UpdateGestureServicesRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012ECB0
 * Callers:
 *     ?SetGestureServices@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoGestureServicesPrincipal@@@Z @ 0x1800914E8 (-SetGestureServices@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoGestureServicesPrincipal.c)
 * Callees:
 *     ?UpdateGestureServicesRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180046360 (-UpdateGestureServicesRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateGestureServicesRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateGestureServicesRemoteCache(this, a1);
  return 0LL;
}
