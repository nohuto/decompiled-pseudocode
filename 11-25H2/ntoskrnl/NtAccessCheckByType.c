/*
 * XREFs of NtAccessCheckByType @ 0x1403622A0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 */

NTSTATUS __cdecl NtAccessCheckByType(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSID PrincipalSelfSid,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        POBJECT_TYPE_LIST ObjectTypeList,
        ULONG ObjectTypeListLength,
        PGENERIC_MAPPING GenericMapping,
        PPRIVILEGE_SET PrivilegeSet,
        PULONG PrivilegeSetLength,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  char v12; // [rsp+58h] [rbp-10h]

  v12 = 0;
  return SeAccessCheckByType(
           SecurityDescriptor,
           PrincipalSelfSid,
           ClientToken,
           DesiredAccess,
           ObjectTypeList,
           ObjectTypeListLength,
           GenericMapping,
           PrivilegeSet,
           PrivilegeSetLength,
           GrantedAccess,
           AccessStatus,
           v12);
}
