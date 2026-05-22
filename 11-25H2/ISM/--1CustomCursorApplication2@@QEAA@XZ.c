/*
 * XREFs of ??1CustomCursorApplication2@@QEAA@XZ @ 0x1800F4720
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VCustomCursorApplication2@@@std@@EEAAXXZ @ 0x1800F6510 (-_Destroy@-$_Ref_count_obj2@VCustomCursorApplication2@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800275EC (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180058DC8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18007FF1C (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall CustomCursorApplication2::~CustomCursorApplication2(CustomCursorApplication2 *this)
{
  std::_Ref_count_base *v2; // rcx

  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 11);
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>((__int64)this + 16);
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( v2 )
    std::_Ref_count_base::_Decwref(v2);
}
