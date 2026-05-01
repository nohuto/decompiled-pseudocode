/*
 * XREFs of _LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1_::_1_::dtor$8 @ 0x1806FA72B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UIAsyncAction@Foundation@Windows@winrt@@V?$allocator@UIAsyncAction@Foundation@Windows@winrt@@@std@@@std@@QEAA@XZ @ 0x1801CD904 (--1-$vector@UIAsyncAction@Foundation@Windows@winrt@@V-$allocator@UIAsyncAction@Foundation@Window.c)
 */

void __fastcall LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync__ResumeCoro_1_::_1_::dtor_8(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 224) = *(_QWORD *)(a2 + 384) + 112LL;
  std::vector<winrt::Windows::Foundation::IAsyncAction>::~vector<winrt::Windows::Foundation::IAsyncAction>(*(_QWORD *)(a2 + 224));
}
