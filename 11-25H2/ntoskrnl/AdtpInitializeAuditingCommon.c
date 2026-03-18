/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x140801E28
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C29E70 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x14068C0E0 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140801E68 (AdtpInitializeDriveLetters.c)
 */

NTSTATUS AdtpInitializeAuditingCommon()
{
  NTSTATUS result; // eax
  NTSTATUS v1; // ebx

  AdtpNullSid = 257;
  AdtpRegisteredWithEtw = 1;
  result = AdtpInitializeDriveLetters();
  if ( result >= 0 )
  {
    result = AdtpObjsInitialize();
    v1 = result;
    if ( result >= 0 )
    {
      AdtpDbInitializePrivilegeObject();
      return v1;
    }
  }
  return result;
}
