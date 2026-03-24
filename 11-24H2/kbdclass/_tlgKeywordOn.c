/*
 * XREFs of _tlgKeywordOn @ 0x1C0001008
 * Callers:
 *     KbdClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0005A40 (KbdClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     KbdConfiguration @ 0x1C00119A0 (KbdConfiguration.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C000B010 & 0x400000000000LL) != 0 && (qword_1C000B018 & 0x400000000000LL) == qword_1C000B018;
}
