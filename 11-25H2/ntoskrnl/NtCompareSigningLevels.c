/*
 * XREFs of NtCompareSigningLevels @ 0x1409E2040
 * Callers:
 *     sub_1409E1F40 @ 0x1409E1F40 (sub_1409E1F40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCompareSigningLevels(__int64 a1)
{
  int v1; // eax

  v1 = 0;
  if ( qword_140F044E0 )
    v1 = guard_dispatch_icall_no_overrides(a1);
  return v1 == 0 ? 0xC0000428 : 0;
}
