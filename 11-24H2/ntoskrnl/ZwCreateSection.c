/*
 * XREFs of ZwCreateSection @ 0x1406A6D50
 * Callers:
 *     CmSiCreateSectionForFile @ 0x140493DA4 (CmSiCreateSectionForFile.c)
 *     LdrpMapResourceFile @ 0x1405E7AAC (LdrpMapResourceFile.c)
 *     DifZwCreateSectionWrapper @ 0x14063E200 (DifZwCreateSectionWrapper.c)
 *     RtlFileMapMapView @ 0x1406966E4 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407125F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407B4C04 (ExpQueryElamCertInfo.c)
 *     ExInitializeLeapSecondData @ 0x1407B5C30 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     CMFReadCompressedSegment @ 0x1407C22EC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     ApiSetpLoadSchemaImage @ 0x1407C9C14 (ApiSetpLoadSchemaImage.c)
 *     AslpFileLargeMapCreate @ 0x140810410 (AslpFileLargeMapCreate.c)
 *     ExpGetGlobalLocaleSection @ 0x140906FB4 (ExpGetGlobalLocaleSection.c)
 *     KsepSdbMapToMemory @ 0x14095CECC (KsepSdbMapToMemory.c)
 *     PiInitializeDDB @ 0x1409C7B30 (PiInitializeDDB.c)
 *     NtGetNlsSectionPtr @ 0x140A08EB0 (NtGetNlsSectionPtr.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6E09C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     CmFcpManagerCreateSection @ 0x140AC0D5C (CmFcpManagerCreateSection.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(SectionHandle, *(_QWORD *)&DesiredAccess);
}
