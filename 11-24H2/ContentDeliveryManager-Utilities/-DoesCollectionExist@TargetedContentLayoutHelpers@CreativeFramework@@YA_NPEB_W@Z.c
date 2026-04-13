/*
 * XREFs of ?DoesCollectionExist@TargetedContentLayoutHelpers@CreativeFramework@@YA_NPEB_W@Z @ 0x1800AC54C
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800ADF5C (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024214 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180092F0C (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
bool __fastcall CreativeFramework::TargetedContentLayoutHelpers::DoesCollectionExist(
        CreativeFramework::TargetedContentLayoutHelpers *this,
        const wchar_t *a2)
{
  bool v2; // si
  __int64 v3; // rbx
  __int64 (__fastcall *v4)(__int64, PVOID, int *); // rdi
  unsigned int v5; // r8d
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  unsigned int v8; // r8d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, PVOID, __int64 **); // rdi
  HSTRING_HEADER *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-50h] BYREF
  int v18; // [rsp+24h] [rbp-4Ch] BYREF
  __int64 v19; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  const WCHAR *v22; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER v23; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v22 = L"Start.TileGrid";
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>((__int64)&v21);
  v2 = 0;
  LOBYTE(v17) = 0;
  v3 = v21;
  v4 = *(__int64 (__fastcall **)(__int64, PVOID, int *))(*(_QWORD *)v21 + 80LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v22, v5);
  v7 = v4(v3, v6[1].Reserved.Reserved1, &v17);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      v17);
  if ( (_BYTE)v17 )
  {
    v20 = 0LL;
    v9 = v21;
    v10 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v21 + 56LL);
    v20 = 0LL;
    v11 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v23, &v22, v8);
    v12 = v10(v9, v11[1].Reserved.Reserved1, &v20);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8B,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v12,
        v17);
    v19 = 0LL;
    v13 = *v20;
    v19 = 0LL;
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v13 + 104))(v20, &v19);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v14,
        v17);
    v18 = 0;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v19 + 56LL))(v19, &v18);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x90,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v15,
        v17);
    LOBYTE(v17) = v18 != 0;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v19);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v20);
    v2 = (_BYTE)v17 != 0;
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v21);
  return v2;
}
