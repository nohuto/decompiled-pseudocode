/*
 * XREFs of ZwQueryVirtualMemory @ 0x1406A6870
 * Callers:
 *     SepGetStackTraceHash @ 0x14027BF90 (SepGetStackTraceHash.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14039A0C0 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403E7F14 (KiVerifyContextXStateCetUEnabled.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14044FA74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     RtlpCreateHeap @ 0x1404D7334 (RtlpCreateHeap.c)
 *     RtlpHpFixedHeapCreate @ 0x1406055D0 (RtlpHpFixedHeapCreate.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407AB8A4 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC420 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     PspFreeUserFiberShadowStack @ 0x1408DB370 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408DB74C (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTiLogProtectExecVm @ 0x1408DD430 (EtwTiLogProtectExecVm.c)
 *     PspGetScpCfgFunctions @ 0x140906938 (PspGetScpCfgFunctions.c)
 *     LdrpResGetMappingSize @ 0x140906C80 (LdrpResGetMappingSize.c)
 *     EtwTiLogReadWriteVm @ 0x1409A99F8 (EtwTiLogReadWriteVm.c)
 *     sub_1409E0E44 @ 0x1409E0E44 (sub_1409E0E44.c)
 *     EtwpTiQueryVad @ 0x1409FBD80 (EtwpTiQueryVad.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140AA26E8 (EtwTimLogRedirectionTrustPolicy.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140B9E1E0 (VfMiscMmUnmapLockedPages_Entry.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress);
}
