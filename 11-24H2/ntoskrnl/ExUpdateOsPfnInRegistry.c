/*
 * XREFs of ExUpdateOsPfnInRegistry @ 0x1407B82A0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 ExUpdateOsPfnInRegistry()
{
  __int64 v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v2; // r8d
  unsigned int v3; // r10d
  unsigned int v4; // r11d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD7488 )
    return (unsigned int)guard_dispatch_icall_no_overrides(Blink, v4, v0, v2);
  return v3;
}
