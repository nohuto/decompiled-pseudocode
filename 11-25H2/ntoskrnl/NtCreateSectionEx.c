/*
 * XREFs of NtCreateSectionEx @ 0x1407DC450
 * Callers:
 *     <none>
 * Callees:
 *     MiCreateSectionCommon @ 0x1408C2964 (MiCreateSectionCommon.c)
 */

NTSTATUS __cdecl NtCreateSectionEx(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  ULONGLONG ullMultiplicand; // [rsp+40h] [rbp-28h]

  LODWORD(ullMultiplicand) = ExtendedParameterCount;
  return MiCreateSectionCommon(
           (int)SectionHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)MaximumSize,
           SectionPageProtection,
           AllocationAttributes,
           (__int64)FileHandle,
           ExtendedParameters,
           ullMultiplicand,
           0,
           KeGetCurrentThread()->PreviousMode);
}
