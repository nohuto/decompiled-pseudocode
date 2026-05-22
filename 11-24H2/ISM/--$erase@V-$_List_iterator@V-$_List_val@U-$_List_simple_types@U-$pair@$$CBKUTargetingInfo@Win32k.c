/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@KUTargetingInfo@Win32kInterop@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUTargetingInfo@Win32kInterop@@@std@@@std@@@std@@@1@V21@@Z @ 0x18003A500
 * Callers:
 *     ?ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z @ 0x180039A90 (-ProcessInputStreamEndedMessage@Win32kInterop@@AEAAXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009D758 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned long,Win32kInterop::TargetingInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,Win32kInterop::TargetingInfo>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        void **a3)
{
  void **v5; // rdx
  void **v6; // rax
  void *v7; // rax
  _QWORD *v8; // rdi
  void *v9; // rcx
  void *v10; // rcx

  v5 = (void **)(a1[3]
               + 16
               * ((0x100000001B3LL
                 * (*((unsigned __int8 *)a3 + 19) ^ (0x100000001B3LL
                                                   * (*((unsigned __int8 *)a3 + 18) ^ (0x100000001B3LL
                                                                                     * (*((unsigned __int8 *)a3 + 17) ^ (0x100000001B3LL * (*((unsigned __int8 *)a3 + 16) ^ 0xCBF29CE484222325uLL)))))))) & a1[6]));
  v6 = (void **)*v5;
  if ( v5[1] == a3 )
  {
    if ( v6 == a3 )
    {
      v7 = (void *)a1[1];
      *v5 = v7;
    }
    else
    {
      v7 = a3[1];
    }
    v5[1] = v7;
  }
  else if ( v6 == a3 )
  {
    *v5 = *a3;
  }
  v8 = *a3;
  --a1[2];
  *(_QWORD *)a3[1] = v8;
  v8[1] = a3[1];
  v9 = a3[4];
  if ( v9 )
  {
    a3[4] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = a3[3];
  if ( v10 )
  {
    a3[3] = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  operator delete(a3, (const struct std::nothrow_t *)0x28);
  *a2 = v8;
  return a2;
}
