/*
 * XREFs of ?UpdateTopLevelActivatedEntityRemoteCacheStatic@BamoActivationWatcherPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800AFFA8
 * Callers:
 *     ?SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrincipal@@@Z @ 0x1800AFE10 (-SetTopLevelActivatedEntity@BamoActivationWatcherPrincipal@@UEAAXPEAVBamoActivatableEntityPrinci.c)
 * Callees:
 *     ?UpdateTopLevelActivatedEntityRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180045F20 (-UpdateTopLevelActivatedEntityRemoteCache@BamoActivationWatcherPrincipalImpl@BamoImpl@@AEAAXPEAV.c)
 */

__int64 __fastcall BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateTopLevelActivatedEntityRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivationWatcherPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoActivationWatcherPrincipalImpl::UpdateTopLevelActivatedEntityRemoteCache(this, a1);
  return 0LL;
}
