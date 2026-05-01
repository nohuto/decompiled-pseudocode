/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$89 @ 0x1806F7CA9
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_89(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 968) = *(_QWORD *)(a2 + 1312) + 800LL;
  *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 968);
  result = *(_DWORD *)(a2 + 1320) & 0x200;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 976) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_QWORD *)(a2 + 984) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 984);
    *(_DWORD *)(a2 + 992) = *(_DWORD *)(a2 + 1320) & 0xFFFFFDFF;
    **(_DWORD **)(a2 + 976) = *(_DWORD *)(a2 + 992);
    *(_QWORD *)(a2 + 1000) = *(_QWORD *)(a2 + 1312) + 544LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 1000));
  }
  return result;
}
