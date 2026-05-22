/*
 * XREFs of ??$_Try_emplace@AEBK$$V@?$map@KV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801C98BC
 * Callers:
 *     ?FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV?$shared_ptr@UHotKeyInfo@@@std@@PEAPEAVHotkeyClientRegistration@@@Z @ 0x1801CB8D0 (-FindRegisteredHotKey@HotKeyProcessor@@AEAAJIIIIU_GUID@@PEAV-$shared_ptr@UHotKeyInfo@@@std@@PEAP.c)
 *     ?RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z @ 0x1801CC0E0 (-RegisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@III_N@Z.c)
 *     ?UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z @ 0x1801CCD50 (-UnregisterHotKey@HotKeyProcessor@@UEAAJUMessageObjectID@@II@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800180C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18004E104 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??$_Find_lower_bound@K@?$_Tree@V?$_Tmap_traits@KUContactState@MagnifierRecognizer@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBKUContactState@MagnifierRecognizer@@@std@@PEAX@std@@@1@AEBK@Z @ 0x18007E6A4 (--$_Find_lower_bound@K@-$_Tree@V-$_Tmap_traits@KUContactState@MagnifierRecognizer@@U-$less@K@std.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B1794 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??0?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1801880F0 (--0-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801CA22C (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$list@V-$shared_ptr@UHotKeyInfo@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::map<unsigned long,std::list<std::shared_ptr<HotKeyInfo>>>::_Try_emplace<unsigned long const &,>(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v6; // r8
  __int64 v7; // rbx
  _DWORD *v8; // rdi
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-18h]

  std::_Tree<std::_Tmap_traits<unsigned long,MagnifierRecognizer::ContactState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,MagnifierRecognizer::ContactState>>,0>>::_Find_lower_bound<unsigned long>(
    a1,
    &v11,
    a3);
  if ( *(_BYTE *)(v12 + 25) || *v6 < *(_DWORD *)(v12 + 32) )
  {
    if ( a1[1] == 0x492492492492492LL )
      std::_Throw_tree_length_error();
    v7 = *a1;
    *(_QWORD *)&v10 = a1;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
    *((_QWORD *)&v10 + 1) = v8;
    v8[8] = *a3;
    std::list<std::shared_ptr<HotKeyInfo>>::list<std::shared_ptr<HotKeyInfo>>((_QWORD *)v8 + 5);
    *(_QWORD *)v8 = v7;
    *((_QWORD *)v8 + 1) = v7;
    *((_QWORD *)v8 + 2) = v7;
    *((_WORD *)v8 + 12) = 0;
    *((_QWORD *)&v10 + 1) = 0LL;
    std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<unsigned long const,std::list<std::shared_ptr<HotKeyInfo>>>,void *>>>(&v10);
    v10 = v11;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v10,
                      (__int64)v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v12;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
