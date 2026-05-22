/*
 * XREFs of ?UpdatePanelIdRemoteCacheStatic@BamoDockDevicePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1801825A8
 * Callers:
 *     ?SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z @ 0x180181C5C (-SetPanelId@BamoDockDevicePrincipalImpl@BamoImpl@@QEAAJPEBG@Z.c)
 * Callees:
 *     ?UpdatePanelIdRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1801824E8 (-UpdatePanelIdRemoteCache@BamoDockDevicePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft.c)
 */

__int64 __fastcall BamoImpl::BamoDockDevicePrincipalImpl::UpdatePanelIdRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDockDevicePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDockDevicePrincipalImpl::UpdatePanelIdRemoteCache(this, a1);
  return 0LL;
}
