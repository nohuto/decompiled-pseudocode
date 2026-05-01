/*
 * XREFs of _lambda_e8838413ede5bd20b829d342239a0037_::operator() @ 0x1804DD35C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_e8838413ede5bd20b829d342239a0037___::Run @ 0x1804DDAD0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_e8838413ede5bd20b829d342239a0037___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_e8838413ede5bd20b829d342239a0037_::operator()(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  const char *v3; // r9
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(*(_QWORD *)a1 + 296LL);
  try
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 56LL))(v1);
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x46,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2,
        v5);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x48,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v3);
  }
  return 0LL;
}
