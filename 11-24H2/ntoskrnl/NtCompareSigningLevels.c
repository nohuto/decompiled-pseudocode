/*
 * XREFs of NtCompareSigningLevels @ 0x140A36C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall NtCompareSigningLevels(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax

  v4 = 0;
  if ( qword_140F048C0 )
    v4 = guard_dispatch_icall_no_overrides(a1, a2, qword_140F048C0, a4);
  return v4 == 0 ? 0xC0000428 : 0;
}
