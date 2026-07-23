/*
 * XREFs of ZwCreateSection @ 0x1406A7CF0
 * Callers:
 *     CmSiCreateSectionForFile @ 0x14048E830 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1405E509C (LdrpMapResourceFile.c)
 *     DifZwCreateSectionWrapper @ 0x14063C7C0 (DifZwCreateSectionWrapper.c)
 *     RtlFileMapMapView @ 0x1406977B4 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x140710184 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x1407C3520 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407CA104 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140810B50 (AslpFileLargeMapCreate.c)
 *     ExpGetGlobalLocaleSection @ 0x1408DD9C4 (ExpGetGlobalLocaleSection.c)
 *     KsepSdbMapToMemory @ 0x14094498C (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x1409B8DD4 (PiInitializeDDB.c)
 *     NtGetNlsSectionPtr @ 0x140A053E0 (NtGetNlsSectionPtr.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6759C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     CmFcpManagerCreateSection @ 0x140ABBEBC (CmFcpManagerCreateSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwCreateSection(
        PHANDLE SectionHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PLARGE_INTEGER MaximumSize,
        ULONG SectionPageProtection,
        ULONG AllocationAttributes,
        HANDLE FileHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(SectionHandle);
}
