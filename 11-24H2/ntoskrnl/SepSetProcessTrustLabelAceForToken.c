/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x1403EB390
 * Callers:
 *     NtDuplicateToken @ 0x1408E67E0 (NtDuplicateToken.c)
 *     SepFinalizeTokenAcls @ 0x1408E6CA0 (SepFinalizeTokenAcls.c)
 *     SeCopyClientToken @ 0x1408E7698 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1408E7A20 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ObSetSecurityObjectByPointer @ 0x140854A90 (ObSetSecurityObjectByPointer.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x140910700 (RtlAddAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140911760 (RtlAddProcessTrustLabelAce.c)
 *     ObGetObjectSecurity @ 0x1409A9A80 (ObGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1409C2110 (ObReleaseObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1409DFFE0 (RtlQueryInformationAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A04030 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *Object)
{
  ACL *v2; // r14
  ULONG v3; // r12d
  int v4; // r13d
  unsigned __int8 *v5; // r15
  NTSTATUS result; // eax
  _WORD *v7; // rdi
  NTSTATUS Acl; // ebx
  __int16 v9; // ax
  ULONG v10; // ebx
  ACL *Pool2; // rax
  ACL *v12; // rsi
  __int64 v13; // rax
  ACL *v14; // rsi
  ACL *v15; // rbx
  unsigned int i; // ecx
  BOOLEAN v17[4]; // [rsp+30h] [rbp-78h] BYREF
  ULONG v18; // [rsp+34h] [rbp-74h] BYREF
  PSECURITY_DESCRIPTOR v19; // [rsp+38h] [rbp-70h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h]
  __int64 AclInformation; // [rsp+68h] [rbp-40h] BYREF
  int v23; // [rsp+70h] [rbp-38h]

  AclInformation = 0LL;
  v19 = 0LL;
  v17[0] = 0;
  v2 = 0LL;
  v23 = 0;
  v18 = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v21 = 0LL;
  if ( !Object )
    return -1073741811;
  v3 = 2;
  v4 = 8;
  v5 = (unsigned __int8 *)Object[138];
  result = ObGetObjectSecurity(Object, &v19, v17);
  v7 = v19;
  Acl = result;
  if ( result < 0 )
    goto LABEL_36;
  if ( !v19 )
    return result;
  v9 = *((_WORD *)v19 + 1);
  if ( (v9 & 0x10) == 0 )
    goto LABEL_5;
  if ( v9 >= 0 )
  {
    v14 = (ACL *)*((_QWORD *)v19 + 3);
  }
  else
  {
    v13 = *((unsigned int *)v19 + 3);
    if ( !(_DWORD)v13 )
    {
LABEL_5:
      Acl = 0;
      goto LABEL_6;
    }
    v14 = (ACL *)((char *)v19 + v13);
  }
  if ( !v14 )
    goto LABEL_5;
  v2 = v14 + 1;
  v15 = v14 + 1;
  for ( i = 0; i < v14->AceCount; ++i )
  {
    if ( v15->AclRevision == 20 )
      goto LABEL_23;
    v15 = (ACL *)((char *)v15 + v15->AclSize);
  }
  v15 = 0LL;
LABEL_23:
  if ( !v5 )
  {
    if ( v15 )
      goto LABEL_26;
LABEL_35:
    Acl = 0;
    goto LABEL_36;
  }
  if ( v15 && RtlEqualSid(&v15[1], v5) )
  {
    *(_DWORD *)&v15->AceCount &= 0x2001Eu;
    goto LABEL_35;
  }
LABEL_26:
  Acl = RtlQueryInformationAcl(v14, &AclInformation, 0xCu, AclSizeInformation);
  if ( Acl >= 0 )
  {
    v4 = HIDWORD(AclInformation);
    Acl = RtlQueryInformationAcl(v14, &v18, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      v3 = v18;
      if ( (unsigned __int8)(v14->AclRevision - 2) <= 2u )
      {
        Acl = 0;
        if ( !v14->AceCount )
        {
          Acl = -1073741811;
          goto LABEL_36;
        }
        if ( v2 < (ACL *)((char *)v14 + v14->AclSize) )
        {
LABEL_6:
          if ( v5 )
          {
            v10 = v4 + 4 * v5[1] + 16;
            Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v10, 0x63416553u);
            v12 = Pool2;
            if ( Pool2 )
            {
              Acl = RtlCreateAcl(Pool2, v10, v3);
              if ( Acl >= 0 )
              {
                if ( !v2 || (Acl = RtlAddAce(v12, v3, 0, v2, HIDWORD(AclInformation) - 8), Acl >= 0) )
                {
                  Acl = RtlAddProcessTrustLabelAce(v12, 2u, 0, v5, 0x14u, 0x2001Eu);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v12, 0);
                      if ( Acl >= 0 )
                      {
                        WORD1(SecurityDescriptor[0]) |= v7[1] & 0x2830;
                        Acl = ObSetSecurityObjectByPointer(Object, 504LL, SecurityDescriptor);
                      }
                    }
                  }
                }
              }
              ExFreePoolWithTag(v12, 0);
            }
            else
            {
              Acl = -1073741670;
            }
          }
          goto LABEL_36;
        }
      }
      Acl = -1073741811;
    }
  }
LABEL_36:
  if ( v7 )
    ObReleaseObjectSecurity(v7, v17[0]);
  return Acl;
}
