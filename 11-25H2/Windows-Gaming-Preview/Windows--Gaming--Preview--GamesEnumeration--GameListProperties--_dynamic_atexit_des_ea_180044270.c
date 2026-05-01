/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__ @ 0x180044270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__DesktopAppPath__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F78);
  qword_180059F78 = 0LL;
  return result;
}
