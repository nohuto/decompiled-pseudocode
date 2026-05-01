/*
 * XREFs of ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@Shim@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18002262C
 * Callers:
 *     _lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator() @ 0x180019568 (_lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator().c)
 *     _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001A3F4 (_lambda_c7e28edb760347053732171cef665d5d_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAVGameListEntryUpdateHandler@2345@@Details@WRL@Microsoft@@YAJPEAPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@$$QEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@9UnifiedTile@Shell@WindowsInternal@@$$QEAPEAVGameListEntryUpdateHandler@4567@@Z @ 0x180017654 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_CreateGameListEntryFromTileId(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *a2,
        struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v9; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v10; // rcx
  __int64 v11; // rcx
  int updated; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v13; // rcx
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *v17; // [rsp+28h] [rbp-18h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v18; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v20; // [rsp+60h] [rbp+20h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v21; // [rsp+78h] [rbp+38h] BYREF

  v20 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 7) + 56LL))(
         *((_QWORD *)this + 7),
         1LL,
         &v20);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v21 = 0LL;
    v9 = (*(__int64 (__fastcall **)(_QWORD, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile **))(**((_QWORD **)this + 7) + 64LL))(
           *((_QWORD *)this + 7),
           a2,
           &v21);
    v7 = v9;
    if ( v9 >= 0 )
    {
      v16 = *((_QWORD *)this + 16);
      v17 = (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *)*((_QWORD *)this + 7);
      v18 = v21;
      updated = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler *>(
                  (volatile signed __int64 **)a3,
                  &v18,
                  &v17,
                  &v16);
      v7 = updated;
      if ( updated < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x24C,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
          (const char *)(unsigned int)updated);
      v13 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *))(*(_QWORD *)v13 + 16LL))(v13);
      }
      v14 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x246,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v9);
      v10 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x243,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v6);
    v8 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  return v7;
}
