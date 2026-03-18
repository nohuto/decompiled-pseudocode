/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x14076DBD0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 */

struct _LIST_ENTRY *RtlGetConsoleSessionForegroundProcessId()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return PsGetCurrentServerSiloGlobals()[80].Blink->Blink;
  else
    return (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000338];
}
