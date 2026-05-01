/*
 * XREFs of ?EnsurePositionOffset@WindowWrapperBase@@UEAAJXZ @ 0x18043FE00
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___ @ 0x18043BAC4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7ab3d9c0db1bfade5feb6f215ef467d5.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowWrapperBase::EnsurePositionOffset(WindowWrapperBase *this)
{
  __int64 v2; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  const char *v6; // r9
  __int64 result; // rax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WindowWrapperBase *v10; // [rsp+30h] [rbp+8h] BYREF
  RTL_SRWLOCK *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v10 = this;
    CurrentThreadId = GetCurrentThreadId();
    v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7ab3d9c0db1bfade5feb6f215ef467d5___(
           v4,
           CurrentThreadId,
           &v10);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x148,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v5,
        v8);
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x14C,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
