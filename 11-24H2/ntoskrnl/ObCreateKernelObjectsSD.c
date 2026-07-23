/*
 * XREFs of ObCreateKernelObjectsSD @ 0x140740DF8
 * Callers:
 *     ObpInitializeRootNamespace @ 0x140741BD8 (ObpInitializeRootNamespace.c)
 *     MiCreatePartitionNamespace @ 0x140800558 (MiCreatePartitionNamespace.c)
 * Callees:
 *     RtlLengthSid @ 0x14044B2D0 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    Pool2 = (ACL *)ExAllocatePool2(0x100uLL, v5, 0x6C636144u);
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
