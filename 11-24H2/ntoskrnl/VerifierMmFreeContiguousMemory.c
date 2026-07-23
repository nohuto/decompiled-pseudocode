/*
 * XREFs of VerifierMmFreeContiguousMemory @ 0x140BA27B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetFreeContiguousMemory @ 0x140B8D6CC (VfTargetFreeContiguousMemory.c)
 */

__int64 __fastcall VerifierMmFreeContiguousMemory(__int64 a1)
{
  __int64 v2; // rdx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  VfTargetFreeContiguousMemory(retaddr, a1);
  return guard_dispatch_icall_no_overrides(a1, v2);
}
