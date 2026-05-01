/*
 * XREFs of _SnapMigrationHandler::SnapMigrationHandler_::_1_::dtor$11 @ 0x1806F8AA5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x180219AF0 (--1-$weak_ref@UDashboardManager@implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall SnapMigrationHandler::SnapMigrationHandler_::_1_::dtor_11(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 200) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 200) &= ~2u;
    return winrt::weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>::~weak_ref<winrt::Windows::Internal::Shell::implementation::DashboardManager>((__int64 *)(a2 + 32));
  }
  return result;
}
