/*
 * XREFs of ??$_Assign_cast@AEAU?$pair@W4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@2@@?$list@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@V?$allocator@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@2@@std@@AEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18067124C
 * Callers:
 *     ?AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1806719E0 (-AddNewCPCIdToStateChangedCountsMap@CloudPCTelemetryCore@@CAXAEBV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Append_range_unchecked@V?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@std@@V12@@?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@@std@@@std@@U_Iterator_base0@2@@1@V21@@Z @ 0x18067118C (--$_Append_range_unchecked@V-$_List_unchecked_const_iterator@V-$_List_val@U-$_List__ea_18067118C.c)
 *     ??1?$_List_node_insert_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4CloudPCState@Shell@Internal@Windows@winrt@@I@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180671854 (--1-$_List_node_insert_op2@V-$allocator@U-$_List_node@U-$pair@$$CBW4CloudPCState@Shell@Internal@.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>::_Assign_cast<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState,unsigned int> &,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>>,std::_Iterator_base0>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  _DWORD **v4; // r14
  _DWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rsi
  _DWORD *v8; // rbx
  _DWORD **v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rcx
  __int64 v12; // rax
  _DWORD *v13; // rax
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-18h]

  v4 = *(_DWORD ***)a1;
  v5 = **(_DWORD ***)a1;
  while ( v5 != (_DWORD *)v4 )
  {
    if ( a2 == a3 )
    {
      v6 = (_QWORD *)*((_QWORD *)v5 + 1);
      *v6 = v4;
      v4[1] = v6;
      v7 = 0LL;
      do
      {
        v8 = *(_DWORD **)v5;
        std::_Deallocate<16,0>(v5, (const struct std::nothrow_t *)0x18);
        v5 = v8;
        ++v7;
      }
      while ( v8 != (_DWORD *)v4 );
      *(_QWORD *)(a1 + 8) -= v7;
      return;
    }
    v5[4] = *((_DWORD *)a2 + 4);
    v5[5] = *((_DWORD *)a2 + 5);
    v5 = *(_DWORD **)v5;
    a2 = (__int64 *)*a2;
  }
  v14 = a1;
  v15 = 0LL;
  v16 = 0LL;
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>::_Append_range_unchecked<std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>>,std::_Iterator_base0>,std::_List_unchecked_const_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>>>,std::_Iterator_base0>>(
    &v14,
    a2,
    a3);
  v9 = *(_DWORD ***)a1;
  v10 = v15;
  if ( v15 )
  {
    v11 = v9[1];
    v12 = *((_QWORD *)&v16 + 1);
    *(_QWORD *)(*((_QWORD *)&v16 + 1) + 8LL) = v11;
    *v11 = v12;
    v13 = (_DWORD *)v16;
    *(_QWORD *)v16 = v9;
    v9[1] = v13;
    *(_QWORD *)(a1 + 8) += v10;
    v15 = 0LL;
  }
  std::_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>::~_List_node_insert_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::CloudPCState const,unsigned int>,void *>>>(
    &v14,
    v9);
}
