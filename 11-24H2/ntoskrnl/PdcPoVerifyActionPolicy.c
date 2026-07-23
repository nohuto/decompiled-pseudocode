/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x14075C280
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x14099F5BC (PopVerifyPowerActionPolicy.c)
 *     PopAcquirePolicyLock @ 0x140B69DF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B69E40 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PdcPoVerifyActionPolicy(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // [rsp+20h] [rbp-8h]

  PopAcquirePolicyLock(a1, a2);
  PopVerifyPowerActionPolicy(a1);
  return PopReleasePolicyLock(v4, v3, v5, v6, v8);
}
