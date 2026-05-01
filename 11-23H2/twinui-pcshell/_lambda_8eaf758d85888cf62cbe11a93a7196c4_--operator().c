/*
 * XREFs of _lambda_8eaf758d85888cf62cbe11a93a7196c4_::operator() @ 0x1801925B8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaf758d85888cf62cbe11a93a7196c4___::Run @ 0x180192590 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8eaf758d85888cf62cbe11a93a7196c4___--.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_8eaf758d85888cf62cbe11a93a7196c4_::operator()(unsigned int **a1)
{
  RTL_SRWLOCK *v2; // rbx
  BOOL v3; // esi
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (RTL_SRWLOCK *)(*a1 + 64);
  AcquireSRWLockShared(v2);
  v3 = *((_BYTE *)*a1 + 248) == 0;
  if ( v2 )
    ReleaseSRWLockShared(v2);
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, BOOL))(**((_QWORD **)*a1 + 37) + 48LL))(
         *((_QWORD *)*a1 + 37),
         *a1[1],
         v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x24A,
    (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowmanagerbridge.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
