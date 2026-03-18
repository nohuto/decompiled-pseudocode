/*
 * XREFs of NtUserCanCurrentThreadChangeForeground @ 0x140292D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z @ 0x140187F98 (-RunForegroundAccessCheck@@YA_NPEBUtagWND@@W4ForegroundAccessCheck@@@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x14026F748 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 NtUserCanCurrentThreadChangeForeground()
{
  __int64 v0; // rdx
  unsigned int v1; // ebx
  __int64 v2; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  EnterSharedCrit(0LL, 1LL);
  v5 = 0LL;
  v4[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v4, v0);
  v1 = (unsigned __int8)RunForegroundAccessCheck(0LL, 1LL);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v4);
  UserSessionSwitchLeaveCrit(v2);
  return v1;
}
