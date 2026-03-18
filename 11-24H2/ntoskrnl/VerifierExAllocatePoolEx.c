/*
 * XREFs of VerifierExAllocatePoolEx @ 0x140B91420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierExAllocatePoolEx(__int64 a1, __int64 a2, unsigned int a3)
{
  LODWORD(a1) = a1 | 0x80;
  return guard_dispatch_icall_no_overrides(a1, 0LL, a2, a3);
}
