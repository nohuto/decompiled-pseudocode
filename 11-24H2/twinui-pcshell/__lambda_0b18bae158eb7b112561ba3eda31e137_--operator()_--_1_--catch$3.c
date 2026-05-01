/*
 * XREFs of __lambda_0b18bae158eb7b112561ba3eda31e137_::operator()_::_1_::catch$3 @ 0x1806FCC33
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x180289BCC (--0-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802C8918 (--1-$test_data_control@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@t.c)
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802DF440 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x1802DF6D4 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall _lambda_0b18bae158eb7b112561ba3eda31e137_::operator()_::_1_::catch_3(wil *a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  const char *v5; // r9

  v3 = wil::ResultFromCaughtException(a1);
  v4 = *(_QWORD *)(a2 + 64);
  **(_DWORD **)(v4 + 24) = v3;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>(
    (__int64 *)(a2 + 72),
    (__int64 *)(*(_QWORD *)(v4 + 32) + 56LL));
  *(_DWORD *)(*(_QWORD *)(a2 + 72) + 1328LL) = v3;
  tip2::test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::~test_data_control<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>((void **)(a2 + 72));
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0xDF,
    (int)"pcshell\\twinui\\pinmanager\\lib\\PinManager.cpp",
    v5);
  return 0LL;
}
