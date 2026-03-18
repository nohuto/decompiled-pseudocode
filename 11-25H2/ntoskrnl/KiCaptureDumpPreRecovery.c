/*
 * XREFs of KiCaptureDumpPreRecovery @ 0x1405C1B90
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C13E4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoCapturePristineTriageDump @ 0x14058D388 (IoCapturePristineTriageDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2)
{
  bool v2; // zf

  v2 = KiPristineTriageDump == 0LL;
  *a2 = 0;
  if ( !v2 && (KiBugcheckRecoveryDumpPolicy & 0xF) != 1 )
    return IoCapturePristineTriageDump(
             KiBugCheckData,
             qword_140F46028,
             xmmword_140F46030,
             *((__int64 *)&xmmword_140F46030 + 1),
             qword_140F46040,
             KiCrashDumpContext,
             qword_140F21FA8,
             qword_140F21FB0 == 0);
  if ( CrashdmpDumpBlock && qword_140E65CA0 )
  {
    guard_dispatch_icall_no_overrides(6LL);
    *a2 = 1;
    return IoCapturePristineTriageDump(
             KiBugCheckData,
             qword_140F46028,
             xmmword_140F46030,
             *((__int64 *)&xmmword_140F46030 + 1),
             qword_140F46040,
             KiCrashDumpContext,
             qword_140F21FA8,
             qword_140F21FB0 == 0);
  }
  return 3221225473LL;
}
