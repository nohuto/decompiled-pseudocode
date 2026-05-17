/*
 * XREFs of RtlpAllocateAtom @ 0x18000D2C0
 * Callers:
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800035B0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     LdrpGetProcApphelpCheckModule @ 0x18000AC90 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x18000B980 (LdrpLoadForwardedDll.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000BE90 (AllocateOrValidateCharStringBuffer.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x18000BF10 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x18000C8D0 (LdrpMapAndSnapDependency.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000CEE0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlAnsiStringToUnicodeString @ 0x18000CF60 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x18000D2E0 (LdrpLoadDependentModuleInternal.c)
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1800389C0 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpPreprocessDllName @ 0x18005A570 (LdrpPreprocessDllName.c)
 *     LdrpBuildSystem32FileName @ 0x180065710 (LdrpBuildSystem32FileName.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180070920 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpResolveDllName @ 0x180075B50 (LdrpResolveDllName.c)
 *     LdrpGetFullPath @ 0x180075FF0 (LdrpGetFullPath.c)
 *     LdrpAllocateUnicodeString @ 0x1800760E0 (LdrpAllocateUnicodeString.c)
 *     RtlDosSearchPath_Ustr @ 0x180076EC0 (RtlDosSearchPath_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180077890 (RtlGetFullPathName_UstrEx.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180081010 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180081558 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800821AC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180082694 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlpEnsureBufferSize @ 0x18008B0C0 (RtlpEnsureBufferSize.c)
 *     RtlCreateAtomTableEx @ 0x1800AE3E4 (RtlCreateAtomTableEx.c)
 *     RtlAddAtomToAtomTableEx @ 0x1800AE554 (RtlAddAtomToAtomTableEx.c)
 *     RtlUnicodeStringToAnsiString @ 0x1800B1570 (RtlUnicodeStringToAnsiString.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1800B3330 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x1800B3A90 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetRegistryHandle @ 0x1800B6868 (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryDirect @ 0x1800B6EE4 (RtlpQueryRegistryDirect.c)
 *     RtlUpcaseUnicodeString @ 0x1800D06E0 (RtlUpcaseUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800D5050 (RtlUTF8StringToUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1800DC620 (RtlDowncaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1800EA050 (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x1800ED600 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800EE180 (LdrUpdatePackageSearchPath.c)
 *     RtlComputePrivatizedDllName_U @ 0x18010BF40 (RtlComputePrivatizedDllName_U.c)
 *     RtlpConstructCrossVmObjectPath @ 0x18014375C (RtlpConstructCrossVmObjectPath.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180147750 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x1801479E4 (RtlpCtContextInit.c)
 *     RtlUnicodeStringToUTF8String @ 0x1801487D0 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAllocateAtom(__int64 a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
