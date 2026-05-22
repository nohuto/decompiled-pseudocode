/*
 * XREFs of ?UpdateActivatableEntityListRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B2190
 * Callers:
 *     ?SetActivatableEntityList@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_ActivatableEntityPrincipal_Principal@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x1800B1EC8 (-SetActivatableEntityList@BamoActivationWatcherPrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_Activat.c)
 * Callees:
 *     ?UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004A384 (-UpdateActivatableEntityListRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBa.c)
 */

__int64 __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivationWatcherPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateActivatableEntityListRemoteCache(this, a1);
  return 0LL;
}
