/*
 * XREFs of ExUpdateLicenseData @ 0x140A9CF20
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  unsigned int *v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v2; // r9

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD74A0 )
    return guard_dispatch_icall_no_overrides(Blink, (unsigned int)v2, v0, v2);
  else
    return SLUpdateLicenseDataInternal((__int64)Blink, v2, v0);
}
