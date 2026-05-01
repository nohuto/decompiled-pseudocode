/*
 * XREFs of _lambda_a6da347bd35d077b27888479a1bad3f8_::operator() @ 0x1804E01F8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___::Run @ 0x1804E08B0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x18016E188 (-StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_a6da347bd35d077b27888479a1bad3f8_::operator()(__int64 *a1, char a2)
{
  int v3; // eax
  const char *v4; // r9
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  UwpWindowManagerBridge::StartWindowWatcherHelper(*a1, a2);
  try
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 176) + 168LL))(*(_QWORD *)(*a1 + 176));
    if ( v3 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2AA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v3,
        v6);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2AC,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v4);
  }
  return 0LL;
}
