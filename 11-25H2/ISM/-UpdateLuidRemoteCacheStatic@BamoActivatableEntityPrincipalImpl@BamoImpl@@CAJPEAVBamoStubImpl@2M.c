/*
 * XREFs of ?UpdateLuidRemoteCacheStatic@BamoActivatableEntityPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x1800B2FD8
 * Callers:
 *     ?SetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXAEBU_LUID@@@Z @ 0x180074B28 (-SetLuid@BamoActivatableEntityPrincipalImpl@BamoImpl@@QEAAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ?UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x1800473E8 (-UpdateLuidRemoteCache@BamoActivatableEntityPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micro.c)
 */

__int64 __fastcall BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoActivatableEntityPrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoActivatableEntityPrincipalImpl::UpdateLuidRemoteCache(this, a1);
  return 0LL;
}
