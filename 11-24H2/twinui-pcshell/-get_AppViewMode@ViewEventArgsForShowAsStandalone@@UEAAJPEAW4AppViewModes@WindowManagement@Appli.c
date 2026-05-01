/*
 * XREFs of ?get_AppViewMode@ViewEventArgsForShowAsStandalone@@UEAAJPEAW4AppViewModes@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180425F00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViewEventArgsForShowAsStandalone::get_AppViewMode(
        ViewEventArgsForShowAsStandalone *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppViewModes *a2)
{
  *(_DWORD *)a2 = 1;
  return 2147500033LL;
}
