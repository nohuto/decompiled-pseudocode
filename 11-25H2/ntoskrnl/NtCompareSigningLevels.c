/*
 * XREFs of NtCompareSigningLevels @ 0x1409E2040
 * Callers:
 *     sub_1409E1F40 @ 0x1409E1F40 (sub_1409E1F40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtCompareSigningLevels(SE_SIGNING_LEVEL FirstSigningLevel, SE_SIGNING_LEVEL SecondSigningLevel)
{
  int v2; // eax

  v2 = 0;
  if ( qword_140F044E0 )
    v2 = guard_dispatch_icall_no_overrides(FirstSigningLevel);
  return v2 == 0 ? 0xC0000428 : 0;
}
