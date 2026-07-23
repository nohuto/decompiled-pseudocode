/*
 * XREFs of KeQueryIntervalProfile @ 0x14073A5E0
 * Callers:
 *     NtQueryIntervalProfile @ 0x1407C2190 (NtQueryIntervalProfile.c)
 *     KeSetIntervalProfile @ 0x140ABD6BC (KeSetIntervalProfile.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  guard_dispatch_icall_no_overrides(1LL, 24LL);
  return 0LL;
}
