/*
 * XREFs of ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x180010870
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180005EB4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180009DE4 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EnterWait@DWM@KST@InputTraceLogging@@SAXXZ @ 0x180010254 (-EnterWait@DWM@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x1800102C4 (-ExitWait@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z @ 0x180010D00 (-ThreadStart@DWM@KST@InputTraceLogging@@SAXK@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010D90 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKstBase::RunKernelThreadStatic(PVOID Parameter)
{
  signed int v2; // ebx
  DWORD CurrentThreadId; // eax
  const char *v4; // r9
  signed int LastError; // eax
  unsigned int v6; // r8d
  const char *v7; // r9
  int v8; // edi
  const char *v9; // r9
  int v10; // edi
  int v11; // eax
  unsigned int v12; // r8d
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)Parameter + 6) = CurrentThreadId;
  InputTraceLogging::KST::DWM::ThreadStart(CurrentThreadId);
  if ( !(unsigned int)NtKSTInitialize(*((_QWORD *)Parameter + 4), *((_QWORD *)Parameter + 1)) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(PVOID))(*(_QWORD *)Parameter + 16LL))(Parameter) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x7B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        v4);
    LastError = GetLastError();
    v2 = LastError;
    if ( LastError > 0 )
      v2 = (unsigned __int16)LastError | 0x80070000;
    if ( v2 >= 0 )
      v2 = -2147467259;
    wil::details::in1diag3::_Log_Hr(retaddr, (void *)0x89, v6, (const char *)(unsigned int)v2, v14);
  }
  if ( !SetEvent(*((HANDLE *)Parameter + 5)) )
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x9D3,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/resource.h",
      v7);
  if ( v2 >= 0 )
  {
    while ( 1 )
    {
      InputTraceLogging::KST::DWM::EnterWait();
      v8 = NtKSTWait();
      InputTraceLogging::KST::DWM::ExitWait(v8);
      if ( !v8 )
        break;
      v10 = v8 - 1;
      if ( !v10 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          167LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v9);
      if ( v10 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          176LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v9);
      v11 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Parameter + 8LL))(Parameter);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(retaddr, (void *)0xAB, v12, (const char *)(unsigned int)v11, v14);
    }
  }
  *((_DWORD *)Parameter + 6) = 0;
  result = (unsigned __int16)v2;
  if ( (v2 & 0x1FFF0000) != 0x70000 )
    return (unsigned int)v2;
  return result;
}
