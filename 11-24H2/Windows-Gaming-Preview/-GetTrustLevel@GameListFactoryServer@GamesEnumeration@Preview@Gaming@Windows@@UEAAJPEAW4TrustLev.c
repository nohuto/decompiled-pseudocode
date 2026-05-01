/*
 * XREFs of ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAW4TrustLevel@@@Z @ 0x18001EA20
 * Callers:
 *     ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJPEAW4TrustLevel@@@Z @ 0x18001EA30 (-GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJPEAW4Trust.c)
 *     ?GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAJPEAW4TrustLevel@@@Z @ 0x18001EA40 (-GetTrustLevel@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAJPEAW4Trust.c)
 *     ?GetTrustLevel@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAW4TrustLevel@@@Z @ 0x18001EA50 (-GetTrustLevel@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJPEAW4T.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::GetTrustLevel(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        enum TrustLevel *a2)
{
  *a2 = PartialTrust;
  return 0LL;
}
