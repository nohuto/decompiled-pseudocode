/*
 * XREFs of VerifierPoCallDriver @ 0x140B902C0
 * Callers:
 *     <none>
 * Callees:
 *     IofCallDriverSpecifyReturn @ 0x140375990 (IofCallDriverSpecifyReturn.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierPoCallDriver(void *a1, ULONG_PTR a2)
{
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  if ( pXdvPoCallDriver )
    return guard_dispatch_icall_no_overrides(a1, a2, retaddr, IofCallDriverSpecifyReturn);
  else
    return IofCallDriverSpecifyReturn(a1, a2);
}
