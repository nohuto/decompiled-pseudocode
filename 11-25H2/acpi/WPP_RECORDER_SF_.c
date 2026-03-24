/*
 * XREFs of WPP_RECORDER_SF_ @ 0x1400283FC
 * Callers:
 *     ACPIEnableEnterACPIMode @ 0x1400234B0 (ACPIEnableEnterACPIMode.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1400236D4 (ACPIStartNextGlobalLockRequest.c)
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 *     ACPIDeviceDiscoverDependencies @ 0x140026F6C (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x140027364 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDevicePowerProcessPhase4 @ 0x140027B10 (ACPIDevicePowerProcessPhase4.c)
 *     ACPIDevicePowerProcessPhase3 @ 0x140027DFC (ACPIDevicePowerProcessPhase3.c)
 *     OSNotifyDeviceCheck @ 0x140029BD4 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x1400311FC (OSNotifyDeviceWakeByInterrupt.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140031A38 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIRangeValidatePciResources @ 0x14004CEF8 (ACPIRangeValidatePciResources.c)
 *     ACPIWriteEventLogEntry @ 0x140053A50 (ACPIWriteEventLogEntry.c)
 *     ACPIDispatchAddDevice @ 0x14005DCE0 (ACPIDispatchAddDevice.c)
 *     ACPIUnload @ 0x14005E480 (ACPIUnload.c)
 *     ACPIIgnoreResourceMapValidation @ 0x140066988 (ACPIIgnoreResourceMapValidation.c)
 *     ACPIRootIrpRemoveDevice @ 0x1400676F0 (ACPIRootIrpRemoveDevice.c)
 *     ACPITableNotifyFreeObject @ 0x1400680F0 (ACPITableNotifyFreeObject.c)
 *     ACPIVectorConnect @ 0x140069660 (ACPIVectorConnect.c)
 *     ACPIVectorDisconnect @ 0x140069890 (ACPIVectorDisconnect.c)
 *     ACPIInterruptInitialize @ 0x140097230 (ACPIInterruptInitialize.c)
 *     AcpiExternalTranslateBiosToNtResources @ 0x14009D2B8 (AcpiExternalTranslateBiosToNtResources.c)
 *     ACPIProcessHardwareInformation @ 0x14009EFF0 (ACPIProcessHardwareInformation.c)
 *     ACPIPccInitialize @ 0x14009F858 (ACPIPccInitialize.c)
 *     ACPIPccLegacyInitialize @ 0x14009F9A0 (ACPIPccLegacyInitialize.c)
 *     ACPIProcessorBuildBootApicIds @ 0x1400A29CC (ACPIProcessorBuildBootApicIds.c)
 *     ACPIProcessorBuildHiddenApicIds @ 0x1400A2AA8 (ACPIProcessorBuildHiddenApicIds.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1400A43CC (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1400A4820 (PnpiBiosAddressQuadToIoDescriptor.c)
 *     PnpCmResourcesToBiosResources @ 0x1400A5714 (PnpCmResourcesToBiosResources.c)
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 *     IrqArbAddAllocation @ 0x1400A9380 (IrqArbAddAllocation.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1400BADE8 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpBiosResourcesToNtResources @ 0x1400BB1A4 (PnpBiosResourcesToNtResources.c)
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1400BC174 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     IcCheckIrqConflict @ 0x1400BD0F4 (IcCheckIrqConflict.c)
 *     IrqArbpFindSuitableRangePci @ 0x1400BF404 (IrqArbpFindSuitableRangePci.c)
 *     ACPIEnumerateTables @ 0x1400C0498 (ACPIEnumerateTables.c)
 *     ACPIInitialize @ 0x1400C4008 (ACPIInitialize.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1400C44E4 (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 *     ACPIInitializeDDBs @ 0x1400C4B28 (ACPIInitializeDDBs.c)
 *     OSReadAcpiConfigurationData @ 0x1400C4D0C (OSReadAcpiConfigurationData.c)
 *     ACPILoadFindRSDT @ 0x1400C6114 (ACPILoadFindRSDT.c)
 *     ACPIInitStartACPI @ 0x1400C715C (ACPIInitStartACPI.c)
 *     ACPILoadProcessDSDT @ 0x1400C74D8 (ACPILoadProcessDSDT.c)
 *     ACPILoadProcessFACS @ 0x1400C7618 (ACPILoadProcessFACS.c)
 *     ACPILoadProcessFADT @ 0x1400C7770 (ACPILoadProcessFADT.c)
 *     ACPIRegDumpAcpiTables @ 0x1400C7898 (ACPIRegDumpAcpiTables.c)
 *     ACPILoadProcessRSDT @ 0x1400C9308 (ACPILoadProcessRSDT.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ @ 0x1400283FC
 * Reason: Hex-Rays returned no pseudocode for 0x1400283FC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400283FC: mov     rax, rsp
 * 00000001400283FF: mov     [rax+8], rbx
 * 0000000140028403: mov     [rax+10h], rbp
 * 0000000140028407: mov     [rax+18h], rsi
 * 000000014002840B: mov     [rax+20h], rdi
 * 000000014002840F: push    r14
 * 0000000140028411: sub     rsp, 30h
 * 0000000140028415: mov     ebp, r8d
 * 0000000140028418: mov     r14, rcx
 * 000000014002841B: mov     ebx, r8d
 * 000000014002841E: shr     rbx, 10h
 * 0000000140028422: movzx   esi, r9w
 * 0000000140028426: lea     r11d, [rbp-1]
 * 000000014002842A: movzx   edi, dl
 * 000000014002842D: mov     r10d, r11d
 * 0000000140028430: and     r11d, 1Fh
 * 0000000140028434: shr     r10, 5
 * 0000000140028438: lea     rax, [rbx+rbx*4]
 * 000000014002843C: and     r10d, 7FFh
 * 0000000140028443: lea     rax, [r10+rax*4]
 * 0000000140028447: mov     r10, cs:WPP_GLOBAL_Control
 * 000000014002844E: mov     eax, [r10+rax*4+2Ch]
 * 0000000140028453: bt      eax, r11d
 * 0000000140028457: jb      short loc_140028499
 * 0000000140028459: and     [rsp+38h+var_10], 0
 * 000000014002845F: mov     r8d, ebp
 * 0000000140028462: mov     r9, [rsp+38h+arg_20]
 * 0000000140028467: mov     edx, edi
 * 0000000140028469: mov     rcx, r14
 * 000000014002846C: mov     word ptr [rsp+38h+var_18], si
 * 0000000140028471: call    cs:__imp_WppAutoLogTrace
 * 0000000140028478: nop     dword ptr [rax+rax+00h]
 * 000000014002847D: mov     rbx, [rsp+38h+arg_0]
 * 0000000140028482: mov     rbp, [rsp+38h+arg_8]
 * 0000000140028487: mov     rsi, [rsp+38h+arg_10]
 * 000000014002848C: mov     rdi, [rsp+38h+arg_18]
 * 0000000140028491: add     rsp, 30h
 * 0000000140028495: pop     r14
 * 0000000140028497: retn
 * 0000000140028499: lea     rcx, [rbx+rbx*4]
 * 000000014002849D: add     rcx, rcx
 * 00000001400284A0: cmp     [r10+rcx*8+29h], dil
 * 00000001400284A5: jb      short loc_140028459
 * 00000001400284A7: mov     rax, cs:pfnWppTraceMessage
 * 00000001400284AE: mov     r9d, esi
 * 00000001400284B1: and     [rsp+38h+var_18], 0
 * 00000001400284B7: mov     edx, 2Bh ; '+'
 * 00000001400284BC: mov     r8, [rsp+38h+arg_20]
 * 00000001400284C1: mov     rcx, [r10+rcx*8+18h]
 * 00000001400284C6: call    _guard_dispatch_icall
 * 00000001400284CB: jmp     short loc_140028459
 */
