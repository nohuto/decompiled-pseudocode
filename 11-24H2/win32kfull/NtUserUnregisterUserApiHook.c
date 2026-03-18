/*
 * XREFs of NtUserUnregisterUserApiHook @ 0x1402A1760
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x14005F724 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x14005F740 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     _UnregisterUserApiHook @ 0x140284FA0 (_UnregisterUserApiHook.c)
 */

__int64 NtUserUnregisterUserApiHook()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 v3; // rcx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v5);
  v2 = (int)UnregisterUserApiHook(v1, v0);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v5);
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
