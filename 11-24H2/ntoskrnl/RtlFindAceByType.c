/*
 * XREFs of RtlFindAceByType @ 0x140404D90
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14041D070 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x1404EC31C (SepMandatorySubProcessToken.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140698064 (AdtpBuildContextFromSecurityDescriptor.c)
 *     SepSDContainsAttributeACE @ 0x140795224 (SepSDContainsAttributeACE.c)
 *     RtlpSetSecurityObject @ 0x140855250 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x140856BA0 (RtlpValidFilterAclSubjectContext.c)
 *     SeQueryMandatoryLabel @ 0x14086DA0C (SeQueryMandatoryLabel.c)
 *     RtlpCopyAces @ 0x14090CC00 (RtlpCopyAces.c)
 *     RtlpInheritAcl2 @ 0x14090D650 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 * Callees:
 *     <none>
 */

PVOID __cdecl RtlFindAceByType(PACL Acl, UCHAR AceType, PULONG Index)
{
  PACL v3; // r11
  unsigned int i; // r9d

  if ( Acl )
  {
    v3 = Acl + 1;
    for ( i = 0; i < Acl->AceCount; ++i )
    {
      if ( Index )
      {
        if ( i >= *Index && v3->AclRevision == AceType )
        {
          *Index = i;
          return v3;
        }
      }
      else if ( v3->AclRevision == AceType )
      {
        return v3;
      }
      v3 = (PACL)((char *)v3 + v3->AclSize);
    }
  }
  return 0LL;
}
