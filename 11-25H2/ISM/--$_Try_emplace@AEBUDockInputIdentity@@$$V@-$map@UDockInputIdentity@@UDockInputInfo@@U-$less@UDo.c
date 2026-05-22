/*
 * XREFs of ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x18017D354
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x18017E424 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     ?_Insert_node@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@2@U?$_Tree_id@PEAU?$_Tree_node@U?$pair@$$CB_KV?$set@V?$shared_ptr@UHotKeyInfo@@@std@@U?$less@V?$shared_ptr@UHotKeyInfo@@@std@@@2@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@@std@@PEAX@std@@@2@QEAU32@@Z @ 0x180032EAC (-_Insert_node@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CB_KV-$set@V-$shared_ptr@UHotKeyInfo@@.c)
 *     memset_0 @ 0x18009D3C8 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18009D5CC (--2@YAPEAX_K@Z.c)
 *     ?_Throw_tree_length_error@std@@YAXXZ @ 0x1800B39D4 (-_Throw_tree_length_error@std@@YAXXZ.c)
 *     ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180148398 (--1-$_Alloc_construct_ptr@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@DragNDropProcesso.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::map<DockInputIdentity,DockInputInfo>::_Try_emplace<DockInputIdentity const &,>(
        _QWORD *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v6; // r15
  __int64 *v7; // r9
  __int64 *v8; // r10
  unsigned int v9; // edx
  bool v10; // cf
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  bool v13; // cf
  unsigned __int64 v14; // rax
  _OWORD *v15; // rbx
  __int128 v17; // [rsp+20h] [rbp-30h] BYREF
  __int128 v18; // [rsp+30h] [rbp-20h]

  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8LL);
  v18 = (unsigned __int64)v7;
  v8 = v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v9 = *a3;
    do
    {
      *(_QWORD *)&v18 = v7;
      v10 = *((_DWORD *)v7 + 8) < v9;
      if ( *((_DWORD *)v7 + 8) == v9 )
      {
        v11 = *((_QWORD *)a3 + 1);
        v10 = v7[5] < v11;
        if ( v7[5] == v11 )
          v10 = *((_WORD *)v7 + 24) < *((_WORD *)a3 + 8);
      }
      if ( v10 )
      {
        DWORD2(v18) = 0;
        v7 = (__int64 *)v7[2];
      }
      else
      {
        DWORD2(v18) = 1;
        v8 = v7;
        v7 = (__int64 *)*v7;
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_16;
  v12 = *((_DWORD *)v8 + 8);
  v13 = *a3 < v12;
  if ( *a3 == v12 )
  {
    v14 = v8[5];
    v13 = *((_QWORD *)a3 + 1) < v14;
    if ( *((_QWORD *)a3 + 1) == v14 )
      v13 = *((_WORD *)a3 + 8) < *((_WORD *)v8 + 24);
  }
  if ( v13 )
  {
LABEL_16:
    if ( a1[1] == 0x1C71C71C71C71C7LL )
      std::_Throw_tree_length_error();
    v17 = (unsigned __int64)a1;
    v15 = operator new(0x90uLL);
    v15[2] = *(_OWORD *)a3;
    *((_QWORD *)v15 + 6) = *((_QWORD *)a3 + 2);
    memset_0((char *)v15 + 56, 0, 0x58uLL);
    *(_QWORD *)v15 = v6;
    *((_QWORD *)v15 + 1) = v6;
    *((_QWORD *)v15 + 2) = v6;
    *((_WORD *)v15 + 12) = 0;
    *((_QWORD *)&v17 + 1) = 0LL;
    std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>((__int64)&v17);
    v17 = v18;
    *(_QWORD *)a2 = std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned __int64 const,std::set<std::shared_ptr<HotKeyInfo>>>>>::_Insert_node(
                      (__int64)a1,
                      (__int64)&v17,
                      (__int64)v15);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
