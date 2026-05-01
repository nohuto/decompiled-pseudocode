/*
 * XREFs of ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJXZ @ 0x1801068C8
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x18010ABCC (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z @ 0x180106EE4 (-GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x180107658 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 *     ?DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z @ 0x1801081BC (-DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802D1AB8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D50F8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z @ 0x18031A5DC (-CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031B0C4 (-IsGameManager_UpdateGameConfigStoreFromKGL_GetError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031B184 (-IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     ?IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z @ 0x18031B244 (-IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError@GameDVRTraceProvider@@SAXJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IsGameManager::UpdateGameConfigStoreFromKGL(IsGameManager *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 result; // rax
  unsigned __int64 v5; // rbx
  _OWORD *v6; // rax
  _OWORD *v7; // rsi
  int v8; // eax
  const struct std::nothrow_t *i; // rdx
  unsigned int *v10; // rbx
  unsigned int *v11; // r14
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r13
  int v15; // r12d
  unsigned int v16; // r14d
  unsigned int *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  const struct std::nothrow_t *v20; // rdx
  unsigned int *v21; // rcx
  IsGameManager *v22; // rcx
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  int v26; // r14d
  int GameEntryAttribs; // eax
  const struct std::nothrow_t *v28; // rdx
  wil::details::in1diag3 *v29; // rcx
  __int64 v30; // rdx
  bool v31; // al
  int v32; // eax
  __int64 *v33; // rcx
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int64 v36; // rax
  unsigned int v37; // edx
  const struct std::nothrow_t *v38; // rdx
  bool v39; // cl
  int updated; // eax
  int v41; // r14d
  struct KnownGameList::IGameEntry *v42; // rcx
  bool v43; // [rsp+50h] [rbp-B0h] BYREF
  bool v44; // [rsp+51h] [rbp-AFh] BYREF
  bool v45[4]; // [rsp+52h] [rbp-AEh] BYREF
  bool v46; // [rsp+56h] [rbp-AAh] BYREF
  unsigned int v47; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID v48; // [rsp+60h] [rbp-A0h] BYREF
  struct KnownGameList::IGameEntry *v49; // [rsp+70h] [rbp-90h] BYREF
  unsigned int Size; // [rsp+78h] [rbp-88h] BYREF
  int Size_4; // [rsp+7Ch] [rbp-84h]
  unsigned int *v52; // [rsp+80h] [rbp-80h]
  _OWORD *v53; // [rsp+88h] [rbp-78h]
  unsigned __int16 v54[264]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v55[1024]; // [rsp+2A0h] [rbp+1A0h] BYREF
  IsGameManager *retaddr; // [rsp+6D8h] [rbp+5D8h]

  v47 = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         0LL,
         &v47);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x738,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
  result = v47;
  if ( !v47 )
    return result;
  v5 = 16LL * v47;
  if ( !is_mul_ok(v47, 0x10uLL) )
    v5 = -1LL;
  v6 = operator new[](v5, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
    memset_0(v6, 0, v5);
  else
    v7 = 0LL;
  v53 = v7;
  if ( !v7 )
  {
    v3 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x742,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)0x8007000ELL);
    return v3;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, unsigned int *))(**((_QWORD **)this + 2) + 48LL))(
         *((_QWORD *)this + 2),
         v7,
         &v47);
  v3 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x744,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_64;
  }
  for ( i = 0LL; ; i = (const struct std::nothrow_t *)(unsigned int)(Size_4 + 1) )
  {
    Size_4 = (int)i;
    if ( (unsigned int)i >= v47 )
      break;
    v49 = 0LL;
    Size = 1024;
    v10 = 0LL;
    v52 = 0LL;
    v11 = (unsigned int *)v55;
    v12 = (__int64 *)*((_QWORD *)this + 2);
    v13 = *v12;
    v14 = (unsigned int)i;
    v48 = (struct _GUID)v7[(unsigned int)i];
    v15 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, _BYTE *, unsigned int *))(v13 + 24))(
            v12,
            &v48,
            v55,
            &Size);
    *(_QWORD *)&v48.Data1 = 0LL;
    if ( v15 == -2147024662 )
    {
      v16 = Size;
      v17 = (unsigned int *)operator new[](Size, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v17;
      if ( !v17 )
      {
        v3 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x756,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)0x8007000ELL);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
        goto LABEL_64;
      }
      memset_0(v17, 0, v16);
      v52 = v10;
      v18 = (__int64 *)*((_QWORD *)this + 2);
      v19 = *v18;
      v48 = (struct _GUID)v7[v14];
      v15 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, unsigned int *, unsigned int *))(v19 + 24))(
              v18,
              &v48,
              v10,
              &Size);
      v11 = v10;
      *(_QWORD *)&v48.Data1 = v10;
    }
    if ( v15 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x75B,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v15);
      GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_GetError(v15);
      if ( *(_QWORD *)&v48.Data1 )
      {
        v21 = *(unsigned int **)&v48.Data1;
        goto LABEL_27;
      }
      goto LABEL_28;
    }
    if ( (*(int (__fastcall **)(_QWORD, unsigned int *, struct KnownGameList::IGameEntry **))(**((_QWORD **)this + 3)
                                                                                            + 64LL))(
           *((_QWORD *)this + 3),
           v11,
           &v49) < 0 )
    {
      if ( *v11 >= 3 )
      {
        v23 = (__int64 *)*((_QWORD *)this + 2);
        v24 = *v23;
        v48 = (struct _GUID)v7[v14];
        v25 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v24 + 8))(v23, &v48);
        v26 = v25;
        if ( v25 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x772,
            (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
            (const char *)(unsigned int)v25);
          GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_RemoveError(v26);
        }
      }
      if ( v10 )
      {
        v21 = v10;
LABEL_27:
        operator delete(v21, v20);
      }
LABEL_28:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
      continue;
    }
    v45[2] = 0;
    v45[1] = 0;
    v45[0] = 0;
    v45[3] = 0;
    v46 = 0;
    v43 = 0;
    v48.Data1 = 260;
    GameEntryAttribs = IsGameManager::GetGameEntryAttribs(
                         v22,
                         v49,
                         &v45[2],
                         &v45[1],
                         v45,
                         &v45[3],
                         &v46,
                         &v43,
                         v54,
                         &v48.Data1);
    v29 = retaddr;
    if ( GameEntryAttribs < 0 )
    {
      v30 = 1927LL;
LABEL_42:
      wil::details::in1diag3::_Log_Hr(
        v29,
        (void *)v30,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)GameEntryAttribs);
      goto LABEL_54;
    }
    v31 = 1;
    v44 = 1;
    if ( !v48.Data1 )
      goto LABEL_39;
    v32 = IsGameManager::CompareOSVersion(retaddr, v54, v48.Data1, &v44);
    if ( v32 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x790,
        (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v32);
    v31 = v44;
    if ( v44 || *v11 < 3 )
    {
LABEL_39:
      if ( v45[0] || (v11[8] & 0x20) == 0 )
      {
        if ( v31 )
        {
          if ( *v11 < *((_DWORD *)this + 11)
            || (v37 = v11[8], v45[1] != ((v37 >> 3) & 1))
            || v45[0] != ((v37 >> 1) & 1)
            || v45[2] != ((v37 >> 2) & 1)
            || v45[3] != ((v37 >> 9) & 1)
            || v46 != ((v37 >> 7) & 1)
            || (v28 = (const struct std::nothrow_t *)((v37 >> 10) & 1), v43 != (_DWORD)v28) )
          {
            v43 = 0;
            IsGameManager::DelayGameConfigStoreUpdate(this, &v43);
            if ( v43 )
            {
              if ( v10 )
                operator delete(v10, v38);
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
              break;
            }
            v39 = (v11[8] & 0x20) != 0;
            v48 = (struct _GUID)v7[Size_4];
            updated = IsGameManager::UpdateGameConfigStoreFromKGL(this, v49, &v48, *v11, v39, 0LL, 0LL);
            v41 = updated;
            if ( updated < 0 )
            {
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x7BD,
                (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
                (const char *)(unsigned int)updated);
              GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreFromKGL_UpdateError(v41);
            }
          }
        }
        goto LABEL_54;
      }
      v35 = (__int64 *)*((_QWORD *)this + 2);
      v36 = *v35;
      v48 = (struct _GUID)v7[v14];
      GameEntryAttribs = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v36 + 8))(v35, &v48);
      v29 = retaddr;
      if ( GameEntryAttribs < 0 )
      {
        v30 = 1956LL;
        goto LABEL_42;
      }
    }
    else
    {
      v33 = (__int64 *)*((_QWORD *)this + 2);
      v34 = *v33;
      v48 = (struct _GUID)v7[v14];
      GameEntryAttribs = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *))(v34 + 8))(v33, &v48);
      v29 = retaddr;
      if ( GameEntryAttribs < 0 )
      {
        v30 = 1947LL;
        goto LABEL_42;
      }
    }
LABEL_54:
    if ( v10 )
      operator delete(v10, v28);
    v42 = v49;
    if ( v49 )
    {
      v49 = 0LL;
      (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v42 + 16LL))(v42);
    }
  }
  v3 = 0;
LABEL_64:
  operator delete(v7, i);
  return v3;
}
