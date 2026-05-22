/*
 * XREFs of ??$_Assign_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801C8FB0
 * Callers:
 *     ??4?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1801CA470 (--4-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo@@@std@@@2@@std.c)
 * Callees:
 *     ??4?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800F9208 (--4-$shared_ptr@VSystemCursorShapeBitmap2@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$shared_ptr@UHotKeyInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x1801C8EF0 (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_1801C8EF0.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1801CA104 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@V-$shared_ptr@UHotKeyInfo@@@std@@PEAX@std@.c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801CD110 (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::list<std::shared_ptr<HotKeyInfo>>::_Assign_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD **v6; // r15
  _QWORD *v7; // rsi
  _QWORD **v8; // rdx
  __int64 v9; // r8
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-18h]

  v6 = *(_QWORD ***)a1;
  v7 = **(_QWORD ***)a1;
  while ( 1 )
  {
    if ( a2 == a3 )
      return std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(a1, v7, v6);
    if ( v7 == v6 )
      break;
    std::shared_ptr<SystemCursorShapeBitmap2>::operator=(v7 + 2, a2 + 2);
    v7 = (_QWORD *)*v7;
    a2 = (_QWORD *)*a2;
  }
  v14 = a1;
  v15 = 0LL;
  v16 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::shared_ptr<HotKeyInfo>>>,std::_Iterator_base0>>(
    &v14,
    a2,
    a3);
  v8 = *(_QWORD ***)a1;
  v9 = v15;
  if ( v15 )
  {
    v10 = v8[1];
    v11 = *((_QWORD *)&v16 + 1);
    *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL) = v10;
    *v10 = v11;
    v12 = (_QWORD *)v16;
    *(_QWORD *)v16 = v8;
    v8[1] = v12;
    *(_QWORD *)(a1 + 8) += v9;
    v15 = 0LL;
  }
  return std::_List_node_insert_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::shared_ptr<HotKeyInfo>,void *>>>(
           &v14,
           v8);
}
