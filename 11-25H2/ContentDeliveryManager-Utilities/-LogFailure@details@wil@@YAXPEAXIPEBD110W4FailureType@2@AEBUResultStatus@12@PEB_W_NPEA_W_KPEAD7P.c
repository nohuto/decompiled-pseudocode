/*
 * XREFs of ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEB_W_NPEA_W_KPEAD7PEAUFailureInfo@2@@Z @ 0x1800761E0
 * Callers:
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFailureOptions@01@@Z @ 0x180076A2C (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEB_WW4ReportFail.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18002F294 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?IsDebuggerPresent@details@wil@@YA_NXZ @ 0x180033FF0 (-IsDebuggerPresent@details@wil@@YA_NXZ.c)
 *     ?RecordException@details@wil@@YAHJ@Z @ 0x180037178 (-RecordException@details@wil@@YAHJ@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180075F1C (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::LogFailure(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        unsigned int *a8,
        __int64 a9,
        __int64 a10,
        wil *lpOutputString,
        __int64 a12,
        _BYTE *a13,
        __int64 a14,
        unsigned __int64 a15)
{
  wil::details *v18; // rcx
  int v19; // r12d
  __int64 v20; // r9
  wil::details::in1diag3 *v21; // rcx
  __int64 ModuleName; // rax
  wchar_t *v23; // rdx
  const struct wil::FailureInfo *v24; // r9

  *(_WORD *)lpOutputString = 0;
  *a13 = 0;
  v18 = (wil::details *)*a8;
  *(_DWORD *)(a15 + 8) = (_DWORD)v18;
  *(_DWORD *)(a15 + 12) = a8[1];
  v19 = wil::details::RecordException(v18);
  *(_QWORD *)a15 = 0LL;
  if ( *(_DWORD *)(v20 + 8) == 1 )
    *(_DWORD *)(a15 + 4) = 8;
  *(_DWORD *)(a15 + 16) = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  *(_QWORD *)(a15 + 24) = 0LL;
  *(_DWORD *)(a15 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a15 + 56) = a3;
  *(_DWORD *)(a15 + 64) = a2;
  *(_DWORD *)(a15 + 68) = v19;
  *(_QWORD *)(a15 + 40) = 0LL;
  *(_QWORD *)(a15 + 48) = 0LL;
  *(_QWORD *)(a15 + 136) = a6;
  *(_QWORD *)(a15 + 144) = a1;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 104) = 0LL;
  *(_QWORD *)(a15 + 120) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_QWORD *)(a15 + 96) = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName();
  else
    ModuleName = 0LL;
  *(_QWORD *)(a15 + 128) = ModuleName;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(a15);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(a15, a13, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(a15);
  if ( wil::details::g_pfnOriginateCallback && (*(_BYTE *)(a15 + 4) & 2) == 0 )
    wil::details::g_pfnOriginateCallback(a15);
  if ( *(int *)(a15 + 8) >= 0 )
    wil::details::in1diag3::FailFastImmediate_Unexpected(v21);
  if ( !wil::details::IsDebuggerPresent(v21) || (*(_BYTE *)(a15 + 4) & 2) != 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, 0LL, 0LL, v24);
  }
  else
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(a15, lpOutputString, 2048LL, v24);
    if ( !*(_WORD *)lpOutputString )
      wil::GetFailureLogString(lpOutputString, v23, a15, v24);
    OutputDebugStringW((LPCWSTR)lpOutputString);
  }
  if ( (*(_BYTE *)(a15 + 4) & 4) != 0 || wil::g_fBreakOnFailure )
  {
    if ( wil::details::g_pfnDebugBreak )
      wil::details::g_pfnDebugBreak();
  }
}
