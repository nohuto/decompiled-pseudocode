/*
 * XREFs of CMultitaskingViewManager::ShowRequested$_InitCoro$2 @ 0x18020F02C
 * Callers:
 *     ?ShowRequested@CMultitaskingViewManager@@AEAA?AUfire_and_forget@winrt@@UShowShellViewRequestedEventArgs@Shell@UI@WindowsUdk@3@@Z @ 0x18020F95C (-ShowRequested@CMultitaskingViewManager@@AEAA-AUfire_and_forget@winrt@@UShowShellViewRequestedEv.c)
 * Callees:
 *     CMultitaskingViewManager::ShowRequested$_ResumeCoro$1 @ 0x18020F120 (CMultitaskingViewManager--ShowRequested$_ResumeCoro$1.c)
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_ @ 0x1805533E8 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher_--_29_--_parameters_--_parameters.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewManager::ShowRequested__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  _DWORD *v6; // r10
  _BYTE *v7; // r11

  CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher_::_29_::_parameters_::_parameters_(
    (char *)a2 + 193,
    a5,
    a4);
  *(_QWORD *)a2 = CMultitaskingViewManager::ShowRequested__ResumeCoro_1;
  a2[2] = *v6 != 0 ? 2 : 65538;
  *v7 = 0;
  *((_BYTE *)a2 + 192) = 0;
  return CMultitaskingViewManager::ShowRequested__ResumeCoro_1(a2);
}
