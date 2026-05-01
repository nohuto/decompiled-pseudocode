/*
 * XREFs of ?SetIsDismissed@UwpWindowWrapper@@UEAAJE@Z @ 0x1801E46B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72d77370fba09f560742b90c3fd0c03a___ @ 0x1801E4768 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_72d77370fba09f560742b90c3fd0c03a.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowWrapper::SetIsDismissed(UwpWindowWrapper *this, char a2)
{
  __int64 v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  DWORD CurrentThreadId; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v12; // [rsp+30h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+18h]

  v4 = *((_QWORD *)this - 38);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4);
    if ( a2 != *((_BYTE *)this + 32) )
    {
      *((_BYTE *)this + 32) = a2;
      if ( *((_QWORD *)this - 37) )
      {
        if ( a2 )
        {
          v12 = (char *)this - 592;
          CurrentThreadId = GetCurrentThreadId();
          v9 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_72d77370fba09f560742b90c3fd0c03a___(
                 v8,
                 CurrentThreadId,
                 &v12);
          if ( v9 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x50,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
              (const char *)(unsigned int)v9,
              v10);
        }
      }
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x55,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
                           v5);
  }
  return result;
}
