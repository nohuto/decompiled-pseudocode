/*
 * XREFs of WPP_RECORDER_SF_ @ 0x140003C68
 * Callers:
 *     EvtDeviceD0Entry @ 0x1400033A0 (EvtDeviceD0Entry.c)
 *     AcpiNotifyCallback @ 0x140003490 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x1400037C0 (ProcLibOnD0StateChangeWorker.c)
 *     GetProcessorStatusInfo @ 0x140007540 (GetProcessorStatusInfo.c)
 *     DecodeMWaitIdleState @ 0x140023400 (DecodeMWaitIdleState.c)
 *     InitAcpi2CStates @ 0x140025D94 (InitAcpi2CStates.c)
 *     CpcConnectNativeInterrupt @ 0x140025FE8 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x1400266B8 (InitAcpiCpc.c)
 *     AcpiCStateNotifyWorker @ 0x1400284B0 (AcpiCStateNotifyWorker.c)
 *     AcpiEval_CPC @ 0x14002874C (AcpiEval_CPC.c)
 *     AcpiEval_CSD @ 0x140028EB0 (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x1400291B8 (AcpiEval_CST.c)
 *     AcpiEval_LPI @ 0x1400295F0 (AcpiEval_LPI.c)
 *     AcpiEval_PCCP @ 0x140029880 (AcpiEval_PCCP.c)
 *     AcpiEval_PSS @ 0x14002A0CC (AcpiEval_PSS.c)
 *     AcpiEval_TPC @ 0x14002A474 (AcpiEval_TPC.c)
 *     AcpiEval_TSS @ 0x14002A5D4 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x14002A8E0 (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x14002AEF0 (AcpiOSCNotifyWorker.c)
 *     AcpiParseCore @ 0x14002AFD0 (AcpiParseCore.c)
 *     AcpiParseRegister @ 0x14002C190 (AcpiParseRegister.c)
 *     AcpiParseRegisterOrQword @ 0x14002C250 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x14002C390 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x14002C590 (AcpiTStateNotifyWorker.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x14002C824 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x14002CCA0 (Display_CPC.c)
 *     Display_CSD @ 0x14002CEE4 (Display_CSD.c)
 *     Display_CST @ 0x14002D1F4 (Display_CST.c)
 *     Display_LPI @ 0x14002D490 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x14002D8D4 (Display_PCT_PTC.c)
 *     Display_PSS @ 0x14002DA40 (Display_PSS.c)
 *     Display_TSS @ 0x14002DD38 (Display_TSS.c)
 *     Display_xSD @ 0x14002DFEC (Display_xSD.c)
 *     DisplayKernelIdleStates @ 0x14002E920 (DisplayKernelIdleStates.c)
 *     DisplayKernelPerfStates @ 0x14002EA9C (DisplayKernelPerfStates.c)
 *     ProcLibDeviceStart @ 0x14002EDF4 (ProcLibDeviceStart.c)
 *     ValidateLpiState @ 0x1400319E8 (ValidateLpiState.c)
 *     ValidatePccEntry @ 0x140031CB4 (ValidatePccEntry.c)
 *     ValidatePccHeader @ 0x140031D84 (ValidatePccHeader.c)
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034A5C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140034D84 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x140035608 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x140036A50 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x140037074 (RegisterKernelPlatformStates.c)
 *     UpdateKernelPlatformStates @ 0x140037624 (UpdateKernelPlatformStates.c)
 *     InitAcpiIdleDomain @ 0x140037B10 (InitAcpiIdleDomain.c)
 *     InitAcpiPerfDomain @ 0x140037C7C (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x140037EF8 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x14003804C (RegisterXsdDomain.c)
 *     InitAcpi3ThrottleStates @ 0x1400383A4 (InitAcpi3ThrottleStates.c)
 *     InitAcpiPerfStates @ 0x1400384E8 (InitAcpiPerfStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x1400393B0 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugCreateRegisterGroup @ 0x140039EB4 (HwDebugCreateRegisterGroup.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003A484 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003A860 (HwDebugInitializeRegistryDebugRegister.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x14003AD88 (HwDebugInitializeRegistryDebugRegisters.c)
 *     InitPepPerfStates @ 0x14003BB74 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003C6B0 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x14003CDF8 (QueryPepCapabilites.c)
 *     InitAcpiLegacyPcc @ 0x14003D214 (InitAcpiLegacyPcc.c)
 *     InitAcpiLpiStates @ 0x14003D488 (InitAcpiLpiStates.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003DADC (LpiTranslateCoordinatedIdleStates.c)
 *     AcpiPStateNotifyWorker @ 0x140040E40 (AcpiPStateNotifyWorker.c)
 *     AcpiEval_PPC @ 0x140041094 (AcpiEval_PPC.c)
 *     DisplayPPMFlags @ 0x14004374C (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x140044504 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000E3B0 (_guard_dispatch_icall.c)
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
