/*
 * XREFs of ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800107AC
 * Callers:
 *     ?RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnifiedTileManager@Shim@UnifiedTile@Shell@WindowsInternal@@PEAUIGameListChangedEventHandler@2345@PEAUHSTRING__@@@Z @ 0x18000EFD4 (-RuntimeClassInitialize@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUIUnif.c)
 * Callees:
 *     __security_check_cookie @ 0x180001D00 (__security_check_cookie.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x18000652C (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B04 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x18000BF68 (--$GetRangeNoThrow@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@wil@@YA-AV-$vector_range_nothro.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18000C37C (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??Evector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18000D3B0 (--Evector_iterator_nothrow@-$vector_range_nothrow@U-$IVectorView@PEAVUnifiedTile@Shim@1Shell@Win.c)
 *     ?IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@PEAE@Z @ 0x18000E15C (-IsUserPinnedTile@GamesEnumeration@Preview@Gaming@Windows@@YAJPEAUIUnifiedTile@Shim@UnifiedTile@.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000EB34 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000EC88 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GameConfigStoreGameListEntries@@@details@.c)
 *     ?_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z @ 0x18000FB30 (-_FilterTile@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAUIUnifiedTile@Shi.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001077C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x180010EF8 (-begin@-$vector_range_nothrow@U-$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Colle.c)
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180014128 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 *     ?DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV?$function@$$A6AJU_GUID@@$$QEAV?$unique_ptr@UGameConfig@ExecutionModel@@Ugameconfig_delete@@@std@@@Z@std@@@Z @ 0x18001438C (-DoWorkOnGameConfigStore@@YAJPEAUIGameConfigStore@ExecutionModel@@$$QEAV-$function@$$A6AJU_GUID@.c)
 *     ?GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z @ 0x18003CAD4 (-GetCallingProcessHandle@CallerIdentity@@YAJKW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEAPEAX@Z.c)
 *     ?CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z @ 0x18003CCF8 (-CheckCapabilityFromProcessHandle@CallerIdentity@@YAJPEAXPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_Start(
        Windows::Gaming::Preview::GamesEnumeration::FindAllOperation *this,
        __int64 a2)
{
  void *v3; // rdx
  int CallingProcessHandle; // ebx
  bool *v5; // r9
  __int64 v6; // rdx
  HANDLE v7; // rcx
  bool v8; // cc
  int v10; // eax
  DWORD v11; // edx
  int v12; // r8d
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rcx
  int v14; // eax
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  int v16; // eax
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, __int64 *); // rcx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  int v23; // ebx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 (__fastcall *v27)(__int64, _QWORD, __int64 *); // rsi
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v33; // rbx
  __int64 (__fastcall *v34)(__int64, __int64 *); // rsi
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 (__fastcall ***v39)(_QWORD, GUID *, __int64 *); // rcx
  unsigned __int8 *v40; // r8
  int v41; // esi
  __int64 v42; // rbx
  int IsUserPinnedTile; // eax
  wil::details::in1diag3 *v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r9
  wil::details_abi *v48; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v50; // rbx
  int GameConfigStoreClientIfNeeded; // eax
  int v52; // esi
  unsigned __int64 v53; // r9
  __int64 v54; // rdx
  _QWORD *v55; // rdx
  struct wil::ThreadErrorContext *v56; // r8
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 (__fastcall ***v59)(_QWORD, GUID *, __int64 *); // rcx
  struct DiagnosticsInfo *v60; // [rsp+20h] [rbp-A9h] BYREF
  __int64 v61; // [rsp+28h] [rbp-A1h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-99h] BYREF
  __int64 v63; // [rsp+38h] [rbp-91h] BYREF
  HANDLE hObject; // [rsp+40h] [rbp-89h] BYREF
  char *v65; // [rsp+48h] [rbp-81h] BYREF
  struct wil::details_abi::ThreadLocalData *v66; // [rsp+50h] [rbp-79h] BYREF
  __int64 v67; // [rsp+58h] [rbp-71h]
  unsigned int v68[2]; // [rsp+60h] [rbp-69h] BYREF
  const char *v69; // [rsp+68h] [rbp-61h]
  __int64 v70; // [rsp+70h] [rbp-59h]
  __int16 v71; // [rsp+78h] [rbp-51h]
  __int64 v72; // [rsp+80h] [rbp-49h]
  _BYTE v73[8]; // [rsp+88h] [rbp-41h] BYREF
  int v74; // [rsp+90h] [rbp-39h]
  __int64 v75; // [rsp+A8h] [rbp-21h]
  _QWORD v76[7]; // [rsp+B0h] [rbp-19h] BYREF
  _QWORD *v77; // [rsp+E8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  hObject = 0LL;
  CallingProcessHandle = CallerIdentity::GetCallingProcessHandle(this, a2, &hObject);
  if ( CallingProcessHandle < 0 )
  {
    v6 = 93LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)CallingProcessHandle);
    v7 = hObject;
    v8 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
LABEL_4:
    if ( v8 )
      CloseHandle(v7);
    return (unsigned int)CallingProcessHandle;
  }
  LOBYTE(v60) = 0;
  CallingProcessHandle = CallerIdentity::CheckCapabilityFromProcessHandle(
                           (CallerIdentity *)hObject,
                           v3,
                           (const unsigned __int16 *)&v60,
                           v5);
  if ( CallingProcessHandle < 0 )
  {
    v6 = 97LL;
    goto LABEL_3;
  }
  if ( !(_BYTE)v60 )
  {
    CallingProcessHandle = -2147024891;
    v6 = 98LL;
    goto LABEL_3;
  }
  v62 = 0LL;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(**((_QWORD **)this + 14)
                                                                                                + 48LL))(
          *((_QWORD *)this + 14),
          &v62);
  CallingProcessHandle = v10;
  if ( v10 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x71,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v10);
    v13 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v13)[2])(v13);
    }
LABEL_14:
    v7 = hObject;
    v8 = (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL;
    goto LABEL_4;
  }
  v14 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v62, v11, v12);
  CallingProcessHandle = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v14);
    v15 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v15)[2])(v15);
    }
    goto LABEL_14;
  }
  v61 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 14) + 56LL))(
          *((_QWORD *)this + 14),
          1LL,
          &v61);
  CallingProcessHandle = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v16);
    v17 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v18)[2])(v18);
    }
    goto LABEL_14;
  }
  v63 = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 48LL))(v61, &v63);
  CallingProcessHandle = v19;
  if ( v19 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v19);
    v20 = v63;
    if ( v63 )
    {
      v63 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v21 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    }
    v22 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v22)[2])(v22);
    }
    goto LABEL_14;
  }
  LODWORD(v65) = 0;
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>((__int64)v68, v63, (__int64)&v65);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::begin(
    v68,
    &v66);
  v23 = (int)v69;
  while ( **((int **)v66 + 2) >= 0 && (_DWORD)v67 != v23 )
  {
    v24 = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
            this,
            *((struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile **)v66 + 4));
    if ( v24 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x7D,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)v24);
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::vector_iterator_nothrow::operator++(&v66);
  }
  v25 = v72;
  if ( v72 )
  {
    v72 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( (int)v65 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v65);
  v26 = *((_QWORD *)this + 14);
  v27 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v26 + 56LL);
  v28 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  v29 = v27(v26, 0LL, &v61);
  CallingProcessHandle = v29;
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x82,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v29);
    v30 = v63;
    if ( v63 )
    {
      v63 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
    v31 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
    }
    v32 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v32)[2])(v32);
    }
    goto LABEL_14;
  }
  v33 = v61;
  v34 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v61 + 48LL);
  v35 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  v36 = v34(v33, &v63);
  CallingProcessHandle = v36;
  if ( v36 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v36);
    v37 = v63;
    if ( v63 )
    {
      v63 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
    }
    v38 = v61;
    if ( v61 )
    {
      v61 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    }
    v39 = v62;
    if ( v62 )
    {
      v62 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v39)[2])(v39);
    }
    goto LABEL_14;
  }
  wil::GetRangeNoThrow<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>((__int64)v73, v63, (__int64)&v65);
  wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::begin(
    v73,
    v68);
  v41 = v74;
  while ( 1 )
  {
    v42 = *(_QWORD *)v68;
    if ( **(int **)(*(_QWORD *)v68 + 16LL) < 0 || (_DWORD)v69 == v41 )
      break;
    v66 = 0LL;
    LOBYTE(v60) = 0;
    IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::IsUserPinnedTile(
                         *(Windows::Gaming::Preview::GamesEnumeration **)(*(_QWORD *)v68 + 32LL),
                         (struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile *)&v60,
                         v40);
    v44 = retaddr;
    if ( IsUserPinnedTile < 0 )
    {
      v45 = 137LL;
LABEL_71:
      wil::details::in1diag3::_Log_Hr(
        v44,
        (void *)v45,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
        (const char *)(unsigned int)IsUserPinnedTile);
      goto LABEL_72;
    }
    if ( (_BYTE)v60 )
    {
      IsUserPinnedTile = Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile(
                           this,
                           *(struct WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile **)(v42 + 32));
      v44 = retaddr;
      if ( IsUserPinnedTile < 0 )
      {
        v45 = 140LL;
        goto LABEL_71;
      }
    }
LABEL_72:
    wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::vector_iterator_nothrow::operator++(v68);
  }
  v46 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  }
  v47 = (unsigned int)v65;
  if ( (int)v65 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)(unsigned int)v65);
  *(_QWORD *)v68 = retaddr;
  v69 = "onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp";
  v70 = 0LL;
  v71 = 146;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::ReportUsage(
    (wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_GameConfigStoreGameListEntries>::GetImpl'::`2'::impl,
    1u,
    (char)v40,
    v47);
  LOBYTE(v48) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v48);
  v50 = ThreadLocalDataCache;
  v66 = ThreadLocalDataCache;
  v67 = 0LL;
  if ( ThreadLocalDataCache )
  {
    HIDWORD(v67) = *((_DWORD *)ThreadLocalDataCache + 4);
    LODWORD(v67) = **((_DWORD **)ThreadLocalDataCache + 1);
    v50 = v66;
    *((_DWORD *)v66 + 4) = v67;
  }
  GameConfigStoreClientIfNeeded = CreateGameConfigStoreClientIfNeeded((char *)this + 216);
  v52 = GameConfigStoreClientIfNeeded;
  if ( GameConfigStoreClientIfNeeded < 0 )
  {
    v53 = (unsigned int)GameConfigStoreClientIfNeeded;
    v54 = 148LL;
    goto LABEL_85;
  }
  v76[0] = off_180046770;
  v76[1] = this;
  v77 = v76;
  v52 = DoWorkOnGameConfigStore(*((_QWORD *)this + 27), v76);
  if ( v77 )
  {
    v55 = v76;
    LOBYTE(v55) = v77 != v76;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v77 + 32LL))(v77, v55);
    v77 = 0LL;
  }
  if ( v52 < 0 )
  {
    v53 = (unsigned int)v52;
    v54 = 156LL;
LABEL_85:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v54,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp",
      (const char *)v53);
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v52,
      (wil::ThreadErrorContext *)&v66,
      v56,
      (__int64)v68);
    v50 = v66;
  }
  if ( v50 )
    *((_DWORD *)v50 + 4) = HIDWORD(v67);
  v57 = v63;
  if ( v63 )
  {
    v63 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
  }
  v58 = v61;
  if ( v61 )
  {
    v61 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v58 + 16LL))(v58);
  }
  v59 = v62;
  if ( v62 )
  {
    v62 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v59)[2])(v59);
  }
  if ( (char *)hObject - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
    CloseHandle(hObject);
  return 0LL;
}
