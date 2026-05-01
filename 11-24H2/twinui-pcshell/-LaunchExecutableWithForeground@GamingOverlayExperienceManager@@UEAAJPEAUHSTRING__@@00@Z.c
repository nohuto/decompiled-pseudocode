/*
 * XREFs of ?LaunchExecutableWithForeground@GamingOverlayExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x180352700
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::LaunchExecutableWithForeground(
        GamingOverlayExperienceManager *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4)
{
  int v7; // eax
  const char *v8; // r9
  __int64 result; // rax
  SHELLEXECUTEINFOW pExecInfo; // [rsp+30h] [rbp-98h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD9E,
        (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
        (const char *)(unsigned int)v7);
    memset_0(&pExecInfo, 0, sizeof(pExecInfo));
    pExecInfo.cbSize = 112;
    pExecInfo.fMask = 67109888;
    pExecInfo.lpVerb = L"open";
    pExecInfo.lpFile = WindowsGetStringRawBuffer(a2, 0LL);
    pExecInfo.lpParameters = WindowsGetStringRawBuffer(a3, 0LL);
    pExecInfo.lpDirectory = WindowsGetStringRawBuffer(a4, 0LL);
    pExecInfo.nShow = 1;
    if ( ShellExecuteExW(&pExecInfo) )
      result = 0LL;
    else
      result = wil::details::in1diag3::Return_GetLastError(
                 retaddr,
                 (void *)0xDAC,
                 (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                 v8);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDAF,
                           (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
                           v8);
  }
  return result;
}
