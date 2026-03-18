/*
 * XREFs of MmMapViewInSessionSpace @ 0x140946C00
 * Callers:
 *     LdrpMapResourceFile @ 0x1405E7AAC (LdrpMapResourceFile.c)
 *     NtCreateIoRing @ 0x140717160 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x1407723E8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140773424 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407B2B70 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1407B5C30 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407BA204 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     EtwpCoverageEnsureContext @ 0x140903F90 (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x140AA8B10 (CmFcpMapSection.c)
 *     MiInitializeApiSets @ 0x140C5B068 (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140946C58 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL, 0LL);
}
