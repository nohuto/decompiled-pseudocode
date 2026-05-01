/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$116 @ 0x1806F7F76
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_116(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 1160) = *(_QWORD *)(a2 + 1312) + 800LL;
  *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 1160);
  result = *(_DWORD *)(a2 + 1320) & 0x8000;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 1168) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_QWORD *)(a2 + 1176) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 1176);
    *(_DWORD *)(a2 + 1184) = *(_DWORD *)(a2 + 1320) & 0xFFFF7FFF;
    **(_DWORD **)(a2 + 1168) = *(_DWORD *)(a2 + 1184);
    *(_QWORD *)(a2 + 1192) = *(_QWORD *)(a2 + 1312) + 736LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 1192));
  }
  return result;
}
