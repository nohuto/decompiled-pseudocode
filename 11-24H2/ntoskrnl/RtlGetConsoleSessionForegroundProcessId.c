/*
 * XREFs of RtlGetConsoleSessionForegroundProcessId @ 0x14077CF00
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 */

struct _LIST_ENTRY *RtlGetConsoleSessionForegroundProcessId()
{
  if ( PsIsCurrentThreadInServerSilo() )
    return PsGetCurrentServerSiloGlobals()[80].Blink->Blink;
  else
    return (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000338];
}
