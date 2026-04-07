/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@T_LARGE_INTEGER@@PEAXV?$_Uhash_compare@T_LARGE_INTEGER@@U?$hash@T_LARGE_INTEGER@@@std@@U?$equal_to@T_LARGE_INTEGER@@@3@@std@@V?$allocator@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBT_LARGE_INTEGER@@PEAX@std@@@std@@@std@@@1@V21@@Z @ 0x1800ED68C
 * Callers:
 *     ?UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z @ 0x1800F39CC (-UnregisterWindowCloseEvent@CWindowList@@AEAAJPEAUHWND__@@UDWM_WINDOW_CLOSE_EVENT_TOKEN@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800398F4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Hash_representation@_J@std@@YA_KAEB_J@Z @ 0x1800AC3B8 (--$_Hash_representation@_J@std@@YA_KAEB_J@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<_LARGE_INTEGER,void *,std::_Uhash_compare<_LARGE_INTEGER,std::hash<_LARGE_INTEGER>,std::equal_to<_LARGE_INTEGER>>,std::allocator<std::pair<_LARGE_INTEGER const,void *>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<_LARGE_INTEGER const,void *>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // r11
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rbx

  v5 = std::_Hash_representation<__int64>((const unsigned __int8 *)(a3 + 16));
  v7 = a1[3];
  v8 = 2 * (a1[6] & v5);
  if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5) + 8) == v6 )
  {
    if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
    {
      v9 = a1[1];
      *(_QWORD *)(v7 + 8 * v8) = v9;
    }
    else
    {
      v9 = v6[1];
    }
    *(_QWORD *)(v7 + 8 * v8 + 8) = v9;
  }
  else if ( *(_QWORD **)(v7 + 16 * (a1[6] & v5)) == v6 )
  {
    *(_QWORD *)(v7 + 16 * (a1[6] & v5)) = *v6;
  }
  v10 = *v6;
  --a1[2];
  *(_QWORD *)v6[1] = v10;
  *(_QWORD *)(v10 + 8) = v6[1];
  std::_Deallocate<16,0>(v6, (const struct std::nothrow_t *)0x20);
  *a2 = v10;
  return a2;
}
