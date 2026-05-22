/*
 * XREFs of ??1SystemContextProvider@@MEAA@XZ @ 0x180108B48
 * Callers:
 *     ??1InputConfigContextProvider@@EEAA@XZ @ 0x1801084B8 (--1InputConfigContextProvider@@EEAA@XZ.c)
 *     ??1KernelContextProvider@@UEAA@XZ @ 0x1801087F0 (--1KernelContextProvider@@UEAA@XZ.c)
 *     ??_GSystemContextProvider@@MEAAPEAXI@Z @ 0x180108BB0 (--_GSystemContextProvider@@MEAAPEAXI@Z.c)
 *     ??1VirtualTouchpadContextProvider@@UEAA@XZ @ 0x180199A28 (--1VirtualTouchpadContextProvider@@UEAA@XZ.c)
 *     ??1DisplayOcclusionContextProvider@@UEAA@XZ @ 0x18019A560 (--1DisplayOcclusionContextProvider@@UEAA@XZ.c)
 * Callees:
 *     ??1?$_Hash@V?$_Uset_traits@_KV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@_K@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800275EC (--1-$_Hash@V-$_Uset_traits@_KV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$alloc.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@PEAUISystemContextObserver@@V?$_Uhash_compare@PEAUISystemContextObserver@@U?$hash@PEAUISystemContextObserver@@@std@@U?$equal_to@PEAUISystemContextObserver@@@3@@std@@V?$allocator@PEAUISystemContextObserver@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1800B11AC (-clear@-$_Hash@V-$_Uset_traits@PEAUISystemContextObserver@@V-$_Uhash_compare@PEAUISystemContextO.c)
 */

void __fastcall SystemContextProvider::~SystemContextProvider(SystemContextProvider *this)
{
  *(_QWORD *)this = &SystemContextProvider::`vftable'{for `ISystemContextProvider'};
  *((_QWORD *)this + 1) = &SystemContextProvider::`vftable'{for `RefCountedObject'};
  std::_Hash<std::_Uset_traits<ISystemContextObserver *,std::_Uhash_compare<ISystemContextObserver *,std::hash<ISystemContextObserver *>,std::equal_to<ISystemContextObserver *>>,std::allocator<ISystemContextObserver *>,0>>::clear((_QWORD *)this + 3);
  std::_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>::~_Hash<std::_Uset_traits<unsigned __int64,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<unsigned __int64>,0>>((__int64)this + 24);
  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
}
