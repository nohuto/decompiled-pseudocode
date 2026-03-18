/*
 * XREFs of ZwUnmapViewOfSection @ 0x1406A6950
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x140499840 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1404B5148 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1406966E4 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x1407125F4 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407B4C04 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407C22EC (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C27E0 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1407C9704 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x1408106D0 (AslpFilePartialViewFree.c)
 *     PiInitializeDDB @ 0x1409C7B30 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6E09C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     PiReleaseDDB @ 0x140A9687C (PiReleaseDDB.c)
 *     CmpSetSystemBiosInformation @ 0x140C49AE0 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C49E80 (CmpSetVideoBiosInformation.c)
 *     EmpCacheBiosDate @ 0x140C6288C (EmpCacheBiosDate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
