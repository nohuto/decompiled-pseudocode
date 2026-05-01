/*
 * XREFs of ?_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180034D40
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_03439e650b830430b1a78af8029ec968__Windows::Internal::CNoResult_::Run @ 0x18002E520 (Windows--Internal--COperationLambdaVar_0__lambda_03439e650b830430b1a78af8029ec968__Windows--Inte.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@Wrappers@WRL@Microsoft@@0_N@Z @ 0x18002FEB0 (-_AreStringsEqual@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CA_NAEBVHString@W.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180030B0C (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     ?_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4GameProperty_t@ExecutionModel@@AEBVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003868C (-_SetStringPropertyOnGameConfigs@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Win.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_SetTitleIdInternal(
        __int64 a1,
        HSTRING *a2)
{
  HSTRING *v4; // r14
  __int64 v5; // rcx
  HRESULT v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int GamesListProperties; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v10; // rcx
  int v11; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v12; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v13; // rcx
  HSTRING v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v17; // [rsp+40h] [rbp+8h] BYREF
  HSTRING *v18; // [rsp+48h] [rbp+10h]

  v18 = a2;
  v4 = (HSTRING *)(a1 + 152);
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AreStringsEqual((HSTRING *)(a1 + 152), a2, 0) )
    goto LABEL_23;
  v5 = *(_QWORD *)(a1 + 272);
  if ( v5 )
  {
    if ( *(_QWORD *)(a1 + 280) )
    {
      v6 = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SetStringPropertyOnGameConfigs(
             v5,
             15LL,
             a2);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 1614LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v8,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
          (const char *)(unsigned int)v6);
        goto LABEL_24;
      }
    }
  }
  if ( !*(_QWORD *)(a1 + 256) || !*(_QWORD *)(a1 + 240) )
  {
LABEL_19:
    v14 = *a2;
    if ( !*a2 || v14 != *v4 )
    {
      WindowsDeleteString(*v4);
      *v4 = 0LL;
      v6 = WindowsDuplicateString(v14, v4);
      v7 = v6;
      if ( v6 < 0 )
      {
        v8 = 1625LL;
        goto LABEL_6;
      }
    }
LABEL_23:
    v7 = 0;
    goto LABEL_24;
  }
  v17 = 0LL;
  GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                          (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)a1,
                          &v17);
  v7 = GamesListProperties;
  if ( GamesListProperties < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x655,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)GamesListProperties);
    v10 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v10 + 16LL))(v10);
    }
    goto LABEL_24;
  }
  v11 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, HSTRING))(*(_QWORD *)v17 + 72LL))(
          v17,
          *a2);
  v7 = v11;
  if ( v11 >= 0 )
  {
    v13 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    goto LABEL_19;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x656,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
    (const char *)(unsigned int)v11);
  v12 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v12 + 16LL))(v12);
  }
LABEL_24:
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  return v7;
}
