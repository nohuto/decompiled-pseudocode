/*
 * XREFs of ??1CDuckingManager@@UEAA@XZ @ 0x1800285CC
 * Callers:
 *     ??_ECDuckingManager@@UEAAPEAXI@Z @ 0x180028980 (--_ECDuckingManager@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180012ED0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180015F70 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAA@XZ @ 0x180028380 (--1-$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@QEAA@XZ.c)
 *     ??1?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x180028448 (--1-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UCRende.c)
 *     ??1CSerialWorkQueue@@QEAA@XZ @ 0x1800286A4 (--1CSerialWorkQueue@@QEAA@XZ.c)
 */

void __fastcall CDuckingManager::~CDuckingManager(CDuckingManager *this)
{
  std::_Ref_count_base *v2; // rcx
  std::_Ref_count_base *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx

  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 50);
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 48);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  CSerialWorkQueue::~CSerialWorkQueue((CDuckingManager *)((char *)this + 240));
  std::_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>::~_Hash<std::_Umap_traits<std::wstring,CRenderEndpointDuckingManagerContext,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>,0>>((__int64 *)this + 22);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  CLockedList_UniqueValuesOnly<CDuckingNotification,0>::~CLockedList_UniqueValuesOnly<CDuckingNotification,0>((__int64)this + 72);
  v4 = (_QWORD *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
  {
    do
    {
      v5 = (_QWORD *)*v4;
      std::_Deallocate<16,0>(v4, (const struct std::nothrow_t *)0x10);
      v4 = v5;
    }
    while ( v5 );
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  *((_DWORD *)this + 5) = -1073741823;
}
