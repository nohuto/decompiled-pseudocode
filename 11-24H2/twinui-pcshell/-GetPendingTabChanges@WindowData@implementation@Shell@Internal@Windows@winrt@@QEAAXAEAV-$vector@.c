/*
 * XREFs of ?GetPendingTabChanges@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEAV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@0@Z @ 0x1800C1AF4
 * Callers:
 *     ?UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z @ 0x18005103C (-UpdateTabsForWindow@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@QEAAX_K@Z.c)
 *     ?OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabDataModel@3UI@456@AEBUWindowTabDataModelTabsChangedEventArgs@38456@@Z @ 0x1800C1890 (-OnTabsChanged@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabData.c)
 * Callees:
 *     ??0?$unordered_set@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@V?$allocator@Uguid@winrt@@@4@@std@@QEAA@XZ @ 0x180049AA8 (--0-$unordered_set@Uguid@winrt@@U-$hash@Uguid@winrt@@@std@@U-$equal_to@Uguid@winrt@@@4@V-$alloca.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UWindowTabView@Shell@UI@Internal@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UWindowTabView@Shell@UI@Internal@45@@impl@winrt@@QEBA@I@Z @ 0x1800519AC (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UWindowTabView@Shell@.c)
 *     ?GetNetworkConnectivityLevel@?$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConnectionProfile@Connectivity@Networking@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180051D64 (-GetNetworkConnectivityLevel@-$consume_Windows_Networking_Connectivity_IConnectionProfile@UIConn.c)
 *     ?CreateInstanceAsync@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics@UITaskGroupDataSourceAdapterStatics@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180052F5C (-CreateInstanceAsync@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStat.c)
 *     ??$emplace@AEBUguid@winrt@@@?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@Uguid@winrt@@@std@@@std@@@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1800C22C0 (--$emplace@AEBUguid@winrt@@@-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@.c)
 *     ??1?$_Hash@V?$_Uset_traits@Uguid@winrt@@V?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@Uguid@winrt@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800C2530 (--1-$_Hash@V-$_Uset_traits@Uguid@winrt@@V-$_Uhash_compare@Uguid@winrt@@U-$hash@Uguid@winrt@@@std.c)
 *     ?Id@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800C2740 (-Id@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal.c)
 *     ??$_Emplace_reallocate@AEBUguid@winrt@@@?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAPEAUguid@winrt@@QEAU23@AEBU23@@Z @ 0x180126410 (--$_Emplace_reallocate@AEBUguid@winrt@@@-$vector@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@s.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::GetPendingTabChanges(
        PSRWLOCK SRWLock,
        __int64 a2,
        __int64 a3)
{
  unsigned int v6; // edi
  _OWORD *v7; // rdx
  _QWORD *v8; // r8
  int NetworkConnectivityLevel; // r15d
  __int64 v10; // rcx
  unsigned __int64 i; // rdx
  __int64 v12; // rdx
  _QWORD *Ptr; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // r8
  __int64 v16; // rcx
  _QWORD *v17; // rdi
  _QWORD *v18; // rbx
  _QWORD *v19; // r9
  __int64 v20; // rcx
  unsigned __int64 j; // rdx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // r10
  __int64 v25; // rax
  _QWORD *v26; // rax
  _OWORD *v27; // rdx
  __int64 v28; // [rsp+20h] [rbp-69h] BYREF
  __int64 v29[3]; // [rsp+28h] [rbp-61h] BYREF
  char v30[8]; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v31; // [rsp+48h] [rbp-41h]
  _OWORD *v32; // [rsp+58h] [rbp-31h]
  __int64 v33; // [rsp+70h] [rbp-19h]
  char v34[16]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v35; // [rsp+90h] [rbp+7h] BYREF

  AcquireSRWLockExclusive(SRWLock);
  v29[1] = (__int64)SRWLock;
  std::unordered_set<winrt::guid>::unordered_set<winrt::guid>((__int64)v30);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupDataSourceAdapterStatics<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroupDataSourceAdapterStatics>::CreateInstanceAsync(
    (__int64 **)&SRWLock[2],
    &v28);
  v6 = 0;
  NetworkConnectivityLevel = winrt::impl::consume_Windows_Networking_Connectivity_IConnectionProfile<winrt::Windows::Networking::Connectivity::IConnectionProfile>::GetNetworkConnectivityLevel(&v28);
  while ( v6 != NetworkConnectivityLevel )
  {
    winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Internal::UI::Shell::WindowTabView>,winrt::Windows::Internal::UI::Shell::WindowTabView>::GetAt(
      &v28,
      (winrt *)v29,
      v6);
    winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::Id(
      v29,
      &v35);
    v10 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 0x10; ++i )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)&v35 + i) ^ (unsigned __int64)v10);
    v12 = 2 * (v10 & (__int64)SRWLock[17].Ptr);
    Ptr = SRWLock[14].Ptr;
    v14 = (_QWORD *)Ptr[v12 + 1];
    if ( v14 == SRWLock[12].Ptr )
    {
LABEL_11:
      v14 = 0LL;
    }
    else
    {
      v15 = (_QWORD *)Ptr[v12];
      while ( 1 )
      {
        v16 = v35 - v14[2];
        if ( (_QWORD)v35 == v14[2] )
          v16 = *((_QWORD *)&v35 + 1) - v14[3];
        if ( !v16 )
          break;
        if ( v14 == v15 )
          goto LABEL_11;
        v14 = (_QWORD *)v14[1];
      }
    }
    if ( !v14 )
      v14 = SRWLock[12].Ptr;
    if ( v14 == SRWLock[12].Ptr )
    {
      v27 = *(_OWORD **)(a2 + 8);
      if ( v27 == *(_OWORD **)(a2 + 16) )
      {
        std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(a2);
      }
      else
      {
        *v27 = v35;
        *(_QWORD *)(a2 + 8) += 16LL;
      }
    }
    std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::emplace<winrt::guid const &>(
      v30,
      v34,
      &v35);
    if ( v29[0] )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v29);
    ++v6;
  }
  if ( v28 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v28);
  v17 = SRWLock[12].Ptr;
  v18 = (_QWORD *)*v17;
  v19 = v31;
  while ( v18 != v17 )
  {
    v8 = v18 + 2;
    v20 = 0xCBF29CE484222325uLL;
    for ( j = 0LL; j < 0x10; ++j )
      v20 = 0x100000001B3LL * (*((unsigned __int8 *)v8 + j) ^ (unsigned __int64)v20);
    v22 = v20 & v33;
    v7 = v32;
    v23 = (_QWORD *)*((_QWORD *)&v32[v20 & v33] + 1);
    if ( v23 == v19 )
    {
LABEL_30:
      v23 = 0LL;
    }
    else
    {
      v24 = *(_QWORD **)&v32[v22];
      while ( 1 )
      {
        v25 = *v8 - v23[2];
        if ( *v8 == v23[2] )
          v25 = v18[3] - v23[3];
        if ( !v25 )
          break;
        if ( v23 == v24 )
          goto LABEL_30;
        v23 = (_QWORD *)v23[1];
      }
    }
    v26 = v19;
    if ( v23 )
      v26 = v23;
    if ( v26 == v19 )
    {
      v7 = *(_OWORD **)(a3 + 8);
      if ( v7 == *(_OWORD **)(a3 + 16) )
      {
        std::vector<winrt::guid>::_Emplace_reallocate<winrt::guid const &>(a3);
      }
      else
      {
        *v7 = *(_OWORD *)v8;
        *(_QWORD *)(a3 + 8) += 16LL;
      }
      v19 = v31;
    }
    v18 = (_QWORD *)*v18;
  }
  std::_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>::~_Hash<std::_Uset_traits<winrt::guid,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<winrt::guid>,0>>(
    v30,
    v7,
    v8,
    v19);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
