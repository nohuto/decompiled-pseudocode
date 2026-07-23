/*
 * XREFs of PdcPoVerifyPowerState @ 0x14075C2B0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifySystemPowerState @ 0x140A77F9C (PopVerifySystemPowerState.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyPowerState(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = a2;
  PopAcquirePolicyLock(a1, a2);
  PopVerifySystemPowerState(a1, v2);
  return PopReleasePolicyLock(v5, v4, v6, v7, v9);
}
