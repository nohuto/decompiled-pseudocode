/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC
 * Callers:
 *     SepInternalSetSecurityAttributesToken @ 0x1403B9324 (SepInternalSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     SepDesktopAppxSubProcessToken @ 0x1404EBED4 (SepDesktopAppxSubProcessToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140606010 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140607388 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140607780 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140607920 (SepSetSingletonEntry.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810ED0 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepSetProcessUniqueAttribute @ 0x140A26FE4 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x140A4EA70 (SepCreateClaimAttributes.c)
 *     SepAddTokenOriginClaim @ 0x140A94630 (SepAddTokenOriginClaim.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     AuthzBasepDeleteSecurityAttribute @ 0x1403B8958 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1403B8A94 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1403B8B5C (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403B8CD0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x1403B8F9C (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140697CD4 (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // eax

  v4 = *a2;
  if ( a3 )
  {
    v8 = AuthzBasepValidateSecurityAttributes(a3);
    if ( v8 >= 0 )
    {
      if ( v4 == 1 )
        AuthzBasepDeleteAllSecurityAttributes(a1);
      v9 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(a3 + 8) + 40 * v9;
          if ( v4 == 1 )
            goto LABEL_11;
          v11 = a2[v9];
          if ( v11 )
            break;
          v8 = 0;
LABEL_13:
          v9 = (unsigned int)(v9 + 1);
          if ( (unsigned int)v9 >= *(_DWORD *)(a3 + 4) )
            goto LABEL_14;
        }
        v12 = v11 - 2;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 != 1 )
              goto LABEL_18;
LABEL_11:
            v14 = AuthzBasepReplaceSecurityAttribute(a1, v10);
          }
          else
          {
            v14 = AuthzBasepDeleteSecurityAttribute(a1, v10);
          }
        }
        else
        {
          v14 = AuthzBasepAddSecurityAttribute(a1, v10);
        }
        v8 = v14;
        if ( v14 < 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  else if ( v4 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList(a1, a2, 0LL, a4);
    v8 = 0;
  }
  else
  {
LABEL_18:
    v8 = -1073741811;
  }
LABEL_14:
  AuthzBasepFinaliseSecurityAttributesList(a1, v8 >= 0);
  return (unsigned int)v8;
}
