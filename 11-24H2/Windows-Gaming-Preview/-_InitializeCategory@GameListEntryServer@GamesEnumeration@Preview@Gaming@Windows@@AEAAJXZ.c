/*
 * XREFs of ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030FE0
 * Callers:
 *     ?ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJAEAV?$map@U_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@UGameIdLess@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBU_GUID@@V?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@std@@@3@@std@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@7@@Z @ 0x180028170 (-ExtractGameConfigsOwnership@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJA.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E874 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002EA28 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180034BE0 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001087C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180030CBC (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031170 (-_InitializeCategoryFromStateRepository@GameListEntryServer@GamesEnumeration@Preview@Gaming@Wind.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategory(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  int GamesListProperties; // eax
  unsigned int v3; // edi
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v4; // rcx
  int v6; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v7; // rcx
  unsigned int v8; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v9; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v10; // rcx
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+8h]
  unsigned int v13; // [rsp+30h] [rbp+10h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v14; // [rsp+38h] [rbp+18h] BYREF

  *((_DWORD *)this + 36) = 0;
  if ( *((_QWORD *)this + 34) && *((_QWORD *)this + 35) )
  {
    *((_DWORD *)this + 36) = 1;
    return 0LL;
  }
  v14 = 0LL;
  GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                          this,
                          &v14);
  v3 = GamesListProperties;
  if ( GamesListProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x175,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
    v4 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v4 + 16LL))(v4);
    }
    return v3;
  }
  v13 = 0;
  v6 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, unsigned int *))(*(_QWORD *)v14 + 48LL))(
         v14,
         &v13);
  v3 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x178,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v6);
    v7 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v7 + 16LL))(v7);
    }
    return v3;
  }
  v8 = v13;
  if ( v13 <= 2 )
  {
    *((_DWORD *)this + 36) = v13;
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v10 + 16LL))(v10);
      v8 = *((_DWORD *)this + 36);
    }
    if ( !v8 )
    {
      v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository(this);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x181,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v11);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x179,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)0x8000FFFFLL);
  v9 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 2147549183LL;
}
