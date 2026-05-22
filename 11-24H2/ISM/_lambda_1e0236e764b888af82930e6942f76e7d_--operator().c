/*
 * XREFs of _lambda_1e0236e764b888af82930e6942f76e7d_::operator() @ 0x1801CA600
 * Callers:
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_1e0236e764b888af82930e6942f76e7d___ @ 0x1801C9B00 (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ptr_HotKeyIn.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Emplace@AEBV?$shared_ptr@UHotKeyInfo@@@std@@@?$list@V?$shared_ptr@UHotKeyInfo@@@std@@V?$allocator@V?$shared_ptr@UHotKeyInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@V?$shared_ptr@UHotKeyInfo@@@std@@PEAX@1@QEAU21@AEBV?$shared_ptr@UHotKeyInfo@@@1@@Z @ 0x1801C9480 (--$_Emplace@AEBV-$shared_ptr@UHotKeyInfo@@@std@@@-$list@V-$shared_ptr@UHotKeyInfo@@@std@@V-$allo.c)
 *     std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_ac475c518f847abd04202679d77c0c8b___ @ 0x1801C9C1C (std--find_if_std--_List_iterator_std--_List_val_std--_List_simple_types_std--shared_ea_1801C9C1C.c)
 *     _lambda_727d8a5b377b3c7833c145a14255ee7c_::operator() @ 0x1801CA7DC (_lambda_727d8a5b377b3c7833c145a14255ee7c_--operator().c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_1e0236e764b888af82930e6942f76e7d_::operator()(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r8
  __int64 *v5; // rax
  _DWORD *v6; // rcx
  __int64 v7; // r9
  _BYTE *v8; // rax
  char v9; // bl
  bool v10; // zf
  std::_Ref_count_base *v11; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF
  __int64 *v19; // [rsp+68h] [rbp+20h]

  v2 = a2;
  v4 = *a2;
  v5 = (__int64 *)(a1 + 8);
  if ( (*(_WORD *)(*a2 + 24LL) & 0x200) == 0 )
  {
LABEL_9:
    if ( *(_QWORD *)*v5 != *(_QWORD *)*v2 )
      goto LABEL_13;
    v10 = *(_DWORD *)(*v5 + 8) == *(_DWORD *)(*v2 + 8LL);
    goto LABEL_11;
  }
  v6 = *(_DWORD **)a1;
  v19 = v5;
  v7 = *v5;
  if ( (*v6 & 0x200) == 0 )
  {
    std::find_if_std::_List_iterator_std::_List_val_std::_List_simple_types_std::shared_ptr_HotKeyInfo_________lambda_ac475c518f847abd04202679d77c0c8b___(
      &v18,
      **(_QWORD ***)(v4 + 40),
      *(_QWORD **)(v4 + 40),
      v7);
    if ( v18 == *(_QWORD *)(*v2 + 40LL) )
    {
      lambda_727d8a5b377b3c7833c145a14255ee7c_::operator()(*(_QWORD *)(a1 + 32));
      try
      {
        std::list<std::shared_ptr<HotKeyInfo>>::_Emplace<std::shared_ptr<HotKeyInfo> const &>(
          *v2 + 40LL,
          *(_QWORD *)(*v2 + 40LL),
          *(_QWORD **)(a1 + 40));
      }
      catch ( std::bad_alloc )
      {
        v13 = *(_DWORD **)(a1 + 48);
        *v13 = -2147024882;
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
          McTemplateU0sqq_EventWriteTransfer(
            (__int64)v13,
            (__int64)&v14,
            "HotKeyProcessor::RegisterHotKey::<lambda_1e0236e764b888af82930e6942f76e7d>::operator ()",
            288LL,
            14);
        v5 = v19;
        v2 = a2;
        goto LABEL_9;
      }
    }
    goto LABEL_12;
  }
  if ( (*(_WORD *)(v4 + 24) & 0x100) != 0 )
  {
    *(_WORD *)(v4 + 24) = *(_WORD *)v6 & 0x7AC0;
    *(_OWORD *)*a2 = *(_OWORD *)v7;
    *(_DWORD *)(*a2 + 16LL) = **(_DWORD **)(a1 + 16);
    v8 = *(_BYTE **)(a1 + 24);
    v9 = 1;
    *v8 = 1;
    goto LABEL_14;
  }
  if ( *(_QWORD *)v7 == *(_QWORD *)v4 )
  {
    v10 = *(_DWORD *)(v7 + 8) == *(_DWORD *)(v4 + 8);
LABEL_11:
    if ( v10 )
    {
LABEL_12:
      v9 = 1;
      goto LABEL_14;
    }
  }
LABEL_13:
  v9 = 0;
LABEL_14:
  v11 = (std::_Ref_count_base *)v2[1];
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  return v9;
}
