/*
 * XREFs of KiCaptureDumpPreRecovery @ 0x1405C3660
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C2EB4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoCapturePristineTriageDump @ 0x14058DBD8 (IoCapturePristineTriageDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2)
{
  bool v2; // zf
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v5 = a1;
  v2 = KiPristineTriageDump == 0LL;
  *a2 = 0;
  if ( !v2 && (KiBugcheckRecoveryDumpPolicy & 0xF) != 1 )
    return IoCapturePristineTriageDump(
             KiBugCheckData,
             qword_140F22A08,
             xmmword_140F22A10,
             *((__int64 *)&xmmword_140F22A10 + 1),
             qword_140F22A20,
             KiCrashDumpContext,
             qword_140F46A48,
             qword_140F46A50 == 0);
  LODWORD(v5) = 0;
  if ( CrashdmpDumpBlock )
  {
    if ( qword_140E66040 )
    {
      guard_dispatch_icall_no_overrides(6LL, &v5);
      if ( (int)v5 >= 0 )
      {
        *a2 = 1;
        return IoCapturePristineTriageDump(
                 KiBugCheckData,
                 qword_140F22A08,
                 xmmword_140F22A10,
                 *((__int64 *)&xmmword_140F22A10 + 1),
                 qword_140F22A20,
                 KiCrashDumpContext,
                 qword_140F46A48,
                 qword_140F46A50 == 0);
      }
    }
  }
  return 3221225473LL;
}
