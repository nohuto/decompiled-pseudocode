/*
 * XREFs of CMFCreateSecurityDescriptor @ 0x1407B3370
 * Callers:
 *     CMFCheckAccess @ 0x1407B3114 (CMFCheckAccess.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044F1F0 (RtlSubAuthoritySid.c)
 *     RtlLengthRequiredSid @ 0x140918FE0 (RtlLengthRequiredSid.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlValidAcl @ 0x14092A320 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlInitializeSid @ 0x1409EAF40 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, _DWORD *a2)
{
  PVOID *v2; // r14
  unsigned __int8 *v4; // r12
  unsigned __int8 *Src; // r13
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r15
  NTSTATUS Acl; // ebx
  void *Pool2; // rax
  unsigned __int8 *v10; // rbx
  int v11; // ebx
  unsigned __int8 *v12; // rax
  void *v13; // rax
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rax
  ULONG v16; // ebx
  ACL *v17; // rax
  ACL *v18; // r14
  int v19; // r9d
  int v20; // r9d
  unsigned int v21; // esi
  unsigned int v22; // r9d
  unsigned int v23; // r9d
  unsigned int v24; // r9d
  unsigned int v25; // r9d
  unsigned int v26; // esi
  void *v27; // rax
  _SID_IDENTIFIER_AUTHORITY v29; // [rsp+30h] [rbp-50h] BYREF
  void *v30; // [rsp+38h] [rbp-48h]
  PSID Sid; // [rsp+40h] [rbp-40h]
  __int64 v32; // [rsp+48h] [rbp-38h]
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v34; // [rsp+70h] [rbp-10h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+D0h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v37; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a1;
  *(_WORD *)&v29.Value[4] = 1280;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)v29.Value = 0;
  v34 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v37.Value = 0;
  v4 = 0LL;
  *(_WORD *)&v37.Value[4] = 3840;
  Src = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  if ( !a1 )
    return (unsigned int)-1073741811;
  *a1 = 0LL;
  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( (Acl & 0xC0000000) == 0xC0000000 )
    goto LABEL_72;
  RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  Sid = Pool2;
  if ( Pool2 )
  {
    Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      v10 = (unsigned __int8 *)Sid;
      *RtlSubAuthoritySid(Sid, 0) = 0;
      v11 = v10[1];
      RtlLengthRequiredSid(6u);
      v12 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
      Src = v12;
      if ( v12 )
      {
        RtlInitializeSid(v12, &v29, 6u);
        *RtlSubAuthoritySid(Src, 0) = 80;
        *RtlSubAuthoritySid(Src, 1u) = 956008885;
        *RtlSubAuthoritySid(Src, 2u) = -876444647;
        *RtlSubAuthoritySid(Src, 3u) = 1831038044;
        *RtlSubAuthoritySid(Src, 4u) = 1853292631;
        *RtlSubAuthoritySid(Src, 5u) = -2023488832;
        *(_DWORD *)IdentifierAuthority.Value = v11 + Src[1];
        v32 = RtlLengthRequiredSid(2u);
        v13 = (void *)ExAllocatePool2(0x100uLL);
        v30 = v13;
        v6 = (unsigned __int8 *)v13;
        if ( v13 )
        {
          Acl = RtlInitializeSid(v13, &v37, 2u);
          if ( (Acl & 0xC0000000) == 0xC0000000 )
            goto LABEL_64;
          *RtlSubAuthoritySid(v6, 0) = 2;
          *RtlSubAuthoritySid(v6, 1u) = 1;
          *(_DWORD *)IdentifierAuthority.Value += v6[1];
          v14 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
          v7 = v14;
          if ( v14 )
          {
            Acl = RtlInitializeSid(v14, &v37, 2u);
            if ( (Acl & 0xC0000000) == 0xC0000000 )
              goto LABEL_64;
            *RtlSubAuthoritySid(v7, 0) = 2;
            *RtlSubAuthoritySid(v7, 1u) = 2;
            *(_DWORD *)IdentifierAuthority.Value += v7[1];
            v15 = (unsigned __int8 *)ExAllocatePool2(0x100uLL);
            v4 = v15;
            if ( v15 )
            {
              Acl = RtlInitializeSid(v15, &v29, 2u);
              if ( (Acl & 0xC0000000) != 0xC0000000 )
              {
                *RtlSubAuthoritySid(v4, 0) = 32;
                *RtlSubAuthoritySid(v4, 1u) = 544;
                v16 = 4 * (*(_DWORD *)IdentifierAuthority.Value + v4[1]) + 108;
                v17 = (ACL *)ExAllocatePool2(0x100uLL);
                v18 = v17;
                if ( v17 )
                {
                  Acl = RtlCreateAcl(v17, v16, 2u);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    v19 = 0x10000000;
                    if ( a2 )
                      v19 = a2[3] & 0xFFFFFFF;
                    Acl = RtlpAddKnownAce((int)v18, 2, 3, v19, Src, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      v20 = 0x10000000;
                      if ( a2 )
                        v20 = a2[3] & 0xFFFFFFF;
                      Acl = RtlpAddKnownAce((int)v18, 2, 3, v20, v4, 0);
                      if ( (Acl & 0xC0000000) != 0xC0000000 )
                      {
                        v21 = 0x80000000;
                        v22 = 0x80000000;
                        if ( a2 )
                        {
                          v23 = *a2 | 0x80000000;
                          if ( (*a2 & 0x40000000) != 0 )
                            v23 |= a2[1];
                          if ( (v23 & 0x20000000) != 0 )
                            v23 |= a2[2];
                          if ( (v23 & 0x10000000) != 0 )
                            v23 |= a2[3];
                          v22 = v23 & 0xFFFFFFF;
                        }
                        Acl = RtlpAddKnownAce((int)v18, 2, 3, v22, Sid, 0);
                        if ( (Acl & 0xC0000000) != 0xC0000000 )
                        {
                          v24 = 0x80000000;
                          if ( a2 )
                          {
                            v25 = *a2 | 0x80000000;
                            if ( (*a2 & 0x40000000) != 0 )
                              v25 |= a2[1];
                            if ( (v25 & 0x20000000) != 0 )
                              v25 |= a2[2];
                            if ( (v25 & 0x10000000) != 0 )
                              v25 |= a2[3];
                            v24 = v25 & 0xFFFFFFF;
                          }
                          Acl = RtlpAddKnownAce((int)v18, 2, 3, v24, v30, 0);
                          if ( (Acl & 0xC0000000) != 0xC0000000 )
                          {
                            if ( a2 )
                            {
                              v26 = *a2 | 0x80000000;
                              if ( (*a2 & 0x40000000) != 0 )
                                v26 |= a2[1];
                              if ( (v26 & 0x20000000) != 0 )
                                v26 |= a2[2];
                              if ( (v26 & 0x10000000) != 0 )
                                v26 |= a2[3];
                              v21 = v26 & 0xFFFFFFF;
                            }
                            Acl = RtlpAddKnownAce((int)v18, 2, 3, v21, v7, 0);
                            if ( (Acl & 0xC0000000) != 0xC0000000 )
                            {
                              if ( RtlValidAcl(v18) )
                              {
                                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v18, 0);
                                if ( (Acl & 0xC0000000) != 0xC0000000 )
                                {
                                  Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Src, 0);
                                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                                  {
                                    if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                                    {
                                      *(_DWORD *)IdentifierAuthority.Value = 0;
                                      Acl = RtlAbsoluteToSelfRelativeSD(
                                              SecurityDescriptor,
                                              0LL,
                                              (PULONG)IdentifierAuthority.Value);
                                      if ( *(_DWORD *)IdentifierAuthority.Value )
                                      {
                                        v27 = (void *)ExAllocatePool2(0x100uLL);
                                        *a1 = v27;
                                        if ( v27 )
                                          Acl = RtlAbsoluteToSelfRelativeSD(
                                                  SecurityDescriptor,
                                                  v27,
                                                  (PULONG)IdentifierAuthority.Value);
                                        else
                                          Acl = -1073741801;
                                      }
                                    }
                                    else
                                    {
                                      Acl = -1073741703;
                                    }
                                  }
                                }
                              }
                              else
                              {
                                Acl = -1073741705;
                              }
                            }
                          }
                        }
                        v6 = (unsigned __int8 *)v30;
                      }
                    }
                  }
                  ExFreePoolWithTag(v18, 0);
                }
                else
                {
                  Acl = -1073741801;
                }
                v2 = a1;
              }
              goto LABEL_64;
            }
          }
        }
      }
      Acl = -1073741801;
    }
LABEL_64:
    ExFreePoolWithTag(Sid, 0);
    if ( Src )
      ExFreePoolWithTag(Src, 0);
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
LABEL_72:
    if ( Acl >= 0 )
      return (unsigned int)Acl;
    goto LABEL_73;
  }
  Acl = -1073741801;
LABEL_73:
  if ( *v2 )
  {
    ExFreePoolWithTag(*v2, 0);
    *v2 = 0LL;
  }
  return (unsigned int)Acl;
}
