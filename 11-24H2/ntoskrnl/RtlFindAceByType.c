/*
 * XREFs of RtlFindAceByType @ 0x14040C700
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140428F20 (SeComputeAutoInheritByObjectTypeEx.c)
 *     SepMandatorySubProcessToken @ 0x1404EF064 (SepMandatorySubProcessToken.c)
 *     AdtpBuildContextFromSecurityDescriptor @ 0x140696FE4 (AdtpBuildContextFromSecurityDescriptor.c)
 *     SepSDContainsAttributeACE @ 0x1407949C0 (SepSDContainsAttributeACE.c)
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x14085A8C0 (RtlpValidFilterAclSubjectContext.c)
 *     SeQueryMandatoryLabel @ 0x1408696DC (SeQueryMandatoryLabel.c)
 *     RtlpCopyAces @ 0x140919190 (RtlpCopyAces.c)
 *     RtlpInheritAcl2 @ 0x140919BE0 (RtlpInheritAcl2.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
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
