/*
 * XREFs of RtlpAllocateAtom @ 0x18004C160
 * Callers:
 *     LdrpPreprocessDllName @ 0x1800161D0 (LdrpPreprocessDllName.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180049B30 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x18004A820 (LdrpLoadForwardedDll.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18004AD30 (AllocateOrValidateCharStringBuffer.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18004ADB0 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x18004B770 (LdrpMapAndSnapDependency.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18004BD80 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlAnsiStringToUnicodeString @ 0x18004BE00 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x18004C180 (LdrpLoadDependentModuleInternal.c)
 *     RtlFormatCurrentUserKeyPath @ 0x18005F470 (RtlFormatCurrentUserKeyPath.c)
 *     RtlCreateAtomTableEx @ 0x180067AC4 (RtlCreateAtomTableEx.c)
 *     RtlAddAtomToAtomTableEx @ 0x180067E44 (RtlAddAtomToAtomTableEx.c)
 *     RtlUnicodeStringToAnsiString @ 0x18006AF30 (RtlUnicodeStringToAnsiString.c)
 *     LdrpResolveDllName @ 0x180070A70 (LdrpResolveDllName.c)
 *     LdrpGetFullPath @ 0x180070F10 (LdrpGetFullPath.c)
 *     LdrpAllocateUnicodeString @ 0x180071000 (LdrpAllocateUnicodeString.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180071520 (LdrpSnapKernelBaseExtensions.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180083D80 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetTokenNamedObjectPath @ 0x180084060 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetRegistryHandle @ 0x180085E98 (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryDirect @ 0x180086514 (RtlpQueryRegistryDirect.c)
 *     RtlComputePrivatizedDllName_U @ 0x1800A0DF0 (RtlComputePrivatizedDllName_U.c)
 *     RtlDosSearchPath_Ustr @ 0x1800A2650 (RtlDosSearchPath_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x1800A3020 (RtlGetFullPathName_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x1800B4050 (RtlpEnsureBufferSize.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800CBB70 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlUpcaseUnicodeString @ 0x1800CD400 (RtlUpcaseUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800CEAB0 (RtlUTF8StringToUnicodeString.c)
 *     LdrpBuildSystem32FileName @ 0x1800D0E20 (LdrpBuildSystem32FileName.c)
 *     RtlDowncaseUnicodeString @ 0x1800DBB90 (RtlDowncaseUnicodeString.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E3980 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlStringFromGUIDEx @ 0x1800EB410 (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x1800EDC80 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800EEC60 (LdrUpdatePackageSearchPath.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180144E4C (RtlpConstructCrossVmObjectPath.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x180148F94 (RtlpCtContextInit.c)
 *     RtlUnicodeStringToUTF8String @ 0x180149D80 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateAtom(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
