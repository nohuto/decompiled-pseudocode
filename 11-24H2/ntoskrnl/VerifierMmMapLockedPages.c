/*
 * XREFs of VerifierMmMapLockedPages @ 0x140BA2AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8D8F0 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmMapLockedPages(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = guard_dispatch_icall_no_overrides(a1, a2);
  if ( v3 && (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 200LL, 0xD0u, *(unsigned int *)(a1 + 40));
  return v3;
}
