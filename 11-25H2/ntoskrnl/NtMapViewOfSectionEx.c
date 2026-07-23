/*
 * XREFs of NtMapViewOfSectionEx @ 0x1408F9CB0
 * Callers:
 *     <none>
 * Callees:
 *     MiMapViewOfSectionExCommon @ 0x1408FBCB8 (MiMapViewOfSectionExCommon.c)
 */

NTSTATUS __cdecl NtMapViewOfSectionEx(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        ULONG AllocationType,
        ULONG PageProtection,
        PMEM_EXTENDED_PARAMETER ExtendedParameters,
        ULONG ExtendedParameterCount)
{
  return MiMapViewOfSectionExCommon(
           (int)SectionHandle,
           (int)ProcessHandle,
           0,
           (int)BaseAddress,
           (__int64)SectionOffset,
           (__int64)ViewSize,
           AllocationType,
           PageProtection,
           ExtendedParameters,
           ExtendedParameterCount,
           0,
           0LL,
           KeGetCurrentThread()->PreviousMode,
           0);
}
