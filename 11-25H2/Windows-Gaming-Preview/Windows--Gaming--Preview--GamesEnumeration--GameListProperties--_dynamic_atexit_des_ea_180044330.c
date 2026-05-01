/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__Id__ @ 0x180044330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__Id__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F30);
  qword_180059F30 = 0LL;
  return result;
}
