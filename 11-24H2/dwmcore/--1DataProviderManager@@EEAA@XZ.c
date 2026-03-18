/*
 * XREFs of ??1DataProviderManager@@EEAA@XZ @ 0x18025E908
 * Callers:
 *     ??_GDataProviderManager@@EEAAPEAXI@Z @ 0x18025EA00 (--_GDataProviderManager@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x18008E308 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Tidy@?$vector@PEAVCDataSourceReader@@V?$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ @ 0x18018C0B8 (-_Tidy@-$vector@PEAVCDataSourceReader@@V-$allocator@PEAVCDataSourceReader@@@std@@@std@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180248228 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x18025E874 (--1-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare@_KU.c)
 */

void __fastcall DataProviderManager::~DataProviderManager(DataProviderManager *this)
{
  _QWORD *v2; // rcx
  _QWORD *i; // rax

  *(_QWORD *)this = &DataProviderManager::`vftable';
  v2 = (_QWORD *)*((_QWORD *)this + 6);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    *(_QWORD *)(i[3] + 72LL) = 0LL;
  std::vector<CDataSourceReader *>::_Tidy((__int64)this + 104);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::~_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease((Microsoft::Bamo::BaseBamoConnection **)this + 3);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 2);
}
