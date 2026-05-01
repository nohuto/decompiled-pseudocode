/*
 * XREFs of ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x1800AA338
 * Callers:
 *     ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180017C40 (-IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z.c)
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800A90D0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z @ 0x18031AEEC (-IsGameManager_GameDVR_Disabled@GameDVRTraceProvider@@SAXPEBG@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::IsEnabledInGameConfigStore(
        IsGameManager *this,
        struct _GUID *a2,
        bool *a3,
        bool *a4,
        unsigned int *a5)
{
  __int128 v5; // xmm0
  unsigned int *v7; // r12
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  __int128 v15; // xmm0
  __int64 v16; // rcx
  const unsigned __int16 *v17; // rcx
  __int64 *v18; // rcx
  __int128 v19; // xmm0
  __int64 v20; // rax
  bool v21; // bl
  __int64 *v22; // rcx
  __int128 v23; // xmm0
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // edi
  __int128 v27; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v29; // [rsp+70h] [rbp+30h] BYREF
  int v30; // [rsp+78h] [rbp+38h] BYREF

  v5 = (__int128)*a2;
  v30 = 0;
  v7 = a5;
  *a3 = 0;
  *a4 = 0;
  v29 = 4;
  *v7 = 0;
  v11 = *((_QWORD *)this + 2);
  v27 = v5;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v11 + 64LL))(
          v11,
          &v27,
          12LL,
          &v30,
          &v29);
  if ( v12 < 0 )
  {
    v13 = 1468LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  v15 = (__int128)*a2;
  v29 = 4;
  *a4 = v30 != 0;
  v16 = *((_QWORD *)this + 2);
  v27 = v15;
  v12 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int64, int *, int *))(*(_QWORD *)v16 + 64LL))(
          v16,
          &v27,
          9LL,
          &v30,
          &v29);
  if ( v12 < 0 )
  {
    v13 = 1474LL;
    goto LABEL_3;
  }
  if ( v30 )
  {
    v18 = (__int64 *)*((_QWORD *)this + 2);
    v19 = (__int128)*a2;
    v29 = 4;
    v20 = *v18;
    v27 = v19;
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int *))(v20 + 64))(
            v18,
            &v27,
            11LL,
            &v30,
            &v29);
    if ( v12 < 0 )
    {
      v13 = 1487LL;
      goto LABEL_3;
    }
    if ( v30 )
    {
      v17 = L"Disabled by Publisher";
    }
    else
    {
      if ( !*a4 )
      {
        v21 = 1;
        goto LABEL_16;
      }
      v17 = L"Restricted";
    }
  }
  else
  {
    v17 = L"Disabled by User";
  }
  v21 = 0;
  GameDVRTraceProvider::IsGameManager_GameDVR_Disabled(v17);
LABEL_16:
  v22 = (__int64 *)*((_QWORD *)this + 2);
  v23 = (__int128)*a2;
  v29 = 4;
  v24 = *v22;
  v27 = v23;
  v25 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, _QWORD, unsigned int *, int *))(v24 + 64))(
          v22,
          &v27,
          0LL,
          v7,
          &v29);
  v26 = v25;
  if ( v25 >= 0 )
  {
    *a3 = v21;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E4,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v25);
    return v26;
  }
}
