/*
 * XREFs of ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180284E98
 * Callers:
 *     ?RecoverRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@QEAAXXZ @ 0x18065BF58 (-RecoverRemoteSessions@RemoteSessionWindowManager@implementation@Shell@Internal@Windows@winrt@@Q.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x18005480C (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x180056268 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180120A50 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18029DC70 (--1-$test_watcher@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18029DC98 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@detai.c)
 *     ?GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA?AV?$unordered_map@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@U?$hash@Uhstring@winrt@@@4@U?$equal_to@Uhstring@winrt@@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@@std@@XZ @ 0x1802A7C4C (-GetAllWindows@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAA-.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1802A9264 (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$vector@UWindowId@UI@Windows@winrt@@V-$allocator@UW.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z @ 0x180640918 (-GetCorrelationId@CloudPCHelpers@@YAXPEAGPEBG@Z.c)
 *     ??1?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1806497E4 (--1-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$equal_to@I@2@V-$a.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@AEBV?$vector@UWindowId@UI@Windows@winrt@@V?$allocator@UWindowId@UI@Windows@winrt@@@std@@@std@@@Z @ 0x1806506A4 (-RestoreRemoteSystemsDataAndNotifyOnLocal@RemoteSystemDataModel@factory_implementation@Shell@Int.c)
 *     ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A24 (-RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@In.c)
 *     ?SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@0@Z @ 0x180650C44 (-SetCorrelationId@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEA.c)
 *     ??$?0V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@PEAX@std@@@1@@Z @ 0x180661818 (--$-0V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$unordered_set@IU-$hash@I@std@@U-$.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x180661960 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661CB8 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661CB8.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RecoverRemoteSessionsData(
        winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rdx
  char v5; // r14
  _QWORD *v6; // rdi
  _QWORD *i; // rbx
  char v8; // r12
  wchar_t *v9; // rax
  const unsigned __int16 *v10; // r8
  const unsigned __int16 *v11; // rax
  RTL_SRWLOCK *v12; // rbx
  _QWORD *v13; // rdi
  _QWORD *j; // rbx
  volatile signed __int32 *v16; // [rsp+20h] [rbp-E0h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE v18[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v19; // [rsp+38h] [rbp-C8h]
  _BYTE v20[64]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 pvData[264]; // [rsp+B0h] [rbp-50h] BYREF

  tip2::open_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>>((struct wil::details::IFailureCallback *)v20);
  v2 = *((_QWORD *)this + 4);
  v16 = (volatile signed __int32 *)v2;
  lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________(
    &v16,
    v3,
    v2 + 8);
  if ( !*(_QWORD *)(v2 + 24) )
    lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________(
      &v16,
      v4,
      v2 + 72);
  v5 = 0;
  winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::GetAllWindows(*((PSRWLOCK *)this + 4));
  v6 = v19;
  for ( i = (_QWORD *)*v19; i != v6; i = (_QWORD *)*i )
  {
    v8 = winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnLocal(this);
    if ( v8 )
    {
      v9 = (wchar_t *)winrt::hstring::c_str((winrt::hstring *)(i + 2));
      CloudPCHelpers::GetCorrelationId(pvData, v9, v10);
      winrt::hstring::hstring((winrt::hstring *)&v17, pvData);
      v11 = winrt::hstring::c_str((winrt::hstring *)(i + 2));
      winrt::hstring::hstring((winrt::hstring *)&v16, v11);
      winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::SetCorrelationId(
        this,
        (const struct winrt::hstring *)&v16,
        (const struct winrt::hstring *)&v17);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v16);
      winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v17);
    }
    v5 |= v8;
  }
  std::_Hash<std::_Umap_traits<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,std::vector<winrt::Windows::UI::WindowId>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::vector<winrt::Windows::UI::WindowId>>>,0>>(v18);
  if ( !v5 )
  {
    v12 = (RTL_SRWLOCK *)*((_QWORD *)this + 4);
    Microsoft::WRL::Wrappers::SRWLock::LockShared(&v17, v12);
    std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>(
      v18,
      &v12[9]);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v17);
    v13 = v19;
    for ( j = (_QWORD *)*v19; j != v13; j = (_QWORD *)*j )
      winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnRemote(this);
    std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::~_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>(v18);
  }
  tip2::test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_watcher<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(v20);
  return v5;
}
