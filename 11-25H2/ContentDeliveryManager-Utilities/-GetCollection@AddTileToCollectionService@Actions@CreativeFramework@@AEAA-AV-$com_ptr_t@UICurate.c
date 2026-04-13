/*
 * XREFs of ?GetCollection@AddTileToCollectionService@Actions@CreativeFramework@@AEAA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W_N@Z @ 0x180094A24
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800956A0 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180096390 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024204 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A34C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DC1C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180092B6C (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall CreativeFramework::Actions::AddTileToCollectionService::GetCollection(
        __int64 a1,
        __int64 *a2,
        const WCHAR *a3,
        char a4)
{
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, int *); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, PVOID, __int64 *); // rdi
  const WCHAR *v14; // rax
  HSTRING_HEADER *v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v19; // [rsp+20h] [rbp-50h] BYREF
  __int64 v20; // [rsp+28h] [rbp-48h] BYREF
  __int64 v21; // [rsp+30h] [rbp-40h] BYREF
  const WCHAR *v22[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER v23; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v22[0] = a3;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v21);
  if ( a4 )
    goto LABEL_6;
  LOBYTE(v19) = 0;
  v8 = v21;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)v21 + 80LL);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, v22, v7);
  v11 = v9(v8, v10[1].Reserved.Reserved1, &v19);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x222,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v11,
      v19);
  if ( (_BYTE)v19 )
  {
LABEL_6:
    v20 = 0LL;
    v12 = v21;
    v13 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v21 + 56LL);
    v20 = 0LL;
    v14 = (const WCHAR *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 40) >= 8uLL )
      v14 = *(const WCHAR **)v14;
    v22[0] = v14;
    v15 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, v22, v7);
    v16 = v13(v12, v15[1].Reserved.Reserved1, &v20);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x22A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v16,
        v19);
    v17 = v20;
    v20 = 0LL;
    *a2 = v17;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v20);
  }
  else
  {
    *a2 = 0LL;
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  return a2;
}
