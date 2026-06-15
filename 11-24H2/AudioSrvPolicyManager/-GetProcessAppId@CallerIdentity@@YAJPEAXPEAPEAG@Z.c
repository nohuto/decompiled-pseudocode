/*
 * XREFs of ?GetProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180014C90
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800059D4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180019404 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18001BB58 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x18001D150 (-Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ.c)
 *     ?Free@ARI@@YAXPEAX@Z @ 0x180047950 (-Free@ARI@@YAXPEAX@Z.c)
 *     ?GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z @ 0x180047984 (-GetAppUserModelId@SysAppId@ProcessToken@ARI@@YAJPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@IPEAIPEAG@Z.c)
 *     ?Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_TOKEN_SECURITY_ATTRIBUTE_V1@@PEA_N@Z @ 0x180047B6C (-Open@SysAppId@ProcessToken@ARI@@YAJPEAXPEAPEAU_TOKEN_SECURITY_ATTRIBUTES_INFORMATION@@PEAPEBU_T.c)
 */

__int64 __fastcall CallerIdentity::GetProcessAppId(HANDLE ProcessHandle, _QWORD *a2, unsigned __int16 **a3)
{
  const struct _TOKEN_SECURITY_ATTRIBUTE_V1 **v5; // r9
  void *v6; // rdx
  DWORD LastError; // ebx
  unsigned int v9; // ebp
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  void *v13; // rbx
  unsigned int AppUserModelId; // eax
  unsigned int v15; // edi
  bool *v16; // [rsp+20h] [rbp-28h]
  unsigned __int16 *v17; // [rsp+20h] [rbp-28h]
  unsigned int v18; // [rsp+20h] [rbp-28h]
  PVOID P[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *TokenHandle; // [rsp+50h] [rbp+8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp+10h]

  *a2 = 0LL;
  *(_OWORD *)P = 0LL;
  TokenHandle = 0LL;
  if ( ProcessHandle == GetCurrentProcess() )
  {
    TokenHandle = (void *)-4LL;
  }
  else if ( !OpenProcessToken(ProcessHandle, 8u, &TokenHandle) )
  {
    LastError = GetLastError();
    if ( LastError )
      goto LABEL_8;
  }
  LastError = ARI::ProcessToken::SysAppId::Open(
                TokenHandle,
                P,
                (struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION **)&P[1],
                v5,
                v16);
  if ( TokenHandle != (void *)-4LL )
    CloseHandle(TokenHandle);
LABEL_8:
  if ( (int)LastError > 0 )
    LastError = (unsigned __int16)LastError | 0x80070000;
  if ( LastError == -2147024891 || LastError == -2147023728 )
  {
    if ( P[0] )
      ARI::Free(P[0], v6);
    return LastError;
  }
  if ( (LastError & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)LastError);
    ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
    return LastError;
  }
  LODWORD(TokenHandle) = 0;
  if ( (unsigned int)ARI::ProcessToken::SysAppId::GetAppUserModelId(
                       (ARI::ProcessToken::SysAppId *)P[1],
                       0LL,
                       (unsigned int)&TokenHandle,
                       0LL,
                       (unsigned __int16 *)v16) != 122 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA8,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)0x8000FFFFLL);
    ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
    return 2147549183LL;
  }
  pv = 0LL;
  CoTaskMemFree(0LL);
  v9 = (unsigned int)TokenHandle;
  v12 = _AllocStringWorker<CTCoAllocPolicy>(v11, v10, 0LL, (unsigned int)TokenHandle);
  LastError = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB,
      (int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
      (const char *)(unsigned int)v12);
    CoTaskMemFree(pv);
    ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
    return LastError;
  }
  v13 = pv;
  AppUserModelId = ARI::ProcessToken::SysAppId::GetAppUserModelId(
                     (ARI::ProcessToken::SysAppId *)P[1],
                     (const struct _TOKEN_SECURITY_ATTRIBUTE_V1 *)v9,
                     (unsigned int)&TokenHandle,
                     (unsigned int *)pv,
                     v17);
  if ( AppUserModelId )
  {
    v15 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0xAC,
            (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
            (const char *)AppUserModelId,
            v18);
    CoTaskMemFree(v13);
    ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
    return v15;
  }
  else
  {
    *a2 = v13;
    CoTaskMemFree(0LL);
    ARI::ProcessToken::AutoSysAppId::Close((ARI::ProcessToken::AutoSysAppId *)P);
    return 0LL;
  }
}
