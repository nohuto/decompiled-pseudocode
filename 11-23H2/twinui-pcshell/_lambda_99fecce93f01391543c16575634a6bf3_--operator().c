/*
 * XREFs of _lambda_99fecce93f01391543c16575634a6bf3_::operator() @ 0x1804D884C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_99fecce93f01391543c16575634a6bf3___::Run @ 0x1804DA450 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_99fecce93f01391543c16575634a6bf3___--.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ @ 0x1804DADC8 (-WindowEventDispatcher_WindowManagerWatcherDisconnected@ViewManagerInteropTraceLogging@@SAXXZ.c)
 */

__int64 __fastcall lambda_99fecce93f01391543c16575634a6bf3_::operator()(__int64 *a1)
{
  __int64 v2; // rdx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  const char *v17; // r9
  int v19; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1;
  *(_BYTE *)(*a1 + 64) = 0;
  try
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 56) + 56LL))(*(_QWORD *)(v2 + 56));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x187,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v19);
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 72LL))(
           *(_QWORD *)(*a1 + 56),
           *(_QWORD *)(*a1 + 80));
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x188,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v4,
        v19);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 88LL))(
           *(_QWORD *)(*a1 + 56),
           *(_QWORD *)(*a1 + 88));
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x189,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v5,
        v19);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 104LL))(
           *(_QWORD *)(*a1 + 56),
           *(_QWORD *)(*a1 + 96));
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v6,
        v19);
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 120LL))(
           *(_QWORD *)(*a1 + 56),
           *(_QWORD *)(*a1 + 104));
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v7,
        v19);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 136LL))(
           *(_QWORD *)(*a1 + 56),
           *(_QWORD *)(*a1 + 112));
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v8,
        v19);
    v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 200LL))(
           *(_QWORD *)(*a1 + 56),
           *(_QWORD *)(*a1 + 120));
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v9,
        v19);
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 296LL))(
            *(_QWORD *)(*a1 + 56),
            *(_QWORD *)(*a1 + 128));
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v10,
        v19);
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 312LL))(
            *(_QWORD *)(*a1 + 56),
            *(_QWORD *)(*a1 + 136));
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v11,
        v19);
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 328LL))(
            *(_QWORD *)(*a1 + 56),
            *(_QWORD *)(*a1 + 144));
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x190,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v12,
        v19);
    v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 408LL))(
            *(_QWORD *)(*a1 + 56),
            *(_QWORD *)(*a1 + 152));
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x191,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v13,
        v19);
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 152LL))(
            *(_QWORD *)(*a1 + 56),
            *(_QWORD *)(*a1 + 160));
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x192,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v14,
        v19);
    v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 184LL))(
            *(_QWORD *)(*a1 + 56),
            *(_QWORD *)(*a1 + 168));
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x193,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v15,
        v19);
    v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*a1 + 56) + 360LL))(
            *(_QWORD *)(*a1 + 56),
            *(_QWORD *)(*a1 + 176));
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x194,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
        (const char *)(unsigned int)v16,
        v19);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)(*a1 + 56));
    *(_BYTE *)(*a1 + 256) = 0;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_WindowManagerWatcherDisconnected();
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x199,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v17);
  }
  return 0LL;
}
