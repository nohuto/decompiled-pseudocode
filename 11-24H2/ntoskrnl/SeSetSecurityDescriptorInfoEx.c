/*
 * XREFs of SeSetSecurityDescriptorInfoEx @ 0x14085A970
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x140858F70 (RtlpSetSecurityObject.c)
 */

NTSTATUS __stdcall SeSetSecurityDescriptorInfoEx(
        PVOID Object,
        PSECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping)
{
  if ( *ObjectsSecurityDescriptor )
    return RtlpSetSecurityObject(
             (__int64)Object,
             *SecurityInformation,
             (__int64)ModificationDescriptor,
             (__int64 *)ObjectsSecurityDescriptor,
             AutoInheritFlags,
             PoolType,
             (__int64)GenericMapping,
             0LL);
  else
    return -1073741609;
}
