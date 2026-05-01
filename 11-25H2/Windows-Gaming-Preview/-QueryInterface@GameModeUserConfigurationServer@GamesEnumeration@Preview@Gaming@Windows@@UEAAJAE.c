/*
 * XREFs of ?QueryInterface@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039FD0
 * Callers:
 *     ?QueryInterface@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039FE0 (-QueryInterface@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJA.c)
 *     ?QueryInterface@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039FF0 (-QueryInterface@GameModeUserConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeUserConfigurationServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameModeUserConfiguration,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
