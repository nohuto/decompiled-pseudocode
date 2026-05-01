/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$39 @ 0x1806F79E2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_39(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 688) = *(_QWORD *)(a2 + 1312) + 800LL;
  *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 688);
  result = *(_DWORD *)(a2 + 1320) & 2;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 696) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_QWORD *)(a2 + 704) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 704);
    *(_DWORD *)(a2 + 712) = *(_DWORD *)(a2 + 1320) & 0xFFFFFFFD;
    **(_DWORD **)(a2 + 696) = *(_DWORD *)(a2 + 712);
    *(_QWORD *)(a2 + 720) = *(_QWORD *)(a2 + 1312) + 16LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 720));
  }
  return result;
}
