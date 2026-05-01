/*
 * XREFs of ?AddRef@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18001BDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::AddRef(__int64 a1)
{
  return Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler::AddRef((Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *)(a1 - 8));
}
