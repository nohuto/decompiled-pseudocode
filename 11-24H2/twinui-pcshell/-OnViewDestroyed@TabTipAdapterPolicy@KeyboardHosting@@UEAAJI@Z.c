/*
 * XREFs of ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@UEAAJI@Z @ 0x1800AB570
 * Callers:
 *     <none>
 * Callees:
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@1@V21@@Z @ 0x1800AB654 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBIUViewState@KeyboardHo.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::OnViewDestroyed(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rbx
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  _QWORD *Ptr; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // r8
  _QWORD *v12; // rcx
  char v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+38h] [rbp+10h]

  v15 = a2;
  v2 = this + 98;
  AcquireSRWLockExclusive(this + 98);
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)&v15 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  Ptr = this[93].Ptr;
  v9 = this[91].Ptr;
  v10 = 2 * (v5 & (__int64)this[96].Ptr);
  v11 = (_QWORD *)Ptr[2 * (v5 & (__int64)this[96].Ptr) + 1];
  if ( v11 == v9 )
  {
LABEL_8:
    v11 = 0LL;
  }
  else
  {
    v12 = (_QWORD *)Ptr[v10];
    while ( a2 != *((_DWORD *)v11 + 4) )
    {
      if ( v11 == v12 )
        goto LABEL_8;
      v11 = (_QWORD *)v11[1];
    }
  }
  if ( !v11 )
    v11 = this[91].Ptr;
  if ( v11 != v9 )
    std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,KeyboardHosting::ViewState>>>>,0>(
      &this[90],
      &v14);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return 0LL;
}
