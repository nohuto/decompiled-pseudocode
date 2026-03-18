/*
 * XREFs of PiAuGetServiceStateSecurityObject @ 0x140728090
 * Callers:
 *     PiCreateServiceKeyUnderPath @ 0x14071F96C (PiCreateServiceKeyUnderPath.c)
 *     PiCreateServiceStateKey @ 0x1409CB050 (PiCreateServiceStateKey.c)
 * Callees:
 *     RtlLengthSid @ 0x140456300 (RtlLengthSid.c)
 *     RtlLengthSecurityDescriptor @ 0x14085A2E0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14085CB30 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140862B50 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlValidSecurityDescriptor @ 0x140867870 (RtlValidSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14091DA10 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140A23FB0 (RtlSetGroupSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuGetServiceStateSecurityObject(char a1, _QWORD *a2)
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
  v7 = RtlLengthSid(SeLocalSystemSid) + 32 + v6;
  Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
  v9 = Pool2;
  if ( Pool2 )
  {
    Acl = RtlCreateAcl(Pool2, v7, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlpAddKnownAce((int)v9, 2, 2, 983103, SeLocalSystemSid, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce((int)v9, 2, 2, a1 != 0 ? 196639 : 131097, SeAliasAdminsSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce((int)v9, 2, 2, 131097, SeExports->SeUserModeDriversSid, 0);
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
