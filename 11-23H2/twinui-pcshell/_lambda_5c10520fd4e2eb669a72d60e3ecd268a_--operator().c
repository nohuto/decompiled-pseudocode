/*
 * XREFs of _lambda_5c10520fd4e2eb669a72d60e3ecd268a_::operator() @ 0x1804E6AB8
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_5c10520fd4e2eb669a72d60e3ecd268a___::Run @ 0x1804EBBA0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_5c10520fd4e2eb669a72d60e3ecd268a___--.c)
 * Callees:
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18011274C (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_5c10520fd4e2eb669a72d60e3ecd268a_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  _QWORD *v4; // rdx
  int *v5; // rdi
  int v6; // ecx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+38h] [rbp+10h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v4 = *a1;
    v5 = *a1 + 66;
    v6 = *a1[1];
    if ( v6 != *v5 )
    {
      *v5 = v6;
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(v4[2] + 288LL))(v4 + 2);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        &v9,
        v5);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x92E,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
