/*
 * XREFs of CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_InitCoro$2 @ 0x18020E960
 * Callers:
 *     ?DismissRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UDismissShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18020ED80 (-DismissRequestedVirtualDesktopSwitcher@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@.c)
 * Callees:
 *     CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1 @ 0x18020EA50 (CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_11_::_parameters_::_parameters_ @ 0x1802DFEE8 (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher_--_11_--_parameters_--_paramet.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__InitCoro_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher_::_11_::_parameters_::_parameters_(a2 + 113, a5, a4);
  *(_QWORD *)a2 = CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1;
  *(_DWORD *)(a2 + 8) = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *(_BYTE *)(a2 + 112) = 0;
  return CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher__ResumeCoro_1(a2);
}
