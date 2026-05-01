/*
 * XREFs of _lambda_a6da347bd35d077b27888479a1bad3f8_::operator() @ 0x180436958
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___::Run @ 0x180437070 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_a6da347bd35d077b27888479a1bad3f8___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x1801BD360 (-StartWindowWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_a6da347bd35d077b27888479a1bad3f8_::operator()(__int64 *a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  UwpWindowManagerBridge::StartWindowWatcherHelper(*a1);
  try
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*a1 + 176) + 168LL))(*(_QWORD *)(*a1 + 176));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2AA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
        (const char *)(unsigned int)v2,
        v5);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2AC,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
                           v3);
  }
  return 0LL;
}
