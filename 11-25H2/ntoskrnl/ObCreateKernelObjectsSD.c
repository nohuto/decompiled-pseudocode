/*
 * XREFs of ObCreateKernelObjectsSD @ 0x140736EA8
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x1407EFF58 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObCreateKernelObjectsSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS Acl; // ebx
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ACL *Pool2; // rax
  ACL *v7; // rdi

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(SeWorldSid);
    v4 = RtlLengthSid(SeAliasAdminsSid) + v3;
    v5 = RtlLengthSid(SeLocalSystemSid) + 44 + v4;
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL);
    v7 = Pool2;
    if ( Pool2 )
    {
      Acl = RtlCreateAcl(Pool2, v5, 2u);
      if ( Acl < 0
        || (Acl = RtlpAddKnownAce((int)v7, 2, 0, 131075, SeWorldSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v7, 2, 0, 983055, SeAliasAdminsSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v7, 2, 0, 983055, SeLocalSystemSid, 0), Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v7, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v7, 0);
      }
      else
      {
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)Acl;
}
