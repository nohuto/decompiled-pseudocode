/*
 * XREFs of CMFCreateSecurityDescriptor @ 0x1407C2AB0
 * Callers:
 *     CMFCheckAccess @ 0x1407C2854 (CMFCheckAccess.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140867160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     RtlValidAcl @ 0x140910580 (RtlValidAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFCreateSecurityDescriptor(PVOID *a1, _DWORD *a2)
{
  PVOID *v2; // r14
  unsigned __int8 *v4; // r12
  unsigned __int8 *Src; // r13
  unsigned __int8 *v6; // rsi
  unsigned __int8 *v7; // r15
  NTSTATUS Acl; // ebx
  ULONG v9; // eax
  void *Pool2; // rax
  unsigned __int8 *v11; // rbx
  int v12; // ebx
  ULONG v13; // eax
  unsigned __int8 *v14; // rax
  void *v15; // rax
  PULONG v16; // rax
  ULONG_PTR v17; // rdx
  unsigned __int8 *v18; // rax
  PULONG v19; // rax
  ULONG_PTR v20; // rdx
  unsigned __int8 *v21; // rax
  ULONG v22; // ebx
  ACL *v23; // rax
  ACL *v24; // r14
  int v25; // r9d
  int v26; // r9d
  unsigned int v27; // esi
  unsigned int v28; // r9d
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  unsigned int v32; // esi
  void *v33; // rax
  _SID_IDENTIFIER_AUTHORITY v35; // [rsp+30h] [rbp-50h] BYREF
  void *v36; // [rsp+38h] [rbp-48h]
  PSID Sid; // [rsp+40h] [rbp-40h]
  ULONG_PTR v38; // [rsp+48h] [rbp-38h]
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v40; // [rsp+70h] [rbp-10h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+D0h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v43; // [rsp+D8h] [rbp+58h] BYREF

  v2 = a1;
  *(_WORD *)&v35.Value[4] = 1280;
  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)v35.Value = 0;
  v40 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v43.Value = 0;
  v4 = 0LL;
  *(_WORD *)&v43.Value[4] = 3840;
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
  v9 = RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v9, 0x636D6650u);
  Sid = Pool2;
  if ( Pool2 )
  {
    Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( (Acl & 0xC0000000) != 0xC0000000 )
    {
      v11 = (unsigned __int8 *)Sid;
      *RtlSubAuthoritySid(Sid, 0) = 0;
      v12 = v11[1];
      v13 = RtlLengthRequiredSid(6u);
      v14 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v13, 0x636D6650u);
      Src = v14;
      if ( v14 )
      {
        RtlInitializeSid(v14, &v35, 6u);
        *RtlSubAuthoritySid(Src, 0) = 80;
        *RtlSubAuthoritySid(Src, 1u) = 956008885;
        *RtlSubAuthoritySid(Src, 2u) = -876444647;
        *RtlSubAuthoritySid(Src, 3u) = 1831038044;
        *RtlSubAuthoritySid(Src, 4u) = 1853292631;
        *RtlSubAuthoritySid(Src, 5u) = -2023488832;
        *(_DWORD *)IdentifierAuthority.Value = v12 + Src[1];
        v38 = RtlLengthRequiredSid(2u);
        v15 = (void *)ExAllocatePool2(0x100uLL, v38, 0x636D6650u);
        v36 = v15;
        v6 = (unsigned __int8 *)v15;
        if ( v15 )
        {
          Acl = RtlInitializeSid(v15, &v43, 2u);
          if ( (Acl & 0xC0000000) == 0xC0000000 )
            goto LABEL_64;
          *RtlSubAuthoritySid(v6, 0) = 2;
          v16 = RtlSubAuthoritySid(v6, 1u);
          v17 = v38;
          *v16 = 1;
          *(_DWORD *)IdentifierAuthority.Value += v6[1];
          v18 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v17, 0x636D6650u);
          v7 = v18;
          if ( v18 )
          {
            Acl = RtlInitializeSid(v18, &v43, 2u);
            if ( (Acl & 0xC0000000) == 0xC0000000 )
              goto LABEL_64;
            *RtlSubAuthoritySid(v7, 0) = 2;
            v19 = RtlSubAuthoritySid(v7, 1u);
            v20 = v38;
            *v19 = 2;
            *(_DWORD *)IdentifierAuthority.Value += v7[1];
            v21 = (unsigned __int8 *)ExAllocatePool2(0x100uLL, v20, 0x636D6650u);
            v4 = v21;
            if ( v21 )
            {
              Acl = RtlInitializeSid(v21, &v35, 2u);
              if ( (Acl & 0xC0000000) != 0xC0000000 )
              {
                *RtlSubAuthoritySid(v4, 0) = 32;
                *RtlSubAuthoritySid(v4, 1u) = 544;
                v22 = 4 * (*(_DWORD *)IdentifierAuthority.Value + v4[1]) + 108;
                v23 = (ACL *)ExAllocatePool2(0x100uLL, v22, 0x636D6650u);
                v24 = v23;
                if ( v23 )
                {
                  Acl = RtlCreateAcl(v23, v22, 2u);
                  if ( (Acl & 0xC0000000) != 0xC0000000 )
                  {
                    v25 = 0x10000000;
                    if ( a2 )
                      v25 = a2[3] & 0xFFFFFFF;
                    Acl = RtlpAddKnownAce((int)v24, 2, 3, v25, Src, 0);
                    if ( (Acl & 0xC0000000) != 0xC0000000 )
                    {
                      v26 = 0x10000000;
                      if ( a2 )
                        v26 = a2[3] & 0xFFFFFFF;
                      Acl = RtlpAddKnownAce((int)v24, 2, 3, v26, v4, 0);
                      if ( (Acl & 0xC0000000) != 0xC0000000 )
                      {
                        v27 = 0x80000000;
                        v28 = 0x80000000;
                        if ( a2 )
                        {
                          v29 = *a2 | 0x80000000;
                          if ( (*a2 & 0x40000000) != 0 )
                            v29 |= a2[1];
                          if ( (v29 & 0x20000000) != 0 )
                            v29 |= a2[2];
                          if ( (v29 & 0x10000000) != 0 )
                            v29 |= a2[3];
                          v28 = v29 & 0xFFFFFFF;
                        }
                        Acl = RtlpAddKnownAce((int)v24, 2, 3, v28, Sid, 0);
                        if ( (Acl & 0xC0000000) != 0xC0000000 )
                        {
                          v30 = 0x80000000;
                          if ( a2 )
                          {
                            v31 = *a2 | 0x80000000;
                            if ( (*a2 & 0x40000000) != 0 )
                              v31 |= a2[1];
                            if ( (v31 & 0x20000000) != 0 )
                              v31 |= a2[2];
                            if ( (v31 & 0x10000000) != 0 )
                              v31 |= a2[3];
                            v30 = v31 & 0xFFFFFFF;
                          }
                          Acl = RtlpAddKnownAce((int)v24, 2, 3, v30, v36, 0);
                          if ( (Acl & 0xC0000000) != 0xC0000000 )
                          {
                            if ( a2 )
                            {
                              v32 = *a2 | 0x80000000;
                              if ( (*a2 & 0x40000000) != 0 )
                                v32 |= a2[1];
                              if ( (v32 & 0x20000000) != 0 )
                                v32 |= a2[2];
                              if ( (v32 & 0x10000000) != 0 )
                                v32 |= a2[3];
                              v27 = v32 & 0xFFFFFFF;
                            }
                            Acl = RtlpAddKnownAce((int)v24, 2, 3, v27, v7, 0);
                            if ( (Acl & 0xC0000000) != 0xC0000000 )
                            {
                              if ( RtlValidAcl(v24) )
                              {
                                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v24, 0);
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
                                        v33 = (void *)ExAllocatePool2(
                                                        0x100uLL,
                                                        *(unsigned int *)IdentifierAuthority.Value,
                                                        0x636D6650u);
                                        *a1 = v33;
                                        if ( v33 )
                                          Acl = RtlAbsoluteToSelfRelativeSD(
                                                  SecurityDescriptor,
                                                  v33,
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
                        v6 = (unsigned __int8 *)v36;
                      }
                    }
                  }
                  ExFreePoolWithTag(v24, 0);
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
