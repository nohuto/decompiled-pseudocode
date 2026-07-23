/*
 * XREFs of MmMapViewInSessionSpace @ 0x1408EB520
 * Callers:
 *     LdrpMapResourceFile @ 0x1405E509C (LdrpMapResourceFile.c)
 *     NtCreateIoRing @ 0x140714CF0 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x140772608 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140773644 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407B2FC0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1407B6080 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA654 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 *     CmFcpMapSection @ 0x140AA3BBC (CmFcpMapSection.c)
 *     EtwpCoverageEnsureContext @ 0x140ADAD8C (EtwpCoverageEnsureContext.c)
 *     MiInitializeApiSets @ 0x140C5D1F8 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1408EB578 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL, 0LL);
}
