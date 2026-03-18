/*
 * XREFs of VerifierMmFreePagesFromMdl @ 0x140BA08C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ViTargetAddToCounter @ 0x140B8B8F0 (ViTargetAddToCounter.c)
 */

__int64 __fastcall VerifierMmFreePagesFromMdl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r9
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v4 = -(__int64)*(unsigned int *)(a1 + 40);
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetAddToCounter(retaddr, 232LL, 0xF0u, v4);
  return guard_dispatch_icall_no_overrides(a1, a2, a3, v4);
}
