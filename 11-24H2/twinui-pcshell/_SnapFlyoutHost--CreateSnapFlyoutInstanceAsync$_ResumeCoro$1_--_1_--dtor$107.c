/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$107 @ 0x1806F7E87
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_107(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 1096) = *(_QWORD *)(a2 + 1312) + 800LL;
  *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 1096);
  result = *(_DWORD *)(a2 + 1320) & 0x2000;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 1104) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_QWORD *)(a2 + 1112) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 1112);
    *(_DWORD *)(a2 + 1120) = *(_DWORD *)(a2 + 1320) & 0xFFFFDFFF;
    **(_DWORD **)(a2 + 1104) = *(_DWORD *)(a2 + 1120);
    *(_QWORD *)(a2 + 1128) = *(_QWORD *)(a2 + 1312) + 672LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 1128));
  }
  return result;
}
