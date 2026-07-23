/*
 * XREFs of DrvDbGetRegistrarSecurityDescriptor @ 0x140813FC4
 * Callers:
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x140930D80 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     DrvDbOpenObjectRegKey @ 0x140931000 (DrvDbOpenObjectRegKey.c)
 * Callees:
 *     RtlSetControlSecurityDescriptor @ 0x140771F20 (RtlSetControlSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x14091B2A0 (RtlLengthSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x1409E93F0 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void *DrvDbGetRegistrarSecurityDescriptor()
{
  __int64 v0; // rbx
  void *Pool2; // rax
  void *v2; // rdi
  _OWORD SecurityDescriptor[2]; // [rsp+20h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-10h]
  ULONG BufferLength; // [rsp+60h] [rbp+10h] BYREF
  ACL Acl; // [rsp+68h] [rbp+18h] BYREF

  v0 = 0LL;
  Acl = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v5 = 0LL;
  if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
    && RtlCreateAcl(&Acl, 8u, 2u) >= 0
    && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0
    && RtlSetControlSecurityDescriptor(SecurityDescriptor, 0x1000u, 0x1000u) >= 0 )
  {
    BufferLength = RtlLengthSecurityDescriptor(SecurityDescriptor);
    if ( BufferLength >= 0x28 )
    {
      Pool2 = (void *)ExAllocatePool2(0x100uLL);
      v2 = Pool2;
      if ( Pool2 )
      {
        if ( RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Pool2, &BufferLength) < 0 )
          ExFreePoolWithTag(v2, 0);
        else
          return v2;
      }
    }
  }
  return (void *)v0;
}
