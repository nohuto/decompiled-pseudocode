/*
 * XREFs of ?UpdateRestrictToProcessIdsRemoteCacheStatic@BamoDataSourcePrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAV12@@Z @ 0x180105E44
 * Callers:
 *     ?SetRestrictToProcessIds@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_uint_Principal@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@@Z @ 0x180105078 (-SetRestrictToProcessIds@BamoDataSourcePrincipalImpl@BamoImpl@@QEAAXPEAVBamoList_uint_Principal@.c)
 * Callees:
 *     ?UpdateRestrictToProcessIdsRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180105D6C (-UpdateRestrictToProcessIdsRemoteCache@BamoDataSourcePrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubIm.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdsRemoteCacheStatic(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoImpl::BamoDataSourcePrincipalImpl *this)
{
  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
    BamoImpl::BamoDataSourcePrincipalImpl::UpdateRestrictToProcessIdsRemoteCache(this, a1);
  return 0LL;
}
