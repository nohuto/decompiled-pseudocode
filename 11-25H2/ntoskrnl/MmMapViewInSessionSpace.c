/*
 * XREFs of MmMapViewInSessionSpace @ 0x1408BA360
 * Callers:
 *     LdrpMapResourceFile @ 0x1405DB9FC (LdrpMapResourceFile.c)
 *     NtCreateIoRing @ 0x14070B060 (NtCreateIoRing.c)
 *     PspApiSetCopyToSystemSpace @ 0x140762A28 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140763A54 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1407A37A0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     ExInitializeLeapSecondData @ 0x1407A6790 (ExInitializeLeapSecondData.c)
 *     SLUpdateLicenseDataInternal @ 0x1407AAD54 (SLUpdateLicenseDataInternal.c)
 *     NtMapCMFModule @ 0x1407B4B70 (NtMapCMFModule.c)
 *     EtwpCoverageEnsureContext @ 0x140A57F04 (EtwpCoverageEnsureContext.c)
 *     CmFcpMapSection @ 0x140AA3A88 (CmFcpMapSection.c)
 *     MiInitializeApiSets @ 0x140C49CDC (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1408BA3B8 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((_DWORD)Section, (_DWORD)MappedBase, (_DWORD)ViewSize, (unsigned int)&v4, 0LL, 0LL);
}
