/*
 * XREFs of HvlGetSharedPageVa @ 0x140497270
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1404970A0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140C4E594 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall HvlGetSharedPageVa(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)guard_dispatch_icall_no_overrides(a1, a2, a3, a4);
  return result;
}
