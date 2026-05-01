/*
 * XREFs of ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020910
 * Callers:
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020920 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@.c)
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020930 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJAEBU_GUID.c)
 *     ?QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020940 (-QueryInterface@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WDI@EAAJAEBU_GUID.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        __int64 *a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics>,Windows::Gaming::Preview::GamesEnumeration::IGameListStatics2,Microsoft::WRL::Details::Nil,2>::QueryInterface(
           this,
           a2,
           a3);
}
