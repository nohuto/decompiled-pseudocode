/*
 * XREFs of ?IsGameEnabled@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N@Z @ 0x18031AC28
 * Callers:
 *     ?IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z @ 0x1800A90D0 (-IsWin32GameFromHwnd@IsGameManager@@UEAAJPEAUHWND__@@PEAUGameConfigInfo@@@Z.c)
 *     ?CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z @ 0x1801F83F8 (-CheckKGLForIsGameFromAppId@IsGameManager@@AEAAJPEBGU_GUID@@KPEA_NPEAU2@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z @ 0x180106EE4 (-GetGameEntryAttribs@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@PEA_N11111PEAGPEAK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z @ 0x18031A5DC (-CompareOSVersion@IsGameManager@@AEAAJPEAGKPEA_N@Z.c)
 */

__int64 __fastcall IsGameManager::IsGameEnabled(IsGameManager *this, struct KnownGameList::IGameEntry *a2, bool *a3)
{
  IsGameManager *v4; // rcx
  int GameEntryAttribs; // ebx
  __int64 v6; // rdx
  unsigned int v8; // r8d
  bool v9; // [rsp+50h] [rbp-B0h] BYREF
  bool v10; // [rsp+51h] [rbp-AFh] BYREF
  bool v11; // [rsp+52h] [rbp-AEh] BYREF
  bool v12; // [rsp+53h] [rbp-ADh] BYREF
  bool v13; // [rsp+54h] [rbp-ACh] BYREF
  bool v14[11]; // [rsp+55h] [rbp-ABh] BYREF
  unsigned __int16 v15[264]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  v10 = 0;
  v9 = 0;
  *(_DWORD *)&v14[3] = 260;
  GameEntryAttribs = IsGameManager::GetGameEntryAttribs(
                       this,
                       a2,
                       &v10,
                       &v9,
                       v14,
                       &v13,
                       &v12,
                       &v11,
                       v15,
                       (unsigned int *)&v14[3]);
  if ( GameEntryAttribs < 0 )
  {
    v6 = 2355LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)GameEntryAttribs);
    return (unsigned int)GameEntryAttribs;
  }
  if ( v10 || v9 )
  {
    *a3 = 0;
  }
  else
  {
    v8 = *(_DWORD *)&v14[3];
    *a3 = 1;
    if ( v8 )
    {
      v9 = 0;
      GameEntryAttribs = IsGameManager::CompareOSVersion(v4, v15, v8, &v9);
      if ( GameEntryAttribs < 0 )
      {
        v6 = 2363LL;
        goto LABEL_3;
      }
      *a3 = v9;
    }
  }
  return 0LL;
}
