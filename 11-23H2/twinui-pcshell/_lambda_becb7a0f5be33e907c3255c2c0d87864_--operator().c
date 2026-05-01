/*
 * XREFs of _lambda_becb7a0f5be33e907c3255c2c0d87864_::operator() @ 0x1804E7E90
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_becb7a0f5be33e907c3255c2c0d87864___::Run @ 0x1804EBF00 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_becb7a0f5be33e907c3255c2c0d87864___--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_becb7a0f5be33e907c3255c2c0d87864_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)*a1 + 176LL))(*a1, *a1[1]);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2BA,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
