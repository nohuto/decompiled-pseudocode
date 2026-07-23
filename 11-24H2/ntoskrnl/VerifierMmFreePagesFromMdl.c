/*
 * XREFs of VerifierMmFreePagesFromMdl @ 0x140BA28C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8D8F0 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmFreePagesFromMdl(__int64 a1, __int64 a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 232LL, 0xF0u, -(__int64)*(unsigned int *)(a1 + 40));
  return guard_dispatch_icall_no_overrides(a1, a2);
}
