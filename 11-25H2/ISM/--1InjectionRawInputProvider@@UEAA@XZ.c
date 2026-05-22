/*
 * XREFs of ??1InjectionRawInputProvider@@UEAA@XZ @ 0x1800DEDE8
 * Callers:
 *     ??_GInjectionRawInputProvider@@UEAAPEAXI@Z @ 0x1800DEE60 (--_GInjectionRawInputProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$_Hash@V?$_Umap_traits@KV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DEC50 (--1-$_Hash@V-$_Umap_traits@KV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo.c)
 *     ??1?$_Hash@V?$_Umap_traits@KV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@2@V?$allocator@U?$pair@$$CBKV?$unique_ptr@VInputInfoValidator@@U?$default_delete@VInputInfoValidator@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800DECA4 (--1-$_Hash@V-$_Umap_traits@KV-$unique_ptr@VInputInfoValidator@@U-$default_delete@VInputInfoValid.c)
 */

void __fastcall InjectionRawInputProvider::~InjectionRawInputProvider(InjectionRawInputProvider *this)
{
  *(_QWORD *)this = &InjectionRawInputProvider::`vftable'{for `IRawInputProvider'};
  *((_QWORD *)this + 1) = &InjectionRawInputProvider::`vftable'{for `RefCountedObject'};
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<InputInfoValidator>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<InputInfoValidator>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<InputInfoValidator>>>,0>>((__int64 *)this + 13);
  std::_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>::~_Hash<std::_Umap_traits<unsigned long,std::unique_ptr<LegacyDeviceInfo>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,std::unique_ptr<LegacyDeviceInfo>>>,0>>((__int64 *)this + 5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 3);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
