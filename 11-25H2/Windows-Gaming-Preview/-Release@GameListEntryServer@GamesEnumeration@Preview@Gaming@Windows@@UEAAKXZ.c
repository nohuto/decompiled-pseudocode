/*
 * XREFs of ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAKXZ @ 0x18000EA80
 * Callers:
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ @ 0x18000EA90 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ @ 0x18000EAA0 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ @ 0x18000EAB0 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WBI@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ @ 0x18000EAC0 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCA@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ @ 0x18000EAD0 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAKXZ @ 0x18000EAE0 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WDA@EAAKXZ.c)
 *     ?Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WGA@EAAKXZ @ 0x18000EAF0 (-Release@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::Release(
        volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(this);
}
