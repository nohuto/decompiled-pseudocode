/*
 * XREFs of _tlgKeywordOn @ 0x1C0001008
 * Callers:
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0005770 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouConfiguration @ 0x1C0011A90 (MouConfiguration.c)
 * Callees:
 *     <none>
 */

bool tlgKeywordOn()
{
  return (qword_1C000B010 & 0x400000000000LL) != 0 && (qword_1C000B018 & 0x400000000000LL) == qword_1C000B018;
}
