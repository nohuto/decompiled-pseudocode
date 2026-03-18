/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x140BA07B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetFreeContiguousMemory @ 0x140B8B6CC (VfTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemory(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfTargetFreeContiguousMemory(retaddr, a1);
  return guard_dispatch_icall_no_overrides(a1, v2, v3, v4);
}
