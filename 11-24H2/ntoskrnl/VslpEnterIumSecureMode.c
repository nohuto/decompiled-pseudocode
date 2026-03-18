/*
 * XREFs of VslpEnterIumSecureMode @ 0x140265D90
 * Callers:
 *     VslSetPlaceholderPages @ 0x140265064 (VslSetPlaceholderPages.c)
 *     VslKernelShadowStackAssist @ 0x140265240 (VslKernelShadowStackAssist.c)
 *     VslAccessPciDevice @ 0x140265580 (VslAccessPciDevice.c)
 *     HalpPCIConfig @ 0x140265960 (HalpPCIConfig.c)
 *     VslApplySecureImageFixups @ 0x140266300 (VslApplySecureImageFixups.c)
 *     VslRemoveProtectedPage @ 0x14026638C (VslRemoveProtectedPage.c)
 *     VslpSecureKernelPeriodicTick @ 0x140266530 (VslpSecureKernelPeriodicTick.c)
 *     VslValidateSecureImagePages @ 0x140266C70 (VslValidateSecureImagePages.c)
 *     VslGetNestedPageProtectionFlags @ 0x14027BE44 (VslGetNestedPageProtectionFlags.c)
 *     VslMakeProtectedPageExecutable @ 0x14036C2C0 (VslMakeProtectedPageExecutable.c)
 *     VslSetPrivilegedPte @ 0x14036C358 (VslSetPrivilegedPte.c)
 *     VslQueryPrivilegedAccessedState @ 0x1403AB140 (VslQueryPrivilegedAccessedState.c)
 *     VslSlowFlushSecureRangeList @ 0x1403AF848 (VslSlowFlushSecureRangeList.c)
 *     VslFastFlushSecureRangeList @ 0x1403AF954 (VslFastFlushSecureRangeList.c)
 *     VslCopyProtectedPage @ 0x14048BE78 (VslCopyProtectedPage.c)
 *     VslIumEfiRuntimeService @ 0x140490F50 (VslIumEfiRuntimeService.c)
 *     VslFinalizeSecureImageHash @ 0x1404A0990 (VslFinalizeSecureImageHash.c)
 *     VslCreateSecureImageSection @ 0x1404AC6A0 (VslCreateSecureImageSection.c)
 *     VslRelocateImage @ 0x1404AFB60 (VslRelocateImage.c)
 *     VslFillSecureAllocation @ 0x1404AFBF0 (VslFillSecureAllocation.c)
 *     VslCloseSecureHandle @ 0x1404B1B10 (VslCloseSecureHandle.c)
 *     VslQueryVirtualMemory @ 0x1404B1BA8 (VslQueryVirtualMemory.c)
 *     VslFlushSecureAddressSpace @ 0x1404B2398 (VslFlushSecureAddressSpace.c)
 *     VslFreeSecureImageIat @ 0x1404B2C04 (VslFreeSecureImageIat.c)
 *     VslCreateSecureAllocation @ 0x1404B3780 (VslCreateSecureAllocation.c)
 *     VslIsTrustletRunning @ 0x1404B3B78 (VslIsTrustletRunning.c)
 *     VslTransferSecureImageVersionResource @ 0x1404B8FF0 (VslTransferSecureImageVersionResource.c)
 *     VslMapKernelScpPages @ 0x1404BC864 (VslMapKernelScpPages.c)
 *     VslExecuteWorkItems @ 0x1404BDF28 (VslExecuteWorkItems.c)
 *     VslPrepareSecureImageRelocations @ 0x1404C63A0 (VslPrepareSecureImageRelocations.c)
 *     VslRegisterLogPages @ 0x1404C95C0 (VslRegisterLogPages.c)
 *     VslExemptSecurePteRange @ 0x1404F76F4 (VslExemptSecurePteRange.c)
 *     VslRegisterProtectedPage @ 0x1404F88B4 (VslRegisterProtectedPage.c)
 *     HvlNotifyDebugDeviceAvailable @ 0x140587A40 (HvlNotifyDebugDeviceAvailable.c)
 *     HvlPrepareForRootCrashdump @ 0x140587C34 (HvlPrepareForRootCrashdump.c)
 *     HvlResumeFromRootCrashdump @ 0x140588088 (HvlResumeFromRootCrashdump.c)
 *     HvlPrepareForSecureHibernate @ 0x140589550 (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x14058A1C0 (HvlCollectLivedump.c)
 *     HvlpEndSecurePageListIteration @ 0x14058C2C0 (HvlpEndSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x14058CB68 (VslAbortLiveDump.c)
 *     VslApplyHotPatch @ 0x14058CBC4 (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x14058CCAC (VslConfigureDynamicMemory.c)
 *     VslConfigureSecureAtsDevice @ 0x14058CD48 (VslConfigureSecureAtsDevice.c)
 *     VslExchangeEntropy @ 0x14058CDE0 (VslExchangeEntropy.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058CE7C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14058CF6C (VslFinishStartSecureProcessor.c)
 *     VslFlushEntireTb @ 0x14058D068 (VslFlushEntireTb.c)
 *     VslGetEtwDebugId @ 0x14058D0C4 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x14058D214 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14058D2C0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14058D360 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x14058D480 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x14058D500 (VslGetSecureSpeculationControlInformation.c)
 *     VslInitializeSecureKernelCfg @ 0x14058D624 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x14058D6EC (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x14058D77C (VslInitializeSecureProcess.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14058D89C (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslNotifyShutdown @ 0x14058D944 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x14058D9AC (VslPrepareDriverForPatch.c)
 *     VslProvisionDumpEncryption @ 0x14058DA34 (VslProvisionDumpEncryption.c)
 *     VslQueryActiveSecurePatches @ 0x14058DA90 (VslQueryActiveSecurePatches.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058DC54 (VslQuerySecureKernelProfileInformation.c)
 *     VslReclaimPartitionPages @ 0x14058DD64 (VslReclaimPartitionPages.c)
 *     VslRegisterSecurePatch @ 0x14058DDCC (VslRegisterSecurePatch.c)
 *     VslRegisterSecureSystemProcess @ 0x14058DEA0 (VslRegisterSecureSystemProcess.c)
 *     VslReportBugCheckProgress @ 0x14058DF40 (VslReportBugCheckProgress.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x14058E090 (VslRequestSecureKernelDebuggerBreakIn.c)
 *     VslRequestSecureThreadExit @ 0x14058E148 (VslRequestSecureThreadExit.c)
 *     VslRetrieveMailbox @ 0x14058E1C0 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14058E2EC (VslSecurePoolAllocate.c)
 *     VslSecurePoolCreate @ 0x14058E3FC (VslSecurePoolCreate.c)
 *     VslSecurePoolDestroy @ 0x14058E490 (VslSecurePoolDestroy.c)
 *     VslSecurePoolFree @ 0x14058E508 (VslSecurePoolFree.c)
 *     VslSecurePoolUpdate @ 0x14058E5B4 (VslSecurePoolUpdate.c)
 *     VslStartSecurePageIteration @ 0x14058E6C8 (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14058E774 (VslSvcEnterIumSecureMode.c)
 *     VslSwapHiberShadowStacks @ 0x14058E840 (VslSwapHiberShadowStacks.c)
 *     VslSynchronizeXSave @ 0x14058E8B0 (VslSynchronizeXSave.c)
 *     VslTerminateSecureServices @ 0x14058E92C (VslTerminateSecureServices.c)
 *     VslTestRoutine @ 0x14058E9A0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14058EA00 (VslVerifyPage.c)
 *     VslWriteProtectedPage @ 0x14058EA9C (VslWriteProtectedPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14058EB30 (VslpAddLiveDumpBufferChunk.c)
 *     VslpIumPhase4Initialize @ 0x14058EBE0 (VslpIumPhase4Initialize.c)
 *     VslpKsrEnterIumSecureMode @ 0x14058EC90 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14058ED58 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14058EDE4 (VslpSetupLiveDumpBuffer.c)
 *     VslCaptureImageHotPatchMetadata @ 0x14058EE90 (VslCaptureImageHotPatchMetadata.c)
 *     VslFinishSecureImageValidation @ 0x14058EFB0 (VslFinishSecureImageValidation.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058F0A8 (VslInitFunctionOverrideCapabilities.c)
 *     VslMakeCodeCatalog @ 0x14058F170 (VslMakeCodeCatalog.c)
 *     MiProtectDriverSectionPte @ 0x14066B400 (MiProtectDriverSectionPte.c)
 *     MmProtectDriverSection @ 0x14066B7C0 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x14067DBF0 (MmWriteSystemImageTracepoint.c)
 *     VslAllocateSecureHibernateResources @ 0x14070F508 (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x14070F5D0 (VslCapturePgoData.c)
 *     VslDetermineHotPatchType @ 0x14070F70C (VslDetermineHotPatchType.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14070F7B8 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14070F864 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14070F8C8 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14070F9FC (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14070FAD4 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14070FBC4 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14070FCC0 (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070FE70 (VslQueryRuntimeAttestationReport.c)
 *     VslQuerySecureDevice @ 0x140710090 (VslQuerySecureDevice.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140710134 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x140710214 (VslRelaxQuotas.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x140710294 (VslRevokeSyscallProviderServiceTables.c)
 *     VslRundownSecureProcess @ 0x1407102FC (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x140710364 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x1407103F8 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x140710658 (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x1407106EC (VslTransformDumpKey.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x1407108B8 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x1407109D0 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14073676C (PipUnprotectDevice.c)
 *     PsRegisterSyscallProvider @ 0x140770EE0 (PsRegisterSyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x14077B5C8 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14077B634 (PsTerminateVsmEnclave.c)
 *     MiApplyDriverHotPatch @ 0x1407F0C5C (MiApplyDriverHotPatch.c)
 *     DbgkCopyProcessDebugPort @ 0x1408A781C (DbgkCopyProcessDebugPort.c)
 *     VslLoadEnclaveModule @ 0x1408DAF58 (VslLoadEnclaveModule.c)
 *     NtProtectVirtualMemory @ 0x1408DC680 (NtProtectVirtualMemory.c)
 *     VslGetSecureTebAddress @ 0x1409A95C4 (VslGetSecureTebAddress.c)
 *     VslDebugReadWriteSecureProcess @ 0x1409AA8A8 (VslDebugReadWriteSecureProcess.c)
 *     NtRemoveProcessDebug @ 0x1409E80B0 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409E8220 (NtDebugActiveProcess.c)
 *     VslCallEnclave @ 0x140A07B64 (VslCallEnclave.c)
 *     VslEnableKernelCfgTarget @ 0x140A37460 (VslEnableKernelCfgTarget.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A3B470 (VslpConnectedStandbyWnfCallback.c)
 *     VslUnloadSecureDriver @ 0x140A3E564 (VslUnloadSecureDriver.c)
 *     VslCompleteSecureDriverLoad @ 0x140A3E678 (VslCompleteSecureDriverLoad.c)
 *     VslAllocateKernelShadowStack @ 0x140A43FE4 (VslAllocateKernelShadowStack.c)
 *     VslValidateDynamicCodePages @ 0x140A460AC (VslValidateDynamicCodePages.c)
 *     VslFreeKernelShadowStack @ 0x140A4DA2C (VslFreeKernelShadowStack.c)
 *     VslResetKernelShadowStack @ 0x140A4F4CC (VslResetKernelShadowStack.c)
 *     VslGetSecurePebAddress @ 0x140A5AEA0 (VslGetSecurePebAddress.c)
 *     VslCreateSecureSection @ 0x140A5B480 (VslCreateSecureSection.c)
 *     VslDeleteSecureSection @ 0x140A74E60 (VslDeleteSecureSection.c)
 *     VslReserveProtectedPages @ 0x140A7872C (VslReserveProtectedPages.c)
 *     VslCreateEnclave @ 0x140A850B4 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140A85230 (VslCreateSecureProcess.c)
 *     VslCreateSecureThread @ 0x140A85AF8 (VslCreateSecureThread.c)
 *     VslpConnectedStandbyPoCallback @ 0x140A86190 (VslpConnectedStandbyPoCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x140A8CF74 (VslLiveDumpCaptureProcess.c)
 *     VslUpdateFreezeTimeBias @ 0x140A90A68 (VslUpdateFreezeTimeBias.c)
 *     VslStartSecureThread @ 0x140A940E4 (VslStartSecureThread.c)
 *     VslCaptureSecureImageIat @ 0x140AA0A10 (VslCaptureSecureImageIat.c)
 *     VslIumEtwEnableCallback @ 0x140AA1900 (VslIumEtwEnableCallback.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140ABFED0 (VslDebugProtectSecureProcessMemory.c)
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 *     VslApplyDynamicRelocations @ 0x140C19930 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140C199BC (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140C19B3C (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140C19E78 (VslpIumPhase0Initialize.c)
 *     PsInitializeSyscallProviders @ 0x140C346F4 (PsInitializeSyscallProviders.c)
 *     PspInitPhase3 @ 0x140C35304 (PspInitPhase3.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C55264 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C554B0 (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5560C (MiApplyRetpolineToBootDriver.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C59424 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C5A7D8 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140C5B318 (MiInitializeLoadedModuleList.c)
 *     VslRegisterBootDrivers @ 0x140C6397C (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140C650B0 (VslConnectSwInterrupt.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1403D91C0 (KeReleaseSemaphore.c)
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     EtwTraceEnterVtl1 @ 0x1404A3DFC (EtwTraceEnterVtl1.c)
 *     EtwTraceExitVtl1 @ 0x1404A6770 (EtwTraceExitVtl1.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     HvlSwitchToVsmVtl1 @ 0x1406A6220 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1406A6390 (VslpDispatchIumSyscall.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, __int64 a2, int a3, __int64 a4)
{
  bool v4; // bp
  unsigned __int16 v5; // r15
  char v6; // bl
  unsigned __int16 v9; // r13
  __int64 v11; // rsi
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v15; // cl
  int *p_SecureThreadCookie; // rax
  __int64 v17; // rdx
  NTSTATUS v18; // ebp
  __int64 v19; // r8
  __int64 v20; // r9
  char v21; // al
  char PreviousMode; // bl
  char v23; // [rsp+30h] [rbp-48h]
  char v24; // [rsp+34h] [rbp-44h]
  unsigned int v25; // [rsp+38h] [rbp-40h]
  unsigned __int8 v26; // [rsp+40h] [rbp-38h]

  v4 = 0;
  v5 = a1;
  v6 = 0;
  v24 = 0;
  v23 = 0;
  v26 = 15;
  v9 = a2;
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3221225629LL;
  if ( (_WORD)a2 == 277 && a1 == 2 ? _InterlockedExchange(&VslpVsmTerminated, 1) : VslpVsmTerminated )
    return 3221225629LL;
  *(_BYTE *)a4 = a1;
  *(_WORD *)(a4 + 2) = a2;
  v11 = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
  v25 = v11;
  if ( a1 > 2u )
  {
    if ( (BYTE4(xmmword_140FC5B10) & 8) != 0 )
    {
      EtwTraceEnterVtl1(a1, a2);
      HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v11);
      EtwTraceExitVtl1(v5, v9);
    }
    else
    {
      HvlSwitchToVsmVtl1(0LL, a4, (unsigned int)v11);
    }
    if ( *(char *)(a4 + 1) < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
    }
    return 0LL;
  }
  if ( !KeAreInterruptsEnabled() )
  {
    if ( VslVsmEnabled )
    {
      CurrentIrql = KeGetCurrentIrql();
      v26 = CurrentIrql;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v15 = KeGetCurrentIrql();
  if ( (_BYTE)v5 == 1 )
  {
    *(_DWORD *)(a4 + 4) = a3;
  }
  else
  {
    p_SecureThreadCookie = (int *)&CurrentThread->SecureThreadCookie;
    if ( a3 )
    {
      *(_DWORD *)(a4 + 4) = a3;
    }
    else if ( v15 < 2u )
    {
      if ( *p_SecureThreadCookie )
      {
        a3 = *p_SecureThreadCookie;
        *(_DWORD *)(a4 + 4) = *p_SecureThreadCookie;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
        if ( VslVsmEnabled )
          v6 = 1;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = 0;
      a3 = 1;
    }
    v4 = *p_SecureThreadCookie == 0;
    v24 = v4;
  }
  if ( v15 == 1 )
  {
    v24 = 1;
LABEL_34:
    --CurrentThread->KernelApcDisable;
    goto LABEL_35;
  }
  if ( v15 < 2u )
  {
    if ( v4 )
      goto LABEL_34;
  }
  else
  {
    v24 = 0;
  }
LABEL_35:
  if ( !v6 )
    goto LABEL_38;
  v18 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v18 < 0 )
    goto LABEL_70;
  v23 = 1;
  while ( 1 )
  {
LABEL_38:
    if ( (BYTE4(xmmword_140FC5B10) & 8) != 0 )
    {
      EtwTraceEnterVtl1(v5, v9);
      HvlSwitchToVsmVtl1(0LL, a4, v25);
      v18 = *(_DWORD *)(a4 + 8);
      EtwTraceExitVtl1(v5, v9);
    }
    else
    {
      HvlSwitchToVsmVtl1(0LL, a4, v25);
      v18 = *(_DWORD *)(a4 + 8);
    }
    v21 = *(_BYTE *)(a4 + 1);
    if ( v21 < 0 )
    {
      __debugbreak();
      *(_BYTE *)(a4 + 1) &= ~0x80u;
      v21 = *(_BYTE *)(a4 + 1);
    }
    if ( v21 == 6 )
      break;
    if ( v21 == 1 )
      goto LABEL_68;
    if ( (_BYTE)v5 == 1 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    else if ( !a3 )
    {
      CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
    }
    switch ( *(_BYTE *)(a4 + 1) )
    {
      case 0:
LABEL_53:
        PsDispatchIumService(a4);
        break;
      case 2:
        if ( !CurrentThread->PreviousMode )
        {
          *(_QWORD *)(a4 + 8) = -1073741776LL;
          break;
        }
LABEL_60:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_1412018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( *(_BYTE *)(a4 + 1) == 3 )
            CurrentThread->PreviousMode = 0;
          *(_QWORD *)(a4 + 8) = (int)VslpDispatchIumSyscall(
                                       KeServiceDescriptorTable
                                     + (*(int *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) >> 4),
                                       a4 + 8,
                                       *(_DWORD *)(KeServiceDescriptorTable + 4LL * *(unsigned __int16 *)(a4 + 2)) & 0xF);
          CurrentThread->PreviousMode = PreviousMode;
        }
        else
        {
          *(_QWORD *)(a4 + 8) = -1073741796LL;
        }
        break;
      case 3:
        goto LABEL_60;
      case 5:
        goto LABEL_53;
    }
    if ( !a3 && (_BYTE)v5 != 1 )
      CurrentThread->SecureThreadCookie = 0;
    *(_BYTE *)a4 = 0;
    *(_WORD *)(a4 + 2) = 0;
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
  __writecr8(0LL);
LABEL_68:
  if ( v23 )
    KeReleaseSemaphore(&VslpIumThreadSemaphore, 0, 1, 0);
LABEL_70:
  if ( v24 )
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v17, v19, v20);
  if ( v26 != 15 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
    __writecr8(v26);
  }
  return (unsigned int)v18;
}
