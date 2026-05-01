/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__FullTileId__ @ 0x1800442A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__FullTileId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F40);
  qword_180059F40 = 0LL;
  return result;
}
