/*
 * XREFs of HvlGetSharedPageVa @ 0x140491C00
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x140491A30 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140C50724 (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall HvlGetSharedPageVa(__int64 a1, __int64 a2)
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
