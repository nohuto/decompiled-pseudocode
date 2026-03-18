/*
 * XREFs of RtlValidAcl @ 0x14091CB10
 * Callers:
 *     RtlAddAccessFilterAce @ 0x14077FB80 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14077FEA0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x140780264 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x1407966D8 (SddlAddAccessFilterAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140796914 (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140796A74 (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C187C (CMFCreateSecurityDescriptor.c)
 *     SepCreateImpersonationTokenDacl @ 0x140855E70 (SepCreateImpersonationTokenDacl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14085B000 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x1408651F0 (RtlAddAccessAllowedAceEx.c)
 *     LocalGetAclForString @ 0x140865750 (LocalGetAclForString.c)
 *     RtlAddProcessTrustLabelAce @ 0x140866F50 (RtlAddProcessTrustLabelAce.c)
 *     SddlAddMandatoryAce @ 0x1408674D8 (SddlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x140867870 (RtlValidSecurityDescriptor.c)
 *     SepAppendAceToTokenObjectAcl @ 0x14090F590 (SepAppendAceToTokenObjectAcl.c)
 *     RtlpNewSecurityObject @ 0x14091A290 (RtlpNewSecurityObject.c)
 *     RtlAddAce @ 0x14091CC90 (RtlAddAce.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x14091D840 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     RtlAddAccessAllowedAce @ 0x1409A7460 (RtlAddAccessAllowedAce.c)
 *     SeValidSecurityDescriptor @ 0x1409EA4E0 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x140A5E0A0 (RtlDeleteAce.c)
 * Callees:
 *     RtlpValidAccessFilterAce @ 0x140780754 (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x1407808C0 (RtlpValidCompoundAce.c)
 *     RtlpValidAttributeAce @ 0x14099EDA8 (RtlpValidAttributeAce.c)
 *     RtlpValidObjectAce @ 0x14099EF7C (RtlpValidObjectAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // rbp
  unsigned __int8 *v3; // rdi
  unsigned int v4; // esi
  int v5; // r15d
  int v6; // r12d
  unsigned __int64 v7; // rdx
  unsigned __int16 *v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) > 2u )
    return 0;
  v2 = (_WORD *)(a1 + 2);
  if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 || *v2 < 8u )
    return 0;
  v3 = (unsigned __int8 *)(a1 + 8);
  v4 = 0;
  v5 = 1730063;
  v6 = 104928;
  while ( v4 < *(unsigned __int16 *)(a1 + 4) )
  {
    v7 = a1 + (unsigned __int16)*v2;
    if ( (unsigned __int64)(v3 + 4) > v7 )
      return 0;
    v8 = (unsigned __int16 *)(v3 + 2);
    if ( (unsigned __int8 *)((unsigned __int64)(v3 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v3 + 2 )
      return 0;
    v9 = *v8;
    if ( (unsigned __int64)&v3[v9] > v7 )
      return 0;
    v10 = *v3;
    if ( (unsigned __int8)v10 <= 0x14u && _bittest(&v5, v10) )
    {
      if ( ((v9 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
        return 0;
      if ( (unsigned int)v9 < 0x10 )
        return 0;
      if ( v3[8] != 1 )
        return 0;
      v11 = v3[9];
      if ( (unsigned __int8)v11 > 0xFu || v9 < 4 * v11 + 16 )
        return 0;
    }
    else if ( (_BYTE)v10 == 4 )
    {
      if ( *(_BYTE *)a1 < 3u || !RtlpValidCompoundAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned __int8)v10 <= 0x10u && _bittest(&v6, v10) )
    {
      if ( *(_BYTE *)a1 < 4u || !(unsigned __int8)RtlpValidObjectAce(v3) )
        return 0;
    }
    else if ( (_BYTE)v10 == 18 )
    {
      if ( !(unsigned __int8)RtlpValidAttributeAce(v3) )
        return 0;
    }
    else if ( (_BYTE)v10 == 21 )
    {
      if ( !RtlpValidAccessFilterAce((__int64)v3) )
        return 0;
    }
    else if ( (unsigned int)v9 < 4 )
    {
      return 0;
    }
    v3 += *v8;
    ++v4;
  }
  return 1;
}
