/*
 * XREFs of _lambda_139f71076f5ab0ecef881a1ffc08c112_::operator() @ 0x1801CA49C
 * Callers:
 *     std::remove_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_139f71076f5ab0ecef881a1ffc08c112___ @ 0x1801C9D98 (std--remove_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKey.c)
 * Callees:
 *     ??4?$shared_ptr@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180058360 (--4-$shared_ptr@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-Nt.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _lambda_31ada6ebdd22db73722d2ce1394329de_::operator() @ 0x1801CA710 (_lambda_31ada6ebdd22db73722d2ce1394329de_--operator().c)
 *     ?_Unchecked_erase@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@AEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@2@PEAU32@QEAU32@@Z @ 0x1801CD110 (-_Unchecked_erase@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allocator@V-$shared_ptr@UHotKeyInfo.c)
 */

char __fastcall lambda_139f71076f5ab0ecef881a1ffc08c112_::operator()(__int64 **a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // r14
  __int64 v5; // rdx
  __int64 *v6; // rax
  __int128 v7; // xmm0
  __int64 v8; // r12
  _QWORD *v9; // rsi
  _QWORD *v10; // rbx
  _QWORD *v11; // rdi
  __int64 *v12; // rcx
  std::_Ref_count_base *v13; // rcx
  char v15; // al
  std::_Ref_count_base *v16; // rcx
  char v17; // bl
  _OWORD v18[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *a2;
  v4 = a2;
  if ( (*(_WORD *)(*a2 + 24LL) & 0x200) == 0 )
  {
    v12 = a1[2];
    goto LABEL_22;
  }
  v5 = **a1;
  if ( *(_QWORD *)(v5 + 24) == *(_QWORD *)v3 && *(_DWORD *)(v5 + 32) == *(_DWORD *)(v3 + 8) )
  {
    v6 = a1[1];
    *(_QWORD *)&v18[0] = 0LL;
    DWORD2(v18[0]) = 0;
    v7 = v18[0];
    ++*(_DWORD *)v6;
    *(_OWORD *)*v4 = v7;
    *(_DWORD *)(*v4 + 16LL) = 0;
    *(_WORD *)(*v4 + 24LL) |= 0x100u;
  }
  else
  {
    v8 = v3 + 40;
    v9 = *(_QWORD **)(v3 + 40);
    v10 = (_QWORD *)*v9;
    v18[0] = *(_OWORD *)a1[2];
    while ( 1 )
    {
      if ( v10 == v9 )
      {
        v11 = v10;
        goto LABEL_14;
      }
      if ( (unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v18, v10 + 2) )
        break;
      v10 = (_QWORD *)*v10;
    }
    v11 = v10;
    while ( 1 )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v9 )
        break;
      if ( !(unsigned __int8)lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v18, v10 + 2) )
      {
        std::shared_ptr<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::operator=(
          v11 + 2,
          v10 + 2);
        v11 = (_QWORD *)*v11;
      }
    }
LABEL_14:
    std::list<std::shared_ptr<HotKeyInfo>>::_Unchecked_erase(v8, v11, v9);
  }
  if ( (*(_WORD *)(*v4 + 24LL) & 0x100) != 0 && !*(_QWORD *)(*v4 + 48LL) )
  {
    v12 = a1[2];
    a2 = v4;
LABEL_22:
    v15 = lambda_31ada6ebdd22db73722d2ce1394329de_::operator()(v12, a2);
    v16 = (std::_Ref_count_base *)v4[1];
    v17 = v15;
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    return v17;
  }
  v13 = (std::_Ref_count_base *)v4[1];
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  return 0;
}
