/*
 * XREFs of ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E6C4
 * Callers:
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@5678@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000BFF0 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEA.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJPEAPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@$$QEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@9UnifiedTile@Shell@WindowsInternal@@$$QEAPEAVGameListEntryUpdateHandler@4567@@Z @ 0x180017654 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIU.c)
 *     ?_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180022800 (-_OnTileAdded@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030E30 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031B70 (-_InitializeId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031F00 (-_InitializeListener@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180032178 (-_InitializePackageFamilyName@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180034834 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::RuntimeClassInitialize(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *a2,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *a3,
        struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *a4)
{
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // esi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile **)this + 32) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *))(*(_QWORD *)a2 + 8LL))(a2);
    v8 = *((_QWORD *)this + 32);
    *((_QWORD *)this + 32) = a2;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( *((struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **)this + 31) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *))(*(_QWORD *)a3 + 8LL))(a3);
    v9 = *((_QWORD *)this + 31);
    *((_QWORD *)this + 31) = a3;
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( *((struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler **)this + 28) != a4 )
  {
    if ( a4 )
      (*(void (__fastcall **)(struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *))(*(_QWORD *)a4 + 8LL))(a4);
    v10 = *((_QWORD *)this + 28);
    *((_QWORD *)this + 28) = a4;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeId(this);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v14 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName(this);
    if ( v14 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEA,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v14);
    v15 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeListener(this);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEB,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v15);
    v16 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(this);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xEC,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v16);
    v17 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(this);
    if ( v17 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xED,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v17);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
}
