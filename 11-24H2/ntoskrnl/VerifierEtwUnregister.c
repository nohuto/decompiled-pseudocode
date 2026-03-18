/*
 * XREFs of VerifierEtwUnregister @ 0x140BA1560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetEtwUnregister @ 0x140B8B5A0 (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
    VfTargetEtwUnregister(a1, retaddr);
  return guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
}
