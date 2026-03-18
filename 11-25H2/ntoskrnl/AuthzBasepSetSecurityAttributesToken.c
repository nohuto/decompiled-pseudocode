/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x140291638
 * Callers:
 *     SepInternalSetSecurityAttributesToken @ 0x1402914F4 (SepInternalSetSecurityAttributesToken.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140291ED8 (SepVerifyDesktopAppxPackageName.c)
 *     SepDesktopAppxSubProcessToken @ 0x14029223C (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405FC42C (SepDesktopAppModifyTokenBreakaway.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x1405FCCE0 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405FCDF0 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x1405FCF90 (SepSetSingletonEntry.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140800C20 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepSetProcessUniqueAttribute @ 0x140A0D02C (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x140A53380 (SepCreateClaimAttributes.c)
 *     SepAddTokenOriginClaim @ 0x140A93A94 (SepAddTokenOriginClaim.c)
 *     NtSetInformationToken @ 0x140ACC810 (NtSetInformationToken.c)
 * Callees:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140291740 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x1402919FC (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140291CAC (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x14035F840 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14035F908 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x14068B8B4 (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r14d
  int v7; // ebx
  __int64 v8; // rbp
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  if ( a3 )
  {
    v7 = AuthzBasepValidateSecurityAttributes(a3);
    if ( v7 >= 0 )
    {
      if ( v3 == 1 )
        AuthzBasepDeleteAllSecurityAttributes(a1);
      v8 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(a3 + 8) + 40 * v8;
          if ( v3 == 1 )
            goto LABEL_11;
          v10 = a2[v8];
          if ( v10 )
            break;
          v7 = 0;
LABEL_13:
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 4) )
            goto LABEL_14;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_20;
LABEL_11:
            v13 = AuthzBasepReplaceSecurityAttribute(a1, v9);
          }
          else
          {
            v13 = AuthzBasepDeleteSecurityAttribute(a1, v9);
          }
        }
        else
        {
          v13 = AuthzBasepAddSecurityAttribute(a1, v9);
        }
        v7 = v13;
        if ( v13 < 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList();
    v7 = 0;
  }
  else
  {
LABEL_20:
    v7 = -1073741811;
  }
LABEL_14:
  AuthzBasepFinaliseSecurityAttributesList(a1, v7 >= 0);
  return (unsigned int)v7;
}
