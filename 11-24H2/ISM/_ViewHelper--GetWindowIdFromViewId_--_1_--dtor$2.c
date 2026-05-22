/*
 * XREFs of _ViewHelper::GetWindowIdFromViewId_::_1_::dtor$2 @ 0x1801D0C3B
 * Callers:
 *     <none>
 * Callees:
 *     ??1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x180082A00 (--1AppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall ViewHelper::GetWindowIdFromViewId_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 96) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 96) &= ~2u;
    winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher::~AppViewWatcher((winrt::Windows::Internal::ApplicationModel::WindowManagement::AppViewWatcher *)(a2 + 40));
  }
}
