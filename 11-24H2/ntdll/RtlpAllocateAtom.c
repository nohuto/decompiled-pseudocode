/*
 * XREFs of RtlpAllocateAtom @ 0x180039CC0
 * Callers:
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180002E90 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x18000402C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180004514 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlFormatCurrentUserKeyPath @ 0x180018C40 (RtlFormatCurrentUserKeyPath.c)
 *     LdrpGetProcApphelpCheckModule @ 0x180037690 (LdrpGetProcApphelpCheckModule.c)
 *     LdrpLoadForwardedDll @ 0x180038380 (LdrpLoadForwardedDll.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180038890 (AllocateOrValidateCharStringBuffer.c)
 *     LdrpAppendAnsiStringToFilenameBuffer @ 0x180038910 (LdrpAppendAnsiStringToFilenameBuffer.c)
 *     LdrpMapAndSnapDependency @ 0x1800392D0 (LdrpMapAndSnapDependency.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x1800398E0 (AllocateOrValidateUnicodeStringBuffer.c)
 *     RtlAnsiStringToUnicodeString @ 0x180039960 (RtlAnsiStringToUnicodeString.c)
 *     LdrpLoadDependentModuleInternal @ 0x180039CE0 (LdrpLoadDependentModuleInternal.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     LdrpPreprocessDllName @ 0x180070150 (LdrpPreprocessDllName.c)
 *     RtlAddAtomToAtomTableEx @ 0x18007AD34 (RtlAddAtomToAtomTableEx.c)
 *     RtlCreateAtomTableEx @ 0x18007B73C (RtlCreateAtomTableEx.c)
 *     RtlUnicodeStringToAnsiString @ 0x18007DE10 (RtlUnicodeStringToAnsiString.c)
 *     RtlpGetTokenNamedObjectPath @ 0x18007FBD0 (RtlpGetTokenNamedObjectPath.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180080330 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpGetRegistryHandle @ 0x180083108 (RtlpGetRegistryHandle.c)
 *     RtlpQueryRegistryDirect @ 0x180083784 (RtlpQueryRegistryDirect.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18008D200 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpResolveDllName @ 0x180092430 (LdrpResolveDllName.c)
 *     LdrpGetFullPath @ 0x1800928D0 (LdrpGetFullPath.c)
 *     LdrpAllocateUnicodeString @ 0x1800929C0 (LdrpAllocateUnicodeString.c)
 *     RtlDosSearchPath_Ustr @ 0x1800937A0 (RtlDosSearchPath_Ustr.c)
 *     RtlGetFullPathName_UstrEx @ 0x180094170 (RtlGetFullPathName_UstrEx.c)
 *     RtlpEnsureBufferSize @ 0x1800A6B80 (RtlpEnsureBufferSize.c)
 *     LdrpBuildSystem32FileName @ 0x1800AD5E0 (LdrpBuildSystem32FileName.c)
 *     LdrpAppendUnicodeStringToFilenameBuffer @ 0x1800C72D0 (LdrpAppendUnicodeStringToFilenameBuffer.c)
 *     RtlUpcaseUnicodeString @ 0x1800CDC50 (RtlUpcaseUnicodeString.c)
 *     RtlUTF8StringToUnicodeString @ 0x1800D03C0 (RtlUTF8StringToUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x1800D77E0 (RtlDowncaseUnicodeString.c)
 *     RtlStringFromGUIDEx @ 0x1800E57E0 (RtlStringFromGUIDEx.c)
 *     RtlDuplicateUnicodeString @ 0x1800E88F0 (RtlDuplicateUnicodeString.c)
 *     LdrUpdatePackageSearchPath @ 0x1800E9360 (LdrUpdatePackageSearchPath.c)
 *     RtlComputePrivatizedDllName_U @ 0x180106910 (RtlComputePrivatizedDllName_U.c)
 *     RtlpConstructCrossVmObjectPath @ 0x180141B0C (RtlpConstructCrossVmObjectPath.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180145B00 (RtlRaiseCustomSystemEventTrigger.c)
 *     RtlpCtContextInit @ 0x180145D94 (RtlpCtContextInit.c)
 *     RtlUnicodeStringToUTF8String @ 0x180146B80 (RtlUnicodeStringToUTF8String.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall RtlpAllocateAtom(SIZE_T a1)
{
  return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
