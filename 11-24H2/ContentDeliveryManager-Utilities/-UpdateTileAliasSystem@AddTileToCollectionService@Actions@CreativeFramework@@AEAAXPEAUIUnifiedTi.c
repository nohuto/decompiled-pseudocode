/*
 * XREFs of ?UpdateTileAliasSystem@AddTileToCollectionService@Actions@CreativeFramework@@AEAAXPEAUIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@_N@Z @ 0x180096BBC
 * Callers:
 *     ?Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180095A40 (-Invoke@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ @ 0x180096730 (-Revert@AddTileToCollectionService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DDFC (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800933B8 (--$GetActivationFactory@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@W.c)
 *     ??0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEB_WI@Z @ 0x180093BE4 (--0HStringReference@Wrappers@WRL@Microsoft@@QEAA@PEB_WI@Z.c)
 *     __security_check_cookie @ 0x1800B6D70 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::Actions::AddTileToCollectionService::UpdateTileAliasSystem(
        CreativeFramework::Actions::AddTileToCollectionService *this,
        __int64 (__fastcall ***a2)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, __int64 *),
        char a3)
{
  __int64 (__fastcall **v5)(struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *, GUID *, __int64 *); // rax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, HSTRING *); // rdi
  int v9; // eax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, HSTRING *); // rdi
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // r8d
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING, PVOID, PVOID); // rdi
  const WCHAR *v20; // rdx
  PVOID Reserved1; // r14
  const WCHAR *v22; // rdx
  HSTRING_HEADER *v23; // rax
  int v24; // eax
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  int v28; // eax
  int v29; // [rsp+20h] [rbp-59h]
  _BYTE v30[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v31; // [rsp+38h] [rbp-41h] BYREF
  HSTRING v32; // [rsp+40h] [rbp-39h] BYREF
  HSTRING string; // [rsp+48h] [rbp-31h] BYREF
  __int64 *v34; // [rsp+50h] [rbp-29h] BYREF
  __int64 v35; // [rsp+58h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp-19h] BYREF
  HSTRING_HEADER v37; // [rsp+80h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v5 = *a2;
  v35 = 0LL;
  v6 = (*v5)(
         (struct WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier *)a2,
         &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a,
         &v35);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v6,
      v29);
  v32 = 0LL;
  v7 = v35;
  v8 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 48LL);
  WindowsDeleteString(0LL);
  v32 = 0LL;
  v9 = v8(v7, &v32);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v9,
      v29);
  string = 0LL;
  v10 = v35;
  v11 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v12 = v11(v10, &string);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x25F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v12,
      v29);
  wil::GetActivationFactory<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics>(
    (const WCHAR *)&v34,
    v13,
    v14);
  if ( a3 )
  {
    v31 = 0LL;
    v16 = *v34;
    v31 = 0LL;
    LOBYTE(v15) = 1;
    v17 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, __int64, __int64 *))(v16 + 64))(v34, v32, v15, &v31);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x265,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v17,
        v29);
    v18 = v31;
    v19 = *(__int64 (__fastcall **)(__int64, HSTRING, PVOID, PVOID))(*(_QWORD *)v31 + 48LL);
    v20 = (const WCHAR *)((char *)this + 144);
    if ( *((_QWORD *)this + 21) >= 8uLL )
      v20 = *(const WCHAR **)v20;
    Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                  &hstringHeader,
                  v20,
                  *((_DWORD *)this + 40))[1].Reserved.Reserved1;
    v22 = (const WCHAR *)((char *)this + 112);
    if ( *((_QWORD *)this + 17) >= 8uLL )
      v22 = *(const WCHAR **)v22;
    v23 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v37, v22, *((_DWORD *)this + 32));
    v24 = v19(v18, string, v23[1].Reserved.Reserved1, Reserved1);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x269,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v24,
        v29);
LABEL_24:
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v31);
    goto LABEL_25;
  }
  v30[0] = 0;
  v25 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _BYTE *))(*v34 + 56))(v34, v32, v30);
  if ( v25 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v25,
      v29);
  if ( v30[0] )
  {
    v31 = 0LL;
    v26 = *v34;
    v31 = 0LL;
    v27 = (*(__int64 (__fastcall **)(__int64 *, HSTRING, _QWORD, __int64 *))(v26 + 64))(v34, v32, 0LL, &v31);
    if ( v27 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x272,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v27,
        v29);
    v28 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v31 + 80LL))(v31, string);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x273,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v28,
        v29);
    goto LABEL_24;
  }
LABEL_25:
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v34);
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v32);
  v32 = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v35);
}
