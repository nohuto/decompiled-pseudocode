/*
 * XREFs of WPP_RECORDER_SF_ @ 0x140003C68
 * Callers:
 *     EvtDeviceD0Entry @ 0x1400033A0 (EvtDeviceD0Entry.c)
 *     AcpiNotifyCallback @ 0x140003490 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1400037C0 (ProcLibOnD0StateChangeWorker.c)
 *     GetProcessorStatusInfo @ 0x1400068A0 (GetProcessorStatusInfo.c)
 *     DecodeMWaitIdleState @ 0x140022400 (DecodeMWaitIdleState.c)
 *     InitAcpi2CStates @ 0x140024B88 (InitAcpi2CStates.c)
 *     CpcConnectNativeInterrupt @ 0x140024DDC (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1400254B8 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1400272B0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x14002754C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x140027CB0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x140027FB8 (AcpiEval_CST.c)
 *     AcpiEval_LPI @ 0x1400283F0 (AcpiEval_LPI.c)
 *     AcpiEval_PCCP @ 0x140028680 (AcpiEval_PCCP.c)
 *     AcpiEval_PSS @ 0x140028ECC (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x140029274 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x1400293D4 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1400296E0 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x140029CF0 (AcpiOSCNotifyWorker.c)
 *     AcpiParseCore @ 0x140029DD0 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x14002AF90 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x14002B050 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x14002B190 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x14002B390 (AcpiTStateNotifyWorker.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002B624 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x14002BAA0 (Display_CPC.c)
 *     Display_CSD @ 0x14002BCE4 (Display_CSD.c)
 *     Display_CST @ 0x14002BFF4 (Display_CST.c)
 *     Display_LPI @ 0x14002C290 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x14002C6D4 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x14002C840 (Display_PSS.c)
 *     Display_TSS @ 0x14002CB38 (Display_TSS.c)
 *     Display_xSD @ 0x14002CDEC (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x14002D720 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x14002D89C (DisplayKernelPerfStates.c)
 *     ProcLibDeviceStart @ 0x14002DBF4 (ProcLibDeviceStart.c)
 *     ValidateLpiState @ 0x1400307E8 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x140030AB4 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x140030B84 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x14003385C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140033B84 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x140034408 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x140035840 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x140035E64 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x140036420 (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x1400368CC (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x140036A38 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140036CB4 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x140036E08 (RegisterXsdDomain.c)
 *     InitAcpi3ThrottleStates @ 0x140037160 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1400372A4 (InitAcpiPerfStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x14003816C (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugCreateRegisterGroup @ 0x140038C64 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x140039234 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x140039610 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140039B38 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitPepPerfStates @ 0x14003A924 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003B460 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x14003BBA8 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x14003BFC4 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003C238 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003C88C (LpiTranslateCoordinatedIdleStates.c)
 *     AcpiPStateNotifyWorker @ 0x14003FBF0 (AcpiPStateNotifyWorker.c)
 *     AcpiEval_PPC @ 0x14003FE44 (AcpiEval_PPC.c)
 *     DisplayPPMFlags @ 0x140042778 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x140043530 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000D700 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x140003C68
 * Reason: Hex-Rays returned no pseudocode for 0x140003C68
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140003C68: mov     rax, rsp
 * 0000000140003C6B: mov     [rax+8], rbx
 * 0000000140003C6F: mov     [rax+10h], rbp
 * 0000000140003C73: mov     [rax+18h], rsi
 * 0000000140003C77: mov     [rax+20h], rdi
 * 0000000140003C7B: push    r14
 * 0000000140003C7D: sub     rsp, 30h
 * 0000000140003C81: mov     ebp, r8d
 * 0000000140003C84: mov     r14, rcx
 * 0000000140003C87: mov     ebx, r8d
 * 0000000140003C8A: shr     rbx, 10h
 * 0000000140003C8E: movzx   esi, r9w
 * 0000000140003C92: lea     r11d, [rbp-1]
 * 0000000140003C96: movzx   edi, dl
 * 0000000140003C99: mov     r10d, r11d
 * 0000000140003C9C: and     r11d, 1Fh
 * 0000000140003CA0: shr     r10, 5
 * 0000000140003CA4: lea     rax, [rbx+rbx*4]
 * 0000000140003CA8: and     r10d, 7FFh
 * 0000000140003CAF: lea     rax, [r10+rax*4]
 * 0000000140003CB3: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140003CBA: mov     eax, [r10+rax*4+2Ch]
 * 0000000140003CBF: bt      eax, r11d
 * 0000000140003CC3: jnb     short loc_140003CF7
 * 0000000140003CC5: lea     rcx, [rbx+rbx*4]
 * 0000000140003CC9: add     rcx, rcx
 * 0000000140003CCC: cmp     [r10+rcx*8+29h], dil
 * 0000000140003CD1: jb      short loc_140003CF7
 * 0000000140003CD3: mov     rax, cs:pfnWppTraceMessage
 * 0000000140003CDA: mov     r9d, esi
 * 0000000140003CDD: and     [rsp+38h+var_18], 0
 * 0000000140003CE3: mov     edx, 2Bh ; '+'
 * 0000000140003CE8: mov     r8, [rsp+38h+arg_20]
 * 0000000140003CED: mov     rcx, [r10+rcx*8+18h]
 * 0000000140003CF2: call    _guard_dispatch_icall
 * 0000000140003CF7: and     [rsp+38h+var_10], 0
 * 0000000140003CFD: mov     r8d, ebp
 * 0000000140003D00: mov     r9, [rsp+38h+arg_20]
 * 0000000140003D05: mov     edx, edi
 * 0000000140003D07: mov     rcx, r14
 * 0000000140003D0A: mov     word ptr [rsp+38h+var_18], si
 * 0000000140003D0F: call    cs:__imp_WppAutoLogTrace
 * 0000000140003D16: nop     dword ptr [rax+rax+00h]
 * 0000000140003D1B: mov     rbx, [rsp+38h+arg_0]
 * 0000000140003D20: mov     rbp, [rsp+38h+arg_8]
 * 0000000140003D25: mov     rsi, [rsp+38h+arg_10]
 * 0000000140003D2A: mov     rdi, [rsp+38h+arg_18]
 * 0000000140003D2F: add     rsp, 30h
 * 0000000140003D33: pop     r14
 * 0000000140003D35: retn
 */
