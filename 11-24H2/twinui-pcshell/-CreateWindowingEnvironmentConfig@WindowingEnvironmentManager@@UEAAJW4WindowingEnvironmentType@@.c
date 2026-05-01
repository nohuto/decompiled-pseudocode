/*
 * XREFs of ?CreateWindowingEnvironmentConfig@WindowingEnvironmentManager@@UEAAJW4WindowingEnvironmentType@@PEAPEAUIWindowingEnvironmentConfig@@@Z @ 0x1801DBF70
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800A59D8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68022f0d3b489cdc066e60d642ae628d___ @ 0x1801DC130 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_68022f0d3b489cdc066e60d642ae628d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall WindowingEnvironmentManager::CreateWindowingEnvironmentConfig(RTL_SRWLOCK *a1, int a2, _QWORD *a3)
{
  RTL_SRWLOCK *v5; // rbx
  _QWORD *Ptr; // r8
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  const char *v15; // r9
  __int64 result; // rax
  int v17[2]; // [rsp+20h] [rbp-38h] BYREF
  int *v18; // [rsp+28h] [rbp-30h]
  __int64 *v19; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v23; // [rsp+70h] [rbp+18h]

  v22 = a2;
  *a3 = 0LL;
  v21 = 0LL;
  v5 = a1 + 3;
  AcquireSRWLockShared(a1 + 3);
  Ptr = a1[4].Ptr;
  v7 = (_QWORD *)Ptr[1];
  HIDWORD(v18) = 0;
  v8 = Ptr;
  while ( !*((_BYTE *)v7 + 25) )
  {
    if ( *((_DWORD *)v7 + 8) >= v22 )
    {
      v8 = v7;
      v7 = (_QWORD *)*v7;
    }
    else
    {
      v7 = (_QWORD *)v7[2];
    }
  }
  try
  {
    if ( !*((_BYTE *)v8 + 25) && v22 >= *((_DWORD *)v8 + 8) && v8 != Ptr )
    {
      v9 = v8[5];
      v10 = v21;
      v21 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    if ( v5 )
      ReleaseSRWLockShared(v5);
    if ( !v21 )
    {
      AcquireSRWLockExclusive(v5);
      v23 = v5;
      *(_QWORD *)v17 = a1 - 17;
      v18 = &v22;
      v19 = &v21;
      CurrentThreadId = GetCurrentThreadId();
      v13 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68022f0d3b489cdc066e60d642ae628d___(
              v12,
              CurrentThreadId,
              v17);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x66,
          (int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
          (const char *)(unsigned int)v13,
          v17[0]);
      if ( v5 )
        ReleaseSRWLockExclusive(v5);
    }
    v14 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v21)(
            v21,
            &GUID_3c32be79_d44b_4c43_b19b_12f70e686f35,
            a3);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x1C60,
        (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/result_macros.h",
        (const char *)(unsigned int)v14,
        v17[0]);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 24LL))(v21);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v21) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x70,
                     (unsigned int)"pcshell\\twinui\\windowingenvironment\\lib\\windowingenvironmentmanager.cpp",
                     v15);
    return (unsigned int)v21;
  }
  return result;
}
