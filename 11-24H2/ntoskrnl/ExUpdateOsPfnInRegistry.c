/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1407B86F0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 ExUpdateOsPfnInRegistry()
{
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v1; // r10d
  unsigned int v2; // r11d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD8498 )
    return (unsigned int)guard_dispatch_icall_no_overrides(Blink, v2);
  return v1;
}
