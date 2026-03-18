/*
 * XREFs of SmKmStoreFileMakeSecurityDescriptor @ 0x14079B1BC
 * Callers:
 *     SmKmStoreFileCreateForIoType @ 0x14079ABFC (SmKmStoreFileCreateForIoType.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14044FDD0 (RtlSubAuthoritySid.c)
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlLengthRequiredSid @ 0x140867110 (RtlLengthRequiredSid.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     RtlInitializeSid @ 0x1409E3B60 (RtlInitializeSid.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SmKmStoreFileMakeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor, ACL **a2)
{
  void *v3; // r14
  void *Src; // rsi
  ACL *v5; // rdi
  void *Pool2; // rax
  void *v7; // r15
  NTSTATUS Acl; // ebx
  void *v9; // rax
  void *v10; // rax
  ULONG v11; // ebx
  ULONG v12; // ebx
  ULONG v13; // ebx
  ACL *v14; // rax
  struct _SID_IDENTIFIER_AUTHORITY v17; // [rsp+80h] [rbp+50h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+88h] [rbp+58h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 256;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v17.Value = 0;
  v3 = 0LL;
  *(_WORD *)&v17.Value[4] = 1280;
  Src = 0LL;
  v5 = 0LL;
  RtlLengthRequiredSid(1u);
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v7 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  Acl = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
  if ( Acl >= 0 )
  {
    v9 = (void *)ExAllocatePool2(0x100uLL);
    v3 = v9;
    if ( v9 )
    {
      Acl = RtlInitializeSid(v9, &v17, 1u);
      if ( Acl < 0 )
        goto LABEL_17;
      RtlLengthRequiredSid(2u);
      v10 = (void *)ExAllocatePool2(0x100uLL);
      Src = v10;
      if ( v10 )
      {
        Acl = RtlInitializeSid(v10, &v17, 2u);
        if ( Acl < 0 )
          goto LABEL_17;
        *RtlSubAuthoritySid(v7, 0) = 0;
        *RtlSubAuthoritySid(v3, 0) = 18;
        *RtlSubAuthoritySid(Src, 0) = 32;
        *RtlSubAuthoritySid(Src, 1u) = 544;
        v11 = RtlLengthSid(Src);
        v12 = RtlLengthSid(v3) + v11;
        v13 = RtlLengthSid(v7) + 32 + v12;
        v14 = (ACL *)ExAllocatePool2(0x100uLL);
        v5 = v14;
        if ( v14 )
        {
          Acl = RtlCreateAcl(v14, v13, 2u);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((int)v5, 2, 0, 2032127, Src, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((int)v5, 2, 0, 2032127, v3, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((int)v5, 2, 0, 0x10000, v7, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v5, 0);
                    if ( Acl >= 0 )
                    {
                      *a2 = v5;
                      v5 = 0LL;
                      Acl = 0;
                    }
                  }
                }
              }
            }
          }
          goto LABEL_17;
        }
      }
    }
    Acl = -1073741670;
  }
LABEL_17:
  ExFreePoolWithTag(v7, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)Acl;
}
