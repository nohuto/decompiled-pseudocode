/*
 * XREFs of _lambda_cbf01a40321e9ff125f683f9a48deaf4_::operator() @ 0x1803A1E34
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cbf01a40321e9ff125f683f9a48deaf4___::Run @ 0x1803A4420 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cbf01a40321e9ff125f683f9a48deaf4___--Run.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCLauncherUIMode@@@WRL@Microsoft@@@012@$$QEAW4EC_HOST_UI_MODE@@@Z @ 0x1803A14E0 (--$MakeAndInitialize@VCLauncherUIMode@@V1@W4EC_HOST_UI_MODE@@@Details@WRL@Microsoft@@YAJV-$ComPt.c)
 */

__int64 __fastcall lambda_cbf01a40321e9ff125f683f9a48deaf4_::operator()(const WCHAR *a1)
{
  bool v2; // cc
  const char *v3; // r9
  unsigned int LastError; // ebx
  SHELLEXECUTEINFOW pExecInfo; // [rsp+20h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]
  int v8; // [rsp+A0h] [rbp+67h] BYREF
  __int64 v9; // [rsp+A8h] [rbp+6Fh] BYREF

  memset_0(&pExecInfo, 0, sizeof(pExecInfo));
  pExecInfo.hwnd = 0LL;
  v2 = *((_QWORD *)a1 + 3) <= 7uLL;
  pExecInfo.lpVerb = L"open";
  pExecInfo.cbSize = 112;
  pExecInfo.fMask = 0x4000000;
  if ( !v2 )
    a1 = *(const WCHAR **)a1;
  pExecInfo.hInstApp = 0LL;
  v9 = 0LL;
  v8 = 0;
  *(_OWORD *)&pExecInfo.lpParameters = 0LL;
  pExecInfo.lpFile = a1;
  pExecInfo.nShow = 1;
  if ( (int)Microsoft::WRL::Details::MakeAndInitialize<CLauncherUIMode,CLauncherUIMode,enum EC_HOST_UI_MODE>(&v9, &v8) >= 0 )
  {
    pExecInfo.fMask |= 0x8000000u;
    if ( v9 )
      pExecInfo.hInstApp = (HINSTANCE)(v9 + 40);
  }
  if ( ShellExecuteExW(&pExecInfo) )
    LastError = 0;
  else
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x1B3,
                  (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
                  v3);
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease(&v9);
  return LastError;
}
