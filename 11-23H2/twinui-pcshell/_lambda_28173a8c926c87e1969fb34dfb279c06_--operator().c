/*
 * XREFs of _lambda_28173a8c926c87e1969fb34dfb279c06_::operator() @ 0x1801F7AB4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___::Run @ 0x1801F9C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_28173a8c926c87e1969fb34dfb279c06___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B5108 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SessionIdleTaskCompletionRemoved@I@ViewManagerInteropTraceLogging@@SAX$$QEAI@Z @ 0x1801BA808 (--$SessionIdleTaskCompletionRemoved@I@ViewManagerInteropTraceLogging@@SAX$$QEAI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_28173a8c926c87e1969fb34dfb279c06_::operator()(__int64 a1)
{
  _DWORD *v2; // r8
  __int64 v3; // rcx
  int v4; // eax
  int *v5; // rax
  int v6[4]; // [rsp+20h] [rbp-58h] BYREF
  __int128 v7; // [rsp+30h] [rbp-48h]
  __int128 v8; // [rsp+40h] [rbp-38h]
  __int64 v9; // [rsp+50h] [rbp-28h]
  int v10; // [rsp+58h] [rbp-20h]
  __int64 v11; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  char v13; // [rsp+80h] [rbp+8h] BYREF

  v2 = *(_DWORD **)(a1 + 64);
  if ( *v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v6,
      (struct wil::details::IFailureCallback *)(a1 + 16),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 10));
  }
  else
  {
    *(_OWORD *)v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0;
    v11 = 0LL;
  }
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 240LL);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 40LL))(v3);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB9B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)(*(_QWORD *)a1 + 240LL));
  v5 = (int *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 288LL))(
                *(_QWORD *)a1 + 16LL,
                &v13);
  ViewManagerInteropTraceLogging::SessionIdleTaskCompletionRemoved<unsigned int>(v5);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(a1 + 16, 0);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v6);
}
