/*
 * XREFs of _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$3 @ 0x18020ED02
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 112) + 72LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD *)(a2 + 64));
}
