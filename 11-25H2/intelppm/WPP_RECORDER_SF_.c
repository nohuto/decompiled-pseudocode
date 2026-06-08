/*
 * XREFs of WPP_RECORDER_SF_ @ 0x140003CF8
 * Callers:
 *     SetGV3PerfStateAndTurbo @ 0x140003010 (SetGV3PerfStateAndTurbo.c)
 *     SetGV3PerfState @ 0x140003370 (SetGV3PerfState.c)
 *     AcpiNotifyCallback @ 0x140003660 (AcpiNotifyCallback.c)
 *     ProcLibOnD0StateChangeWorker @ 0x140004DE0 (ProcLibOnD0StateChangeWorker.c)
 *     EvtDeviceD0Entry @ 0x1400052E0 (EvtDeviceD0Entry.c)
 *     SetTurboDisablePolicy @ 0x1400053E0 (SetTurboDisablePolicy.c)
 *     GetProcessorStatusInfo @ 0x14000C040 (GetProcessorStatusInfo.c)
 *     InitAcpiLegacyPcc @ 0x140027008 (InitAcpiLegacyPcc.c)
 *     ValidatePccEntry @ 0x140027354 (ValidatePccEntry.c)
 *     AcpiEval_PCCP @ 0x140027424 (AcpiEval_PCCP.c)
 *     InitAcpiPerfStates @ 0x140027628 (InitAcpiPerfStates.c)
 *     AcpiEval_LPI @ 0x140027BB0 (AcpiEval_LPI.c)
 *     Display_CSD @ 0x140028A34 (Display_CSD.c)
 *     DisplayKernelPerfStates @ 0x140029E40 (DisplayKernelPerfStates.c)
 *     Display_CST @ 0x140029F8C (Display_CST.c)
 *     ConnectHwpInterrupt @ 0x14002A970 (ConnectHwpInterrupt.c)
 *     CpcConnectNativeInterrupt @ 0x14002D0E0 (CpcConnectNativeInterrupt.c)
 *     InitAcpiCpc @ 0x14002D418 (InitAcpiCpc.c)
 *     ValidateLpiState @ 0x14002EFB4 (ValidateLpiState.c)
 *     ValidatePccHeader @ 0x14002F280 (ValidatePccHeader.c)
 *     AcpiEval_CPC @ 0x140031088 (AcpiEval_CPC.c)
 *     AcpiEval_PSS @ 0x140031C38 (AcpiEval_PSS.c)
 *     AcpiEval_TSS @ 0x140031FE0 (AcpiEval_TSS.c)
 *     AcpiEval_XPSS @ 0x1400322EC (AcpiEval_XPSS.c)
 *     AcpiOSCNotifyWorker @ 0x140032900 (AcpiOSCNotifyWorker.c)
 *     AcpiParseRegisterOrQword @ 0x1400338D0 (AcpiParseRegisterOrQword.c)
 *     AcpiParseULong64 @ 0x1400339F0 (AcpiParseULong64.c)
 *     AcpiTStateNotifyWorker @ 0x140033BF0 (AcpiTStateNotifyWorker.c)
 *     DisplayCpcResourcePriorityRegisterDescriptor @ 0x140033E84 (DisplayCpcResourcePriorityRegisterDescriptor.c)
 *     Display_CPC @ 0x140034044 (Display_CPC.c)
 *     Display_LPI @ 0x140034288 (Display_LPI.c)
 *     Display_PCT_PTC @ 0x1400346CC (Display_PCT_PTC.c)
 *     Display_PSS @ 0x140034838 (Display_PSS.c)
 *     Display_xSD @ 0x140034B30 (Display_xSD.c)
 *     InitAcpiPerfDomain @ 0x140035174 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1400352C8 (InitAcpiThrottleDomain.c)
 *     RegisterXsdDomain @ 0x14003541C (RegisterXsdDomain.c)
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 *     RegisterIdleComplete @ 0x140037B28 (RegisterIdleComplete.c)
 *     RegisterKernelPepPerf @ 0x1400384A0 (RegisterKernelPepPerf.c)
 *     RegisterKernelPlatformStates @ 0x140038AC4 (RegisterKernelPlatformStates.c)
 *     InitAcpi3ThrottleStates @ 0x140039098 (InitAcpi3ThrottleStates.c)
 *     PepNotifyQueryProcessorIdleStatesV2 @ 0x140039D18 (PepNotifyQueryProcessorIdleStatesV2.c)
 *     HwDebugInitializeRegistryDebugParameter @ 0x14003A650 (HwDebugInitializeRegistryDebugParameter.c)
 *     HwDebugInitializeRegistryDebugRegister @ 0x14003AA2C (HwDebugInitializeRegistryDebugRegister.c)
 *     InitPepPerfStates @ 0x14003B3B4 (InitPepPerfStates.c)
 *     PepUpdatePerformanceConstraintWorker @ 0x14003BEC0 (PepUpdatePerformanceConstraintWorker.c)
 *     QueryPepCapabilites @ 0x14003C608 (QueryPepCapabilites.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x14003CE60 (LpiTranslateCoordinatedIdleStates.c)
 *     DisplayKernelIdleStates @ 0x14003DB50 (DisplayKernelIdleStates.c)
 *     AcpiCStateNotifyWorker @ 0x14003E9A0 (AcpiCStateNotifyWorker.c)
 *     InitAcpi2CStates @ 0x14003EC1C (InitAcpi2CStates.c)
 *     InitAcpiIdleDomain @ 0x14003ED7C (InitAcpiIdleDomain.c)
 *     AcpiEval_CSD @ 0x14003EEEC (AcpiEval_CSD.c)
 *     AcpiEval_CST @ 0x14003F2EC (AcpiEval_CST.c)
 *     AcpiParseCore @ 0x14003F8A0 (AcpiParseCore.c)
 *     UpdateKernelPlatformStates @ 0x14003FD54 (UpdateKernelPlatformStates.c)
 *     ProcLibDeviceStart @ 0x1400408BC (ProcLibDeviceStart.c)
 *     AcpiEval_TPC @ 0x1400444F4 (AcpiEval_TPC.c)
 *     AcpiPStateNotifyWorker @ 0x140044660 (AcpiPStateNotifyWorker.c)
 *     AcpiEval_PPC @ 0x1400447C8 (AcpiEval_PPC.c)
 *     DecodeMWaitIdleState @ 0x140044C40 (DecodeMWaitIdleState.c)
 *     AcpiParseRegister @ 0x140044EC0 (AcpiParseRegister.c)
 *     Display_TSS @ 0x140045B30 (Display_TSS.c)
 *     HwDebugCreateRegisterGroup @ 0x140045E74 (HwDebugCreateRegisterGroup.c)
 *     InitAcpiLpiStates @ 0x140046F90 (InitAcpiLpiStates.c)
 *     HwDebugInitializeRegistryDebugRegisters @ 0x140047504 (HwDebugInitializeRegistryDebugRegisters.c)
 *     DisplayPPMFlags @ 0x140049C10 (DisplayPPMFlags.c)
 *     ProcLibGlobalInit @ 0x14004A9C8 (ProcLibGlobalInit.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14000FF90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x140003CF8
 * Reason: Hex-Rays returned no pseudocode for 0x140003CF8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140003CF8: mov     rax, rsp
 * 0000000140003CFB: mov     [rax+8], rbx
 * 0000000140003CFF: mov     [rax+10h], rbp
 * 0000000140003D03: mov     [rax+18h], rsi
 * 0000000140003D07: mov     [rax+20h], rdi
 * 0000000140003D0B: push    r14
 * 0000000140003D0D: sub     rsp, 30h
 * 0000000140003D11: mov     ebp, r8d
 * 0000000140003D14: mov     r14, rcx
 * 0000000140003D17: mov     ebx, r8d
 * 0000000140003D1A: shr     rbx, 10h
 * 0000000140003D1E: movzx   esi, r9w
 * 0000000140003D22: lea     r11d, [rbp-1]
 * 0000000140003D26: movzx   edi, dl
 * 0000000140003D29: mov     r10d, r11d
 * 0000000140003D2C: and     r11d, 1Fh
 * 0000000140003D30: shr     r10, 5
 * 0000000140003D34: lea     rax, [rbx+rbx*4]
 * 0000000140003D38: and     r10d, 7FFh
 * 0000000140003D3F: lea     rax, [r10+rax*4]
 * 0000000140003D43: mov     r10, cs:WPP_GLOBAL_Control
 * 0000000140003D4A: mov     eax, [r10+rax*4+2Ch]
 * 0000000140003D4F: bt      eax, r11d
 * 0000000140003D53: jb      short loc_140003D95
 * 0000000140003D55: and     [rsp+38h+var_10], 0
 * 0000000140003D5B: mov     r8d, ebp
 * 0000000140003D5E: mov     r9, [rsp+38h+arg_20]
 * 0000000140003D63: mov     edx, edi
 * 0000000140003D65: mov     rcx, r14
 * 0000000140003D68: mov     word ptr [rsp+38h+var_18], si
 * 0000000140003D6D: call    cs:__imp_WppAutoLogTrace
 * 0000000140003D74: nop     dword ptr [rax+rax+00h]
 * 0000000140003D79: mov     rbx, [rsp+38h+arg_0]
 * 0000000140003D7E: mov     rbp, [rsp+38h+arg_8]
 * 0000000140003D83: mov     rsi, [rsp+38h+arg_10]
 * 0000000140003D88: mov     rdi, [rsp+38h+arg_18]
 * 0000000140003D8D: add     rsp, 30h
 * 0000000140003D91: pop     r14
 * 0000000140003D93: retn
 * 0000000140003D95: lea     rcx, [rbx+rbx*4]
 * 0000000140003D99: add     rcx, rcx
 * 0000000140003D9C: cmp     [r10+rcx*8+29h], dil
 * 0000000140003DA1: jb      short loc_140003D55
 * 0000000140003DA3: mov     rax, cs:pfnWppTraceMessage
 * 0000000140003DAA: mov     r9d, esi
 * 0000000140003DAD: and     [rsp+38h+var_18], 0
 * 0000000140003DB3: mov     edx, 2Bh ; '+'
 * 0000000140003DB8: mov     r8, [rsp+38h+arg_20]
 * 0000000140003DBD: mov     rcx, [r10+rcx*8+18h]
 * 0000000140003DC2: call    _guard_dispatch_icall
 * 0000000140003DC7: jmp     short loc_140003D55
 */
