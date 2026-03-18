/*
 * XREFs of ?CreateDataSourceProxy@@YAJPEAVBamoPeer@dataprovider_AutoBamos@@PEAPEAVBamoDataSourceProxy@@@Z @ 0x180288118
 * Callers:
 *     ?Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z @ 0x180279520 (-Materialize_BamoDataSourceProxy@BamoPeerImpl@dataprovider_AutoBamos@BamoImpl@@QEAAJI@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x18000D968 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 *     ??0DataSourcePropertySet@@QEAA@XZ @ 0x180287E50 (--0DataSourcePropertySet@@QEAA@XZ.c)
 */

__int64 __fastcall CreateDataSourceProxy(struct dataprovider_AutoBamos::BamoPeer *a1, struct BamoDataSourceProxy **a2)
{
  char *v3; // rax
  char *v4; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (char *)DefaultHeap::AllocClear(0xE8uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(0x8007000E, retaddr);
  memset_0(v3 + 24, 0, 0xD0uLL);
  *((_DWORD *)v4 + 6) = 0;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 11) = 0;
  *((_QWORD *)v4 + 2) = &BamoImpl::BamoDataSourceProxyImpl::`vftable';
  *((_QWORD *)v4 + 6) = 0LL;
  *((_QWORD *)v4 + 7) = 0LL;
  *(_QWORD *)v4 = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)v4 + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  DataSourcePropertySet::DataSourcePropertySet((DataSourcePropertySet *)(v4 + 64));
  *((_QWORD *)v4 + 25) = 0LL;
  *((_QWORD *)v4 + 26) = 0LL;
  *((_QWORD *)v4 + 27) = 0LL;
  *a2 = (struct BamoDataSourceProxy *)v4;
  return 0LL;
}
