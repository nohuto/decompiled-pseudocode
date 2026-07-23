/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140C2E7A4
 * Callers:
 *     ObShutdownSystem @ 0x140741200 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x140A52EC0 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140E074A0;
  qword_140E074A0 = 0LL;
  dword_140E07480 = 0;
  return EtwUnregister(v0);
}
