/*
 * XREFs of ?CallRemoveDataSourceOnStub@BamoDataProviderPrincipalImpl@BamoImpl@@CAJPEAVBamoStubImpl@2Microsoft@@PEAVBamoDataSourcePrincipal@@@Z @ 0x1801003D0
 * Callers:
 *     ?BroadcastRemoveDataSource@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x1800FF87C (-BroadcastRemoveDataSource@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrinci.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z @ 0x180102400 (-RemoveDataSource@BamoDataProviderStubImpl@BamoImpl@@QEAAJPEAVBamoDataSourcePrincipal@@@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::CallRemoveDataSourceOnStub(
        struct Microsoft::BamoImpl::BamoStubImpl *a1,
        struct BamoDataSourcePrincipal *a2)
{
  unsigned int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)(*((_QWORD *)a1 + 4) + 44LL) )
  {
    v2 = BamoImpl::BamoDataProviderStubImpl::RemoveDataSource(a1, a2);
    if ( (int)(v2 + 0x80000000) >= 0 && v2 != -2018375675 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x293C,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)v2,
        v4);
  }
  return 0LL;
}
