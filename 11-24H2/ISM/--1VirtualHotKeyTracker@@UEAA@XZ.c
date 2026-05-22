/*
 * XREFs of ??1VirtualHotKeyTracker@@UEAA@XZ @ 0x1801B080C
 * Callers:
 *     ??_GVirtualHotKeyTracker@@UEAAPEAXI@Z @ 0x1801B0880 (--_GVirtualHotKeyTracker@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1801B06A8 (--1-$_Tree@V-$_Tmap_traits@U_GUID@@V-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKey.c)
 */

void __fastcall VirtualHotKeyTracker::~VirtualHotKeyTracker(char **this)
{
  char *v2; // rdx
  char *v3; // rcx
  char *v4; // rbx
  std::_Ref_count_base *v5; // rcx

  std::_Tree<std::_Tmap_traits<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>,0>>::~_Tree<std::_Tmap_traits<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>,0>>(this + 6);
  v2 = this[4];
  **((_QWORD **)v2 + 1) = 0LL;
  v3 = *(char **)v2;
  if ( *(_QWORD *)v2 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x30);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(this[4], (const struct std::nothrow_t *)0x30);
  v5 = (std::_Ref_count_base *)this[3];
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  *((_DWORD *)this + 3) = -1073741823;
}
