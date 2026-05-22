/*
 * XREFs of ?UpdateHeatGripServiceRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012CD48
 * Callers:
 *     ?SetHeatGripService@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHeatGripServicePrincipal@@@Z @ 0x1800914E8 (-SetHeatGripService@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoHeatGripServicePrincipal.c)
 * Callees:
 *     ?UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180049B68 (-UpdateHeatGripServiceRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateHeatGripServiceRemoteCache(this, a1);
  return 0LL;
}
