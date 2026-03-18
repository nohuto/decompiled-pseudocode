/*
 * XREFs of ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180273840
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180273878 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderProxy::RemoveDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  int v3; // r8d

  v3 = DataProviderProxy::RemoveSourceEntry(this, a2);
  if ( v3 < 0 )
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8, (unsigned int)v3);
  return 0LL;
}
