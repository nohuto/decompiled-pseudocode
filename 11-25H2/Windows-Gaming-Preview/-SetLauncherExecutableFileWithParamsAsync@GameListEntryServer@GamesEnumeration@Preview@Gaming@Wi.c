/*
 * XREFs of ?SetLauncherExecutableFileWithParamsAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAUHSTRING__@@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002EF30
 * Callers:
 *     ?SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAUIStorageFile@Storage@5@PEAPEAUIAsyncAction@Foundation@5@@Z @ 0x18002EE00 (-SetLauncherExecutableFileAsync@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEA.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000221C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180002290 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ??$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@PEAV?$AsyncCallbackBase@VCNoResult@Internal@Windows@@@01@@Z @ 0x180024458 (--$MakeAsyncActionHelper@VComTaskPoolHandler@Internal@Windows@@UDisableCausality@WRL@Microsoft@@.c)
 *     wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___ @ 0x180025960 (wil--details--lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___--_lambda_call__lambda_95b9.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::SetLauncherExecutableFileWithParamsAsync(
        Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *this,
        struct Windows::Storage::IStorageFile *a2,
        HSTRING a3,
        struct Windows::Foundation::IAsyncAction **a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  volatile signed __int64 *v17; // rbx
  signed __int64 v18; // rcx
  bool v19; // zf
  signed __int64 v20; // rax
  __int64 v21; // rcx
  signed __int32 v22; // eax
  HSTRING v23; // r14
  HSTRING v24; // r15
  volatile signed __int64 *v25; // rsi
  signed __int64 v26; // rcx
  signed __int64 v27; // rax
  signed __int32 v28; // eax
  char *v29; // rax
  __int64 v30; // r8
  char *v31; // rdi
  char *v32; // rax
  int v33; // edi
  __int64 v35; // [rsp+38h] [rbp-49h] BYREF
  HSTRING string; // [rsp+40h] [rbp-41h] BYREF
  HSTRING newString; // [rsp+48h] [rbp-39h] BYREF
  HSTRING v38; // [rsp+50h] [rbp-31h] BYREF
  HSTRING v39; // [rsp+58h] [rbp-29h] BYREF
  int v40; // [rsp+60h] [rbp-21h] BYREF
  __int64 v41; // [rsp+64h] [rbp-1Dh]
  _QWORD v42[4]; // [rsp+70h] [rbp-11h] BYREF
  char v43; // [rsp+90h] [rbp+Fh]
  char v44; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  UINT32 length; // [rsp+E8h] [rbp+67h] BYREF

  if ( *((_QWORD *)this + 30) )
  {
    v8 = -2147024891;
    v9 = 1483LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)v8);
    return v8;
  }
  if ( WindowsGetStringLen(a3) >= 0x104 )
  {
    v8 = -2147024809;
    v9 = 1486LL;
    goto LABEL_53;
  }
  string = 0LL;
  if ( a2 )
  {
    v35 = 0LL;
    v10 = (**(__int64 (__fastcall ***)(struct Windows::Storage::IStorageFile *, GUID *, __int64 *))a2)(
            a2,
            &GUID_4207a996_ca2f_42f7_bde8_8b10457a7f30,
            &v35);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D4,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v10);
      v11 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
LABEL_48:
      WindowsDeleteString(string);
      return v8;
    }
    v12 = v35;
    v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v35 + 96LL);
    WindowsDeleteString(string);
    v14 = v13(v12, &string);
    v8 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D5,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)(unsigned int)v14);
      v15 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
      goto LABEL_48;
    }
    length = 0;
    WindowsGetStringRawBuffer(string, &length);
    if ( !string || !length )
    {
      v8 = -2147024809;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5D9,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
        (const char *)0x80070057LL);
      v21 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      goto LABEL_48;
    }
    v16 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  v17 = (volatile signed __int64 *)((char *)this - 16);
  if ( this != (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)16 )
  {
    v18 = *((_QWORD *)v17 + 17);
    while ( v18 >= 0 )
    {
      if ( (_DWORD)v18 != 0x7FFFFFFF )
      {
        v20 = _InterlockedCompareExchange64(v17 + 17, v18 + 1, v18);
        v19 = v18 == v20;
        v18 = v20;
        if ( !v19 )
          continue;
      }
      goto LABEL_28;
    }
    do
      v22 = *(_DWORD *)(2 * v18 + 0x10);
    while ( v22 != 0x7FFFFFFF
         && v22 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v18 + 16), v22 + 1, v22) );
  }
LABEL_28:
  WindowsDeleteString(0LL);
  newString = 0LL;
  WindowsDuplicateString(a3, &newString);
  v23 = string;
  string = 0LL;
  v38 = v23;
  v24 = newString;
  newString = 0LL;
  v39 = v24;
  v42[0] = &string;
  v42[1] = &v38;
  v42[2] = &newString;
  v42[3] = &v39;
  v43 = 1;
  v25 = (volatile signed __int64 *)((char *)this - 16);
  if ( v17 )
  {
    v26 = *((_QWORD *)v17 + 17);
    while ( v26 >= 0 )
    {
      if ( (_DWORD)v26 != 0x7FFFFFFF )
      {
        v27 = _InterlockedCompareExchange64(v17 + 17, v26 + 1, v26);
        v19 = v26 == v27;
        v26 = v27;
        if ( !v19 )
          continue;
      }
      goto LABEL_36;
    }
    do
      v28 = *(_DWORD *)(2 * v26 + 0x10);
    while ( v28 != 0x7FFFFFFF
         && v28 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v26 + 16), v28 + 1, v28) );
LABEL_36:
    v23 = v38;
    v24 = v39;
  }
  v40 = 3;
  v41 = 128LL;
  v29 = (char *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v31 = v29;
  if ( v29 )
  {
    *((_QWORD *)v29 + 1) = v17;
    v32 = v29 + 16;
    *(_QWORD *)v32 = 0LL;
    if ( v32 != &v44 )
    {
      *(_QWORD *)v32 = v17;
      v25 = 0LL;
    }
    *((_QWORD *)v31 + 3) = v23;
    *((_QWORD *)v31 + 4) = v24;
    *(_QWORD *)v31 = &off_1800499B8;
    *((_DWORD *)v31 + 10) = 0;
    `eh vector constructor iterator'(
      v31 + 48,
      8LL,
      1LL,
      (void (__fastcall *)(char *))Microsoft::WRL::AgileRef::AgileRef);
    *((_DWORD *)v31 + 10) = 0;
  }
  else
  {
    v31 = 0LL;
  }
  v33 = Windows::Internal::MakeAsyncActionHelper<Windows::Internal::ComTaskPoolHandler,Microsoft::WRL::DisableCausality>(
          (__int64)&v40,
          (__int64 *)a4,
          v30,
          (void (__fastcall ***)(_QWORD, __int64))v31);
  if ( v25 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v25);
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x603,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelistentry.cpp",
      (const char *)(unsigned int)v33);
    wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___((__int64)v42);
    WindowsDeleteString(newString);
    newString = 0LL;
    if ( v17 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
    v8 = v33;
    goto LABEL_48;
  }
  v43 = 0;
  wil::details::lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___::_lambda_call__lambda_95b9642a9d841d8cc9a28b6b02c7f713___((__int64)v42);
  WindowsDeleteString(newString);
  newString = 0LL;
  if ( v17 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v17);
  WindowsDeleteString(string);
  return 0LL;
}
