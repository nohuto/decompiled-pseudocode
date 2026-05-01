/*
 * XREFs of _lambda_cde6e5647c60b28dce8b78190a248759_::operator() @ 0x1804E8070
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_cde6e5647c60b28dce8b78190a248759___::Run @ 0x1804EBF60 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_cde6e5647c60b28dce8b78190a248759___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cde6e5647c60b28dce8b78190a248759_::operator()(_DWORD **a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  _QWORD *v4; // r8
  int v5; // ecx
  int v6; // ecx
  __int64 v7; // rdx
  int v8; // eax
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+30h] [rbp+8h]

  v2 = *((_QWORD *)*a1 + 35);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v4 = *a1;
    v5 = *a1[1];
    if ( (*a1)[65] != v5 )
    {
      *((_DWORD *)v4 + 65) = v5;
      if ( v5 )
      {
        v6 = v5 - 1;
        if ( v6 )
        {
          if ( v6 != 1 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0x900,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
              (const char *)0x8000FFFFLL,
              v10);
          v7 = 2LL;
        }
        else
        {
          v7 = 1LL;
        }
      }
      else
      {
        v7 = 0LL;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v4[13] + 96LL))(v4[13], v7);
      if ( v8 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x903,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v8,
          v10);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x906,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
