/*
 * XREFs of ??1MagnifierProcessor@@UEAA@XZ @ 0x1801AD32C
 * Callers:
 *     ??_EMagnifierProcessor@@UEAAPEAXI@Z @ 0x1801AD4B0 (--_EMagnifierProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Umap_traits@KV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA@XZ @ 0x1800EF654 (--1-$_Hash@V-$_Umap_traits@KV-$ComPtr@UIContextualProcessorBufferTarget@@@WRL@Microsoft@@V-$_Uha.c)
 */

void __fastcall MagnifierProcessor::~MagnifierProcessor(MagnifierProcessor *this)
{
  std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IContextualProcessorBufferTarget>>>,0>>((__int64)this + 16);
  *((_DWORD *)this + 3) = -1073741823;
}
