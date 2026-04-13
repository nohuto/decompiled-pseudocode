/*
 * XREFs of ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180096390
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180094A24 (-GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA-AV-$com_ptr_t@UICurate.c)
 *     ?RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800961DC (-RemoveCollectionProperties@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICura.c)
 *     ?RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800962D4 (-RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurate.c)
 *     ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x18009681C (-UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTi.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::Revert(
        CreativeFramework::Actions::AddTileToCollectionService *this)
{
  const WCHAR *v2; // r8
  CreativeFramework::Actions::AddTileToCollectionService *v3; // rcx
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (const WCHAR *)((char *)this + 16);
  if ( *((_QWORD *)this + 5) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
    (__int64)this,
    (__int64 *)&v4,
    v2,
    *((_BYTE *)this + 184) & 1);
  if ( v4 )
  {
    if ( *((_BYTE *)this + 8) )
    {
      CreativeFramework::Actions::AddTileToCollectionService::RemoveCollectionProperties(v3, v4);
    }
    else if ( (*((_BYTE *)this + 184) & 2) == 0 )
    {
      CreativeFramework::Actions::AddTileToCollectionService::RemoveTileFromCollection(this, v4);
    }
    CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
      this,
      *((struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier **)this + 22),
      0);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v4);
}
