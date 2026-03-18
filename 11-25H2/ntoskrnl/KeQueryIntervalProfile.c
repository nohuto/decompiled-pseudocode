/*
 * XREFs of KeQueryIntervalProfile @ 0x140730420
 * Callers:
 *     NtQueryIntervalProfile @ 0x1407B2570 (NtQueryIntervalProfile.c)
 *     KeSetIntervalProfile @ 0x140ABE5E4 (KeSetIntervalProfile.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  guard_dispatch_icall_no_overrides(1LL);
  return 0LL;
}
