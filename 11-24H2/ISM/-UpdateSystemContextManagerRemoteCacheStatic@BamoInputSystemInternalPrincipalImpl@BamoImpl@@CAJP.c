/*
 * XREFs of ?UpdateSystemContextManagerRemoteCacheStatic@BamoInputSystemInternalPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x18012F984
 * Callers:
 *     ?SetSystemContextManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemContextManagerPrincipal@@@Z @ 0x1800921A8 (-SetSystemContextManager@BamoInputSystemInternalPrincipalImpl@BamoImpl@@QEAAXPEAVBamoSystemConte.c)
 * Callees:
 *     ?UpdateSystemContextManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18012F8AC (-UpdateSystemContextManagerRemoteCache@BamoInputSystemInternalPrincipalImpl@BamoImpl@@AEAAXPEAVB.c)
 */

__int64 __fastcall BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateSystemContextManagerRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoInputSystemInternalPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoInputSystemInternalPrincipalImpl::UpdateSystemContextManagerRemoteCache(this, a1);
  return 0LL;
}
