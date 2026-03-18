/*
 * XREFs of ZwMapViewOfSection @ 0x1406A6910
 * Callers:
 *     CmSiMapViewOfSection @ 0x14048CDE0 (CmSiMapViewOfSection.c)
 *     DifZwMapViewOfSectionWrapper @ 0x140640D00 (DifZwMapViewOfSectionWrapper.c)
 *     RtlFileMapMapView @ 0x1406966E4 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407125F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407B4C04 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407C22EC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407C9C14 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140810410 (AslpFileLargeMapCreate.c)
 *     PiInitializeDDB @ 0x1409C7B30 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6E09C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     EmpMapPhysicalAddress @ 0x140C17E34 (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140C49AE0 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C49E80 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG Win32Protect)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle, ProcessHandle);
}
