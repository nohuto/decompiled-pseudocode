/*
 * XREFs of ?TerminateApp@UwpAppStateManager@@UEAAXPEBGW4TerminationType@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x180572D30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??0?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z @ 0x180049024 (--0-$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy@?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@AEAAXXZ @ 0x18007BF4C (-_Tidy@-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V-$allocat.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??$find@PEBGU?$less@X@std@@$0A@@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@U?$less@X@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@VUwpAppPackageInfo@@@2@@std@@@std@@@std@@@1@AEBQEBG@Z @ 0x1805724A8 (--$find@PEBGU-$less@X@std@@$0A@@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V.c)
 *     ?GetActiveViews@UwpAppPackageInfo@@QEAA?AV?$vector@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIWinRTApplicationView@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180572A10 (-GetActiveViews@UwpAppPackageInfo@@QEAA-AV-$vector@V-$com_ptr_t@UIWinRTApplicationView@@Uerr_exc.c)
 *     ?CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z @ 0x18057646C (-CloseWinRTApplicationView@@YAXPEAUIWinRTApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UwpAppStateManager::TerminateApp(__int64 a1, char *a2)
{
  struct IWinRTApplicationView **v3; // rbx
  struct IWinRTApplicationView **v4; // rdi
  __int64 ActiveViews; // rsi
  struct IWinRTApplicationView **v6; // r14
  struct IWinRTApplicationView **v7; // r15
  __int64 v8; // [rsp+20h] [rbp-40h] BYREF
  std::_Ref_count_base *v9; // [rsp+28h] [rbp-38h]
  __int128 v10; // [rsp+30h] [rbp-30h] BYREF
  __int64 v11; // [rsp+40h] [rbp-20h]
  _BYTE v12[24]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v13; // [rsp+90h] [rbp+30h] BYREF
  char *v14; // [rsp+98h] [rbp+38h] BYREF
  RTL_SRWLOCK *v15; // [rsp+A8h] [rbp+48h] BYREF

  v14 = a2;
  v10 = 0LL;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&v15, (RTL_SRWLOCK *)(a1 + 48));
  std::_Tree<std::_Tmap_traits<std::wstring,std::shared_ptr<UwpAppPackageInfo>,std::less<void>,std::allocator<std::pair<std::wstring const,std::shared_ptr<UwpAppPackageInfo>>>,0>>::find<unsigned short const *,std::less<void>,0>(
    (__int64 *)(a1 + 56),
    &v13,
    &v14);
  if ( v13 == *(_QWORD *)(a1 + 56) )
  {
    v3 = 0LL;
    v4 = 0LL;
  }
  else
  {
    std::shared_ptr<InputAppViewCoodinatorHandler>::shared_ptr<InputAppViewCoodinatorHandler>(&v8, (_QWORD *)(v13 + 64));
    ActiveViews = UwpAppPackageInfo::GetActiveViews(v8, (__int64)v12);
    v3 = 0LL;
    v6 = 0LL;
    v4 = 0LL;
    v7 = 0LL;
    if ( &v10 != (__int128 *)ActiveViews )
    {
      std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v10);
      v10 = *(_OWORD *)ActiveViews;
      v4 = (struct IWinRTApplicationView **)*((_QWORD *)&v10 + 1);
      v3 = (struct IWinRTApplicationView **)v10;
      v11 = *(_QWORD *)(ActiveViews + 16);
      *(_QWORD *)ActiveViews = 0LL;
      *(_QWORD *)(ActiveViews + 8) = 0LL;
      *(_QWORD *)(ActiveViews + 16) = 0LL;
      v6 = v3;
      v7 = v4;
    }
    std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)v12);
    if ( v9 )
    {
      std::_Ref_count_base::_Decref(v9);
      v3 = v6;
      v4 = v7;
    }
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v15);
  if ( v3 != v4 )
  {
    do
      CloseWinRTApplicationView(*v3++);
    while ( v3 != *((struct IWinRTApplicationView ***)&v10 + 1) );
  }
  std::vector<wil::com_ptr_t<IWinRTApplicationView,wil::err_exception_policy>>::_Tidy((__int64)&v10);
}
