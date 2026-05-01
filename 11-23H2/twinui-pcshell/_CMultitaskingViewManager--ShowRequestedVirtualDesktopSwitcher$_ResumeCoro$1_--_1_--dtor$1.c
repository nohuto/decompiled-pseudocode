/*
 * XREFs of _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1802100A5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x18055349C (--1-$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 88) = *(_QWORD *)(a2 + 224) + 24LL;
  return winrt::com_ptr<CMultitaskingViewManager>::~com_ptr<CMultitaskingViewManager>(*(_QWORD *)(a2 + 88));
}
