/*
 * XREFs of _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$80 @ 0x1806F7BBA
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapFlyoutHost::CreateSnapFlyoutInstanceAsync__ResumeCoro_1_::_1_::dtor_80(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a2 + 904) = *(_QWORD *)(a2 + 1312) + 800LL;
  *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 904);
  result = *(_DWORD *)(a2 + 1320) & 0x80;
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 912) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_QWORD *)(a2 + 920) = *(_QWORD *)(a2 + 1312) + 800LL;
    *(_DWORD *)(a2 + 1320) = **(_DWORD **)(a2 + 920);
    *(_DWORD *)(a2 + 928) = *(_DWORD *)(a2 + 1320) & 0xFFFFFF7F;
    **(_DWORD **)(a2 + 912) = *(_DWORD *)(a2 + 928);
    *(_QWORD *)(a2 + 936) = *(_QWORD *)(a2 + 1312) + 480LL;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>(*(__int64 **)(a2 + 936));
  }
  return result;
}
