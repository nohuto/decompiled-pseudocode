/*
 * XREFs of ?UpdateActivationWatcherRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012CB60
 * Callers:
 *     ?SetActivationWatcher@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoActivationWatcherPrincipal@@@Z @ 0x180090768 (-SetActivationWatcher@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoActivationWatcherPrinc.c)
 * Callees:
 *     ?UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18004A8B4 (-UpdateActivationWatcherRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateActivationWatcherRemoteCache(this, a1);
  return 0LL;
}
