/*
 * XREFs of _lambda_8ef217250f0101fab299e7ccd919808f_::operator() @ 0x1801F7E94
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8ef217250f0101fab299e7ccd919808f___::Run @ 0x1801F9860 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8ef217250f0101fab299e7ccd919808f___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_8ef217250f0101fab299e7ccd919808f_::operator()(_QWORD **a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*a1)[16] + 128LL))((*a1)[16], *a1[1]);
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x55B,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
