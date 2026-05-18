/*
 * XREFs of ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1800045F0
 * Callers:
 *     ??$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180003E18 (--$ReportFailure_Base@$01$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 * Callees:
 *     __security_check_cookie @ 0x1800021B0 (__security_check_cookie.c)
 *     memset_0 @ 0x180003154 (memset_0.c)
 *     ??$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z @ 0x180004018 (--$ReportFailure_Hr@$01@details@wil@@YAXPEAXIPEBD110J@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180006424 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x180006C38 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?RecordLog@details@wil@@YAHJ@Z @ 0x180007ACC (-RecordLog@details@wil@@YAHJ@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180009BEC (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180009DD4 (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     _alloca_probe @ 0x1800114F0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180012010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ReportFailure_Return<2>(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int *a7,
        _WORD *a8)
{
  int v12; // edx
  int v13; // ebx
  int v14; // edx
  int v15; // ebx
  _WORD *v16; // r8
  int v17; // ecx
  DWORD CurrentThreadId; // eax
  const struct wil::FailureInfo *v19; // rdx
  wil::details::in1diag3 *v20; // rcx
  const struct wil::FailureInfo *v21; // r9
  bool v22; // zf
  wil::details *v23; // [rsp+30h] [rbp-D0h]
  int v24; // [rsp+40h] [rbp-C0h] BYREF
  int v25; // [rsp+44h] [rbp-BCh]
  int v26; // [rsp+48h] [rbp-B8h]
  int v27; // [rsp+4Ch] [rbp-B4h]
  signed __int32 v28; // [rsp+50h] [rbp-B0h]
  _WORD *v29; // [rsp+58h] [rbp-A8h]
  DWORD v30; // [rsp+60h] [rbp-A0h]
  __int64 v31; // [rsp+68h] [rbp-98h]
  __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h]
  int v34; // [rsp+80h] [rbp-80h]
  int v35; // [rsp+84h] [rbp-7Ch]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int128 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+A0h] [rbp-60h]
  __int128 v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B8h] [rbp-48h]
  __int64 ModuleName; // [rsp+C0h] [rbp-40h]
  __int64 v42; // [rsp+C8h] [rbp-38h]
  __int64 v43; // [rsp+D0h] [rbp-30h]
  char v44[1024]; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR OutputString[2048]; // [rsp+4E0h] [rbp+3E0h] BYREF

  memset_0(&v24, 0, 0x98uLL);
  OutputString[0] = 0;
  v44[0] = 0;
  v13 = *a7;
  v27 = a7[1];
  v26 = v13;
  if ( v13 >= 0 )
  {
    v13 = -2147024228;
    LODWORD(v23) = -2147024228;
    wil::details::ReportFailure_Hr<2>(a1, a2, a3, a4, a5, a6, v23);
    v26 = -2147024228;
    v27 = wil::details::HrToNtStatus((wil::details *)0x8007029CLL, v14);
  }
  v15 = wil::details::RecordLog((wil::details *)(unsigned int)v13, v12);
  v24 = 2;
  v17 = (int)v16;
  if ( a7[2] == 1 )
    v17 = 8;
  v25 = v17;
  v28 = _InterlockedIncrement(&`wil::details::LogFailure'::`2'::s_failureId);
  if ( !a8 || (v29 = a8, *a8 == (_WORD)v16) )
    v29 = v16;
  CurrentThreadId = GetCurrentThreadId();
  v35 = v15;
  v30 = CurrentThreadId;
  v33 = a3;
  v40 = 0LL;
  v38 = 0LL;
  v34 = a2;
  v31 = a5;
  v32 = a4;
  v42 = a6;
  v43 = a1;
  v36 = 0LL;
  v39 = 0LL;
  v37 = 0LL;
  if ( wil::details::g_pfnGetModuleName )
    ModuleName = wil::details::g_pfnGetModuleName(v20);
  else
    ModuleName = 0LL;
  if ( wil::details::g_pfnNotifyFailure )
    wil::details::g_pfnNotifyFailure(&v24);
  if ( wil::details::g_pfnGetContextAndNotifyFailure )
    wil::details::g_pfnGetContextAndNotifyFailure(&v24, v44, 1024LL);
  if ( wil::details::g_pfnLoggingCallback )
    wil::details::g_pfnLoggingCallback(&v24);
  if ( wil::details::g_pfnOriginateCallback && (v25 & 2) == 0 )
    wil::details::g_pfnOriginateCallback(&v24);
  if ( v26 >= 0 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(v20);
  if ( !wil::g_fIsDebuggerPresent
    && (!wil::g_pfnIsDebuggerPresent
      ? (v22 = !IsDebuggerPresent())
      : (v22 = (unsigned __int8)wil::g_pfnIsDebuggerPresent(v20) == 0),
        v22)
    || (v25 & 2) != 0 )
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v24, 0LL, 0LL);
  }
  else
  {
    if ( g_pfnResultLoggingCallback && !wil::details::g_resultMessageCallbackSet )
      g_pfnResultLoggingCallback(&v24, OutputString, 2048LL);
    if ( !OutputString[0] )
      wil::GetFailureLogString((wil *)OutputString, (unsigned __int16 *)0x800, (unsigned __int64)&v24, v21);
    OutputDebugStringW(OutputString);
  }
  if ( ((v25 & 4) != 0 || wil::g_fBreakOnFailure) && wil::details::g_pfnDebugBreak )
    wil::details::g_pfnDebugBreak(v20);
  if ( (v25 & 1) != 0 )
    wil::details::WilFailFast((wil::details *)&v24, v19);
}
