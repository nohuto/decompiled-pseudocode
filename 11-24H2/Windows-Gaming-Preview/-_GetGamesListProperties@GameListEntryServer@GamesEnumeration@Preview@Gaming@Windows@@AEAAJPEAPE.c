/*
 * XREFs of ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180030CBC
 * Callers:
 *     _lambda_0adeea27616b30382c54e31f2f6dc703_::operator() @ 0x1800261C4 (_lambda_0adeea27616b30382c54e31f2f6dc703_--operator().c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180030FE0 (-_InitializeCategory@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800349E4 (-_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180034EF0 (-_SetTitleIdInternal@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJVHString@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo **a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 32) + 104LL))(*((_QWORD *)this + 32));
  if ( v3 < 0 )
  {
    v4 = 1058LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( !*a2 )
  {
    v3 = -2147019873;
    v4 = 1059LL;
    goto LABEL_3;
  }
  return 0LL;
}
