/*
 * XREFs of DbgPrintEx @ 0x180074670
 * Callers:
 *     RtlCreateActivationContext @ 0x180002A30 (RtlCreateActivationContext.c)
 *     RtlpValidateActivationContextData @ 0x180002BC4 (RtlpValidateActivationContextData.c)
 *     RtlGetAssemblyStorageRoot @ 0x180002CD8 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180002E90 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180003224 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x1800033D8 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180003A80 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180003E84 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x18000402C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180004514 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800099A0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlReportCriticalFailure @ 0x18002D990 (RtlReportCriticalFailure.c)
 *     RtlpWaitOnCriticalSection @ 0x18002F5F0 (RtlpWaitOnCriticalSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003BF70 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlpNotOwnerCriticalSection @ 0x180041700 (RtlpNotOwnerCriticalSection.c)
 *     RtlQueryInformationActivationContext @ 0x1800475D0 (RtlQueryInformationActivationContext.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x1800489D0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180051880 (TppCallbackCheckThreadAfterCallback.c)
 *     sxsisol_SearchActCtxForDllName @ 0x180073190 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x180073890 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x180073BF0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x180074330 (RtlpLocateActivationContextSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800746B0 (RtlFindActivationContextSectionGuid.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x180075320 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlDeactivateActivationContext @ 0x18008C7F0 (RtlDeactivateActivationContext.c)
 *     TpCheckTerminateWorker @ 0x1800AAF00 (TpCheckTerminateWorker.c)
 *     RtlAcquireResourceShared @ 0x1800D7910 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800DB5E0 (RtlAcquireResourceExclusive.c)
 *     RtlAssert @ 0x1800ED1D0 (RtlAssert.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x180103B94 (RtlpCrackActivationContextStringSectionHeader.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     RtlpQueryRunLevel @ 0x18010641C (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x18010D36C (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180110EA4 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     AVrfInitializeVerifier @ 0x180113994 (AVrfInitializeVerifier.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011D880 (RtlUnhandledExceptionFilter2.c)
 *     UninitUser32Proc @ 0x180132490 (UninitUser32Proc.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800E6D30 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrintEx(ULONG ComponentId, ULONG Level, PCSTR Format, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((unsigned int)&Flags, ComponentId, Level, (_DWORD)Format, (__int64)va, 1);
}
