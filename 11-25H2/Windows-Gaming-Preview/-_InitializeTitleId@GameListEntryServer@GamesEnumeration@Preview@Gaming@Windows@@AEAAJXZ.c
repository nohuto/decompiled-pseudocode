/*
 * XREFs of ?_InitializeTitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180034834
 * Callers:
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E6C4 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIU.c)
 *     ?RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@PEAUIGameListChangedEventHandler@2345@@Z @ 0x18002E878 (-RuntimeClassInitialize@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJU_GUID.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GameProperty_t@2@PEAPEAUHSTRING__@@@Z @ 0x180014998 (-GetStringPropertyFromGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@W4GamePro.c)
 *     ?_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPEAUIGamesListInfo@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180030B0C (-_GetGamesListProperties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeTitleId(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r14
  __int64 v3; // rax
  __int128 v4; // xmm6
  int StringPropertyFromGameConfigStore; // eax
  unsigned int v6; // ebx
  int GamesListProperties; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v9; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v10; // rbx
  __int64 (__fastcall *v11)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, char *); // rsi
  int v12; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v13; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *v17; // [rsp+60h] [rbp+20h] BYREF
  struct _RTL_CRITICAL_SECTION *v18; // [rsp+68h] [rbp+28h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 168));
  v18 = v2;
  v3 = *((_QWORD *)this + 34);
  if ( v3 && *((_QWORD *)this + 35) )
  {
    if ( *(_QWORD *)(v3 + 88) )
      v4 = *(_OWORD *)(**(_QWORD **)(v3 + 80) + 32LL);
    else
      v4 = xmmword_18004EAE8;
    WindowsDeleteString(*((HSTRING *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    v15 = v4;
    StringPropertyFromGameConfigStore = GetStringPropertyFromGameConfigStore(
                                          *((__int64 **)this + 35),
                                          &v15,
                                          15LL,
                                          (HSTRING *)this + 19);
    v6 = StringPropertyFromGameConfigStore;
    if ( StringPropertyFromGameConfigStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x199,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)StringPropertyFromGameConfigStore);
LABEL_8:
      if ( v2 )
        LeaveCriticalSection(v2);
      return v6;
    }
  }
  else
  {
    v17 = 0LL;
    GamesListProperties = Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_GetGamesListProperties(
                            this,
                            &v17);
    v6 = GamesListProperties;
    if ( GamesListProperties < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19E,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)GamesListProperties);
      v9 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v9 + 16LL))(v9);
      }
      goto LABEL_8;
    }
    v10 = v17;
    v11 = *(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *, char *))(*(_QWORD *)v17 + 64LL);
    WindowsDeleteString(*((HSTRING *)this + 19));
    *((_QWORD *)this + 19) = 0LL;
    v12 = v11(v10, (char *)this + 152);
    v6 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19F,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v12);
      v13 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      goto LABEL_8;
    }
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IGamesListInfo *))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
