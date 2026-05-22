/*
 * XREFs of ?UpdateResizeContextualProcessorRemoteCacheStatic@BamoInputSystemPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012EEC4
 * Callers:
 *     ?SetResizeContextualProcessor@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoResizeContextualProcessorPrincipal@@@Z @ 0x1800911A8 (-SetResizeContextualProcessor@BamoInputSystemPrincipalImpl@BamoImpl@@QEAAXPEAVBamoResizeContextu.c)
 * Callees:
 *     ?UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800471F8 (-UpdateResizeContextualProcessorRemoteCache@BamoInputSystemPrincipalImpl@BamoImpl@@AEAAXPEAVBamo.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemPrincipalImpl::UpdateResizeContextualProcessorRemoteCache(this, a1);
  return 0LL;
}
