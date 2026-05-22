/*
 * XREFs of ?UpdateControllerNavigationManagerRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012CB8C
 * Callers:
 *     ?SetControllerNavigationManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoControllerNavigationManagerPrincipal@@@Z @ 0x18000E714 (-SetControllerNavigationManager@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoControllerNa.c)
 * Callees:
 *     ?UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004A61C (-UpdateControllerNavigationManagerRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateControllerNavigationManagerRemoteCache(this, a1);
  return 0LL;
}
