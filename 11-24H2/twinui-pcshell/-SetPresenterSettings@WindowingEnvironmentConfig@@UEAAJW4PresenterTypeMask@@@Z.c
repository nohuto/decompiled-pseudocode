/*
 * XREFs of ?SetPresenterSettings@WindowingEnvironmentConfig@@UEAAJW4PresenterTypeMask@@@Z @ 0x1801E6C60
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863___ @ 0x1801E6D24 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowingEnvironmentConfig::SetPresenterSettings(__int64 a1, int a2)
{
  const char *v3; // r9
  DWORD CurrentThreadId; // eax
  __int64 v5; // rcx
  int v6; // eax
  __int64 result; // rax
  int v8[2]; // [rsp+20h] [rbp-18h] BYREF
  int *v9; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  try
  {
    if ( !*(_QWORD *)(a1 + 32) )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x6D,
        (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
        (const char *)0x8000FFFFLL,
        v8[0]);
    (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48), &SRWLock);
    if ( v12 != *(_DWORD *)(a1 + 64) )
    {
      *(_QWORD *)v8 = a1 - 32;
      v9 = &v12;
      CurrentThreadId = GetCurrentThreadId();
      v6 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_224f9cb247002186ab59ad0be817f863___(
             v5,
             CurrentThreadId,
             v8);
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xA3,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
          (const char *)(unsigned int)v6,
          v8[0]);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xA8,
                           (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentconfig.cpp",
                           v3);
  }
  return result;
}
