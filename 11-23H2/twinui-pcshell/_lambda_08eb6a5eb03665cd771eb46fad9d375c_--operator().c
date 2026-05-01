/*
 * XREFs of _lambda_08eb6a5eb03665cd771eb46fad9d375c_::operator() @ 0x1804DCD9C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_08eb6a5eb03665cd771eb46fad9d375c___::Run @ 0x1804DDA70 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_08eb6a5eb03665cd771eb46fad9d375c___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_08eb6a5eb03665cd771eb46fad9d375c_::operator()(_QWORD *a1)
{
  int v2; // eax
  const char *v3; // r9
  int v5[4]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_OWORD *)v5 = *(_OWORD *)a1[1];
  try
  {
    v2 = (*(__int64 (**)(void))(**(_QWORD **)(*a1 + 296LL) + 48LL))();
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x18A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2,
        v5[0]);
    *(_OWORD *)(*a1 + 724LL) = *(_OWORD *)a1[1];
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x18D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v3);
  }
  return 0LL;
}
