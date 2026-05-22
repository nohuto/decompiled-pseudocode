/*
 * XREFs of ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@UCompareGuids@VirtualHotKeyTracker@@V?$allocator@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x1801A9C64
 * Callers:
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x1801A9F70 (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180017AF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180032EAC (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B39D4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??0?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@QEAA@XZ @ 0x1801A90E0 (--0-$list@UKeyEventData@VirtualHotKeyTracker@@V-$allocator@UKeyEventData@VirtualHotKeyTracker@@@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@V?$list@UKeyEventData@VirtualHotKeyTracker@@V?$allocator@UKeyEventData@VirtualHotKeyTracker@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801A9EBC (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@V-$list@UKeyEventData@Virtua.c)
 *     memcmp_0 @ 0x1801C7CF0 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::map<_GUID,std::list<VirtualHotKeyTracker::KeyEventData>,VirtualHotKeyTracker::CompareGuids,std::allocator<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>>>::_Try_emplace<_GUID const &,>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  _OWORD *v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v12 = (unsigned __int64)v7;
  v8 = v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    *(_QWORD *)&v12 = v7;
    if ( memcmp_0(v7 + 4, a3, 0x10uLL) >= 0 )
    {
      DWORD2(v12) = 1;
      v8 = v7;
      v7 = (__int64 *)*v7;
    }
    else
    {
      DWORD2(v12) = 0;
      v7 = (__int64 *)v7[2];
    }
  }
  if ( *((_BYTE *)v8 + 25) || memcmp_0(a3, v8 + 4, 0x10uLL) < 0 )
  {
    if ( a1[1] == 0x3FFFFFFFFFFFFFFLL )
      std::_Throw_tree_length_error();
    *(_QWORD *)&v11 = a1;
    v9 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
    *((_QWORD *)&v11 + 1) = v9;
    v9[2] = *a3;
    std::list<VirtualHotKeyTracker::KeyEventData>::list<VirtualHotKeyTracker::KeyEventData>((_QWORD *)v9 + 6);
    *(_QWORD *)v9 = v6;
    *((_QWORD *)v9 + 1) = v6;
    *((_QWORD *)v9 + 2) = v6;
    *((_WORD *)v9 + 12) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<_GUID const,std::list<VirtualHotKeyTracker::KeyEventData>>,void *>>>(&v11);
    v11 = v12;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v11,
                      (__int64)v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
