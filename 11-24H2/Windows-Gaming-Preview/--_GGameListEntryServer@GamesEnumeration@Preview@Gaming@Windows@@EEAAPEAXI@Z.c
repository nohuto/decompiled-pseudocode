/*
 * XREFs of ??_GGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAAPEAXI@Z @ 0x18000D690
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800021D8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ @ 0x180025BD4 (--1GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@EEAA@XZ.c)
 */

Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *__fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::~GameListEntryServer(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x130);
  return this;
}
