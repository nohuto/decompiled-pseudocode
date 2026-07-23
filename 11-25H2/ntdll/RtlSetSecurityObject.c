/*
 * XREFs of RtlSetSecurityObject @ 0x1800E6A60
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x1800E6AA0 (RtlpSetSecurityObject.c)
 */

NTSTATUS __cdecl RtlSetSecurityObject(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  return RtlpSetSecurityObject(
           0,
           SecurityInformation,
           (_DWORD)ModificationDescriptor,
           (_DWORD)ObjectsSecurityDescriptor,
           0,
           0,
           (__int64)GenericMapping,
           (__int64)TokenHandle);
}
