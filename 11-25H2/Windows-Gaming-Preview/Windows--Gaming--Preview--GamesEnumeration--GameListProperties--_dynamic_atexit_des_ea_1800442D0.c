/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__ @ 0x1800442D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__GameConfigIds__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F48);
  qword_180059F48 = 0LL;
  return result;
}
