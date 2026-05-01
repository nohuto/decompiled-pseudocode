/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PhoneProductId__ @ 0x1800445D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PhoneProductId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F50);
  qword_180059F50 = 0LL;
  return result;
}
