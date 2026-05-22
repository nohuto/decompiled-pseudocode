/*
 * XREFs of ?FireEventsOnInputThread@MPC3DStateHelper@@AEAAXXZ @ 0x1800B3494
 * Callers:
 *     _lambda_cd53c665379f6d6b73078d77a45af54d_::_lambda_invoker_cdecl_ @ 0x1800B30C0 (_lambda_cd53c665379f6d6b73078d77a45af54d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x180012EB8 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180032CB0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUDockInputIde.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18005B6D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18009AC04 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@std@@@std@@YAXPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x1800B30D8 (--$_Destroy_range@V-$allocator@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Micro.c)
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAA?A_TAEAV?$function@$$A6AX_N@Z@1@@Z @ 0x1800B334C (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800B3458 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z @ 0x1800B3684 (-MPC3DStateHelper_FireEventsOnInputThread_@ISMTracing@@QEAAX_N0@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall MPC3DStateHelper::FireEventsOnInputThread(PSRWLOCK SRWLock)
{
  char v2; // r12
  char v3; // r14
  char v4; // di
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 i; // rdi
  char *v14; // r14
  __int64 j; // rdi
  void *v16; // rdx
  wil::details *Ptr; // rcx
  ISMTracing *v18; // rcx
  __int128 v19; // [rsp+20h] [rbp-30h] BYREF
  __int64 v20; // [rsp+30h] [rbp-20h]
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+48h] [rbp-8h]
  RTL_SRWLOCK *v23; // [rsp+80h] [rbp+30h] BYREF
  bool Ptr_high; // [rsp+88h] [rbp+38h]
  __int64 v25; // [rsp+90h] [rbp+40h] BYREF
  RTL_SRWLOCK *v26; // [rsp+98h] [rbp+48h] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  AcquireSRWLockExclusive(SRWLock);
  v26 = SRWLock;
  v2 = BYTE6(SRWLock[2].Ptr);
  LOBYTE(v23) = BYTE4(SRWLock[2].Ptr);
  Ptr_high = HIBYTE(SRWLock[2].Ptr);
  v3 = Ptr_high;
  v4 = BYTE5(SRWLock[2].Ptr);
  BYTE4(SRWLock[2].Ptr) = v2;
  BYTE5(SRWLock[2].Ptr) = v3;
  v5 = *(_QWORD *)SRWLock[6].Ptr;
  v25 = v5;
  while ( !*(_BYTE *)(v5 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v19, v5 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
      &v25,
      v6,
      v7,
      v8);
    v5 = v25;
  }
  v9 = *(_QWORD *)SRWLock[4].Ptr;
  v25 = v9;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    std::vector<std::function<void (bool)>>::emplace_back<std::function<void (bool)> &>((__int64 *)&v21, v9 + 40);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<DockInputIdentity const,DockInputInfo>>>,std::_Iterator_base0>::operator++(
      &v25,
      v10,
      v11,
      v12);
    v9 = v25;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v26);
  if ( v3 != v4 )
  {
    for ( i = v19; i != *((_QWORD *)&v19 + 1); i += 64LL )
      std::_Func_class<void,bool>::operator()(i, v3);
  }
  v14 = (char *)v21;
  if ( v2 != (_BYTE)v23 )
  {
    for ( j = v21; j != *((_QWORD *)&v21 + 1); j += 64LL )
      std::_Func_class<void,bool>::operator()(j, v2);
    AcquireSRWLockExclusive(SRWLock);
    v23 = SRWLock;
    if ( v2 )
      Ptr = (wil::details *)SRWLock[8].Ptr;
    else
      Ptr = (wil::details *)SRWLock[9].Ptr;
    wil::details::SetEvent(Ptr, v16);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v23);
  }
  if ( ISMTracing::IsEnabled() )
  {
    ISMTracing::Instance();
    ISMTracing::MPC3DStateHelper_FireEventsOnInputThread_(v18, v2, Ptr_high);
  }
  if ( v14 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      (__int64)v14,
      *((__int64 *)&v21 + 1));
    std::_Deallocate<16,0>(v14, (const struct std::nothrow_t *)((v22 - (_QWORD)v14) & 0xFFFFFFFFFFFFFFC0uLL));
  }
  if ( (_QWORD)v19 )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v19,
      *((__int64 *)&v19 + 1));
    std::_Deallocate<16,0>((char *)v19, (const struct std::nothrow_t *)((v20 - v19) & 0xFFFFFFFFFFFFFFC0uLL));
  }
}
