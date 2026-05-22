/*
 * XREFs of ??0implements_delegate_base@impl@winrt@@QEAA@XZ @ 0x180091BEC
 * Callers:
 *     ?StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x18007DD54 (-StartWindowWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ?StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ @ 0x180091AEC (-StartAppViewWatcher@ViewHierarchyWithWindowManager@@AEAAJXZ.c)
 *     ??$?0VCUIHierarchy@@P80@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Z@?$TypedEventHandler@UWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVCUIHierarchy@@P84@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@23@UWindowChangedEventArgs@67823@@Z@Z @ 0x1800A98B4 (--$-0VCUIHierarchy@@P80@EAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@wi.c)
 *     ?StartWindowWatcher@CUIHierarchy@@AEAAXXZ @ 0x1800AB524 (-StartWindowWatcher@CUIHierarchy@@AEAAXXZ.c)
 *     winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800DAED4 (winrt--impl--make_delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f631da3.c)
 *     ??0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z @ 0x1800FDD2C (--0MPCTarget@@QEAA@PEAVInputSite@@W4FrameworkViewType@@K@Z.c)
 * Callees:
 *     <none>
 */

winrt::impl::implements_delegate_base *__fastcall winrt::impl::implements_delegate_base::implements_delegate_base(
        winrt::impl::implements_delegate_base *this)
{
  *(_DWORD *)this = 1;
  return this;
}
