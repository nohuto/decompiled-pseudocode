/*
 * XREFs of _lambda_f67690370c1e799c9f4a06aed1e0e595_::operator() @ 0x18043F59C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___::Run @ 0x180442530 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_f67690370c1e799c9f4a06aed1e0e595___--.c)
 * Callees:
 *     ??$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTraceLogging@@SAX$$QEAIAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18001E8F4 (--$CommitActivationTimeoutPolicy@IAEAW4ActivationTimeoutPolicy@ViewManagerInterop@Shell@Internal.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_f67690370c1e799c9f4a06aed1e0e595_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdx
  int *v4; // rdi
  int v5; // ecx
  const char *v6; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v3 = *a1;
    v4 = *a1 + 66;
    v5 = *a1[1];
    if ( v5 != *v4 )
    {
      *v4 = v5;
      v9 = (*(__int64 (__fastcall **)(_QWORD *))(v3[2] + 288LL))(v3 + 2);
      ViewManagerInteropTraceLogging::CommitActivationTimeoutPolicy<unsigned int,enum Windows::Internal::Shell::ViewManagerInterop::ActivationTimeoutPolicy &>(
        &v9,
        v4);
    }
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x92D,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
