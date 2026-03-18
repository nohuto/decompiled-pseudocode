/*
 * XREFs of MiCreateMemoryEventSD @ 0x1407EFD80
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407F007C (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiAllocatePool @ 0x1402DA740 (MiAllocatePool.c)
 *     RtlLengthSid @ 0x140458B00 (RtlLengthSid.c)
 *     RtlpAddKnownAce @ 0x14092B1E0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateMemoryEventSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS Acl; // edi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebp
  ACL *Pool; // rax
  ACL *v9; // rbx

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(SeAllRestrictedAppPackagesSid);
    v4 = RtlLengthSid(SeAllAppPackagesSid) + v3;
    v5 = RtlLengthSid(SeWorldSid) + v4;
    v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
    v7 = v6 + RtlLengthSid(SeLocalSystemSid) + 68;
    Pool = (ACL *)MiAllocatePool(0x100uLL, v7, 1818452292);
    v9 = Pool;
    if ( Pool )
    {
      Acl = RtlCreateAcl(Pool, v7, 2u);
      if ( Acl < 0
        || (Acl = RtlpAddKnownAce((int)v9, 2, 0, 1179649, SeWorldSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v9, 2, 0, 2031619, SeAliasAdminsSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v9, 2, 0, 2031619, SeLocalSystemSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v9, 2, 0, 1179649, SeAllAppPackagesSid, 0), Acl < 0)
        || (Acl = RtlpAddKnownAce((int)v9, 2, 0, 1179649, SeAllRestrictedAppPackagesSid, 0), Acl < 0)
        || (Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0), Acl < 0) )
      {
        ExFreePoolWithTag(v9, 0);
      }
      else
      {
        return 0;
      }
    }
  }
  return (unsigned int)Acl;
}
