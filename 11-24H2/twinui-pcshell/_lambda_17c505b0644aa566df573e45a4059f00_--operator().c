/*
 * XREFs of _lambda_17c505b0644aa566df573e45a4059f00_::operator() @ 0x18043D2AC
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_17c505b0644aa566df573e45a4059f00___::Run @ 0x180441EE0 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_17c505b0644aa566df573e45a4059f00___--.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_17c505b0644aa566df573e45a4059f00_::operator()(unsigned int **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    (*(void (__fastcall **)(unsigned int *, _QWORD))(*(_QWORD *)*a1 + 176LL))(*a1, *a1[1]);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B9,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
