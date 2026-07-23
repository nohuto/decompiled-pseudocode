/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x14077CE30
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 */

ULONGLONG RtlGetConsoleSessionForegroundProcessId(void)
{
  if ( PsIsCurrentThreadInServerSilo() )
    return (ULONGLONG)PsGetCurrentServerSiloGlobals()[80].Blink->Blink;
  else
    return MEMORY[0xFFFFF78000000338];
}
