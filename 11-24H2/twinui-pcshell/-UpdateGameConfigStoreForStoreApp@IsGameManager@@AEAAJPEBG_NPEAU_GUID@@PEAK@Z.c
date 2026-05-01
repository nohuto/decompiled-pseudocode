/*
 * XREFs of ?UpdateGameConfigStoreForStoreApp@IsGameManager@@AEAAJPEBG_NPEAU_GUID@@PEAK@Z @ 0x180229998
 * Callers:
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180017F90 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z @ 0x18031AF9C (-IsGameManager_UpdateGameConfigStoreForStoreApp@GameDVRTraceProvider@@SAXJPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::UpdateGameConfigStoreForStoreApp(
        IsGameManager *this,
        const unsigned __int16 *a2,
        unsigned __int8 a3,
        struct _GUID *a4,
        unsigned int *a5)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 (__fastcall ***v11)(_QWORD, int *, struct _GUID *); // rcx
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // [rsp+30h] [rbp-51h] BYREF
  int v19[3]; // [rsp+34h] [rbp-4Dh] BYREF
  struct _GUID v20; // [rsp+40h] [rbp-41h] BYREF
  int v21; // [rsp+50h] [rbp-31h] BYREF
  __int128 v22; // [rsp+54h] [rbp-2Dh]
  int v23; // [rsp+64h] [rbp-1Dh]
  const unsigned __int16 *v24; // [rsp+68h] [rbp-19h]
  __int64 v25; // [rsp+70h] [rbp-11h]
  struct _GUID v26; // [rsp+80h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  v25 = 0LL;
  v18 = 2;
  v22 = 0LL;
  v26 = (struct _GUID)xmmword_180780478;
  if ( !a2 )
  {
    v8 = 1999LL;
LABEL_3:
    v9 = -2147467261;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9);
    return (unsigned int)v9;
  }
  if ( !a4 )
  {
    v8 = 2000LL;
    goto LABEL_3;
  }
  v21 = 2;
  v23 = 2;
  LODWORD(v25) = v25 & 0xFFFFFDF1 | (4 * a3) | 0x11;
  *a4 = (struct _GUID)xmmword_180780478;
  v11 = (__int64 (__fastcall ***)(_QWORD, int *, struct _GUID *))*((_QWORD *)this + 2);
  v24 = a2;
  v12 = (**v11)(v11, &v21, &v26);
  v9 = v12;
  if ( v12 == -2147024713 )
  {
    v13 = (__int64 *)*((_QWORD *)this + 2);
    v19[0] = 4;
    v14 = *v13;
    v20 = v26;
    v9 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, _QWORD, unsigned int *, int *))(v14 + 64))(
           v13,
           &v20,
           0LL,
           &v18,
           v19);
    if ( v9 < 0 )
    {
      v8 = 2025LL;
      goto LABEL_4;
    }
    if ( v18 <= 2 )
    {
      v15 = *((_QWORD *)this + 2);
      v20 = v26;
      v16 = (*(__int64 (__fastcall **)(__int64, struct _GUID *, int *))(*(_QWORD *)v15 + 16LL))(v15, &v20, &v21);
      v9 = v16;
      if ( v16 < 0 )
      {
        GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreForStoreApp(v16, a2);
        v8 = 2039LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    GameDVRTraceProvider::IsGameManager_UpdateGameConfigStoreForStoreApp(v12, a2);
    if ( v9 < 0 )
    {
      v8 = 2047LL;
      goto LABEL_4;
    }
  }
  v17 = v18;
  *a4 = v26;
  *a5 = v17;
  return 0LL;
}
