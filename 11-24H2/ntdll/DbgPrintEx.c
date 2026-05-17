/*
 * XREFs of DbgPrintEx @ 0x18005EA90
 * Callers:
 *     TpCheckTerminateWorker @ 0x180004410 (TpCheckTerminateWorker.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18000F570 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlpNotOwnerCriticalSection @ 0x180014D00 (RtlpNotOwnerCriticalSection.c)
 *     RtlQueryInformationActivationContext @ 0x18001ABD0 (RtlQueryInformationActivationContext.c)
 *     RtlpQueryInformationActivationContextDetailedInformation @ 0x18001BFD0 (RtlpQueryInformationActivationContextDetailedInformation.c)
 *     TppCallbackCheckThreadAfterCallback @ 0x180024E80 (TppCallbackCheckThreadAfterCallback.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18005D5B0 (sxsisol_SearchActCtxForDllName.c)
 *     RtlFindActivationContextSectionString @ 0x18005DCB0 (RtlFindActivationContextSectionString.c)
 *     RtlpFindUnicodeStringInSection @ 0x18005E010 (RtlpFindUnicodeStringInSection.c)
 *     RtlpLocateActivationContextSection @ 0x18005E750 (RtlpLocateActivationContextSection.c)
 *     RtlFindActivationContextSectionGuid @ 0x18005EAD0 (RtlFindActivationContextSectionGuid.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18005F740 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlDeactivateActivationContext @ 0x18006FF10 (RtlDeactivateActivationContext.c)
 *     RtlCreateActivationContext @ 0x180080BB0 (RtlCreateActivationContext.c)
 *     RtlpValidateActivationContextData @ 0x180080D44 (RtlpValidateActivationContextData.c)
 *     RtlGetAssemblyStorageRoot @ 0x180080E58 (RtlGetAssemblyStorageRoot.c)
 *     RtlpGetActivationContextDataStorageMapAndRosterHeader @ 0x180081010 (RtlpGetActivationContextDataStorageMapAndRosterHeader.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x1800813A4 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180081558 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpAssemblyStorageMapResolutionDefaultCallback @ 0x180081C00 (RtlpAssemblyStorageMapResolutionDefaultCallback.c)
 *     RtlpInsertAssemblyStorageMapEntry @ 0x180082004 (RtlpInsertAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x1800821AC (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpGetAssemblyStorageMapRootLocation @ 0x180082694 (RtlpGetAssemblyStorageMapRootLocation.c)
 *     RtlReportCriticalFailure @ 0x180098B40 (RtlReportCriticalFailure.c)
 *     RtlpWaitOnCriticalSection @ 0x18009A7A0 (RtlpWaitOnCriticalSection.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x1800AC950 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlAcquireResourceShared @ 0x1800DC7A0 (RtlAcquireResourceShared.c)
 *     RtlAcquireResourceExclusive @ 0x1800E04E0 (RtlAcquireResourceExclusive.c)
 *     RtlAssert @ 0x1800F28E0 (RtlAssert.c)
 *     RtlpCrackActivationContextStringSectionHeader @ 0x180108C64 (RtlpCrackActivationContextStringSectionHeader.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     RtlpQueryRunLevel @ 0x18010BA4C (RtlpQueryRunLevel.c)
 *     RtlpQueryAssemblyInformationActivationContextDetailedInformation @ 0x180111EFC (RtlpQueryAssemblyInformationActivationContextDetailedInformation.c)
 *     RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation @ 0x180115A10 (RtlpQueryFilesInAssemblyInformationActivationContextDetailedInformation.c)
 *     AVrfInitializeVerifier @ 0x180118960 (AVrfInitializeVerifier.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18011F650 (RtlUnhandledExceptionFilter2.c)
 *     UninitUser32Proc @ 0x180134260 (UninitUser32Proc.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1800EBA20 (vDbgPrintExWithPrefixInternal.c)
 */

__int64 DbgPrintEx(int a1, int a2, const char *a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return vDbgPrintExWithPrefixInternal((unsigned int)&unk_180178AE6, a1, a2, (_DWORD)a3, (__int64)va, 1);
}
