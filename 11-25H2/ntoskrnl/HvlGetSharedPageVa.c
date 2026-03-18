/*
 * XREFs of HvlGetSharedPageVa @ 0x1404977A0
 * Callers:
 *     RtlGetMultiTimePrecise @ 0x1404975D0 (RtlGetMultiTimePrecise.c)
 *     MiInitializeSharedUserData @ 0x140C3D30C (MiInitializeSharedUserData.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

PVOID __fastcall HvlGetSharedPageVa(__int64 a1, __int64 a2)
{
  PVOID result; // rax

  result = HvlpReferenceTscPage;
  if ( !HvlpReferenceTscPage )
    return (PVOID)guard_dispatch_icall_no_overrides(a1, a2);
  return result;
}
