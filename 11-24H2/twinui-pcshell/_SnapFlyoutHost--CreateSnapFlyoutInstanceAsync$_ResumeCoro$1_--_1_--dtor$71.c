/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$71 @ 0x1806F7ACE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_71(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 840) = *(_QWORD *)(a2 + 1312) + 800LL;
  *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 840);
  result = *(_DWORD *)(a2 + 1320) & 0x20;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 848) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_QWORD *)(a2 + 856) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 856);
    *(_DWORD *)(a2 + 864) = *(_DWORD *)(a2 + 1320) & 0xFFFFFFDF;
    **(_DWORD **)(a2 + 848) = *(_DWORD *)(a2 + 864);
    *(_QWORD *)(a2 + 872) = *(_QWORD *)(a2 + 1312) + 416LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 872));
  }
  return result;
}
