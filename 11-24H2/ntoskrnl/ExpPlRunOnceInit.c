/*
 * XREFs of ExpPlRunOnceInit @ 0x140655240
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1409A7460 (RtlAddAccessAllowedAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 */

_BOOL8 __fastcall ExpPlRunOnceInit(PRTL_RUN_ONCE RunOnce, PVOID Parameter, PVOID *Context)
{
  NTSTATUS Acl; // eax

  Acl = RtlCreateAcl(&Dacl, 0x59u, 2u);
  if ( Acl >= 0 )
  {
    Acl = RtlAddAccessAllowedAce(&Dacl, 2u, 1u, SeWorldSid);
    if ( Acl >= 0 )
    {
      Acl = RtlCreateSecurityDescriptor(&unk_140E28F90, 1u);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(&unk_140E28F90, 1u, &Dacl, 0);
        if ( Acl >= 0 )
          Acl = 0;
      }
    }
  }
  return Acl >= 0;
}
