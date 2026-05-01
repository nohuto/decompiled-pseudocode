/*
 * XREFs of ?GetIids@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180039F20
 * Callers:
 *     ?GetIids@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180039F30 (-GetIids@GameModeUserConfigurationFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@WCI@EAA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationFactoryServer::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfigurationStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           this,
           a2,
           a3);
}
