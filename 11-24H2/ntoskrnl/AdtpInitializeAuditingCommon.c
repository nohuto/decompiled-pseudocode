/*
 * XREFs of AdtpInitializeAuditingCommon @ 0x1408120E0
 * Callers:
 *     SepAdtInitializeAuditingOptions @ 0x140C3D2A8 (SepAdtInitializeAuditingOptions.c)
 * Callees:
 *     AdtpDbInitializePrivilegeObject @ 0x1406984B0 (AdtpDbInitializePrivilegeObject.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140812120 (AdtpInitializeDriveLetters.c)
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
