/*
 * XREFs of ?RestoreRemoteSystemsDataAndNotifyOnRemote@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBV?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@Z @ 0x180650A24
 * Callers:
 *     ?RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180284E98 (-RecoverRemoteSessionsData@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x18007CC04 (--9Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C577C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ??Bhstring@winrt@@QEBA?AV?$basic_string_view@GU?$char_traits@G@std@@@std@@XZ @ 0x1801953E8 (--Bhstring@winrt@@QEBA-AV-$basic_string_view@GU-$char_traits@G@std@@@std@@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18029DCE0 (--1-$com_ptr_t@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A9934 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ??$_Emplace_reallocate@AEBI@?$vector@IV?$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z @ 0x1805BCF78 (--$_Emplace_reallocate@AEBI@-$vector@IV-$allocator@I@std@@@std@@AEAAPEAIQEAIAEBI@Z.c)
 *     ??$open@V?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@0@XZ @ 0x180647644 (--$open@V-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649EFC (--1-$test_data_control@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@1@XZ @ 0x18064A4D0 (--C-$tip_test@V-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@@tip2@@QEAA-AV.c)
 *     ?RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUUri@Foundation@56@_N@Z @ 0x18064F958 (-RegisterRemoteDesktopProcess@RemoteSystemDataModel@factory_implementation@Shell@Internal@Window.c)
 *     ?DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEAAXIAEBUhstring@6@@Z @ 0x180663148 (-DeleteProcessId@RemoteSessionPersistenceHelper@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ?TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows@winrt@@SA?AUIRemoteSystemServicesExtension@RemoteSystems@3456@AEBI@Z @ 0x180666770 (-TryGetHostServicesForAppProcess@RemoteSystemServiceBroker@implementation@Shell@Internal@Windows.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RestoreRemoteSystemsDataAndNotifyOnRemote(
        winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper **this,
        const struct winrt::hstring *a2,
        __int64 a3)
{
  __int64 *v3; // rsi
  unsigned int *v5; // r14
  __int64 **v6; // rdi
  __int64 *v7; // rbx
  unsigned int *v8; // r15
  unsigned int *v9; // r12
  void (__fastcall ****HostServicesForAppProcess)(_QWORD, __int64 *, __int64 *); // rax
  bool v11; // si
  char v12; // al
  unsigned int *v13; // rdi
  __int64 v14; // r9
  void *v15; // rdx
  __int64 v16; // rsi
  unsigned int *i; // rbx
  void *Src[2]; // [rsp+20h] [rbp-30h] BYREF
  __int128 v19; // [rsp+30h] [rbp-20h] BYREF
  unsigned int *v20; // [rsp+40h] [rbp-10h]
  void *v22; // [rsp+A0h] [rbp+50h] BYREF
  volatile signed __int32 *v23; // [rsp+A8h] [rbp+58h] BYREF

  v3 = (__int64 *)a2;
  v19 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v6 = *(__int64 ***)(a3 + 8);
  v7 = *v6;
  v8 = 0LL;
  while ( v7 != (__int64 *)v6 )
  {
    v9 = (unsigned int *)(v7 + 2);
    v22 = 0LL;
    HostServicesForAppProcess = (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))winrt::Windows::Internal::Shell::implementation::RemoteSystemServiceBroker::TryGetHostServicesForAppProcess(
                                                                                        &v23,
                                                                                        v7 + 2);
    v11 = winrt::Windows::Foundation::operator!=(
            HostServicesForAppProcess,
            (void (__fastcall ****)(_QWORD, __int64 *, __int64 *))&v22);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v23);
    if ( v11 )
    {
      if ( v8 == v5 )
      {
        std::vector<unsigned int>::_Emplace_reallocate<unsigned int const &>((const void **)&v19, v8, (_DWORD *)v7 + 4);
        v5 = v20;
        v8 = (unsigned int *)*((_QWORD *)&v19 + 1);
      }
      else
      {
        *v8++ = *v9;
        *((_QWORD *)&v19 + 1) = v8;
      }
      v3 = (__int64 *)a2;
    }
    else
    {
      v3 = (__int64 *)a2;
      winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::DeleteProcessId(this[4], *v9, a2);
    }
    v7 = (__int64 *)*v7;
  }
  tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>>(
    &v22,
    a2);
  v12 = tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v22);
  v13 = (unsigned int *)v19;
  if ( v12 )
  {
    *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::operator->(
                  &v22,
                  (__int64 *)&v23)
             + 368) = 0;
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(&v23);
    tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::operator->(
      &v22,
      (__int64 *)&v23);
    winrt::hstring::operator std::basic_string_view<unsigned short>(v3, Src);
    std::wstring::assign((void **)(v14 + 272), Src[0], (unsigned __int64)Src[1]);
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(&v23);
    *(_QWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::operator->(
                   &v22,
                   (__int64 *)&v23)
              + 352) = v8 - v13;
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(&v23);
  }
  wil::com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>(&v22);
  v16 = 0LL;
  for ( i = v13; i != v8; ++i )
  {
    v22 = 0LL;
    winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::RegisterRemoteDesktopProcess(
      (winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel *)this,
      *i,
      (const struct winrt::Windows::Foundation::Uri *)&v22,
      1);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
    ++v16;
  }
  tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>>(
    &v22,
    v15);
  if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool((__int64 *)&v22) )
  {
    *(_QWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::operator->(
                   &v22,
                   (__int64 *)&v23)
              + 360) = v16;
    tip2::test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>::~test_data_control<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>>(&v23);
  }
  wil::com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_RecoverRemoteSessionTipTest,_tip_RecoverRemoteSessionTipTest>,wil::err_returncode_policy>(&v22);
  if ( v13 )
    std::_Deallocate<16,0>(v13, (const struct std::nothrow_t *)(((char *)v5 - (char *)v13) & 0xFFFFFFFFFFFFFFFCuLL));
}
