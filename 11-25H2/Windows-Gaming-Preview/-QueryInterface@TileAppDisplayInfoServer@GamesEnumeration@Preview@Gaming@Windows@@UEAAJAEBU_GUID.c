/*
 * XREFs of ?QueryInterface@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D790
 * Callers:
 *     ?QueryInterface@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D7A0 (-QueryInterface@TileAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@W7EAAJAEBU_GUI.c)
 *     ?QueryInterface@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002D7B0 (-QueryInterface@GameConfigAppDisplayInfoServer@GamesEnumeration@Preview@Gaming@Windows@@WBA@EAAJ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::TileAppDisplayInfoServer::QueryInterface(
        __int64 this,
        _DWORD *a2,
        _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
