/*
 * XREFs of ZwUnmapViewOfSection @ 0x1406A78F0
 * Callers:
 *     CmSiUnmapViewOfSection @ 0x1404941D0 (CmSiUnmapViewOfSection.c)
 *     RtlFileMapFree @ 0x1404AF948 (RtlFileMapFree.c)
 *     RtlFileMapMapView @ 0x1406977B4 (RtlFileMapMapView.c)
 *     IopIsNotNativeDriverImage @ 0x140710184 (IopIsNotNativeDriverImage.c)
 *     ExpQueryElamCertInfo @ 0x1407B5054 (ExpQueryElamCertInfo.c)
 *     CMFReadCompressedSegment @ 0x1407C3520 (CMFReadCompressedSegment.c)
 *     CMFSystemThreadRoutine @ 0x1407C3A10 (CMFSystemThreadRoutine.c)
 *     ApiSetLoadSchemaEx @ 0x1407C9BF4 (ApiSetLoadSchemaEx.c)
 *     AslpFilePartialViewFree @ 0x140810E10 (AslpFilePartialViewFree.c)
 *     PiInitializeDDB @ 0x1409B8DD4 (PiInitializeDDB.c)
 *     ExpQueryCodeIntegrityCertificateInfo @ 0x140A6759C (ExpQueryCodeIntegrityCertificateInfo.c)
 *     PiReleaseDDB @ 0x140A930AC (PiReleaseDDB.c)
 *     CmpSetSystemBiosInformation @ 0x140C4BC04 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140C4BFA4 (CmpSetVideoBiosInformation.c)
 *     EmpCacheBiosDate @ 0x140C64A08 (EmpCacheBiosDate.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnmapViewOfSection(HANDLE ProcessHandle, PVOID BaseAddress)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
