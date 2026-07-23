/*
 * XREFs of VerifierPoCallDriver @ 0x140B922C0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x1404999F0 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierPoCallDriver(void *a1, ULONG_PTR a2)
{
  if ( pXdvPoCallDriver )
    return guard_dispatch_icall_no_overrides(a1, a2);
  else
    return IofCallDriverSpecifyReturn(a1, a2);
}
