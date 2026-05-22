/*
 * XREFs of ?UpdateHapticsRemoteCacheStatic@BamoPenDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180189CF8
 * Callers:
 *     ?SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@@Z @ 0x1801899B8 (-SetHaptics@BamoPenDevicePrincipalImpl@BamoImpl@@QEAAXPEAVBamoSimpleHapticsControllerPrincipal@@.c)
 * Callees:
 *     ?UpdateHapticsRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180189C20 (-UpdateHapticsRemoteCache@BamoPenDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@.c)
 */

__int64 __fastcall BamoImpl::BamoPenDevicePrincipalImpl::UpdateHapticsRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoPenDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoPenDevicePrincipalImpl::UpdateHapticsRemoteCache(this, a1);
  return 0LL;
}
