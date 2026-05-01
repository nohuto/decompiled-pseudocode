/*
 * XREFs of ?AttachGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800274C0
 * Callers:
 *     ?_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z @ 0x18000F554 (-_FilterGameConfig@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x1800221EC (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180026144 (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAX_N@Z @ 0x180034BE0 (-_ReinitializeAfterAttachingGameConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windo.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::AttachGameConfig(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  bool v10; // si
  int v11; // eax
  unsigned int v12; // edi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  if ( !*a2 && !a2[1] )
  {
    v6 = -2147024809;
    v7 = 865LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !*a3 )
  {
    v6 = -2147467261;
    v7 = 866LL;
    goto LABEL_4;
  }
  if ( !*a4 )
  {
    v6 = -2147467261;
    v7 = 867LL;
    goto LABEL_4;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 144);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 144));
  if ( !*(_QWORD *)(a1 + 256) )
    std::shared_ptr<ExecutionModel::IGameConfigStore>::operator=((_QWORD *)(a1 + 256), a4);
  v10 = *(_QWORD *)(a1 + 248) && *(_QWORD *)(a1 + 256);
  v11 = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig((Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24));
  v12 = v11;
  if ( v11 >= 0 )
  {
    Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_ReinitializeAfterAttachingGameConfig(
      (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(a1 - 24),
      v10);
    if ( v9 )
      LeaveCriticalSection(v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v11);
    if ( v9 )
      LeaveCriticalSection(v9);
    return v12;
  }
}
