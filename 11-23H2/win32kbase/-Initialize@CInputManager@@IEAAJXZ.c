/*
 * XREFs of ?Initialize@CInputManager@@IEAAJXZ @ 0x1C00BED60
 * Callers:
 *     ?CreateSessionGlobal@CInputManager@@SAJXZ @ 0x1C00BECC0 (-CreateSessionGlobal@CInputManager@@SAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputManager::Initialize(CInputManager *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rax

  v1 = 0;
  if ( !qword_1C02960E0 )
  {
    *(_QWORD *)this = 0LL;
    return (unsigned int)-1073741801;
  }
  v3 = qword_1C02960E0(1LL, 0LL);
  *(_QWORD *)this = v3;
  if ( !v3 )
    return (unsigned int)-1073741801;
  *((_QWORD *)this + 15) = 0LL;
  return v1;
}
