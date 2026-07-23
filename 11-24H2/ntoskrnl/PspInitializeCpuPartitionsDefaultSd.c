/*
 * XREFs of PspInitializeCpuPartitionsDefaultSd @ 0x140C375B0
 * Callers:
 *     PspInitializeCpuPartitionsPhase0 @ 0x140C37808 (PspInitializeCpuPartitionsPhase0.c)
 *     PspInitializeCpuPartitionsPhase1 @ 0x140C378D0 (PspInitializeCpuPartitionsPhase1.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1408588A0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlLengthRequiredSid @ 0x14086B5A0 (RtlLengthRequiredSid.c)
 *     RtlAddAccessAllowedAce @ 0x140911600 (RtlAddAccessAllowedAce.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A18380 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PspInitializeCpuPartitionsDefaultSd(_QWORD *a1, char a2)
{
  ULONG_PTR v3; // r13
  __int64 Pool2; // rsi
  ULONG v5; // eax
  __int64 v6; // rax
  __int64 v7; // rbp
  NTSTATUS Acl; // ebx
  ULONG v9; // ebx
  size_t v10; // r12
  ACL *v11; // rax
  ACL *v12; // r14
  int v13; // edi
  __int64 v14; // rax
  void *v15; // rdi
  char *v16; // r15
  ACL *v17; // r13
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+70h] [rbp+18h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v3 = RtlLengthRequiredSid(1u);
  Pool2 = ExAllocatePool2(0x100uLL, v3, 0x50707350uLL);
  v5 = RtlLengthRequiredSid(2u);
  v6 = ExAllocatePool2(0x100uLL, v5, 0x50707350uLL);
  v7 = v6;
  if ( v6 && Pool2 )
  {
    Acl = RtlInitializeSid((PSID)Pool2, &IdentifierAuthority, 1u);
    if ( Acl >= 0 )
    {
      *(_DWORD *)(Pool2 + 8) = 18;
      Acl = RtlInitializeSid((PSID)v7, &IdentifierAuthority, 2u);
      if ( Acl >= 0 )
      {
        *(_DWORD *)(v7 + 8) = 32;
        *(_DWORD *)(v7 + 12) = 544;
        v9 = 4 * (*(unsigned __int8 *)(Pool2 + 1) + *(unsigned __int8 *)(v7 + 1)) + 40;
        v10 = v9;
        v11 = (ACL *)ExAllocatePool2(0x100uLL, v9, 0x50707350uLL);
        v12 = v11;
        if ( v11 )
        {
          Acl = RtlCreateAcl(v11, v9, 2u);
          if ( Acl >= 0 )
          {
            v13 = a2 != 0 ? 8 : 0;
            Acl = RtlAddAccessAllowedAce(v12, 2u, v13 + 917511, (PSID)Pool2);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v12, 2u, v13 + 917511, (PSID)v7);
              if ( Acl >= 0 )
              {
                v14 = ExAllocatePool2(0x100uLL, v10 + v3 + 40, 0x50707350uLL);
                v15 = (void *)v14;
                if ( v14 )
                {
                  v16 = (char *)(v14 + 40);
                  memmove((void *)(v14 + 40), (const void *)Pool2, v3);
                  v17 = (ACL *)&v16[v3];
                  memmove(v17, v12, v10);
                  Acl = RtlCreateSecurityDescriptor(v15, 1u);
                  if ( Acl < 0
                    || (Acl = RtlSetOwnerSecurityDescriptor(v15, v16, 0), Acl < 0)
                    || (Acl = RtlSetGroupSecurityDescriptor(v15, v16, 0), Acl < 0)
                    || (Acl = RtlSetDaclSecurityDescriptor(v15, 1u, v17, 0), Acl < 0) )
                  {
                    ExFreePoolWithTag(v15, 0);
                  }
                  else
                  {
                    Acl = 0;
                    *a1 = v15;
                  }
                }
                else
                {
                  Acl = -1073741670;
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
    }
  }
  else
  {
    Acl = -1073741670;
    if ( !v6 )
      goto LABEL_21;
  }
  ExFreePoolWithTag((PVOID)v7, 0);
LABEL_21:
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  return (unsigned int)Acl;
}
