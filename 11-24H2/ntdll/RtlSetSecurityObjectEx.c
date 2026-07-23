/*
 * XREFs of RtlSetSecurityObjectEx @ 0x1800BE2E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSetSecurityObject @ 0x1800BEAF0 (RtlpSetSecurityObject.c)
 */

NTSTATUS __cdecl RtlSetSecurityObjectEx(
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR ModificationDescriptor,
        PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
        ULONG AutoInheritFlags,
        PGENERIC_MAPPING GenericMapping,
        HANDLE TokenHandle)
{
  return RtlpSetSecurityObject(
           0,
           SecurityInformation,
           (_DWORD)ModificationDescriptor,
           (_DWORD)ObjectsSecurityDescriptor,
           AutoInheritFlags,
           0,
           (__int64)GenericMapping,
           (__int64)TokenHandle);
}
