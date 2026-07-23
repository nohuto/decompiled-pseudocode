/*
 * XREFs of VslpEnterIumSecureMode @ 0x1403AADB0
 * Callers:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 *     VslValidateSecureImagePages @ 0x14025E250 (VslValidateSecureImagePages.c)
 *     VslIumEfiRuntimeService @ 0x140260670 (VslIumEfiRuntimeService.c)
 *     VslQueryPrivilegedAccessedState @ 0x140399854 (VslQueryPrivilegedAccessedState.c)
 *     VslSlowFlushSecureRangeList @ 0x14039E058 (VslSlowFlushSecureRangeList.c)
 *     VslFastFlushSecureRangeList @ 0x14039E164 (VslFastFlushSecureRangeList.c)
 *     VslpSecureKernelPeriodicTick @ 0x1403A9970 (VslpSecureKernelPeriodicTick.c)
 *     VslRemoveProtectedPage @ 0x1403A9AF4 (VslRemoveProtectedPage.c)
 *     VslApplySecureImageFixups @ 0x1403A9B74 (VslApplySecureImageFixups.c)
 *     VslSetPlaceholderPages @ 0x1403A9D10 (VslSetPlaceholderPages.c)
 *     VslKernelShadowStackAssist @ 0x1403A9EE0 (VslKernelShadowStackAssist.c)
 *     VslAccessPciDevice @ 0x1403AA5A0 (VslAccessPciDevice.c)
 *     HalpPCIConfig @ 0x1403AA980 (HalpPCIConfig.c)
 *     VslCopyProtectedPage @ 0x140486C48 (VslCopyProtectedPage.c)
 *     VslMakeProtectedPageExecutable @ 0x1404921E8 (VslMakeProtectedPageExecutable.c)
 *     VslSetPrivilegedPte @ 0x140492280 (VslSetPrivilegedPte.c)
 *     VslFinalizeSecureImageHash @ 0x14049B010 (VslFinalizeSecureImageHash.c)
 *     VslCreateSecureImageSection @ 0x1404A6C40 (VslCreateSecureImageSection.c)
 *     VslRelocateImage @ 0x1404AA550 (VslRelocateImage.c)
 *     VslFillSecureAllocation @ 0x1404AA5E0 (VslFillSecureAllocation.c)
 *     VslCloseSecureHandle @ 0x1404AC3A0 (VslCloseSecureHandle.c)
 *     VslQueryVirtualMemory @ 0x1404AC438 (VslQueryVirtualMemory.c)
 *     VslFlushSecureAddressSpace @ 0x1404ACC28 (VslFlushSecureAddressSpace.c)
 *     VslFreeSecureImageIat @ 0x1404AD40C (VslFreeSecureImageIat.c)
 *     VslCreateSecureAllocation @ 0x1404ADFF0 (VslCreateSecureAllocation.c)
 *     VslIsTrustletRunning @ 0x1404AE3AC (VslIsTrustletRunning.c)
 *     VslTransferSecureImageVersionResource @ 0x1404B3E90 (VslTransferSecureImageVersionResource.c)
 *     VslMapKernelScpPages @ 0x1404B79D4 (VslMapKernelScpPages.c)
 *     VslExecuteWorkItems @ 0x1404B9098 (VslExecuteWorkItems.c)
 *     VslPrepareSecureImageRelocations @ 0x1404BF800 (VslPrepareSecureImageRelocations.c)
 *     VslRegisterLogPages @ 0x1404C2A70 (VslRegisterLogPages.c)
 *     VslExemptSecurePteRange @ 0x1404F4FD4 (VslExemptSecurePteRange.c)
 *     VslRegisterProtectedPage @ 0x1404F6194 (VslRegisterProtectedPage.c)
 *     HvlPrepareForSecureHibernate @ 0x14058683C (HvlPrepareForSecureHibernate.c)
 *     HvlCollectLivedump @ 0x1405874B0 (HvlCollectLivedump.c)
 *     HvlpEndSecurePageListIteration @ 0x140589660 (HvlpEndSecurePageListIteration.c)
 *     VslAbortLiveDump @ 0x140589E60 (VslAbortLiveDump.c)
 *     VslApplyHotPatch @ 0x140589EBC (VslApplyHotPatch.c)
 *     VslConfigureDynamicMemory @ 0x140589FA4 (VslConfigureDynamicMemory.c)
 *     VslConfigureSecureAtsDevice @ 0x14058A040 (VslConfigureSecureAtsDevice.c)
 *     VslExchangeEntropy @ 0x14058A0D0 (VslExchangeEntropy.c)
 *     VslFinalizeLiveDumpInSk @ 0x14058A16C (VslFinalizeLiveDumpInSk.c)
 *     VslFinishStartSecureProcessor @ 0x14058A25C (VslFinishStartSecureProcessor.c)
 *     VslFlushEntireTb @ 0x14058A358 (VslFlushEntireTb.c)
 *     VslGetEtwDebugId @ 0x14058A3B4 (VslGetEtwDebugId.c)
 *     VslGetSecurePageList @ 0x14058A504 (VslGetSecurePageList.c)
 *     VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma @ 0x14058A5B0 (VslGetSecurePciDeviceAlternateFunctionNumberForVtl0Dma.c)
 *     VslGetSecurePciDeviceBootConfiguration @ 0x14058A650 (VslGetSecurePciDeviceBootConfiguration.c)
 *     VslGetSecurePciEnabled @ 0x14058A770 (VslGetSecurePciEnabled.c)
 *     VslGetSecureSpeculationControlInformation @ 0x14058A7F0 (VslGetSecureSpeculationControlInformation.c)
 *     VslInitializeSecureKernelCfg @ 0x14058A914 (VslInitializeSecureKernelCfg.c)
 *     VslInitializeSecurePool @ 0x14058A9DC (VslInitializeSecurePool.c)
 *     VslInitializeSecureProcess @ 0x14058AA6C (VslInitializeSecureProcess.c)
 *     VslLiveDumpQuerySecondaryDataSize @ 0x14058AB8C (VslLiveDumpQuerySecondaryDataSize.c)
 *     VslNotifyShutdown @ 0x14058AC34 (VslNotifyShutdown.c)
 *     VslPrepareDriverForPatch @ 0x14058AC9C (VslPrepareDriverForPatch.c)
 *     VslPrepareForCrashdump @ 0x14058AD24 (VslPrepareForCrashdump.c)
 *     VslProvisionDumpEncryption @ 0x14058AD8C (VslProvisionDumpEncryption.c)
 *     VslQueryActiveSecurePatches @ 0x14058ADE8 (VslQueryActiveSecurePatches.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14058AFAC (VslQuerySecureKernelProfileInformation.c)
 *     VslReclaimPartitionPages @ 0x14058B0BC (VslReclaimPartitionPages.c)
 *     VslRegisterSecurePatch @ 0x14058B124 (VslRegisterSecurePatch.c)
 *     VslRegisterSecureSystemProcess @ 0x14058B1F8 (VslRegisterSecureSystemProcess.c)
 *     VslReinitializeIumDebuggerTransport @ 0x14058B290 (VslReinitializeIumDebuggerTransport.c)
 *     VslReportBugCheckProgress @ 0x14058B2F0 (VslReportBugCheckProgress.c)
 *     VslRequestSecureKernelDebuggerBreakIn @ 0x14058B440 (VslRequestSecureKernelDebuggerBreakIn.c)
 *     VslRequestSecureThreadExit @ 0x14058B4F8 (VslRequestSecureThreadExit.c)
 *     VslResumeFromCrashdump @ 0x14058B56C (VslResumeFromCrashdump.c)
 *     VslRetrieveMailbox @ 0x14058B5D0 (VslRetrieveMailbox.c)
 *     VslStartSecurePageIteration @ 0x14058B6FC (VslStartSecurePageIteration.c)
 *     VslSvcEnterIumSecureMode @ 0x14058B7A8 (VslSvcEnterIumSecureMode.c)
 *     VslSwapHiberShadowStacks @ 0x14058B870 (VslSwapHiberShadowStacks.c)
 *     VslSynchronizeXSave @ 0x14058B8E0 (VslSynchronizeXSave.c)
 *     VslTerminateSecureServices @ 0x14058B95C (VslTerminateSecureServices.c)
 *     VslTestRoutine @ 0x14058B9C0 (VslTestRoutine.c)
 *     VslVerifyPage @ 0x14058BA20 (VslVerifyPage.c)
 *     VslWriteProtectedPage @ 0x14058BABC (VslWriteProtectedPage.c)
 *     VslpAddLiveDumpBufferChunk @ 0x14058BB50 (VslpAddLiveDumpBufferChunk.c)
 *     VslpIumPhase4Initialize @ 0x14058BC00 (VslpIumPhase4Initialize.c)
 *     VslpKsrEnterIumSecureMode @ 0x14058BCB0 (VslpKsrEnterIumSecureMode.c)
 *     VslpLiveDumpStart @ 0x14058BD78 (VslpLiveDumpStart.c)
 *     VslpSetupLiveDumpBuffer @ 0x14058BE04 (VslpSetupLiveDumpBuffer.c)
 *     VslCaptureImageHotPatchMetadata @ 0x14058BEB0 (VslCaptureImageHotPatchMetadata.c)
 *     VslFinishSecureImageValidation @ 0x14058BFD0 (VslFinishSecureImageValidation.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14058C0C8 (VslInitFunctionOverrideCapabilities.c)
 *     VslMakeCodeCatalog @ 0x14058C190 (VslMakeCodeCatalog.c)
 *     MiProtectDriverSectionPte @ 0x14066C5D0 (MiProtectDriverSectionPte.c)
 *     MmProtectDriverSection @ 0x14066C990 (MmProtectDriverSection.c)
 *     MmWriteSystemImageTracepoint @ 0x14067EDF0 (MmWriteSystemImageTracepoint.c)
 *     VslAllocateSecureHibernateResources @ 0x14070D098 (VslAllocateSecureHibernateResources.c)
 *     VslCapturePgoData @ 0x14070D160 (VslCapturePgoData.c)
 *     VslDetermineHotPatchType @ 0x14070D29C (VslDetermineHotPatchType.c)
 *     VslEnableOnDemandDebugWithResponse @ 0x14070D348 (VslEnableOnDemandDebugWithResponse.c)
 *     VslFreeSecureHibernateResources @ 0x14070D3F4 (VslFreeSecureHibernateResources.c)
 *     VslGetOnDemandDebugChallenge @ 0x14070D458 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14070D58C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14070D664 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14070D754 (VslLoadEnclaveData.c)
 *     VslObtainHotPatchUndoTable @ 0x14070D850 (VslObtainHotPatchUndoTable.c)
 *     VslQueryRuntimeAttestationReport @ 0x14070DA00 (VslQueryRuntimeAttestationReport.c)
 *     VslQuerySecureDevice @ 0x14070DC20 (VslQuerySecureDevice.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14070DCC4 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslRelaxQuotas @ 0x14070DDA4 (VslRelaxQuotas.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x14070DE24 (VslRevokeSyscallProviderServiceTables.c)
 *     VslRundownSecureProcess @ 0x14070DE8C (VslRundownSecureProcess.c)
 *     VslSendDebugAttachNotifications @ 0x14070DEF4 (VslSendDebugAttachNotifications.c)
 *     VslStartSecureProcessor @ 0x14070DF88 (VslStartSecureProcessor.c)
 *     VslTerminateSecureThread @ 0x14070E1E8 (VslTerminateSecureThread.c)
 *     VslTransformDumpKey @ 0x14070E27C (VslTransformDumpKey.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x14070E448 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslSetCodeIntegrityPolicy @ 0x14070E560 (VslSetCodeIntegrityPolicy.c)
 *     PipUnprotectDevice @ 0x14073469C (PipUnprotectDevice.c)
 *     PsRegisterSyscallProvider @ 0x140771100 (PsRegisterSyscallProvider.c)
 *     PsRundownVsmEnclave @ 0x14077B478 (PsRundownVsmEnclave.c)
 *     PsTerminateVsmEnclave @ 0x14077B4E4 (PsTerminateVsmEnclave.c)
 *     MiApplyDriverHotPatch @ 0x1407F122C (MiApplyDriverHotPatch.c)
 *     NtProtectVirtualMemory @ 0x1408DA8B0 (NtProtectVirtualMemory.c)
 *     DbgkCopyProcessDebugPort @ 0x1408FDA74 (DbgkCopyProcessDebugPort.c)
 *     VslGetSecureTebAddress @ 0x1409929D4 (VslGetSecureTebAddress.c)
 *     VslDebugReadWriteSecureProcess @ 0x140993CB8 (VslDebugReadWriteSecureProcess.c)
 *     NtRemoveProcessDebug @ 0x1409E3070 (NtRemoveProcessDebug.c)
 *     NtDebugActiveProcess @ 0x1409E31E0 (NtDebugActiveProcess.c)
 *     VslCallEnclave @ 0x140A04094 (VslCallEnclave.c)
 *     VslLoadEnclaveModule @ 0x140A2A9E8 (VslLoadEnclaveModule.c)
 *     VslEnableKernelCfgTarget @ 0x140A2C2B0 (VslEnableKernelCfgTarget.c)
 *     VslpConnectedStandbyWnfCallback @ 0x140A30C50 (VslpConnectedStandbyWnfCallback.c)
 *     VslUnloadSecureDriver @ 0x140A33E74 (VslUnloadSecureDriver.c)
 *     VslCompleteSecureDriverLoad @ 0x140A33F88 (VslCompleteSecureDriverLoad.c)
 *     VslAllocateKernelShadowStack @ 0x140A39874 (VslAllocateKernelShadowStack.c)
 *     VslValidateDynamicCodePages @ 0x140A3BD6C (VslValidateDynamicCodePages.c)
 *     VslFreeKernelShadowStack @ 0x140A445BC (VslFreeKernelShadowStack.c)
 *     VslResetKernelShadowStack @ 0x140A4627C (VslResetKernelShadowStack.c)
 *     VslGetSecurePebAddress @ 0x140A52760 (VslGetSecurePebAddress.c)
 *     VslCreateSecureSection @ 0x140A52D90 (VslCreateSecureSection.c)
 *     VslDeleteSecureSection @ 0x140A6F180 (VslDeleteSecureSection.c)
 *     VslReserveProtectedPages @ 0x140A72A2C (VslReserveProtectedPages.c)
 *     VslCreateEnclave @ 0x140A7FBF4 (VslCreateEnclave.c)
 *     VslCreateSecureProcess @ 0x140A7FD70 (VslCreateSecureProcess.c)
 *     VslCreateSecureThread @ 0x140A80638 (VslCreateSecureThread.c)
 *     VslpConnectedStandbyPoCallback @ 0x140A80CD0 (VslpConnectedStandbyPoCallback.c)
 *     VslLiveDumpCaptureProcess @ 0x140A894A4 (VslLiveDumpCaptureProcess.c)
 *     VslUpdateFreezeTimeBias @ 0x140A8D164 (VslUpdateFreezeTimeBias.c)
 *     VslStartSecureThread @ 0x140A90894 (VslStartSecureThread.c)
 *     VslCaptureSecureImageIat @ 0x140A9BDA0 (VslCaptureSecureImageIat.c)
 *     VslIumEtwEnableCallback @ 0x140A9CC90 (VslIumEtwEnableCallback.c)
 *     VslDebugProtectSecureProcessMemory @ 0x140ABAFB0 (VslDebugProtectSecureProcessMemory.c)
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 *     VslApplyDynamicRelocations @ 0x140C1B968 (VslApplyDynamicRelocations.c)
 *     VslBindNtIum @ 0x140C1B9F4 (VslBindNtIum.c)
 *     VslReapplyBootIndirectPatches @ 0x140C1BB74 (VslReapplyBootIndirectPatches.c)
 *     VslpIumPhase0Initialize @ 0x140C1BEB0 (VslpIumPhase0Initialize.c)
 *     PsInitializeSyscallProviders @ 0x140C36834 (PsInitializeSyscallProviders.c)
 *     PspInitPhase3 @ 0x140C37444 (PspInitPhase3.c)
 *     MiApplyDynamicFixupsToKernelAndHal @ 0x140C573F4 (MiApplyDynamicFixupsToKernelAndHal.c)
 *     MiApplyImportOptimizationToBootDriver @ 0x140C57640 (MiApplyImportOptimizationToBootDriver.c)
 *     MiApplyRetpolineToBootDriver @ 0x140C5779C (MiApplyRetpolineToBootDriver.c)
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140C5B5B4 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiApplyFunctionOverrideToBootDriver @ 0x140C5C968 (MiApplyFunctionOverrideToBootDriver.c)
 *     MiInitializeLoadedModuleList @ 0x140C5D4A8 (MiInitializeLoadedModuleList.c)
 *     VslRegisterBootDrivers @ 0x140C65AF8 (VslRegisterBootDrivers.c)
 *     VslConnectSwInterrupt @ 0x140C6722C (VslConnectSwInterrupt.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     KeAreInterruptsEnabled @ 0x140288430 (KeAreInterruptsEnabled.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     EtwTraceEnterVtl1 @ 0x14049EA1C (EtwTraceEnterVtl1.c)
 *     EtwTraceExitVtl1 @ 0x1404A1040 (EtwTraceExitVtl1.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     HvlSwitchToVsmVtl1 @ 0x1406A71C0 (HvlSwitchToVsmVtl1.c)
 *     VslpDispatchIumSyscall @ 0x1406A7330 (VslpDispatchIumSyscall.c)
 */

__int64 __fastcall VslpEnterIumSecureMode(unsigned __int8 a1, unsigned __int16 a2, int a3, __int64 a4)
{
  __int64 v4; // r13
  bool v5; // si
  char v6; // di
  unsigned __int16 v7; // r14
  unsigned __int16 v10; // r15
  unsigned int CurrentRunTime; // ebp
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 v13; // al
  int *p_SecureThreadCookie; // rcx
  NTSTATUS v15; // r15d
  char v16; // al
  char v17; // cl
  unsigned __int8 v18; // bl
  char PreviousMode; // di
  __int64 CurrentIrql; // r13
  char v22; // [rsp+30h] [rbp-88h]
  _WORD v24[2]; // [rsp+34h] [rbp-84h] BYREF
  _WORD v25[2]; // [rsp+38h] [rbp-80h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-7Ch]
  __int64 v27; // [rsp+40h] [rbp-78h]
  __int64 v28; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-58h] BYREF

  v5 = 0;
  v6 = 0;
  v7 = a1;
  LOBYTE(v4) = 15;
  v22 = 0;
  v27 = v4;
  v10 = a2;
  if ( !*(_QWORD *)&HvlpVsmVtlCallVa )
    return 3221225629LL;
  *(_BYTE *)a4 = a1;
  *(_WORD *)(a4 + 2) = a2;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v26 = CurrentRunTime;
  if ( a1 > 2u )
  {
    if ( (BYTE4(xmmword_140FC6B50) & 8) != 0 )
    {
      EtwTraceEnterVtl1(a1);
      HvlSwitchToVsmVtl1(0LL, a4, CurrentRunTime);
      EtwTraceExitVtl1(v7, v10);
    }
    else
    {
      HvlSwitchToVsmVtl1(0LL, a4, CurrentRunTime);
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
      v27 = CurrentIrql;
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 15LL);
    }
  }
  CurrentThread = KeGetCurrentThread();
  v13 = KeGetCurrentIrql();
  if ( (_BYTE)v7 == 1 )
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
    else if ( v13 < 2u )
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
    v5 = *p_SecureThreadCookie == 0;
  }
  if ( v13 == 1 )
  {
    v5 = 1;
LABEL_12:
    --CurrentThread->KernelApcDisable;
    goto LABEL_13;
  }
  if ( v13 >= 2u )
  {
    v5 = 0;
    goto LABEL_13;
  }
  if ( v5 )
    goto LABEL_12;
LABEL_13:
  if ( !v6 )
  {
    while ( 1 )
    {
      if ( (BYTE4(xmmword_140FC6B50) & 8) != 0 )
      {
        v24[1] = v10;
        v29[0] = v24;
        v24[0] = v7;
        v29[1] = 4LL;
        EtwTraceKernelEvent((int)v29, 1, 0xA0000008, 1353, 5249282);
        HvlSwitchToVsmVtl1(0LL, a4, v26);
        v15 = *(_DWORD *)(a4 + 8);
        v25[1] = a2;
        v25[0] = v7;
        v30[0] = v25;
        v30[1] = 4LL;
        EtwTraceKernelEvent((int)v30, 1, 0xA0000008, 1354, 5249282);
      }
      else
      {
        HvlSwitchToVsmVtl1(0LL, a4, v26);
        v15 = *(_DWORD *)(a4 + 8);
      }
      v16 = *(_BYTE *)(a4 + 1);
      if ( v16 < 0 )
      {
        __debugbreak();
        *(_BYTE *)(a4 + 1) &= ~0x80u;
        v16 = *(_BYTE *)(a4 + 1);
      }
      if ( v16 == 1 )
      {
LABEL_32:
        if ( v22 )
          KeReleaseSemaphoreEx(&VslpIumThreadSemaphore, 8, (__int64)&v28);
        goto LABEL_34;
      }
      if ( v16 == 6 )
      {
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 0LL);
        __writecr8(0LL);
        goto LABEL_32;
      }
      if ( (_BYTE)v7 == 1 || !a3 )
        CurrentThread->SecureThreadCookie = *(_DWORD *)(a4 + 4);
      v17 = *(_BYTE *)(a4 + 1);
      if ( v17 == 3 )
      {
LABEL_24:
        if ( *(unsigned __int16 *)(a4 + 2) < (unsigned int)xmmword_1412018D0 )
        {
          PreviousMode = CurrentThread->PreviousMode;
          if ( v17 == 3 )
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
        goto LABEL_26;
      }
      if ( !v17 )
        break;
      if ( v17 == 2 )
      {
        if ( CurrentThread->PreviousMode )
          goto LABEL_24;
        *(_QWORD *)(a4 + 8) = -1073741776LL;
      }
      else if ( v17 == 5 )
      {
        break;
      }
LABEL_26:
      if ( !a3 && (_BYTE)v7 != 1 )
        CurrentThread->SecureThreadCookie = 0;
      *(_BYTE *)a4 = 0;
      *(_WORD *)(a4 + 2) = 0;
LABEL_28:
      v10 = a2;
    }
    PsDispatchIumService(a4);
    goto LABEL_26;
  }
  v15 = KeWaitForSingleObject(&VslpIumThreadSemaphore, Executive, 0, 0, 0LL);
  if ( v15 >= 0 )
  {
    v22 = 1;
    goto LABEL_28;
  }
LABEL_34:
  if ( v5 )
    KeLeaveCriticalRegionThread();
  v18 = v27;
  if ( (_BYTE)v27 != 15 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v27);
    __writecr8(v18);
  }
  return (unsigned int)v15;
}
