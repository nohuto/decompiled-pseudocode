/*
 * XREFs of ?RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800962D4
 * Callers:
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180096390 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEAVHString@Wrappers@WRL@Microsoft@@AEAPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEA_N@Z @ 0x18007A130 (--0_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEAVHString@Wrappers@WRL@Microsoft@@AEAPEAUIC.c)
 *     CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___ @ 0x180092C20 (CreativeFramework--Actions--EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___.c)
 *     ?CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x180094220 (-CommitCollectionChanges@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurated.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::RemoveTileFromCollection(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, HSTRING *); // rbx
  int v4; // eax
  _lambda_33066bbcaa202ed8496d422e2c9143b2_ *v5; // rax
  CreativeFramework::Actions::AddTileToCollectionService *v6; // rcx
  int v7[8]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  bool v9; // [rsp+60h] [rbp+20h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection *v10; // [rsp+68h] [rbp+28h] BYREF
  HSTRING string; // [rsp+70h] [rbp+30h] BYREF

  v10 = a2;
  string = 0LL;
  v2 = *((_QWORD *)this + 22);
  v3 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v2 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v4 = v3(v2, &string);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x239,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4,
      v7[0]);
  v9 = 0;
  v5 = _lambda_33066bbcaa202ed8496d422e2c9143b2_::_lambda_33066bbcaa202ed8496d422e2c9143b2_(
         (_lambda_33066bbcaa202ed8496d422e2c9143b2_ *)v7,
         (struct Microsoft::WRL::Wrappers::HString *)&string,
         &v10,
         &v9);
  CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___(
    (__int64 *)v10,
    (__int64)v5);
  if ( v9 )
    CreativeFramework::Actions::AddTileToCollectionService::CommitCollectionChanges(v6, v10);
  WindowsDeleteString(string);
}
