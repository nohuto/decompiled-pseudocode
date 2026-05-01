/*
 * XREFs of ??1?$com_ptr@VCMultitaskingViewManager@@@winrt@@QEAA@XZ @ 0x180103098
 * Callers:
 *     _CMultitaskingViewManager::RuntimeClassInitialize_::_1_::dtor$1 @ 0x1806D6975 (_CMultitaskingViewManager--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::DismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EEAA6 (_CMultitaskingViewManager--DismissRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EEB64 (_CMultitaskingViewManager--DismissRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EEC66 (_CMultitaskingViewManager--ShowRequested$_ResumeCoro$1_--_1_--dtor$1.c)
 *     _CMultitaskingViewManager::ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806EEE89 (_CMultitaskingViewManager--ShowRequestedVirtualDesktopSwitcher$_ResumeCoro$1_--_1_--dtor$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ @ 0x180103104 (-unconditional_release_ref@-$com_ptr@VCMultitaskingViewManager@@@winrt@@AEAAXXZ.c)
 */

__int64 __fastcall winrt::com_ptr<CMultitaskingViewManager>::~com_ptr<CMultitaskingViewManager>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<CMultitaskingViewManager>::unconditional_release_ref();
  return result;
}
