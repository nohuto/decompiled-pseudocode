/*
 * XREFs of RtlFindAceByType @ 0x1404052C0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140430E30 (SeComputeAutoInheritByObjectTypeEx.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x14068BC94 (AdtpBuildContextFromSecurityDescriptor.c)
 *     SepSDContainsAttributeACE @ 0x1407855F0 (SepSDContainsAttributeACE.c)
 *     SeQueryMandatoryLabel @ 0x140903F5C (SeQueryMandatoryLabel.c)
 *     RtlpSetSecurityObject @ 0x14091A030 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x14091B890 (RtlpValidFilterAclSubjectContext.c)
 *     RtlpCopyAces @ 0x140926990 (RtlpCopyAces.c)
 *     RtlpInheritAcl2 @ 0x1409273F0 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
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
