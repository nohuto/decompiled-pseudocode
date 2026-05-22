/*
 * XREFs of ?UpdateMPCConstantManagerClientRemoteCacheStatic@BamoMPCManagerPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B91D8
 * Callers:
 *     ?SetMPCConstantManagerClient@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoMPCConstantManagerClientPrincipal@@@Z @ 0x18000ED28 (-SetMPCConstantManagerClient@BamoMPCManagerPrincipalImpl@BamoImpl@@QEAAXPEAVBamoMPCConstantManag.c)
 * Callees:
 *     ?UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800B90F8 (-UpdateMPCConstantManagerClientRemoteCache@BamoMPCManagerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoSt.c)
 */

__int64 __fastcall BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoMPCManagerPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoMPCManagerPrincipalImpl::UpdateMPCConstantManagerClientRemoteCache(this, a1);
  return 0LL;
}
