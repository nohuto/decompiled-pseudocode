/*
 * XREFs of _lambda_72d77370fba09f560742b90c3fd0c03a_::operator() @ 0x18006BA58
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___::Run @ 0x18006BA30 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_72d77370fba09f560742b90c3fd0c03a___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_72d77370fba09f560742b90c3fd0c03a_::operator()(__int64 a1)
{
  int v1; // eax
  int v3; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 296LL) + 56LL))(*(_QWORD *)(*(_QWORD *)a1 + 296LL));
  if ( v1 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x4B,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v1,
      v3);
  return 0LL;
}
