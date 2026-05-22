/*
 * XREFs of ??4?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180098BA0
 * Callers:
 *     ??4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z @ 0x180015BF8 (--4PointerFrame@PointerInputMediator@@QEAAAEAU01@$$QEAU01@@Z.c)
 * Callees:
 *     ?clear@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAAXXZ @ 0x180014CF0 (-clear@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::operator=(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  if ( a1 != a2 )
  {
    std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::clear(a1);
    *(_DWORD *)a1 = *(_DWORD *)a2;
    v4 = a1[1];
    a1[1] = a2[1];
    a2[1] = v4;
    v5 = a1[2];
    a1[2] = a2[2];
    a2[2] = v5;
    v6 = a1[3];
    a1[3] = a2[3];
    a2[3] = v6;
    v7 = a1[4];
    a1[4] = a2[4];
    a2[4] = v7;
    v8 = a1[5];
    a1[5] = a2[5];
    a2[5] = v8;
    v9 = a1[6];
    a1[6] = a2[6];
    a2[6] = v9;
    v10 = a1[7];
    a1[7] = a2[7];
    a2[7] = v10;
  }
  return a1;
}
