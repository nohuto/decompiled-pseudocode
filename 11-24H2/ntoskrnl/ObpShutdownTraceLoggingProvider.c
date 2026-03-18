/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140C2C684
 * Callers:
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x140A00060 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140E074A0;
  qword_140E074A0 = 0LL;
  dword_140E07480 = 0;
  return EtwUnregister(v0);
}
