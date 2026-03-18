/*
 * XREFs of RtlGetSaclSecurityDescriptor @ 0x140A23240
 * Callers:
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14068BC94 (AdtpBuildContextFromSecurityDescriptor.c)
 *     RtlReplaceSidInSd @ 0x140771C10 (RtlReplaceSidInSd.c)
 *     SepSDContainsAttributeACE @ 0x1407855F0 (SepSDContainsAttributeACE.c)
 *     CmpCopySaclToVirtualKey @ 0x1407CD3BC (CmpCopySaclToVirtualKey.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407CD700 (CmpExamineSaclForAuditEvent.c)
 *     NtSetSecurityObject @ 0x14086E8B0 (NtSetSecurityObject.c)
 *     IopGetSecurityDescriptorInformation @ 0x14099CA18 (IopGetSecurityDescriptorInformation.c)
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
