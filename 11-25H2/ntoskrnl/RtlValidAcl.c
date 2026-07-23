/*
 * XREFs of RtlValidAcl @ 0x14092A320
 * Callers:
 *     RtlAddAccessFilterAce @ 0x140770930 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x140770C50 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140771014 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140787308 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140787544 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1407876A4 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1407B3370 (CMFCreateSecurityDescriptor.c)
 *     SepCreateImpersonationTokenDacl @ 0x1408A2270 (SepCreateImpersonationTokenDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408A43D0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlAddAccessAllowedAceEx @ 0x1409170C0 (RtlAddAccessAllowedAceEx.c)
 *     LocalGetAclForString @ 0x140917620 (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x140918E20 (RtlAddProcessTrustLabelAce.c)
 *     SddlAddMandatoryAce @ 0x1409193A8 (SddlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14091BF80 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x140927AA0 (RtlpNewSecurityObject.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x14092AE40 (RtlAddMandatoryAce.c)
 *     RtlAddAce @ 0x14092B010 (RtlAddAce.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409A6F20 (RtlAddAccessAllowedAce.c)
 *     SeValidSecurityDescriptor @ 0x1409EFAF0 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x140A5C430 (RtlDeleteAce.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x140771504 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x140771670 (RtlpValidCompoundAce.c)
 *     RtlpValidAttributeAce @ 0x140999538 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x140999C24 (RtlpValidObjectAce.c)
 */

BOOLEAN __cdecl RtlValidAcl(PACL Acl)
{
  USHORT *p_AclSize; // rbp
  PACL v3; // rdi
  unsigned int v4; // esi
  int v5; // r15d
  int v6; // r12d
  ACL *v7; // rdx
  USHORT *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int AclRevision; // edx
  __int64 Sbz1; // rax

  if ( (unsigned __int8)(Acl->AclRevision - 2) > 2u )
    return 0;
  p_AclSize = &Acl->AclSize;
  if ( (USHORT *)(((unsigned __int64)&Acl->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &Acl->AclSize || *p_AclSize < 8u )
    return 0;
  v3 = Acl + 1;
  v4 = 0;
  v5 = 1730063;
  v6 = 104928;
  while ( v4 < Acl->AceCount )
  {
    v7 = (PACL)((char *)Acl + *p_AclSize);
    if ( &v3->AceCount > (USHORT *)v7 )
      return 0;
    v8 = &v3->AclSize;
    if ( (USHORT *)(((unsigned __int64)&v3->AclSize + 1) & 0xFFFFFFFFFFFFFFFEuLL) != &v3->AclSize )
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
      if ( Acl->AclRevision < 3u || !RtlpValidCompoundAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned __int8)AclRevision <= 0x10u && _bittest(&v6, AclRevision) )
    {
      if ( Acl->AclRevision < 4u || !(unsigned __int8)RtlpValidObjectAce(v3) )
        return 0;
    }
    else if ( (_BYTE)AclRevision == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v3) )
        return 0;
    }
    else if ( (_BYTE)AclRevision == 21 )
    {
      if ( !RtlpValidAccessFilterAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned int)v9 < 4 )
    {
      return 0;
    }
    v3 = (PACL)((char *)v3 + *v8);
    ++v4;
  }
  return 1;
}
