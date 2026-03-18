/*
 * XREFs of PiAuGetStateDirectorySecurityObject @ 0x14071C358
 * Callers:
 *     PiOpenDirectoryWithRoot @ 0x140713C18 (PiOpenDirectoryWithRoot.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     RtlValidSecurityDescriptor @ 0x140919740 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1409682F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A19640 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuGetStateDirectorySecurityObject(char a1, _QWORD *a2)
{
  void *v4; // rdi
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebx
  ACL *Pool2; // rax
  ACL *v9; // rsi
  NTSTATUS Acl; // ebx
  PSID v11; // r14
  void *v12; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+A0h] [rbp+40h] BYREF

  v15 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v4 = 0LL;
  v5 = RtlLengthSid(SeExports->SeUserModeDriversSid);
  v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
  v7 = 2 * (RtlLengthSid(SeLocalSystemSid) + v6) + 56;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v7, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((int)v9, 2, 3, 1245599, SeLocalSystemSid, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v9, 2, 2, 32, SeLocalSystemSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v9, 2, 3, a1 != 0 ? 1245599 : 1179785, SeAliasAdminsSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce((int)v9, 2, 2, 32, SeAliasAdminsSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce((int)v9, 2, 3, 1179785, SeExports->SeUserModeDriversSid, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce((int)v9, 2, 2, 32, SeExports->SeUserModeDriversSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
                    if ( Acl >= 0 )
                    {
                      v11 = SeLocalSystemSid;
                      Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, SeLocalSystemSid, 0);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v11, 0);
                        if ( Acl >= 0 )
                        {
                          if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                            && (BufferLength = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength >= 0x28) )
                          {
                            v12 = (void *)ExAllocatePool2(0x100uLL);
                            v4 = v12;
                            if ( v12 )
                            {
                              Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v12, &BufferLength);
                              if ( Acl >= 0 )
                              {
                                *a2 = v4;
                                v4 = 0LL;
                              }
                            }
                            else
                            {
                              Acl = -1073741670;
                            }
                          }
                          else
                          {
                            Acl = -1073741595;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v9, 0);
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
