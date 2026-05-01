/*
 * XREFs of ??_EGameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x180027060
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x180025CA8 (--1GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::`vector deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::~GameModeConfigurationServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xD0);
  return this;
}
