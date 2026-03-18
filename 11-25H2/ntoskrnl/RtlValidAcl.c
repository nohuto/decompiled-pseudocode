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
