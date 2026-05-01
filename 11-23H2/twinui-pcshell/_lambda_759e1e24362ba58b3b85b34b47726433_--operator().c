/*
 * XREFs of _lambda_759e1e24362ba58b3b85b34b47726433_::operator() @ 0x1801763A8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___::Run @ 0x180176380 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_759e1e24362ba58b3b85b34b47726433___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z @ 0x180176438 (-StartUalmWatcherHelper@UwpWindowManagerBridge@@AEAAJUwrite_lock_required@wil@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_759e1e24362ba58b3b85b34b47726433_::operator()(RTL_SRWLOCK **a1)
{
  RTL_SRWLOCK *v2; // rbx
  int v3; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *a1 + 32;
  AcquireSRWLockExclusive(v2);
  UwpWindowManagerBridge::StartUalmWatcherHelper(*a1);
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  v3 = (*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)(*a1)[30].Ptr + 192LL))((*a1)[30].Ptr);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1DF,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
      (const char *)(unsigned int)v3,
      v5);
  return 0LL;
}
