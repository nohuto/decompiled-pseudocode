/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x140A211D0
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140698064 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x140780D90 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x140795224 (SepSDContainsAttributeACE.c)
 *     CmpCopySaclToVirtualKey @ 0x1407DD0CC (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407DD410 (CmpExamineSaclForAuditEvent.c)
 *     NtSetSecurityObject @ 0x1409118E0 (NtSetSecurityObject.c)
 *     IopGetSecurityDescriptorInformation @ 0x140A6073C (IopGetSecurityDescriptorInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlGetSaclSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PBOOLEAN SaclPresent,
        PACL *Sacl,
        PBOOLEAN SaclDefaulted)
{
  ACL *v4; // rax
  __int16 v6; // dx
  __int64 v7; // rdx

  if ( *(_BYTE *)SecurityDescriptor != 1 )
    return -1073741736;
  v4 = 0LL;
  if ( (*((_BYTE *)SecurityDescriptor + 2) & 0x10) != 0 )
  {
    *SaclPresent = 1;
    v6 = *((_WORD *)SecurityDescriptor + 1);
    if ( (v6 & 0x10) != 0 )
    {
      if ( v6 >= 0 )
      {
        v4 = (ACL *)*((_QWORD *)SecurityDescriptor + 3);
      }
      else
      {
        v7 = *((unsigned int *)SecurityDescriptor + 3);
        if ( (_DWORD)v7 )
          v4 = (ACL *)((char *)SecurityDescriptor + v7);
      }
    }
    *Sacl = v4;
    *SaclDefaulted = (*((_BYTE *)SecurityDescriptor + 2) & 0x20) != 0;
  }
  else
  {
    *SaclPresent = 0;
  }
  return 0;
}
