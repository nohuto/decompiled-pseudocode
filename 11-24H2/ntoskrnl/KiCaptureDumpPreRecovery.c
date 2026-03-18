/*
 * XREFs of KiCaptureDumpPreRecovery @ 0x1405C5F30
 * Callers:
 *     KiAttemptBugcheckRecovery @ 0x1405C5784 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     IoCapturePristineTriageDump @ 0x140590BB8 (IoCapturePristineTriageDump.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall KiCaptureDumpPreRecovery(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  bool v4; // zf
  __int64 v7; // [rsp+60h] [rbp+8h] BYREF

  v7 = a1;
  v4 = KiPristineTriageDump == 0LL;
  *a2 = 0;
  if ( !v4 && (KiBugcheckRecoveryDumpPolicy & 0xF) != 1 )
    return IoCapturePristineTriageDump(
             KiBugCheckData,
             qword_140F22748,
             xmmword_140F22750,
             *((__int64 *)&xmmword_140F22750 + 1),
             qword_140F22760,
             KiCrashDumpContext,
             qword_140F22788,
             qword_140F22790 == 0);
  LODWORD(v7) = 0;
  if ( CrashdmpDumpBlock )
  {
    if ( qword_140E65F00 )
    {
      guard_dispatch_icall_no_overrides(6LL, &v7, 4LL, a4);
      if ( (int)v7 >= 0 )
      {
        *a2 = 1;
        return IoCapturePristineTriageDump(
                 KiBugCheckData,
                 qword_140F22748,
                 xmmword_140F22750,
                 *((__int64 *)&xmmword_140F22750 + 1),
                 qword_140F22760,
                 KiCrashDumpContext,
                 qword_140F22788,
                 qword_140F22790 == 0);
      }
    }
  }
  return 3221225473LL;
}
