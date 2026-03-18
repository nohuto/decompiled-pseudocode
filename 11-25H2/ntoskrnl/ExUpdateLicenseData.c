/*
 * XREFs of ExUpdateLicenseData @ 0x140A97010
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14030F050 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  unsigned int *v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v2; // r9d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD74A0 )
    return guard_dispatch_icall_no_overrides(Blink);
  else
    return SLUpdateLicenseDataInternal((__int64)Blink, v2, v0);
}
