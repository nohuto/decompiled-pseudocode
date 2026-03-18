/*
 * XREFs of RtlpHpFixedVsCommit @ 0x1404A02C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall RtlpHpFixedVsCommit(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v5 = a3;
  return guard_dispatch_icall_no_overrides(a1, &v6, &v5, a4);
}
