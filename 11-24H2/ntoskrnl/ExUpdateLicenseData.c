/*
 * XREFs of ExUpdateLicenseData @ 0x140A98490
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 */

__int64 ExUpdateLicenseData()
{
  unsigned int *v0; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned int v2; // r9d

  Blink = PsGetCurrentServerSiloGlobals()[54].Blink;
  if ( qword_140FD84B0 )
    return guard_dispatch_icall_no_overrides(Blink, v2);
  else
    return SLUpdateLicenseDataInternal((__int64)Blink, v2, v0);
}
