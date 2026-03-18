/*
 * XREFs of SepSetProcessTrustLabelAceForToken @ 0x140363E20
 * Callers:
 *     NtDuplicateToken @ 0x14090F090 (NtDuplicateToken.c)
 *     SepFinalizeTokenAcls @ 0x14090F550 (SepFinalizeTokenAcls.c)
 *     SeCopyClientToken @ 0x14090FF48 (SeCopyClientToken.c)
 *     PsImpersonateClient @ 0x1409102D0 (PsImpersonateClient.c)
 * Callees:
 *     RtlEqualSid @ 0x140364150 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ObSetSecurityObjectByPointer @ 0x1408587B0 (ObSetSecurityObjectByPointer.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlAddProcessTrustLabelAce @ 0x140866F50 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x14091CC90 (RtlAddAce.c)
 *     ObGetObjectSecurity @ 0x1409B26F0 (ObGetObjectSecurity.c)
 *     ObReleaseObjectSecurity @ 0x1409D22E0 (ObReleaseObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x1409E5750 (RtlQueryInformationAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A07B00 (RtlSetSaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall SepSetProcessTrustLabelAceForToken(_QWORD *Object)
{
  char *v2; // r14
  ULONG v3; // r12d
  int v4; // r13d
  unsigned __int8 *v5; // r15
  NTSTATUS result; // eax
  _WORD *v7; // rdi
  NTSTATUS InformationAcl; // ebx
  __int16 v9; // ax
  ULONG v10; // ebx
  ACL *Pool2; // rax
  ACL *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  char *v15; // rsi
  char *v16; // rbx
  unsigned int i; // ecx
  ULONG AceListLength; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR v20; // [rsp+38h] [rbp-70h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]
  __int64 v23; // [rsp+68h] [rbp-40h] BYREF
  int v24; // [rsp+70h] [rbp-38h]

  v23 = 0LL;
  v20 = 0LL;
  LOBYTE(v19) = 0;
  v2 = 0LL;
  v24 = 0;
  HIDWORD(v19) = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v22 = 0LL;
  if ( !Object )
    return -1073741811;
  v3 = 2;
  v4 = 8;
  v5 = (unsigned __int8 *)Object[138];
  result = ObGetObjectSecurity(Object, &v20, (PBOOLEAN)&v19);
  v7 = v20;
  InformationAcl = result;
  if ( result < 0 )
    goto LABEL_36;
  if ( !v20 )
    return result;
  v9 = *((_WORD *)v20 + 1);
  if ( (v9 & 0x10) == 0 )
    goto LABEL_5;
  if ( v9 >= 0 )
  {
    v15 = (char *)*((_QWORD *)v20 + 3);
  }
  else
  {
    v14 = *((unsigned int *)v20 + 3);
    if ( !(_DWORD)v14 )
    {
LABEL_5:
      InformationAcl = 0;
      goto LABEL_6;
    }
    v15 = (char *)v20 + v14;
  }
  if ( !v15 )
    goto LABEL_5;
  v2 = v15 + 8;
  v16 = v15 + 8;
  for ( i = 0; i < *((unsigned __int16 *)v15 + 2); ++i )
  {
    if ( *v16 == 20 )
      goto LABEL_23;
    v16 += *((unsigned __int16 *)v16 + 1);
  }
  v16 = 0LL;
LABEL_23:
  if ( !v5 )
  {
    if ( v16 )
      goto LABEL_26;
LABEL_35:
    InformationAcl = 0;
    goto LABEL_36;
  }
  if ( v16 && RtlEqualSid(v16 + 8, v5) )
  {
    *((_DWORD *)v16 + 1) &= 0x2001Eu;
    goto LABEL_35;
  }
LABEL_26:
  InformationAcl = RtlQueryInformationAcl(v15, &v23, 12LL);
  if ( InformationAcl >= 0 )
  {
    v4 = HIDWORD(v23);
    InformationAcl = RtlQueryInformationAcl(v15, (char *)&v19 + 4, 4LL);
    if ( InformationAcl >= 0 )
    {
      v3 = HIDWORD(v19);
      if ( (unsigned __int8)(*v15 - 2) <= 2u )
      {
        InformationAcl = 0;
        if ( !*((_WORD *)v15 + 2) )
        {
          InformationAcl = -1073741811;
          goto LABEL_36;
        }
        if ( v2 < &v15[*((unsigned __int16 *)v15 + 1)] )
        {
LABEL_6:
          if ( v5 )
          {
            v10 = v4 + 4 * v5[1] + 16;
            Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
            v12 = Pool2;
            if ( Pool2 )
            {
              InformationAcl = RtlCreateAcl(Pool2, v10, v3);
              if ( InformationAcl >= 0 )
              {
                if ( !v2 || (InformationAcl = RtlAddAce(v12, v3, 0, v2, HIDWORD(v23) - 8), InformationAcl >= 0) )
                {
                  LOBYTE(AceListLength) = 20;
                  InformationAcl = RtlAddProcessTrustLabelAce(v12, 2LL, 0LL, v5, AceListLength, 131102, v19);
                  if ( InformationAcl >= 0 )
                  {
                    InformationAcl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                    if ( InformationAcl >= 0 )
                    {
                      LOBYTE(v13) = 1;
                      InformationAcl = RtlSetSaclSecurityDescriptor(SecurityDescriptor, v13, v12, 0LL);
                      if ( InformationAcl >= 0 )
                      {
                        WORD1(SecurityDescriptor[0]) |= v7[1] & 0x2830;
                        InformationAcl = ObSetSecurityObjectByPointer(Object, 504LL, SecurityDescriptor);
                      }
                    }
                  }
                }
              }
              ExFreePoolWithTag(v12, 0);
            }
            else
            {
              InformationAcl = -1073741670;
            }
          }
          goto LABEL_36;
        }
      }
      InformationAcl = -1073741811;
    }
  }
LABEL_36:
  if ( v7 )
    ObReleaseObjectSecurity(v7, v19);
  return InformationAcl;
}
