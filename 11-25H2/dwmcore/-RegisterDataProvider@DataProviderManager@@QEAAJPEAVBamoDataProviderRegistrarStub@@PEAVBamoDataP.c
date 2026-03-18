/*
 * XREFs of ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801CBE4C
 * Callers:
 *     ?Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801CBE10 (-Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataPr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@_KAEAPEAVDataProviderProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x1801CBF68 (--$emplace@_KAEAPEAVDataProviderProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@.c)
 *     ?RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ @ 0x1801CC0CC (-RemoveProcessedReadersFromReadyList@DataProviderManager@@AEAAXXZ.c)
 *     ??$GetUniqueId@VBamoDataProviderProxy@@@DataProviderHelper@@YA_KPEAVBamoDataProviderProxy@@@Z @ 0x1801CC15C (--$GetUniqueId@VBamoDataProviderProxy@@@DataProviderHelper@@YA_KPEAVBamoDataProviderProxy@@@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x180259F30 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z @ 0x18027C9E0 (-RegisterReader@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@@Z.c)
 */

__int64 __fastcall DataProviderManager::RegisterDataProvider(
        DataProviderManager *this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  __int64 v6; // rax
  unsigned __int64 **v7; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 **i; // rbp
  unsigned __int64 *v10; // rsi
  DataSourceProxy *DataSourceProxy; // rax
  int v12; // eax
  const char *v13; // r9
  _BYTE v15[56]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 Unique; // [rsp+60h] [rbp+8h] BYREF
  struct BamoDataProviderProxy *v18; // [rsp+68h] [rbp+10h] BYREF

  *((_QWORD *)a3 + 9) = this;
  v18 = a3;
  Unique = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::emplace<unsigned __int64,DataProviderProxy * &>(
    (char *)this + 40,
    v15,
    &Unique,
    &v18);
  if ( v15[8] )
  {
    v6 = DataProviderHelper::GetUniqueId<BamoDataProviderProxy>(a3);
    v7 = (unsigned __int64 **)*((_QWORD *)this + 13);
    v8 = v6;
    for ( i = (unsigned __int64 **)*((_QWORD *)this + 14); v7 != i; ++v7 )
    {
      v10 = *v7;
      if ( (*v7)[9] == v8 )
      {
        DataSourceProxy = DataProviderManager::GetDataSourceProxy(this, v8, v10[10]);
        if ( DataSourceProxy )
        {
          v12 = DataSourceProxy::RegisterReader(DataSourceProxy, (struct CDataSourceReader *)v10);
          if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -2147024891 )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xEE,
              (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
              v13);
          *((_BYTE *)*v7 + 88) &= ~2u;
        }
      }
    }
    DataProviderManager::RemoveProcessedReadersFromReadyList(this);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD0,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x800700B7LL);
    return 2147942583LL;
  }
}
