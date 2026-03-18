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

unsigned __int8 *__fastcall RtlFindAceByType(__int64 a1, int a2, unsigned int *a3)
{
  unsigned __int8 *v3; // r11
  unsigned int i; // r9d

  if ( a1 )
  {
    v3 = (unsigned __int8 *)(a1 + 8);
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 4); ++i )
    {
      if ( a3 )
      {
        if ( i >= *a3 && *v3 == a2 )
        {
          *a3 = i;
          return v3;
        }
      }
      else if ( *v3 == a2 )
      {
        return v3;
      }
      v3 += *((unsigned __int16 *)v3 + 1);
    }
  }
  return 0LL;
}
