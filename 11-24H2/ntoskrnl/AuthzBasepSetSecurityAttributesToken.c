/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x140357454
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140355758 (SepVerifyDesktopAppxPackageName.c)
 *     SepDesktopAppxSubProcessToken @ 0x140355ABC (SepDesktopAppxSubProcessToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1403571CC (SepInternalSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403642B0 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1406088BC (SepDesktopAppModifyTokenBreakaway.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140609170 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1406092E0 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140609480 (SepSetSingletonEntry.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810790 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepSetProcessUniqueAttribute @ 0x140A32FD4 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x140A56BE0 (SepCreateClaimAttributes.c)
 *     SepAddTokenOriginClaim @ 0x140A97DE0 (SepAddTokenOriginClaim.c)
 *     NtSetInformationToken @ 0x140AD6C10 (NtSetInformationToken.c)
 * Callees:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140357560 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x14035782C (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140357ADC (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x140357B4C (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140357C3C (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x140696C04 (AuthzBasepDeleteAllSecurityAttributes.c)
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
