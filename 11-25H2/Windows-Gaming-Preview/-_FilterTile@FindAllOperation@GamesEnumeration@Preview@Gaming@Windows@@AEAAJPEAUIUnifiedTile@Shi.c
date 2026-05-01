/*
 * XREFs of ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FB30
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800107AC (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIUnifiedTileManager@789WindowsInternal@@PEAUIGameListChangedEventHandler@2345@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@AEAPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@$$QEAPEAUIUnifiedTileManager@5678@$$QEAPEAUIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000BFF0 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@AEAPEA.c)
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18000C6D4 (--$_Emplace_reallocate@AEBV-$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows.c)
 *     ??$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@UstringLessIgnoreCase@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@34@@std@@@std@@@std@@@std@@_N@1@$$QEAVHString@Wrappers@WRL@Microsoft@@AEAV?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@56@@Z @ 0x18000CA3C (--$emplace@VHString@Wrappers@WRL@Microsoft@@AEAV-$ComPtr@VGameListEntryServer@GamesEnumeration@P.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@UIGameListEntry2@5678@UIGameListEntry_Private@5678@VCFTMCrossProcServer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000E960 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGameListEntry@Ga.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800360E0 (-get_TitleId@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUHSTRING__@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=17 #try_helpers=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *a2)
{
  _WORD *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, HSTRING *); // rdi
  int v10; // eax
  __int64 v11; // rcx
  const WCHAR *StringRawBuffer; // rax
  PWSTR v13; // rax
  HSTRING v14; // rcx
  _WORD *v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, HSTRING *); // rdi
  int v20; // eax
  __int64 v21; // rcx
  PCWSTR v22; // rax
  int v23; // r9d
  const WCHAR *v24; // rcx
  const WCHAR *v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  _QWORD *v32; // rax
  volatile signed __int64 *v33; // rdx
  signed __int64 v34; // rcx
  bool v35; // zf
  signed __int64 v36; // rax
  signed __int32 v37; // eax
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v38; // r15
  int v39; // eax
  unsigned int v40; // ebx
  __int64 v41; // rcx
  volatile signed __int64 *v42; // rcx
  __int64 v43; // rbx
  __int64 (__fastcall *v44)(__int64, HSTRING *); // rdi
  int v45; // eax
  unsigned int v46; // ebx
  __int64 v47; // rcx
  volatile signed __int64 *v48; // rcx
  volatile signed __int64 *v49; // rbx
  __int64 v50; // rbx
  __int64 (__fastcall *v51)(__int64, HSTRING *); // rdi
  int v52; // eax
  unsigned int v53; // ebx
  __int64 v54; // rcx
  __int64 v55; // rcx
  volatile signed __int64 *v56; // rcx
  int v57; // eax
  __int64 v58; // rdi
  __int64 (__fastcall *v59)(__int64, HSTRING *); // rbx
  int v60; // eax
  unsigned int v61; // ebx
  __int64 v62; // rcx
  __int64 v63; // rcx
  __int64 v64; // rcx
  volatile signed __int64 *v65; // rcx
  __int64 v66; // rcx
  __int64 v67; // rcx
  volatile signed __int64 *v68; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-98h]
  HSTRING v70; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v71[2]; // [rsp+38h] [rbp-80h] BYREF
  HSTRING v72; // [rsp+48h] [rbp-70h] BYREF
  HSTRING string[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v74; // [rsp+60h] [rbp-58h] BYREF
  __int64 v75; // [rsp+68h] [rbp-50h] BYREF
  struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *v76[2]; // [rsp+70h] [rbp-48h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *v77[7]; // [rsp+80h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  HSTRING length; // [rsp+C0h] [rbp+8h] BYREF
  struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *v80; // [rsp+C8h] [rbp+10h] BYREF
  volatile signed __int64 *v81; // [rsp+D0h] [rbp+18h] BYREF
  __int64 v82; // [rsp+D8h] [rbp+20h] BYREF

  v80 = a2;
  v3 = (_WORD *)*((_QWORD *)this + 11);
  if ( v3 && *v3 )
  {
    v71[0] = 0LL;
    v4 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
           a2,
           v71);
    v5 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB1,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v4);
      v6 = v71[0];
      if ( v71[0] )
      {
        v71[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
      return v5;
    }
    v8 = v71[0];
    if ( !v71[0] )
      return 0LL;
    string[0] = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v71[0] + 48LL);
    WindowsDeleteString(0LL);
    string[0] = 0LL;
    v10 = v9(v8, string);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB5,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v10);
      WindowsDeleteString(string[0]);
      string[0] = 0LL;
      v11 = v71[0];
      if ( v71[0] )
      {
        v71[0] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return v5;
    }
    LODWORD(length) = 0;
    StringRawBuffer = WindowsGetStringRawBuffer(string[0], (UINT32 *)&length);
    v13 = StrStrNW(StringRawBuffer, *((PCWSTR *)this + 11), (UINT)length);
    v14 = string[0];
    if ( v13 )
      goto LABEL_39;
LABEL_36:
    WindowsDeleteString(v14);
    string[0] = 0LL;
    v29 = v71[0];
    if ( v71[0] )
    {
      v71[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return 0LL;
  }
  v15 = (_WORD *)*((_QWORD *)this + 8);
  if ( !v15 || !*v15 )
    goto LABEL_41;
  v71[0] = 0LL;
  v16 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, _QWORD *))(*(_QWORD *)a2 + 64LL))(
          a2,
          v71);
  v5 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBE,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v16);
    v17 = v71[0];
    if ( v71[0] )
    {
      v71[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    return v5;
  }
  v18 = v71[0];
  if ( !v71[0] )
    return 0LL;
  string[0] = 0LL;
  v19 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v71[0] + 48LL);
  WindowsDeleteString(0LL);
  string[0] = 0LL;
  v20 = v19(v18, string);
  v5 = v20;
  if ( v20 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC2,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v20);
    WindowsDeleteString(string[0]);
    string[0] = 0LL;
    v21 = v71[0];
    if ( v71[0] )
    {
      v71[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    return v5;
  }
  LODWORD(length) = 0;
  v22 = WindowsGetStringRawBuffer(string[0], (UINT32 *)&length);
  v23 = v22 != 0LL ? (unsigned int)length : 0;
  v24 = &word_18004D6D0;
  v25 = &word_18004D6D0;
  if ( v22 )
    v25 = v22;
  v26 = *((_QWORD *)this + 9);
  if ( v26 == -1 )
  {
    v27 = *((_QWORD *)this + 8);
    if ( v27 )
    {
      do
        ++v26;
      while ( *(_WORD *)(v27 + 2 * v26) );
    }
    else
    {
      LODWORD(v26) = 0;
    }
  }
  if ( *((_QWORD *)this + 8) )
    v24 = (const WCHAR *)*((_QWORD *)this + 8);
  v28 = CompareStringOrdinal(v24, v26, v25, v23, 1);
  v14 = string[0];
  if ( v28 != 2 )
    goto LABEL_36;
LABEL_39:
  WindowsDeleteString(v14);
  string[0] = 0LL;
  v30 = v71[0];
  if ( v71[0] )
  {
    v71[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
LABEL_41:
  v81 = 0LL;
  v76[0] = *((struct Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler **)this + 26);
  v77[0] = *((struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager **)this + 14);
  v31 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile * &,WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager *,Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler *>(
          &v81,
          &v80,
          v77,
          v76);
  if ( v31 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD4,
      (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v31,
      bIgnoreCase);
LABEL_99:
    v68 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v68);
    }
    return 0LL;
  }
  v32 = (_QWORD *)*((_QWORD *)this + 16);
  if ( v32 == *((_QWORD **)this + 17) )
  {
    std::vector<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> const &>(
      (char **)this + 15,
      *((char **)this + 16),
      &v81);
  }
  else
  {
    v33 = v81;
    *v32 = v81;
    if ( v33 )
    {
      v34 = *((_QWORD *)v33 + 17);
      while ( v34 >= 0 )
      {
        if ( (_DWORD)v34 != 0x7FFFFFFF )
        {
          v36 = _InterlockedCompareExchange64(v33 + 17, v34 + 1, v34);
          v35 = v34 == v36;
          v34 = v36;
          if ( !v35 )
            continue;
        }
        goto LABEL_52;
      }
      do
        v37 = *(_DWORD *)(2 * v34 + 0x10);
      while ( v37 != 0x7FFFFFFF
           && v37 != _InterlockedCompareExchange((volatile signed __int32 *)(2 * v34 + 16), v37 + 1, v37) );
    }
LABEL_52:
    *((_QWORD *)this + 16) += 8LL;
  }
  v82 = 0LL;
  v38 = v80;
  v39 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v80 + 48LL))(
          v80,
          &v82);
  v40 = v39;
  if ( v39 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v39);
    v41 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    }
    v42 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v42);
    }
    return v40;
  }
  v70 = 0LL;
  v43 = v82;
  v44 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v82 + 56LL);
  WindowsDeleteString(0LL);
  v70 = 0LL;
  v45 = v44(v43, &v70);
  v46 = v45;
  if ( v45 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v45);
    WindowsDeleteString(v70);
    v70 = 0LL;
    v47 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
    }
    v48 = v81;
    if ( v81 )
    {
      v81 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v48);
    }
    return v46;
  }
  std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
    (__int64 *)this + 18,
    (__int64)v77,
    &v70,
    (__int64 *)&v81);
  v72 = 0LL;
  v49 = v81;
  WindowsDeleteString(0LL);
  v72 = 0LL;
  if ( Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::get_TitleId(
         (Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *)(v49 + 2),
         &v72) >= 0
    && v72 )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (__int64 *)this + 20,
      (__int64)v76,
      &v72,
      (__int64 *)&v81);
  }
  v74 = 0LL;
  if ( (*(int (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v38 + 64LL))(
         v38,
         &v74) >= 0 )
  {
    v50 = v74;
    if ( v74 )
    {
      length = 0LL;
      v51 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v74 + 48LL);
      WindowsDeleteString(0LL);
      length = 0LL;
      v52 = v51(v50, &length);
      v53 = v52;
      if ( v52 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xEF,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
          (const char *)(unsigned int)v52);
        WindowsDeleteString(length);
        length = 0LL;
        v54 = v74;
        if ( v74 )
        {
          v74 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v54 + 16LL))(v54);
        }
        WindowsDeleteString(v72);
        v72 = 0LL;
        WindowsDeleteString(v70);
        v70 = 0LL;
        v55 = v82;
        if ( v82 )
        {
          v82 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
        }
        v56 = v81;
        if ( v81 )
        {
          v81 = 0LL;
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v56);
        }
        return v53;
      }
      std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
        (__int64 *)this + 22,
        (__int64)string,
        &length,
        (__int64 *)&v81);
      WindowsDeleteString(length);
    }
  }
  v75 = 0LL;
  v57 = (*(__int64 (__fastcall **)(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *, __int64 *))(*(_QWORD *)v38 + 56LL))(
          v38,
          &v75);
  v58 = v75;
  if ( v57 < 0 || !v75 )
  {
LABEL_93:
    if ( v58 )
    {
      v75 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
    }
    v66 = v74;
    if ( v74 )
    {
      v74 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
    }
    WindowsDeleteString(v72);
    v72 = 0LL;
    WindowsDeleteString(v70);
    v70 = 0LL;
    v67 = v82;
    if ( v82 )
    {
      v82 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v67 + 16LL))(v67);
    }
    goto LABEL_99;
  }
  length = 0LL;
  v59 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v75 + 48LL);
  WindowsDeleteString(0LL);
  length = 0LL;
  v60 = v59(v58, &length);
  v61 = v60;
  if ( v60 >= 0 )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>,Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::stringLessIgnoreCase,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer>>>,0>>::emplace<Microsoft::WRL::Wrappers::HString,Microsoft::WRL::ComPtr<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer> &>(
      (__int64 *)this + 24,
      (__int64)v71,
      &length,
      (__int64 *)&v81);
    WindowsDeleteString(length);
    v58 = v75;
    goto LABEL_93;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
    (const char *)(unsigned int)v60);
  WindowsDeleteString(length);
  length = 0LL;
  v62 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16LL))(v62);
  }
  v63 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v63 + 16LL))(v63);
  }
  WindowsDeleteString(v72);
  v72 = 0LL;
  WindowsDeleteString(v70);
  v70 = 0LL;
  v64 = v82;
  if ( v82 )
  {
    v82 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
  }
  v65 = v81;
  if ( v81 )
  {
    v81 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry2,Windows::Gaming::Preview::GamesEnumeration::IGameListEntry_Private,CFTMCrossProcServer,Microsoft::WRL::FtmBase>::Release(v65);
  }
  return v61;
}
