/*
 * XREFs of _lambda_c7e28edb760347053732171cef665d5d_::operator() @ 0x18001A3F4
 * Callers:
 *     Windows::Internal::COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d__Windows::Internal::CMarshaledInterfaceResult_Windows::Gaming::Preview::GamesEnumeration::IGameListEntry___::Run @ 0x180021330 (Windows--Internal--COperationLambdaVar_0__lambda_c7e28edb760347053732171cef665d5d___ea_180021330.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000E7B4 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180014128 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@U_GUID@@@Collections@Foundation@5@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@AEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x18002206C (-_AddGameConfigsToGameListEntry@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     ?_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTileIdentifier@Shim@UnifiedTile@Shell@WindowsInternal@@PEAPEAVGameListEntryServer@2345@@Z @ 0x18002262C (-_CreateGameListEntryFromTileId@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Window.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=19
__int64 __fastcall lambda_c7e28edb760347053732171cef665d5d_::operator()(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  HRESULT v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbx
  unsigned int (__fastcall *v14)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **); // rsi
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v15; // rcx
  unsigned int v16; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v17; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v21; // rbx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v22; // rdx
  int v23; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v24; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HRESULT v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  __int64 v31; // rcx
  __int64 v32; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v33; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, HSTRING, __int64 *); // rsi
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v43; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // esi
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v52; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v60; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v68; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v69; // rcx
  __int64 v70; // rcx
  __int64 v71; // rcx
  __int64 *v72; // rdi
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v78; // rcx
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // [rsp+20h] [rbp-69h] BYREF
  __int64 v83; // [rsp+28h] [rbp-61h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v84; // [rsp+30h] [rbp-59h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *v85; // [rsp+38h] [rbp-51h] BYREF
  __int64 v86; // [rsp+40h] [rbp-49h] BYREF
  __int64 v87; // [rsp+48h] [rbp-41h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v88; // [rsp+50h] [rbp-39h] BYREF
  int v89; // [rsp+58h] [rbp-31h] BYREF
  __int128 v90; // [rsp+60h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-19h] BYREF
  HSTRING string; // [rsp+88h] [rbp-1h] BYREF
  HSTRING_HEADER v93; // [rsp+90h] [rbp+7h] BYREF
  HSTRING v94; // [rsp+A8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v83 = 0LL;
  v82 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a1 + 72LL))(*a1, &v83);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v4);
    v6 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)a1[1] + 72LL))(a1[1], &v82);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v8);
    v9 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    return v5;
  }
  string = 0LL;
  v11 = WindowsCreateStringReference(L"FullTileId", 0xAu, &hstringHeader, &string);
  if ( v11 < 0 )
  {
LABEL_173:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    JUMPOUT(0x18001AED7LL);
  }
  v85 = 0LL;
  v84 = 0LL;
  v12 = (*(unsigned int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **))(*(_QWORD *)v83 + 48LL))(
          v83,
          string,
          &v85) >> 31;
  v13 = v82;
  v14 = *(unsigned int (__fastcall **)(__int64, HSTRING, struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier **))(*(_QWORD *)v82 + 48LL);
  v15 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v16 = v14(v13, string, &v84) >> 31;
  if ( !(_BYTE)v12 && !(_BYTE)v16 )
  {
    v5 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)0x80070057LL);
    v17 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v18 + 16LL))(v18);
    }
    string = 0LL;
    v19 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v20 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    return v5;
  }
  v21 = 0LL;
  v88 = 0LL;
  if ( !(_BYTE)v12 || !(_BYTE)v16 )
  {
    v22 = v84;
    if ( !(_BYTE)v12 )
      v22 = v85;
    v23 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_CreateGameListEntryFromTileId(
            (Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl *)a1[2],
            v22,
            &v88);
    v5 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v23);
      if ( v88 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v88);
      v24 = v84;
      if ( v84 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v24 + 16LL))(v24);
      }
      v25 = v85;
      if ( v85 )
      {
        v85 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v25 + 16LL))(v25);
      }
      string = 0LL;
      v26 = v82;
      if ( v82 )
      {
        v82 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      v27 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      return v5;
    }
    v21 = v88;
  }
  v94 = 0LL;
  v28 = WindowsCreateStringReference(L"GameConfigIds", 0xDu, &v93, &v94);
  if ( v28 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v28);
    goto LABEL_173;
  }
  v87 = 0LL;
  v86 = 0LL;
  v29 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v83 + 48LL))(v83, v94, &v87);
  v30 = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v29);
    v31 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    v94 = 0LL;
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
    v33 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v33 + 16LL))(v33);
    }
    v34 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v34 + 16LL))(v34);
    }
    string = 0LL;
    v35 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
    }
    v36 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
    }
    return v30;
  }
  v37 = v82;
  v38 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v82 + 48LL);
  v39 = v86;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
  v40 = v38(v37, v94, &v86);
  v30 = v40;
  if ( v40 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v40);
    v41 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
    }
    v94 = 0LL;
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
    v43 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v43 + 16LL))(v43);
    }
    v44 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v44 + 16LL))(v44);
    }
    string = 0LL;
    v45 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v46 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    }
    return v30;
  }
  v90 = 0LL;
  v47 = CreateGameConfigStoreClientIfNeeded(&v90);
  v48 = v47;
  if ( v47 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v47);
    if ( *((_QWORD *)&v90 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v49 = *((_QWORD *)&v90 + 1);
        (***((void (__fastcall ****)(_QWORD))&v90 + 1))(*((_QWORD *)&v90 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v90 + 1) + 8LL))(*((_QWORD *)&v90 + 1));
      }
      v21 = v88;
    }
    v50 = v86;
    if ( v86 )
    {
      v86 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
    }
    v51 = v87;
    if ( v87 )
    {
      v87 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
    }
    v94 = 0LL;
    if ( v21 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
    v52 = v84;
    if ( v84 )
    {
      v84 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v52 + 16LL))(v52);
    }
    v53 = v85;
    if ( v85 )
    {
      v85 = 0LL;
      (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v53 + 16LL))(v53);
    }
    string = 0LL;
    v54 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
    }
    v55 = v83;
    if ( v83 )
    {
      v83 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
    }
    return v48;
  }
  v89 = 0;
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v87 + 56LL))(v87, &v89) >= 0 && v89 )
  {
    v56 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
            a1[2],
            v87,
            &v88,
            &v90);
    v48 = v56;
    if ( v56 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v56);
      if ( *((_QWORD *)&v90 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v57 = *((_QWORD *)&v90 + 1);
          (***((void (__fastcall ****)(_QWORD))&v90 + 1))(*((_QWORD *)&v90 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v90 + 1) + 8LL))(*((_QWORD *)&v90 + 1));
        }
      }
      v58 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
      }
      v59 = v87;
      if ( v87 )
      {
        v87 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
      }
      v94 = 0LL;
      if ( v88 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v88);
      v60 = v84;
      if ( v84 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v60 + 16LL))(v60);
      }
      v61 = v85;
      if ( v85 )
      {
        v85 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v61 + 16LL))(v61);
      }
      string = 0LL;
      v62 = v82;
      if ( v82 )
      {
        v82 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
      }
      v63 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
      }
      return v48;
    }
    v21 = v88;
  }
  if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v86 + 56LL))(v86, &v89) >= 0 && v89 )
  {
    v64 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry(
            a1[2],
            v86,
            &v88,
            &v90);
    v48 = v64;
    if ( v64 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x213,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v64);
      if ( *((_QWORD *)&v90 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v65 = *((_QWORD *)&v90 + 1);
          (***((void (__fastcall ****)(_QWORD))&v90 + 1))(*((_QWORD *)&v90 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v65 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v90 + 1) + 8LL))(*((_QWORD *)&v90 + 1));
        }
      }
      v66 = v86;
      if ( v86 )
      {
        v86 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
      }
      v67 = v87;
      if ( v87 )
      {
        v87 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
      }
      v94 = 0LL;
      if ( v88 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v88);
      v68 = v84;
      if ( v84 )
      {
        v84 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v68 + 16LL))(v68);
      }
      v69 = v85;
      if ( v85 )
      {
        v85 = 0LL;
        (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v69 + 16LL))(v69);
      }
      string = 0LL;
      v70 = v82;
      if ( v82 )
      {
        v82 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v70 + 16LL))(v70);
      }
      v71 = v83;
      if ( v83 )
      {
        v83 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
      }
      return v48;
    }
    v21 = v88;
  }
  v72 = (__int64 *)(a2 + 16);
  v73 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( v73 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v73 + 16LL))(v73);
  v74 = *v72;
  if ( v21 )
  {
    if ( v74 )
    {
      *v72 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
    }
    RoGetAgileReference(0LL, &GUID_735924d3_811f_4494_b69c_c641a0c61543, v21, a2 + 16);
  }
  else
  {
    *v72 = 0LL;
    if ( v74 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v74 + 16LL))(v74);
  }
  if ( *((_QWORD *)&v90 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v75 = *((_QWORD *)&v90 + 1);
      (***((void (__fastcall ****)(_QWORD))&v90 + 1))(*((_QWORD *)&v90 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v75 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v90 + 1) + 8LL))(*((_QWORD *)&v90 + 1));
    }
    v21 = v88;
  }
  v76 = v86;
  if ( v86 )
  {
    v86 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
  }
  v77 = v87;
  if ( v87 )
  {
    v87 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v77 + 16LL))(v77);
  }
  v94 = 0LL;
  if ( v21 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release((volatile signed __int64 *)v21);
  v78 = v84;
  if ( v84 )
  {
    v84 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v78 + 16LL))(v78);
  }
  v79 = v85;
  if ( v85 )
  {
    v85 = 0LL;
    (*(void (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileIdentifier *))(*(_QWORD *)v79 + 16LL))(v79);
  }
  string = 0LL;
  v80 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v80 + 16LL))(v80);
  }
  v81 = v83;
  if ( v83 )
  {
    v83 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
  }
  return 0LL;
}
