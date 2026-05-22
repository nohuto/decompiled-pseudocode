/*
 * XREFs of ??$_Emplace@AEBU_GUID@@@?$_Tree@V?$_Tset_traits@U_GUID@@UGUIDComparer@PenInterface@@V?$allocator@U_GUID@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U_GUID@@PEAX@std@@_N@1@AEBU_GUID@@@Z @ 0x18018FA24
 * Callers:
 *     ?UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z @ 0x180190848 (-UpdateTransducerProperties@PenInterface@@AEAAXAEBUTransducerPropertiesReport@1@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x18004E104 (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18007DBF0 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_Tree_node@U_GUID@@PEAX@std@@@std@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D79C (--2@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B1794 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     memcmp_0 @ 0x1801CF190 (memcmp_0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Tree<std::_Tset_traits<_GUID,PenInterface::GUIDComparer,std::allocator<_GUID>,0>>::_Emplace<_GUID const &>(
        _QWORD *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // rbx
  __int64 *v8; // rsi
  char *v9; // rbx
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v12 = (unsigned __int64)v7;
  v8 = v6;
  while ( !*((_BYTE *)v7 + 25) )
  {
    *(_QWORD *)&v12 = v7;
    if ( memcmp_0((char *)v7 + 28, a3, 0x10uLL) >= 0 )
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
  if ( *((_BYTE *)v8 + 25) || memcmp_0(a3, (char *)v8 + 28, 0x10uLL) < 0 )
  {
    if ( a1[1] == 0x555555555555555LL )
      std::_Throw_tree_length_error();
    v11 = (unsigned __int64)a1;
    v9 = (char *)operator new(0x30uLL);
    *(_OWORD *)(v9 + 28) = *a3;
    *(_QWORD *)v9 = v6;
    *((_QWORD *)v9 + 1) = v6;
    *((_QWORD *)v9 + 2) = v6;
    *((_WORD *)v9 + 12) = 0;
    *((_QWORD *)&v11 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<_GUID,void *>>>((__int64)&v11);
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
