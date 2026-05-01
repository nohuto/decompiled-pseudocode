/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__ @ 0x180044570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__MFURank__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F68);
  qword_180059F68 = 0LL;
  return result;
}
