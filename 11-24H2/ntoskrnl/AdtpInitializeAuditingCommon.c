/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1408119A0
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C3B150 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x140697430 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1408119E0 (AdtpInitializeDriveLetters.c)
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
