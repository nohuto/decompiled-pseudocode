/*
 * XREFs of PdcPoVerifyActionPolicy @ 0x14075D2E0
 * Callers:
 *     <none>
 * Callees:
 *     PopVerifyPowerActionPolicy @ 0x1409B8F6C (PopVerifyPowerActionPolicy.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
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
