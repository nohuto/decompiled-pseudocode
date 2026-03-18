/*
 * XREFs of NtUserDestroyInputContext @ 0x140293A00
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x14005FE74 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140077C08 (HMValidateHandleWithDescriptor.c)
 *     ?DestroyInputContext@@YAHPEAUtagIMC@@@Z @ 0x1401F4B50 (-DestroyInputContext@@YAHPEAUtagIMC@@@Z.c)
 */

__int64 __fastcall NtUserDestroyInputContext(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rdx
  int v5; // ebx
  struct tagIMC *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10);
  v4 = *(_DWORD **)(W32GetUserSessionState(v3, v2) + 19928);
  if ( (*v4 & 4) != 0 )
  {
    LOBYTE(v4) = 17;
    v6 = (struct tagIMC *)HMValidateHandleWithDescriptor(a1, (__int64)v4);
    v5 = 0;
    if ( v6 )
      v5 = DestroyInputContext(v6, v7);
  }
  else
  {
    UserSetLastError(120);
    v5 = 0;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v10);
  UserSessionSwitchLeaveCrit(v8);
  return v5;
}
