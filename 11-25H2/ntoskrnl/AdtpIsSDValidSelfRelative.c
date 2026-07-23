/*
 * XREFs of AdtpIsSDValidSelfRelative @ 0x14068C17C
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1404037E0 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlGetControlSecurityDescriptor @ 0x140A4CA40 (RtlGetControlSecurityDescriptor.c)
 */

__int64 __fastcall AdtpIsSDValidSelfRelative(PSECURITY_DESCRIPTOR SecurityDescriptor, bool *a2)
{
  NTSTATUS ControlSecurityDescriptor; // ebx
  WORD Control; // [rsp+40h] [rbp+8h] BYREF
  ULONG Revision; // [rsp+50h] [rbp+18h] BYREF

  ControlSecurityDescriptor = 0;
  if ( !SecurityDescriptor )
    return 3221225485LL;
  if ( !RtlValidSecurityDescriptor(SecurityDescriptor) )
    return 3221225593LL;
  if ( a2 )
  {
    Control = 0;
    ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(SecurityDescriptor, &Control, &Revision);
    if ( ControlSecurityDescriptor >= 0 )
      *a2 = (Control & 0x8000u) != 0;
  }
  return (unsigned int)ControlSecurityDescriptor;
}
