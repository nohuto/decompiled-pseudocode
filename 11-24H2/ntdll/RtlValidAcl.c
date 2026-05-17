/*
 * XREFs of RtlValidAcl @ 0x180039260
 * Callers:
 *     RtlAddAccessAllowedAceEx @ 0x180037E90 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAce @ 0x1800385B0 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x180038BA0 (RtlAddAccessAllowedAce.c)
 *     RtlpAddKnownAce @ 0x180038CD0 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x180039690 (RtlValidSecurityDescriptor.c)
 *     RtlCheckTokenMembershipEx @ 0x180039A70 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18003BE90 (RtlCheckTokenCapability.c)
 *     RtlAddMandatoryAce @ 0x1800C89E0 (RtlAddMandatoryAce.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1800EC5D0 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1800F71F0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x18010C7F0 (RtlAddProcessTrustLabelAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x180139B00 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x18013ACD0 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x18013AF80 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x18013B100 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x18013B490 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x18013B660 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     RtlpValidObjectAce @ 0x180114A84 (RtlpValidObjectAce.c)
 *     RtlpValidCompoundAce @ 0x18011EF1C (RtlpValidCompoundAce.c)
 *     RtlpValidAccessFilterAce @ 0x18011F5EC (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x18011FD50 (RtlpValidAttributeAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r14
  unsigned __int8 *v3; // rdi
  unsigned int v4; // esi
  int v5; // r12d
  int v6; // r13d
  unsigned __int64 v7; // rdx
  unsigned __int16 *v8; // r15
  unsigned __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rax
  char result; // al

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 )
      return 0;
    if ( *v2 < 8u )
      return 0;
    v3 = (unsigned __int8 *)(a1 + 8);
    v4 = 0;
    v5 = 1730063;
    v6 = 104928;
    while ( 1 )
    {
      if ( v4 >= *(unsigned __int16 *)(a1 + 4) )
        return 1;
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
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)v10 <= 0x10u && _bittest(&v6, v10) )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        result = RtlpValidObjectAce(v3);
        if ( !result )
          return result;
      }
      else if ( (_BYTE)v10 == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( (_BYTE)v10 == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v9 < 4 )
      {
        return 0;
      }
      v3 += *v8;
      ++v4;
    }
  }
  return 0;
}
