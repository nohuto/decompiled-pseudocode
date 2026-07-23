/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0
 * Callers:
 *     AuthzBasepEvaluateAceCondition @ 0x140323B60 (AuthzBasepEvaluateAceCondition.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1403B7650 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403BAF3C (SepVerifyDesktopAppxPackageName.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1403E2EE0 (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x140810ED0 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 *     SepCreateClaimAttributes @ 0x140A4EA70 (SepCreateClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140A565F0 (SepDuplicateClaimAttributes.c)
 *     SepDeleteClaimAttributes @ 0x140A71894 (SepDeleteClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x140AD6F50 (SepTokenDeleteMethod.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x1403BAD50 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  void **v2; // r15
  void ***v3; // rbx
  void **v4; // rcx
  void **v5; // rax
  void **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rdx
  void **v9; // rax
  char *v10; // r14
  _QWORD **v11; // r8
  void **v12; // rdx
  int v13; // eax
  char *v14; // r11
  PVOID v15; // r11

  v2 = (void **)(a1 + 2);
  while ( 1 )
  {
    v3 = (void ***)*v2;
    if ( *v2 == v2 )
      break;
    if ( ((_DWORD)v3[7] & 1) != 0 )
    {
      v4 = *v3;
      if ( (*v3)[1] != v3 || (v5 = v3[1], *v5 != v3) )
LABEL_14:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *((_DWORD *)v3 + 14) &= ~1u;
      if ( a1 )
        --*a1;
    }
    v6 = (void **)(v3 + 9);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      if ( (v7[4] & 2) != 0 )
      {
        v11 = (_QWORD **)v7[2];
        if ( v11[1] != v7 + 2 )
          goto LABEL_14;
        v12 = (void **)v7[3];
        if ( *v12 != v7 + 2 )
          goto LABEL_14;
        *v12 = v11;
        v11[1] = v12;
        *((_DWORD *)v7 + 8) &= ~2u;
        --*((_DWORD *)v3 + 22);
      }
      if ( (v7[4] & 1) != 0 )
      {
        v8 = (_QWORD *)*v7;
        if ( *(_QWORD **)(*v7 + 8LL) != v7 )
          goto LABEL_14;
        v9 = (void **)v7[1];
        if ( *v9 != v7 )
          goto LABEL_14;
        *v9 = v8;
        v8[1] = v9;
        *((_DWORD *)v7 + 8) &= ~1u;
        --*((_DWORD *)v3 + 15);
        if ( (v7[4] & 4) != 0 )
          --*((_DWORD *)v3 + 16);
      }
      ExFreePoolWithTag(v7, 0);
    }
    v10 = (char *)v3[12];
    while ( v10 != (char *)(v3 + 12) )
    {
      v13 = *((_DWORD *)v10 + 4);
      v14 = v10 - 16;
      v10 = *(char **)v10;
      if ( (v13 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v14, 0LL);
        ExFreePoolWithTag(v15, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
}
