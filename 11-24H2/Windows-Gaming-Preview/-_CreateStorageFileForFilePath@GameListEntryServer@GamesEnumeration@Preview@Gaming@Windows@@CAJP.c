/*
 * XREFs of ?_CreateStorageFileForFilePath@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@CAJPEBGPEAPEAUIStorageFile@Storage@5@@Z @ 0x180030880
 * Callers:
 *     ?_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@AEBV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@8@@Z @ 0x1800300E8 (-_AttachGameModeConfig@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJU_GUID@.c)
 *     ?_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180031F78 (-_InitializeLaunchTarget@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008BC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18000BDB0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x1800246A8 (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath(
        const unsigned __int16 *a1,
        struct Windows::Storage::IStorageFile **a2)
{
  int ActivationFactory; // eax
  unsigned int v4; // r8d
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, PVOID, _QWORD); // rdi
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  DWORD v12; // edx
  int v13; // r8d
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v15; // rcx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // rdi
  struct Windows::Storage::IStorageFile *v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v19; // rcx
  struct Windows::Storage::IStorageFile *v20; // rax
  __int64 (__fastcall ***v21)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-29h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-21h] BYREF
  struct Windows::Storage::IStorageFile *v25; // [rsp+30h] [rbp-19h] BYREF
  const WCHAR *v26; // [rsp+38h] [rbp-11h] BYREF
  HSTRING string; // [rsp+40h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-1h] BYREF
  HSTRING_HEADER v29; // [rsp+60h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v26 = a1;
  if ( WindowsCreateStringReference(L"Windows.Storage.StorageFile", 0x1Bu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v23 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_5984c710_daf2_43c8_8bb4_a4d3eacfd03f, &v23);
  v5 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x430,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)ActivationFactory);
    v6 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v5;
  }
  v24 = 0LL;
  v8 = v23;
  v9 = *(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v23 + 48LL);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v26, v4);
  v11 = v9(v8, v10[1].Reserved.Reserved1, &v24);
  v5 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x433,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v11);
    v14 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[2])(v14);
    }
    v15 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    return (unsigned int)v5;
  }
  v25 = 0LL;
  v16 = v24;
  v5 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Storage::StorageFile *> *>(
         v24,
         v12,
         v13);
  if ( v5 >= 0 )
    v5 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), struct Windows::Storage::IStorageFile **))(*v16)[8])(
           v16,
           &v25);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x436,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v5);
    v17 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct Windows::Storage::IStorageFile *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v18)[2])(v18);
    }
    v19 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    return (unsigned int)v5;
  }
  v20 = v25;
  v25 = 0LL;
  *a2 = v20;
  v21 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v21)[2])(v21);
  }
  v22 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  return 0LL;
}
