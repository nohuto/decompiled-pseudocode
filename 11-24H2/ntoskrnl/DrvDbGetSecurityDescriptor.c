/*
 * XREFs of DrvDbGetSecurityDescriptor @ 0x140824610
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x140927C38 (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlLengthSecurityDescriptor @ 0x1408565C0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140867160 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSid @ 0x14086B530 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlValidSecurityDescriptor @ 0x14086BB60 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A18380 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void *DrvDbGetSecurityDescriptor()
{
  void *v0; // rdi
  ULONG v1; // ebx
  void *Pool2; // rax
  void *Src; // r13
  void *v4; // rax
  void *v5; // r15
  void *v6; // rax
  void *v7; // r14
  ULONG v8; // eax
  void *v9; // rax
  void *v10; // rsi
  ULONG v11; // ebx
  ULONG v12; // ebx
  ULONG v13; // ebx
  ACL *v14; // rax
  ACL *v15; // r12
  ULONG v16; // eax
  void *v17; // rax
  void *v18; // rbx
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+A0h] [rbp+40h] BYREF
  _SID_IDENTIFIER_AUTHORITY v23; // [rsp+A8h] [rbp+48h] BYREF
  _SID_IDENTIFIER_AUTHORITY v24; // [rsp+B0h] [rbp+50h] BYREF

  v0 = 0LL;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v23.Value = 0;
  *(_WORD *)&v23.Value[4] = 768;
  *(_DWORD *)v24.Value = 0;
  *(_WORD *)&v24.Value[4] = 256;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v21 = 0LL;
  v1 = RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v1, 0x42444450u);
  Src = Pool2;
  if ( Pool2 )
  {
    if ( RtlInitializeSid(Pool2, &IdentifierAuthority, 1u) >= 0 )
    {
      *RtlSubAuthoritySid(Src, 0) = 18;
      if ( RtlValidSid(Src) )
      {
        v4 = (void *)ExAllocatePool2(0x100uLL, v1, 0x42444450u);
        v5 = v4;
        if ( v4 )
        {
          if ( RtlInitializeSid(v4, &v23, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v5, 0) = 4;
            if ( RtlValidSid(v5) )
            {
              v6 = (void *)ExAllocatePool2(0x100uLL, v1, 0x42444450u);
              v7 = v6;
              if ( v6 )
              {
                if ( RtlInitializeSid(v6, &v24, 1u) >= 0 )
                {
                  *RtlSubAuthoritySid(v7, 0) = 0;
                  if ( RtlValidSid(v7) )
                  {
                    v8 = RtlLengthRequiredSid(2u);
                    v9 = (void *)ExAllocatePool2(0x100uLL, v8, 0x42444450u);
                    v10 = v9;
                    if ( v9 )
                    {
                      if ( RtlInitializeSid(v9, &IdentifierAuthority, 2u) >= 0 )
                      {
                        *RtlSubAuthoritySid(v10, 0) = 32;
                        *RtlSubAuthoritySid(v10, 1u) = 544;
                        if ( RtlValidSid(v10) )
                        {
                          v11 = RtlLengthSid(v7);
                          v12 = RtlLengthSid(v5) + v11;
                          v13 = RtlLengthSid(Src) + 32 + v12;
                          v14 = (ACL *)ExAllocatePool2(0x100uLL, v13, 0x42444450u);
                          v15 = v14;
                          if ( v14 )
                          {
                            if ( RtlCreateAcl(v14, v13, 2u) >= 0
                              && (int)RtlpAddKnownAce((int)v15, 2, 2, 983103, Src, 0) >= 0
                              && (int)RtlpAddKnownAce((int)v15, 2, 2, 0x20000, v5, 0) >= 0
                              && (int)RtlpAddKnownAce((int)v15, 2, 2, 131097, v7, 0) >= 0
                              && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                              && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0) >= 0
                              && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v10, 1u) >= 0
                              && RtlSetGroupSecurityDescriptor(SecurityDescriptor, v10, 1u) >= 0 )
                            {
                              WORD1(SecurityDescriptor[0]) |= 0x1400u;
                              if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                              {
                                v16 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                                *(_DWORD *)IdentifierAuthority.Value = v16;
                                if ( v16 >= 0x28 )
                                {
                                  v17 = (void *)ExAllocatePool2(0x100uLL, v16, 0x42444450u);
                                  v18 = v17;
                                  if ( v17 )
                                  {
                                    if ( RtlAbsoluteToSelfRelativeSD(
                                           SecurityDescriptor,
                                           v17,
                                           (PULONG)IdentifierAuthority.Value) < 0 )
                                      ExFreePoolWithTag(v18, 0);
                                    else
                                      v0 = v18;
                                  }
                                }
                              }
                            }
                            ExFreePoolWithTag(v15, 0);
                          }
                        }
                      }
                      ExFreePoolWithTag(v10, 0);
                    }
                  }
                }
                ExFreePoolWithTag(v7, 0);
              }
            }
          }
          ExFreePoolWithTag(v5, 0);
        }
      }
    }
    ExFreePoolWithTag(Src, 0);
  }
  return v0;
}
