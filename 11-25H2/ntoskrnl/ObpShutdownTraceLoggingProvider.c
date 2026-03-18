/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140C1B584
 * Callers:
 *     ObShutdownSystem @ 0x1407372B0 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x140A01CC0 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140E074A0;
  qword_140E074A0 = 0LL;
  dword_140E07480 = 0;
  return EtwUnregister(v0);
}
