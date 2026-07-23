/*
 * XREFs of DbgPrintEx @ 0x18001A6F0
 * Callers:
 *     RtlReportCriticalFailure @ 0x1800041B0 (RtlReportCriticalFailure.c)
 *     RtlpWaitOnCriticalSection @ 0x180005E10 (RtlpWaitOnCriticalSection.c)
 *     TpCheckTerminateWorker @ 0x180008F30 (TpCheckTerminateWorker.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180019210 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x180019910 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x180019C70 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x18001A3B0 (RtlpLocateActivationContextSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x18001A730 (RtlFindActivationContextSectionGuid.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B3A0 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlQueryInformationActivationContext @ 0x1800484F0 (RtlQueryInformationActivationContext.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x180048FD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18004E410 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContext @ 0x180073A20 (RtlDeactivateActivationContext.c)
 *     RtlpNotOwnerCriticalSection @ 0x18007C310 (RtlpNotOwnerCriticalSection.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x18007F260 (TppCallbackCheckThreadAfterCallback.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800B0060 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlAcquireResourceShared @ 0x1800DBD10 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800DD8A0 (RtlAcquireResourceExclusive.c)
 *     RtlCreateActivationContext @ 0x1800E1EF0 (RtlCreateActivationContext.c)
 *     RtlpValidateActivationContextData @ 0x1800E2084 (RtlpValidateActivationContextData.c)
 *     RtlGetAssemblyStorageRoot @ 0x1800E2198 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x1800E2350 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800E26E4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800E2898 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x1800E2F40 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x1800E3344 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800E34EC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x1800E3980 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlAssert @ 0x1800F4450 (RtlAssert.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x18010B678 (RtlpCrackActivationContextStringSectionHeader.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     RtlpQueryRunLevel @ 0x18010E09C (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180114FFC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180118C00 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     AVrfInitializeVerifier @ 0x18011B9E0 (AVrfInitializeVerifier.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180120F20 (RtlUnhandledExceptionFilter2.c)
 *     UninitUser32Proc @ 0x180122050 (UninitUser32Proc.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EC740 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((unsigned int)&Flags, ComponentId, Level, (_DWORD)Format, (__int64)va, 1);
}
