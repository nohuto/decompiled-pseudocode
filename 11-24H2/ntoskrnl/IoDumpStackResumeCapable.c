/*
 * XREFs of IoDumpStackResumeCapable @ 0x14058DFBC
 * Callers:
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoDumpStackResumeCapable(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E66058 )
      return guard_dispatch_icall_no_overrides(a1, qword_140E66058);
  }
  return result;
}
