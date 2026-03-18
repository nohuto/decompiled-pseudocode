/*
 * XREFs of IoDumpStackResumeCapable @ 0x140590F9C
 * Callers:
 *     PopSaveHiberContext @ 0x140B6EC80 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoDumpStackResumeCapable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E65F18 )
      return guard_dispatch_icall_no_overrides(a1, qword_140E65F18, a3, a4);
  }
  return result;
}
