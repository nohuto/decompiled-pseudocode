/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x18025D17C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ @ 0x180072254 (--1-$test_watcher@U_tip_DiscoverabilityManagerTipTest@@@tip@@QEAA@XZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::DiscoverabilityManager::InitializeAsync__ResumeCoro_1_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 56) = *(_QWORD *)(a2 + 144) + 16LL;
  tip::test_watcher<_tip_DiscoverabilityManagerTipTest>::~test_watcher<_tip_DiscoverabilityManagerTipTest>(*(_QWORD *)(a2 + 56));
}
