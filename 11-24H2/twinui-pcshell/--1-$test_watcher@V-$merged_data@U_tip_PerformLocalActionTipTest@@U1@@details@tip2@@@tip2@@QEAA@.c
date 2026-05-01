/*
 * XREFs of ??1?$test_watcher@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180649FE0
 * Callers:
 *     ?PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@QEAAXAEBW4RemoteDesktopLocalAction@3456@@Z @ 0x18064EDE8 (-PerformLocalAction@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@Q.c)
 *     _winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel::PerformLocalAction_::_1_::dtor$0 @ 0x180701FDD (_winrt--Windows--Internal--Shell--factory_implementation--RemoteSystemDataModel--PerformLocalAct.c)
 * Callees:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649980 (--1-$com_ptr_t@V-$merged_data@U_tip_PerformLocalActionTipTest@@U1@@details@tip2@@Uerr_returncode.c)
 */

void __fastcall tip2::test_watcher<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>>::~test_watcher<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>>(
        __int64 a1)
{
  wil::com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_PerformLocalActionTipTest,_tip_PerformLocalActionTipTest>,wil::err_returncode_policy>((void **)(a1 + 56));
  wil::details::ThreadFailureCallbackHolder::~ThreadFailureCallbackHolder((wil::details::ThreadFailureCallbackHolder *)(a1 + 8));
}
