/*
 * XREFs of IoDumpStackResumeCapable @ 0x14058D76C
 * Callers:
 *     PopSaveHiberContext @ 0x140B5BF00 (PopSaveHiberContext.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall IoDumpStackResumeCapable(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( CrashdmpImageEntry )
  {
    if ( qword_140E65CB8 )
      return guard_dispatch_icall_no_overrides(a1);
  }
  return result;
}
