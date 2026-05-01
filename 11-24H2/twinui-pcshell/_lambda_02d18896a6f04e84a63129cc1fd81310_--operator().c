/*
 * XREFs of _lambda_02d18896a6f04e84a63129cc1fd81310_::operator() @ 0x1805E3CCC
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___ @ 0x1805E0AB4 (_anonymous_namespace_--RunSynchronousInSTA__lambda_02d18896a6f04e84a63129cc1fd81310___.c)
 *     _lambda_d94d82cd4edd08e6199a1e53cb8b0ecd_::operator() @ 0x1805E4468 (_lambda_d94d82cd4edd08e6199a1e53cb8b0ecd_--operator().c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x180289ABC (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?unconditional_release_ref@?$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@AEAAXXZ @ 0x18028FD2C (-unconditional_release_ref@-$com_ptr@UIDeploymentResult@Deployment@Management@Windows@@@winrt@@A.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1802C41F0 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?watch_errors@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@2@XZ @ 0x1805ECF20 (-watch_errors@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180691760 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_02d18896a6f04e84a63129cc1fd81310_::operator()(__int64 a1)
{
  int v2; // eax
  __int64 v3; // r9
  _QWORD *v4; // rax
  struct CPinnedList *v5; // rbx
  int v6; // eax
  wil *v7; // rcx
  int v8; // ebx
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-78h]
  struct CPinnedList *v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+38h] [rbp-60h]
  _BYTE v13[56]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v14; // [rsp+78h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v12 = a1;
  memset_0(v13, 0, 0x40uLL);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::watch_errors(
    *(_QWORD *)a1,
    v13);
  v11 = 0LL;
  v2 = CTaskbandPin_CreateInstance(&v11);
  try
  {
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAF,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v2,
        v10);
    v3 = **(unsigned int **)(a1 + 16);
    v4 = *(_QWORD **)(a1 + 8);
    v5 = v11;
    v6 = CPinnedList::InternalModify(v11, 0LL, *v4, v3);
    v7 = retaddr;
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB0,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v6,
        0);
    if ( v5 )
      winrt::com_ptr<Windows::Management::Deployment::IDeploymentResult>::unconditional_release_ref((__int64 *)&v11);
  }
  catch ( ... )
  {
    v8 = wil::ResultFromCaughtException(v7);
    **(_DWORD **)(v12 + 24) = v8;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
      (__int64 *)&v11,
      &v14);
    *((_DWORD *)v11 + 332) = v8;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)&v11);
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB6,
      (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v9);
  }
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((__int64)v13);
}
