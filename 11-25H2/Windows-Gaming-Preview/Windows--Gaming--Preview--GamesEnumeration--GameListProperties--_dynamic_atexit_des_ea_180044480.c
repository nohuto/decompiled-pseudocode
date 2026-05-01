/*
 * XREFs of Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__ @ 0x180044480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT Windows::Gaming::Preview::GamesEnumeration::GameListProperties::_dynamic_atexit_destructor_for__TileId__()
{
  HRESULT result; // eax

  result = WindowsDeleteString(qword_180059F38);
  qword_180059F38 = 0LL;
  return result;
}
