/*
 * XREFs of _lambda_49390bb1d2cae92a58be327124002af0_::operator() @ 0x18024FBE4
 * Callers:
 *     _anonymous_namespace_::RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0___ @ 0x18024ED14 (_anonymous_namespace_--RunSynchronousInSTA__lambda_49390bb1d2cae92a58be327124002af0___.c)
 *     _lambda_c339d120b376647924ab8d58f8f10fc7_::operator() @ 0x1802501F8 (_lambda_c339d120b376647924ab8d58f8f10fc7_--operator().c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180086364 (-ensure_data@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@.c)
 *     ??0?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEAV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180086D5C (--0-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z @ 0x1801041A8 (-CTaskbandPin_CreateInstance@@YAJPEAPEAVCPinnedList@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x18069E81C (--1-$test_watcher@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@.c)
 *     ?InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModifyFlags@@@Z @ 0x180757410 (-InternalModify@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@W4PinnedListModif.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_49390bb1d2cae92a58be327124002af0_::operator()(__int64 a1)
{
  __int64 *v2; // rax
  int v3; // eax
  __int64 v4; // r9
  _QWORD *v5; // rax
  struct CPinnedList *v6; // rbx
  int v7; // eax
  wil *v8; // rcx
  int v10; // ebx
  const char *v11; // r9
  int v12; // [rsp+20h] [rbp-68h]
  int v13; // [rsp+20h] [rbp-68h]
  struct CPinnedList *v14; // [rsp+30h] [rbp-58h] BYREF
  __int64 v15; // [rsp+38h] [rbp-50h] BYREF
  _OWORD v16[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v17; // [rsp+70h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v15 = a1;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  v2 = (__int64 *)tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::ensure_data(*(void ***)a1);
  tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
    (struct wil::details::IFailureCallback *)v16,
    v2);
  v14 = 0LL;
  v3 = CTaskbandPin_CreateInstance(&v14);
  try
  {
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x93,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v3,
        v12);
    v4 = **(unsigned int **)(a1 + 16);
    v5 = *(_QWORD **)(a1 + 8);
    v6 = v14;
    v7 = CPinnedList::InternalModify(v14, 0LL, *v5, v4, 0);
    v8 = retaddr;
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x94,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
        (const char *)(unsigned int)v7,
        v13);
    if ( v6 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v14);
  }
  catch ( ... )
  {
    v10 = wil::ResultFromCaughtException(v8);
    **(_DWORD **)(v15 + 24) = v10;
    *(_DWORD *)(*(_QWORD *)tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::operator->(
                             v16,
                             &v15)
              + 1320LL) = v10;
    tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(&v15);
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x9A,
      (unsigned int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
      v11);
  }
  return tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(v16);
}
