/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1407A8DF0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 ExUpdateOsPfnInRegistry()
{
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v1; // r10d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD7488 )
    return (unsigned int)guard_dispatch_icall_no_overrides(Blink);
  return v1;
}
