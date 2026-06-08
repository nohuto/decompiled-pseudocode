/*
 * XREFs of WPP_RECORDER_SF_d @ 0x140003B54
 * Callers:
 *     PepPerfCheckComplete @ 0x1400024F0 (PepPerfCheckComplete.c)
 *     PepParkMask @ 0x140003080 (PepParkMask.c)
 *     AcpiNotifyCallback @ 0x140003490 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1400037C0 (ProcLibOnD0StateChangeWorker.c)
 *     PepNotifyFeedbackRead @ 0x14000CF4C (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x14000CFB8 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x14000D05C (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x14000D280 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x14000D51C (PepUpdatePerformanceConstraint.c)
 *     PepParkPreference @ 0x14000D730 (PepParkPreference.c)
 *     EvtDevicePrepareHardware @ 0x1400249A0 (EvtDevicePrepareHardware.c)
 *     InitAcpi2CStates @ 0x140025D94 (InitAcpi2CStates.c)
 *     CpcInitRegisterAddresses @ 0x140026484 (CpcInitRegisterAddresses.c)
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x140026EB8 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x140027170 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x140027590 (RegisterHvIdleStates.c)
 *     RegisterHvLpiStates @ 0x1400276CC (RegisterHvLpiStates.c)
 *     RegisterSubspace @ 0x140027F70 (RegisterSubspace.c)
 *     RegisterWmi @ 0x140028178 (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x140028EB0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400291B8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x14002A0CC (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x14002A474 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x14002A5D4 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x14002A8E0 (AcpiEval_XPSS.c)
 *     AcpiParseCpcResourcePriorities @ 0x14002B2A0 (AcpiParseCpcResourcePriorities.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002C824 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x14002CCA0 (Display_CPC.c)
 *     Display_CSD @ 0x14002CEE4 (Display_CSD.c)
 *     Display_CST @ 0x14002D1F4 (Display_CST.c)
 *     Display_LPI @ 0x14002D490 (Display_LPI.c)
 *     Display_PSS @ 0x14002DA40 (Display_PSS.c)
 *     Display_TSS @ 0x14002DD38 (Display_TSS.c)
 *     Display_xSD @ 0x14002DFEC (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x14002EA9C (DisplayKernelPerfStates.c)
 *     ProcLibDeviceCreate @ 0x14002EBE8 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 *     ValidateCoordinatedState @ 0x1400312B0 (ValidateCoordinatedState.c)
 *     ValidateMsrGenAddr @ 0x140031B08 (ValidateMsrGenAddr.c)
 *     ValidatePlatformIdleState @ 0x1400324E8 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x140032A7C (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x140032FF0 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x140035B38 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x140035CB0 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelIdleStates @ 0x140035DD0 (RegisterKernelIdleStates.c)
 *     RegisterKernelPepPerf @ 0x140036A50 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x140037010 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x140037074 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x140037420 (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1400374A8 (UpdateKernelIdleDomains.c)
 *     UpdateKernelPlatformStates @ 0x140037624 (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x140037B10 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x140037C7C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140037EF8 (InitAcpiThrottleDomain.c)
 *     InitAcpi3ThrottleStates @ 0x1400383A4 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1400384E8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x140038874 (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x1400389D4 (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1400393B0 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x1400397D4 (PepNotifyReportCStates.c)
 *     HwDebugCreateRegisterGroup @ 0x140039EB4 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeProcessorSupport @ 0x14003A2B8 (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003A484 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003A860 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x14003AD88 (HwDebugInitializeRegistryDebugRegisters.c)
 *     HwDebugSetKeyNotification @ 0x14003B074 (HwDebugSetKeyNotification.c)
 *     InitPepPerfStates @ 0x14003BB74 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x14003C374 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x14003C464 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x14003C560 (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x14003C864 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x14003CA28 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x14003CADC (PepNotifyQueryCapabilities.c)
 *     PepNotifyQuerySocIdentifier @ 0x14003CC24 (PepNotifyQuerySocIdentifier.c)
 *     QueryPepCapabilites @ 0x14003CDF8 (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x14003D0DC (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x14003D214 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003D488 (InitAcpiLpiStates.c)
 *     AcpiEval_PPC @ 0x140041094 (AcpiEval_PPC.c)
 *     EvtDriverDeviceAdd @ 0x140041E30 (EvtDriverDeviceAdd.c)
 *     DriverEntry @ 0x14004314C (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x1400435E4 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x140044504 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x140003B54
 * Reason: Hex-Rays returned no pseudocode for 0x140003B54
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140003B54: mov     rax, rsp
 * 0000000140003B57: mov     [rax+8], rbx
 * 0000000140003B5B: mov     [rax+10h], rbp
 * 0000000140003B5F: mov     [rax+18h], rsi
 * 0000000140003B63: mov     [rax+20h], rdi
 * 0000000140003B67: push    r14
 * 0000000140003B69: sub     rsp, 40h
 * 0000000140003B6D: mov     ebp, r8d
 * 0000000140003B70: mov     r14, rcx
 * 0000000140003B73: mov     ebx, r8d
 * 0000000140003B76: shr     rbx, 10h
 * 0000000140003B7A: movzx   esi, r9w
 * 0000000140003B7E: lea     r11d, [rbp-1]
 * 0000000140003B82: movzx   edi, dl
 * 0000000140003B85: mov     r10d, r11d
 * 0000000140003B88: and     r11d, 1Fh
 * 0000000140003B8C: shr     r10, 5
 * 0000000140003B90: lea     rax, [rbx+rbx*4]
 * 0000000140003B94: and     r10d, 7FFh
 * 0000000140003B9B: lea     rax, [r10+rax*4]
 * 0000000140003B9F: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140003BA6: mov     eax, [r10+rax*4+2Ch]
 * 0000000140003BAB: bt      eax, r11d
 * 0000000140003BAF: jnb     short loc_140003BF6
 * 0000000140003BB1: lea     rcx, [rbx+rbx*4]
 * 0000000140003BB5: add     rcx, rcx
 * 0000000140003BB8: cmp     [r10+rcx*8+29h], dil
 * 0000000140003BBD: jb      short loc_140003BF6
 * 0000000140003BBF: and     [rsp+48h+var_18], 0
 * 0000000140003BC5: lea     rdx, [rsp+48h+arg_28]
 * 0000000140003BCA: mov     rax, cs:pfnWppTraceMessage
 * 0000000140003BD1: mov     r9d, esi
 * 0000000140003BD4: mov     r8, [rsp+48h+arg_20]
 * 0000000140003BD9: mov     rcx, [r10+rcx*8+18h]
 * 0000000140003BDE: mov     [rsp+48h+var_20], 4
 * 0000000140003BE7: mov     [rsp+48h+var_28], rdx
 * 0000000140003BEC: mov     edx, 2Bh ; '+'
 * 0000000140003BF1: call    _guard_dispatch_icall
 * 0000000140003BF6: and     [rsp+48h+var_10], 0
 * 0000000140003BFC: lea     rax, [rsp+48h+arg_28]
 * 0000000140003C01: mov     r9, [rsp+48h+arg_20]
 * 0000000140003C06: mov     r8d, ebp
 * 0000000140003C09: mov     [rsp+48h+var_18], 4
 * 0000000140003C12: mov     edx, edi
 * 0000000140003C14: mov     [rsp+48h+var_20], rax
 * 0000000140003C19: mov     rcx, r14
 * 0000000140003C1C: mov     word ptr [rsp+48h+var_28], si
 * 0000000140003C21: call    cs:__imp_WppAutoLogTrace
 * 0000000140003C28: nop     dword ptr [rax+rax+00h]
 * 0000000140003C2D: mov     rbx, [rsp+48h+arg_0]
 * 0000000140003C32: mov     rbp, [rsp+48h+arg_8]
 * 0000000140003C37: mov     rsi, [rsp+48h+arg_10]
 * 0000000140003C3C: mov     rdi, [rsp+48h+arg_18]
 * 0000000140003C41: add     rsp, 40h
 * 0000000140003C45: pop     r14
 * 0000000140003C47: retn
 */
