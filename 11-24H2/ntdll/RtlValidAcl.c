/*
 * XREFs of RtlValidAcl @ 0x1800194E0
 * Callers:
 *     RtlAddAccessAllowedAceEx @ 0x180018110 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAce @ 0x180018830 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x180018E20 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180018F50 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180019910 (RtlValidSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18001C110 (RtlCheckTokenCapability.c)
 *     RtlAddMandatoryAce @ 0x1800C05A0 (RtlAddMandatoryAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1800E7C10 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1800F1780 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180107530 (RtlAddProcessTrustLabelAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x180137D30 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x180138F00 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1801391B0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1801396C0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x180139890 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     RtlpValidObjectAce @ 0x18010FD94 (RtlpValidObjectAce.c)
 *     RtlpValidCompoundAce @ 0x18011D14C (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x18011D81C (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x18011DF80 (RtlpValidAttributeAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  unsigned __int16 *p_AclSize; // r14
  PACL v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // r13d
  ACL *v7; // rdx
  unsigned __int16 *v8; // r15
  unsigned __int64 v9; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax
  BOOLEAN result; // al

  if ( (unsigned __int8)(Acl->AclRevision - 2) <= 2u )
  {
    p_AclSize = &Acl->AclSize;
    if ( (unsigned __int16 *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize )
      return 0;
    if ( *p_AclSize < 8u )
      return 0;
    v3 = Acl + 1;
    v4 = 0;
    v5 = 1730063;
    v6 = 104928;
    while ( 1 )
    {
      if ( v4 >= Acl->AceCount )
        return 1;
      v7 = (PACL)((char *)Acl + *p_AclSize);
      if ( &v3->AceCount > (unsigned __int16 *)v7 )
        return 0;
      v8 = &v3->AclSize;
      if ( (unsigned __int16 *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
        return 0;
      v9 = *v8;
      if ( (PACL)((char *)v3 + v9) > v7 )
        return 0;
      AclRevision = v3->AclRevision;
      if ( (unsigned __int8)AclRevision <= 0x14u && _bittest(&v5, AclRevision) )
      {
        if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
          return 0;
        if ( (unsigned int)v9 < 0x10 )
          return 0;
        if ( v3[1].AclRevision != 1 )
          return 0;
        Sbz1 = v3[1].Sbz1;
        if ( (unsigned __int8)Sbz1 > 0xFu || v9 < 4 * Sbz1 + 16 )
          return 0;
      }
      else if ( (_BYTE)AclRevision == 4 )
      {
        if ( Acl->AclRevision < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
      {
        if ( Acl->AclRevision < 4u )
          return 0;
        result = RtlpValidObjectAce(v3);
        if ( !result )
          return result;
      }
      else if ( (_BYTE)AclRevision == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( (_BYTE)AclRevision == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v9 < 4 )
      {
        return 0;
      }
      v3 = (PACL)((char *)v3 + *v8);
      ++v4;
    }
  }
  return 0;
}
