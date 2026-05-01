/*
 * XREFs of _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::_parameters_ @ 0x18022A03C
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_InitCoro$2 @ 0x18022A728 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutManager--Launch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync_::_34_::_parameters_::_parameters_(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4,
        int a5)
{
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // rax
  __int64 result; // rax

  v5 = *a2;
  v6 = a2[2];
  v7 = a2[1];
  a2[2] = 0LL;
  a2[1] = 0LL;
  *a2 = 0LL;
  *(_QWORD *)a1 = v5;
  *(_QWORD *)(a1 + 8) = v7;
  *(_QWORD *)(a1 + 16) = v6;
  v8 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 24) = v8;
  *(_DWORD *)(a1 + 40) = a5;
  result = a1;
  *(_QWORD *)(a1 + 32) = a4;
  return result;
}
