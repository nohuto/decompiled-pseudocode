/*
 * XREFs of ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180272DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x18025E7B4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x18025EA4C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ??$emplace@_KAEAPEAVBamoDataSourceProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x180272AA8 (--$emplace@_KAEAPEAVBamoDataSourceProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourcePro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderProxy::AddDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  DataProviderManager *v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 Unique; // [rsp+40h] [rbp+8h] BYREF
  struct BamoDataSourceProxy *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = a2;
  *((_QWORD *)a2 + 24) = this;
  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::emplace<unsigned __int64,BamoDataSourceProxy * &>(
    (float *)this + 20,
    (__int64)v5,
    &Unique,
    (void (__fastcall ****)(_QWORD))&v7);
  if ( !v5[8] )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, 2147942583LL);
  v3 = (DataProviderManager *)*((_QWORD *)this + 9);
  if ( v3 )
    DataProviderManager::CheckAndRegisterReadyReaders(v3, this, v7);
  return 0LL;
}
