/*
 * XREFs of ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801C2884
 * Callers:
 *     ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801C18A0 (--$_Assign_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List_simple_types@V-$sha.c)
 *     ??$_Construct_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801C19A8 (--$_Construct_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_Li_ea_1801C19A8.c)
 *     _std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo_____::_Assign_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo______std::_Iterator_base0__std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo______std::_Iterator_base0____::_1_::dtor$0 @ 0x1801D2021 (_std--list_std--shared_ptr_HotKeyInfo__std--allocator_std--shared_ptr_HotKeyInfo_____--_Assign_u.c)
 *     _std::list_std::shared_ptr_HotKeyInfo__std::allocator_std::shared_ptr_HotKeyInfo_____::_Construct_range_unchecked_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo______std::_Iterator_base0__std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo______std::_Iterator_base0____::_1_::dtor$0 @ 0x1801D2033 (_std--list_std--shared_ptr_HotKeyInfo__std--allocator_std--shared_ptr_HotKeyInfo_____--_Construc.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801C20C4 (--$_Freenode@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@-$_Lis.c)
 */

void __fastcall std::_List_node_insert_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        __int64 a1)
{
  char *v1; // rbx
  char *v2; // rdx

  if ( *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) = 0LL;
    **(_QWORD **)(a1 + 16) = 0LL;
    v1 = *(char **)(a1 + 24);
    while ( v1 )
    {
      v2 = v1;
      v1 = *(char **)v1;
      std::_List_node<std::shared_ptr<HotKeyInfo>,void *>::_Freenode<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
        a1,
        v2);
    }
  }
}
