/*
 * XREFs of _lambda_ffe5abdc96bff0e72534bc001af731ee_::operator() @ 0x1804E8DB0
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ffe5abdc96bff0e72534bc001af731ee___::Run @ 0x1804EC110 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ffe5abdc96bff0e72534bc001af731ee___--.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802D90CE (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_ffe5abdc96bff0e72534bc001af731ee_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  const char *v3; // r9
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *SRWLock; // [rsp+40h] [rbp+8h]

  v2 = *(_QWORD *)(*a1 + 280);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 200LL))(v2);
    v5[0] = 0LL;
    v5[1] = *(_QWORD *)a1[1];
    WindowWrapperBase::SetDesiredPosition(*a1, (__int64)v5, 2u, 0LL);
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x19A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
