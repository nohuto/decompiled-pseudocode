/*
 * XREFs of ??C?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@1@XZ @ 0x1805CB75C
 * Callers:
 *     _lambda_32c4e6169d3422a324eb2467ba357153_::operator() @ 0x1805CBA88 (_lambda_32c4e6169d3422a324eb2467ba357153_--operator().c)
 *     _lambda_97b09f9418abd99db48e195e2f25b9f0_::operator() @ 0x1805CC3E4 (_lambda_97b09f9418abd99db48e195e2f25b9f0_--operator().c)
 *     _lambda_fe3700f2088568b9a75a271dc50fe846_::operator() @ 0x1805CCE20 (_lambda_fe3700f2088568b9a75a271dc50fe846_--operator().c)
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805CF00C (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D67E0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasD_ea_1805D67E0.c)
 * Callees:
 *     ??0?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@IEAA@AEBV?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1805CA998 (--0-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@detai.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DBBDC (-ensure_data@-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@deta.c)
 */

__int64 *__fastcall tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v3; // rax

  v3 = (__int64 *)tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::ensure_data();
  tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>(
    a2,
    v3);
  return a2;
}
