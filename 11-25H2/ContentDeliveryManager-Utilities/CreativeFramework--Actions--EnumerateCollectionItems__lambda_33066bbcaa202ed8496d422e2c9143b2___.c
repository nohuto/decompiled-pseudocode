/*
 * XREFs of CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___ @ 0x180092C20
 * Callers:
 *     ?RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x1800962D4 (-RemoveTileFromCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUICurate.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800935BC (--$query@U-$IIterable@PEAU-$IKeyValuePair@U_GUID@@PEAUICuratedTile@CuratedTileCollections@Unifie.c)
 *     ??R_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEBV?$com_ptr_t@UICuratedTile@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180093D40 (--R_lambda_33066bbcaa202ed8496d422e2c9143b2_@@QEAA@AEBV-$com_ptr_t@UICuratedTile@CuratedTileColl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::Actions::EnumerateCollectionItems__lambda_33066bbcaa202ed8496d422e2c9143b2___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rax
  int v4; // eax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, __int64 *); // rdi
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  __int64 v18[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v20; // [rsp+60h] [rbp+20h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h] BYREF
  __int64 *v22; // [rsp+78h] [rbp+38h] BYREF

  v3 = *a1;
  v17 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v3 + 104))(a1, &v17);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x92,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4,
      v16);
  wil::com_ptr_t<Windows::Foundation::Collections::IMapView<_GUID,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTile *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTile *> *>>(
    &v17,
    v18);
  v22 = 0LL;
  v5 = *(_QWORD *)v18[0];
  v22 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 **))(v5 + 48))(v18[0], &v22);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6,
      v16);
  v20 = 0;
  v7 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v22 + 56))(v22, &v20);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x98,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v7,
      v16);
  while ( v20 )
  {
    v21 = 0LL;
    v16 = 0LL;
    v8 = *v22;
    v16 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 48))(v22, &v16);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x9F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v9,
        v16);
    v10 = v16;
    v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 56LL);
    v12 = v21;
    v21 = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v13 = v11(v10, &v21);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA0,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v13,
        v16);
    if ( !(unsigned __int8)_lambda_33066bbcaa202ed8496d422e2c9143b2_::operator()(a2, &v21) )
    {
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v16);
      wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
      break;
    }
    v14 = (*(__int64 (__fastcall **)(__int64 *, char *))(*v22 + 64))(v22, &v20);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA7,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v14,
        v16);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v16);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v18);
  return wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v17);
}
