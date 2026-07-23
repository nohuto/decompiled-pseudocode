/*
 * XREFs of VerifierEtwUnregister @ 0x140BA3560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     VfTargetEtwUnregister @ 0x140B8D5A0 (VfTargetEtwUnregister.c)
 */

__int64 __fastcall VerifierEtwUnregister(__int64 a1, __int64 a2)
{
  unsigned __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( a1 )
    VfTargetEtwUnregister(a1, retaddr);
  return guard_dispatch_icall_no_overrides(a1, a2);
}
