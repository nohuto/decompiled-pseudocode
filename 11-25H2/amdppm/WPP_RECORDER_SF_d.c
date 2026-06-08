/*
 * XREFs of WPP_RECORDER_SF_d @ 0x140003B54
 * Callers:
 *     PepPerfCheckComplete @ 0x1400024F0 (PepPerfCheckComplete.c)
 *     PepParkMask @ 0x140003080 (PepParkMask.c)
 *     AcpiNotifyCallback @ 0x140003490 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1400037C0 (ProcLibOnD0StateChangeWorker.c)
 *     PepNotifyFeedbackRead @ 0x14000C22C (PepNotifyFeedbackRead.c)
 *     PepNotifyPerfConstraints @ 0x14000C298 (PepNotifyPerfConstraints.c)
 *     PepNotifyPerfSet @ 0x14000C33C (PepNotifyPerfSet.c)
 *     PepPerfStateControlHandler @ 0x14000C560 (PepPerfStateControlHandler.c)
 *     PepUpdatePerformanceConstraint @ 0x14000C7FC (PepUpdatePerformanceConstraint.c)
 *     PepParkPreference @ 0x14000CA80 (PepParkPreference.c)
 *     EvtDevicePrepareHardware @ 0x140023850 (EvtDevicePrepareHardware.c)
 *     InitAcpi2CStates @ 0x140024B88 (InitAcpi2CStates.c)
 *     CpcInitRegisterAddresses @ 0x140025278 (CpcInitRegisterAddresses.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     RegisterHvCStates @ 0x140025CB8 (RegisterHvCStates.c)
 *     RegisterHvFeedbackCountersCallback @ 0x140025F70 (RegisterHvFeedbackCountersCallback.c)
 *     RegisterHvIdleStates @ 0x140026390 (RegisterHvIdleStates.c)
 *     RegisterHvLpiStates @ 0x1400264CC (RegisterHvLpiStates.c)
 *     RegisterSubspace @ 0x140026D70 (RegisterSubspace.c)
 *     RegisterWmi @ 0x140026F78 (RegisterWmi.c)
 *     AcpiEval_CSD @ 0x140027CB0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x140027FB8 (AcpiEval_CST.c)
 *     AcpiEval_PSS @ 0x140028ECC (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x140029274 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1400293D4 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1400296E0 (AcpiEval_XPSS.c)
 *     AcpiParseCpcResourcePriorities @ 0x14002A0A0 (AcpiParseCpcResourcePriorities.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002B624 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x14002BAA0 (Display_CPC.c)
 *     Display_CSD @ 0x14002BCE4 (Display_CSD.c)
 *     Display_CST @ 0x14002BFF4 (Display_CST.c)
 *     Display_LPI @ 0x14002C290 (Display_LPI.c)
 *     Display_PSS @ 0x14002C840 (Display_PSS.c)
 *     Display_TSS @ 0x14002CB38 (Display_TSS.c)
 *     Display_xSD @ 0x14002CDEC (Display_xSD.c)
 *     DisplayKernelPerfStates @ 0x14002D89C (DisplayKernelPerfStates.c)
 *     ProcLibDeviceCreate @ 0x14002D9E8 (ProcLibDeviceCreate.c)
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 *     ValidateCoordinatedState @ 0x1400300B0 (ValidateCoordinatedState.c)
 *     ValidateMsrGenAddr @ 0x140030908 (ValidateMsrGenAddr.c)
 *     ValidatePlatformIdleState @ 0x1400312E8 (ValidatePlatformIdleState.c)
 *     Validate_PCT_PTC @ 0x14003187C (Validate_PCT_PTC.c)
 *     GetNtProcessorNumber @ 0x140031DF0 (GetNtProcessorNumber.c)
 *     RegisterKernelCoordinatedLpiStates @ 0x140034938 (RegisterKernelCoordinatedLpiStates.c)
 *     RegisterKernelCoordinatedStates @ 0x140034AA8 (RegisterKernelCoordinatedStates.c)
 *     RegisterKernelIdleStates @ 0x140034BC0 (RegisterKernelIdleStates.c)
 *     RegisterKernelPepPerf @ 0x140035840 (RegisterKernelPepPerf.c)
 *     RegisterKernelPerfStatesCallback @ 0x140035E00 (RegisterKernelPerfStatesCallback.c)
 *     RegisterKernelPlatformStates @ 0x140035E64 (RegisterKernelPlatformStates.c)
 *     UpdateKernelCoordinatedStates @ 0x14003621C (UpdateKernelCoordinatedStates.c)
 *     UpdateKernelIdleDomains @ 0x1400362A4 (UpdateKernelIdleDomains.c)
 *     UpdateKernelPlatformStates @ 0x140036420 (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1400368CC (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x140036A38 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140036CB4 (InitAcpiThrottleDomain.c)
 *     InitAcpi3ThrottleStates @ 0x140037160 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1400372A4 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x140037630 (InitAcpiThrottleStates.c)
 *     InitPepIdleStates @ 0x140037790 (InitPepIdleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x14003816C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     PepNotifyReportCStates @ 0x140038590 (PepNotifyReportCStates.c)
 *     HwDebugCreateRegisterGroup @ 0x140038C64 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeProcessorSupport @ 0x140039068 (HwDebugInitializeProcessorSupport.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x140039234 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x140039610 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140039B38 (HwDebugInitializeRegistryDebugRegisters.c)
 *     HwDebugSetKeyNotification @ 0x140039E24 (HwDebugSetKeyNotification.c)
 *     InitPepPerfStates @ 0x14003A924 (InitPepPerfStates.c)
 *     PepNotifyQueryFeedbackCounters @ 0x14003B124 (PepNotifyQueryFeedbackCounters.c)
 *     PepNotifyQueryPerfCapabilities @ 0x14003B214 (PepNotifyQueryPerfCapabilities.c)
 *     PepQueryPerfDomainInfo @ 0x14003B310 (PepQueryPerfDomainInfo.c)
 *     InitPep @ 0x14003B614 (InitPep.c)
 *     PepGetParkingPageInfo @ 0x14003B7D8 (PepGetParkingPageInfo.c)
 *     PepNotifyQueryCapabilities @ 0x14003B88C (PepNotifyQueryCapabilities.c)
 *     PepNotifyQuerySocIdentifier @ 0x14003B9D4 (PepNotifyQuerySocIdentifier.c)
 *     QueryPepCapabilites @ 0x14003BBA8 (QueryPepCapabilites.c)
 *     RegisterPepDevice @ 0x14003BE8C (RegisterPepDevice.c)
 *     InitAcpiLegacyPcc @ 0x14003BFC4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003C238 (InitAcpiLpiStates.c)
 *     AcpiEval_PPC @ 0x14003FE44 (AcpiEval_PPC.c)
 *     EvtDriverDeviceAdd @ 0x140040BE0 (EvtDriverDeviceAdd.c)
 *     DriverEntry @ 0x14004214C (DriverEntry.c)
 *     CollectAcpiBiosInfo @ 0x140042610 (CollectAcpiBiosInfo.c)
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
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
