/*
 * XREFs of VerifierFsRtlDissectName @ 0x140B90A30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall VerifierFsRtlDissectName(__int128 *a1, __int64 a2)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *a1;
  return guard_dispatch_icall_no_overrides(&v3, a2);
}
