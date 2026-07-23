/*
 * XREFs of ZwQueryVirtualMemory @ 0x1406A7810
 * Callers:
 *     SepGetStackTraceHash @ 0x140231520 (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x1402F41E0 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1402F73C0 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403D5AB4 (KiVerifyContextXStateCetUEnabled.c)
 *     RtlpCreateHeap @ 0x1404D0784 (RtlpCreateHeap.c)
 *     RtlpHpFixedHeapCreate @ 0x140602C10 (RtlpHpFixedHeapCreate.c)
 *     EtwTimLogControlProtectionUserModeReturnMismatch @ 0x1407ABD74 (EtwTimLogControlProtectionUserModeReturnMismatch.c)
 *     EtwTimLogUserCetSetContextIpValidationFailure @ 0x1407AC8F0 (EtwTimLogUserCetSetContextIpValidationFailure.c)
 *     PspFreeUserFiberShadowStack @ 0x1408D959C (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408D9978 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwTiLogProtectExecVm @ 0x1408DB660 (EtwTiLogProtectExecVm.c)
 *     EtwTiLogReadWriteVm @ 0x140992E08 (EtwTiLogReadWriteVm.c)
 *     sub_1409DABF4 @ 0x1409DABF4 (sub_1409DABF4.c)
 *     EtwpTiQueryVad @ 0x1409F4AC0 (EtwpTiQueryVad.c)
 *     PspGetScpCfgFunctions @ 0x140A26450 (PspGetScpCfgFunctions.c)
 *     LdrpResGetMappingSize @ 0x140A3C6A8 (LdrpResGetMappingSize.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140A9DA78 (EtwTimLogRedirectionTrustPolicy.c)
 *     VfMiscMmUnmapLockedPages_Entry @ 0x140BA01E0 (VfMiscMmUnmapLockedPages_Entry.c)
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
  return KiServiceInternal(ProcessHandle);
}
