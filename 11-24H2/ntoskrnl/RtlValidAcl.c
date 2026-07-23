/*
 * XREFs of RtlValidAcl @ 0x140910580
 * Callers:
 *     RtlAddAccessFilterAce @ 0x14077FAB0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780194 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407967E8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796A24 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796B84 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x140833A70 (RtlValidRelativeSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x140835560 (SeValidSecurityDescriptor.c)
 *     SepCreateImpersonationTokenDacl @ 0x140852130 (SepCreateImpersonationTokenDacl.c)
 *     RtlAddAccessAllowedAceEx @ 0x140869800 (RtlAddAccessAllowedAceEx.c)
 *     LocalGetAclForString @ 0x140869D60 (LocalGetAclForString.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1408E6CE0 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpNewSecurityObject @ 0x14090DD00 (RtlpNewSecurityObject.c)
 *     RtlAddAce @ 0x140910700 (RtlAddAce.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1409112B0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlAddAccessAllowedAce @ 0x140911600 (RtlAddAccessAllowedAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140911760 (RtlAddProcessTrustLabelAce.c)
 *     SddlAddMandatoryAce @ 0x140911D60 (SddlAddMandatoryAce.c)
 *     RtlDeleteAce @ 0x140A564C0 (RtlDeleteAce.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x140780684 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1407807F0 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x14098353C (RtlpValidObjectAce.c)
 *     RtlpValidAttributeAce @ 0x1409835D0 (RtlpValidAttributeAce.c)
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
