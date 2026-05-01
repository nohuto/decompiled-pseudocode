/*
 * XREFs of _lambda_b88285b6ae42900e8c1e45a4c9bb4f88_::operator() @ 0x180552C68
 * Callers:
 *     wil::details::ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___::_ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___ @ 0x180552560 (wil--details--ScopeExitFn__lambda_b88285b6ae42900e8c1e45a4c9bb4f88___--_ScopeExitFn__lambda_b882.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_b88285b6ae42900e8c1e45a4c9bb4f88_::operator()(_QWORD **a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*a1)[16] + 40LL))((*a1)[16], *a1[1], *a1[2]);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x41D,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
    (const char *)(unsigned int)v1);
  return v2;
}
