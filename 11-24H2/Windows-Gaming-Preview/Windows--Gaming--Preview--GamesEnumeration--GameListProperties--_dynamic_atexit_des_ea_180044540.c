/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__LastLaunched__ @ 0x180044540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__LastLaunched__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F88);
  qword_180059F88 = 0LL;
  return result;
}
