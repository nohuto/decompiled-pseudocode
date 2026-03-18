/*
 * XREFs of VerifierFsRtlDissectName @ 0x140B8EA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierFsRtlDissectName(__int128 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = *a1;
  return guard_dispatch_icall_no_overrides(&v5, a2, a3, a4);
}
