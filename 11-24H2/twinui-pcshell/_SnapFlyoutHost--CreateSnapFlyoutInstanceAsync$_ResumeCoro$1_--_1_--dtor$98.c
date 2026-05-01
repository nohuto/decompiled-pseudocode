/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$98 @ 0x1806F7D98
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_98(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 1032) = *(_QWORD *)(a2 + 1312) + 800LL;
  *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 1032);
  result = *(_DWORD *)(a2 + 1320) & 0x800;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 1040) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_QWORD *)(a2 + 1048) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 1048);
    *(_DWORD *)(a2 + 1056) = *(_DWORD *)(a2 + 1320) & 0xFFFFF7FF;
    **(_DWORD **)(a2 + 1040) = *(_DWORD *)(a2 + 1056);
    *(_QWORD *)(a2 + 1064) = *(_QWORD *)(a2 + 1312) + 608LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 1064));
  }
  return result;
}
