/*
 * XREFs of ?IsGameFromAppId@IsGameManager@@UEAAJPEBGPEAUGameConfigInfo@@@Z @ 0x180017C40
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z @ 0x180017F90 (-CheckStateRepositoryForIsGameFromAppId@IsGameManager@@AEAAJPEBGPEA_NPEAU_GUID@@PEAK@Z.c)
 *     ??$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z @ 0x180019520 (--$Initialize@PEBG@String@Internal@Windows@@QEAAJAEBQEBGUdummy_t@_StringDetail@12@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z @ 0x1800AA338 (-IsEnabledInGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEA_N1PEAK@Z.c)
 *     ?GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z @ 0x1801CEF10 (-GetAutoGameModeFromGameConfigStore@IsGameManager@@AEAAJU_GUID@@PEAUGameConfigInfo@@@Z.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801F83F8 (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 *     ?UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z @ 0x180227610 (-UpdateGameLastRunTime@IsGameManager@@AEAAJU_GUID@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall IsGameManager::IsGameFromAppId(
        __int64 **this,
        const unsigned __int16 *a2,
        struct GameConfigInfo *a3)
{
  unsigned int v6; // r9d
  __int64 v7; // rax
  int updated; // eax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rcx
  int v15; // eax
  struct _GUID v16; // xmm0
  int v17; // [rsp+20h] [rbp-29h]
  bool v18; // [rsp+30h] [rbp-19h] BYREF
  bool v19; // [rsp+31h] [rbp-18h] BYREF
  bool v20; // [rsp+32h] [rbp-17h] BYREF
  bool v21[5]; // [rsp+33h] [rbp-16h] BYREF
  unsigned int v22; // [rsp+38h] [rbp-11h] BYREF
  struct _GUID v23; // [rsp+40h] [rbp-9h] BYREF
  const unsigned __int16 *v24; // [rsp+50h] [rbp+7h] BYREF
  struct _GUID v25; // [rsp+60h] [rbp+17h] BYREF
  struct _GUID v26; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  *(_WORD *)a3 = 0;
  v22 = 0;
  v24 = a2;
  v18 = 0;
  v26 = (struct _GUID)xmmword_180780478;
  v21[0] = 0;
  if ( IsGameManager::CheckStateRepositoryForIsGameFromAppId((IsGameManager *)this, a2, &v18, &v26, &v22) >= 0 && v18 )
  {
    *(_BYTE *)a3 = v18;
LABEL_4:
    v6 = v22;
    goto LABEL_5;
  }
  v12 = this[2];
  *(_DWORD *)&v21[1] = 0;
  v22 = 0;
  v25 = (struct _GUID)xmmword_180780478;
  v19 = 0;
  v26 = (struct _GUID)xmmword_180780478;
  v13 = *v12;
  v20 = 0;
  if ( (*(int (__fastcall **)(__int64 *, const unsigned __int16 *, struct _GUID *))(v13 + 40))(v12, a2, &v25) < 0 )
    goto LABEL_4;
  v23 = v25;
  if ( (int)IsGameManager::IsEnabledInGameConfigStore((IsGameManager *)this, &v23, &v19, &v20, (unsigned int *)&v21[1]) < 0 )
    goto LABEL_4;
  if ( !*(_DWORD *)&v21[1] )
  {
    v14 = this[2];
    *(_DWORD *)&v21[1] = 1;
    v23 = v25;
    v17 = 4;
    v15 = (*(__int64 (__fastcall **)(__int64 *, struct _GUID *, _QWORD, bool *))(*v14 + 72))(v14, &v23, 0LL, &v21[1]);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4C1,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)v15,
        4);
  }
  v16 = v25;
  v6 = *(_DWORD *)&v21[1];
  *(_BYTE *)a3 = v19;
  *((_BYTE *)a3 + 4) = v20;
  v26 = v16;
  v22 = v6;
LABEL_5:
  if ( v6 != *((_DWORD *)this + 11) )
  {
    v25 = (struct _GUID)xmmword_180780478;
    v23 = v26;
    if ( (int)IsGameManager::CheckKGLForIsGameFromAppId((IsGameManager *)this, a2, &v23, v6, v21, &v25) >= 0 )
    {
      *(_BYTE *)a3 = v21[0];
      v7 = *(_QWORD *)&v25.Data1;
      if ( !*(_QWORD *)&v25.Data1 )
        v7 = *(_QWORD *)v25.Data4;
      if ( v7 )
        v26 = v25;
    }
  }
  if ( *(_BYTE *)a3 )
  {
    v23 = v26;
    IsGameManager::GetAutoGameModeFromGameConfigStore((IsGameManager *)this, &v23, a3);
    v23 = v26;
    updated = IsGameManager::UpdateGameLastRunTime((IsGameManager *)this, &v23);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1AB,
        (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
        (const char *)(unsigned int)updated,
        v17);
  }
  v9 = Windows::Internal::String::Initialize<unsigned short const *>((char *)a3 + 32, &v24);
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AE,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v9,
      v17);
  return v10;
}
