/*
 * XREFs of ??1TouchInfoAdapter@@UEAA@XZ @ 0x1801BE8B8
 * Callers:
 *     ??_ETouchInfoAdapter@@UEAAPEAXI@Z @ 0x1801BE910 (--_ETouchInfoAdapter@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800275EC (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 */

void __fastcall TouchInfoAdapter::~TouchInfoAdapter(TouchInfoAdapter *this)
{
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &TouchInfoAdapter::`vftable'{for `ISessionBasedPointerDeviceArbitrationClient'};
  *((_QWORD *)this + 1) = &TouchInfoAdapter::`vftable'{for `RefCountedObject'};
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>((__int64)this + 40);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
