/*
 * XREFs of ZwMapViewOfSection @ 0x1406A78B0
 * Callers:
 *     CmSiMapViewOfSection @ 0x140487B00 (CmSiMapViewOfSection.c)
 *     DifZwMapViewOfSectionWrapper @ 0x14063F2C0 (DifZwMapViewOfSectionWrapper.c)
 *     RtlFileMapMapView @ 0x1406977B4 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x140710184 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407C3520 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407CA104 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140810B50 (AslpFileLargeMapCreate.c)
 *     PiInitializeDDB @ 0x1409B8DD4 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6759C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     EmpMapPhysicalAddress @ 0x140C19E34 (EmpMapPhysicalAddress.c)
 *     CmpSetSystemBiosInformation @ 0x140C4BC04 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C4BFA4 (CmpSetVideoBiosInformation.c)
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
  return KiServiceInternal(SectionHandle);
}
