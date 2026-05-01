/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__ @ 0x1800443F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__PackageFamilyName__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F58);
  qword_180059F58 = 0LL;
  return result;
}
