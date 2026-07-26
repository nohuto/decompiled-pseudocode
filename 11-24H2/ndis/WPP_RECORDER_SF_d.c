/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1400075C0
 * Callers:
 *     ?ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1400070D0 (-ndisPMAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_RE.c)
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140008000 (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     NdisMAllocateNetBufferSGList @ 0x1400283A0 (NdisMAllocateNetBufferSGList.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x140029D10 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x14002A7C0 (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ndisLwmCreateIrpHandler @ 0x14002BD70 (ndisLwmCreateIrpHandler.c)
 *     ndisReceiveWorkerThread @ 0x1400470F0 (ndisReceiveWorkerThread.c)
 *     ?ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z @ 0x140051FC0 (-ndisNotifyWmiBindUnbind@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@E@Z.c)
 *     ?ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1400521B0 (-ndisNotifyDevicePowerStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x140058210 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     NdisAllocateSharedMemory @ 0x14005CCE0 (NdisAllocateSharedMemory.c)
 *     ndisWnfPdcCallback @ 0x140061C70 (ndisWnfPdcCallback.c)
 *     ?ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x140067C10 (-ndisPMAddWOLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z @ 0x14006AF00 (-ndisPowerStateCallback@@YAJPEBU_GUID@@PEAXK1@Z.c)
 *     NdisTryAcquireNicActive @ 0x1400761B0 (NdisTryAcquireNicActive.c)
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x14007BF40 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     NdisLWMRegisterMiniportDriver @ 0x140093240 (NdisLWMRegisterMiniportDriver.c)
 *     NdisMAllocateSharedMemoryAsync @ 0x140093630 (NdisMAllocateSharedMemoryAsync.c)
 *     ?ndisInitializeGlobalTriageData@@YAXXZ @ 0x140098B08 (-ndisInitializeGlobalTriageData@@YAXXZ.c)
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009CDA4 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ?ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14009F208 (-ndisReadModernStandyWoLMagicPacketKeywords@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B2220 (-ndisAddWoLMagicPacket@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B4AA4 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400B4CF8 (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C085C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ndisCreateThread @ 0x1400C1CC4 (ndisCreateThread.c)
 *     ndisAoAcTraceRundown @ 0x1400C4D4C (ndisAoAcTraceRundown.c)
 *     ?ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ @ 0x1400C9B20 (-ndisIfCompartmentSubsystemInitializePhase2@@YAJXZ.c)
 *     ndisIfDeleteCompartment @ 0x1400CA980 (ndisIfDeleteCompartment.c)
 *     ?ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z @ 0x1400CC0E8 (-ndisIfAliasChange@@YAJPEBU_UNICODE_STRING@@0@Z.c)
 *     ?ndisIfNetworkSubsystemInitializePhase2@@YAJXZ @ 0x1400CD33C (-ndisIfNetworkSubsystemInitializePhase2@@YAJXZ.c)
 *     NdisClCloseCall @ 0x1400CF820 (NdisClCloseCall.c)
 *     NdisCmMakeCallComplete @ 0x1400CFF70 (NdisCmMakeCallComplete.c)
 *     NdisCoDeleteVc @ 0x1400D15A0 (NdisCoDeleteVc.c)
 *     NdisOpenFile @ 0x1400D4880 (NdisOpenFile.c)
 *     ?ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA074 (-ndisMAllocSGList@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     ?ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z @ 0x1400DA414 (-ndisMAllocSGListS@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PACKET@@@Z.c)
 *     KLoaderRegisterModule @ 0x1400DC8B0 (KLoaderRegisterModule.c)
 *     NdisRegisterUserThreadExitCallback @ 0x1400E40C0 (NdisRegisterUserThreadExitCallback.c)
 *     ?ndisInitializeThreadMonitorSubsystem@@YAJXZ @ 0x1400E4648 (-ndisInitializeThreadMonitorSubsystem@@YAJXZ.c)
 *     ?ndisCreateThreadStateObjectType@@YAJXZ @ 0x1400E4728 (-ndisCreateThreadStateObjectType@@YAJXZ.c)
 *     ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140136D84 (-ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@U_UNICODE_STRING@.c)
 *     ?ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013FBA0 (-ndisAddWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013FF20 (-ndisRemoveWoLDirectedMAC@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401409A8 (-ndisDisableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140140D84 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisStartNsiProvider@@YAJXZ @ 0x140148B0C (-ndisStartNsiProvider@@YAJXZ.c)
 *     ?ndisIfNsiClientSubsystemInitialize@@YAJXZ @ 0x140148BB8 (-ndisIfNsiClientSubsystemInitialize@@YAJXZ.c)
 *     ?Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x140149B90 (-Open@ExecutionContextCpuKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Initialize@NdisPoll@@QEAAJXZ @ 0x14014A704 (-Initialize@NdisPoll@@QEAAJXZ.c)
 *     ?Reference@DriverService@@QEAAJ_N@Z @ 0x14014B668 (-Reference@DriverService@@QEAAJ_N@Z.c)
 *     ?Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015AC50 (-Open@InterfaceProfileKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z @ 0x14015B2E0 (-Open@RegistryKnobCollection@@UEBAJKAEAUKnobTransaction@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedState@@@Z @ 0x14015B800 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEAVKRegKey@@0AEAUNdisNetworkInterfacePersistedSta.c)
 *     ?ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x14015BF80 (-ndisLWMOpenConfigurationKey@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ndisLWMBuildConfigurationKeyPath @ 0x14015C0E0 (ndisLWMBuildConfigurationKeyPath.c)
 *     ndisNsiClientParameterChangeHandler @ 0x140160430 (ndisNsiClientParameterChangeHandler.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1401627C0 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 *     ?ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x140167B20 (-ndisQueuedUpdatePMCapabilities@@_Y2PAGE@@AXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z @ 0x140169500 (-ndisWdfUpdateAddDeviceParameters@@YAJAEAVKRegKey@@AEAUNDIS_MINIPORT_CREATION_CONFIG@@@Z.c)
 *     NdisMAllocateMapRegisters @ 0x1401708C0 (NdisMAllocateMapRegisters.c)
 *     NdisMRegisterDmaChannel @ 0x140171480 (NdisMRegisterDmaChannel.c)
 *     ?ndisAoAcInitializeSubsystem@@YAJXZ @ 0x14018B078 (-ndisAoAcInitializeSubsystem@@YAJXZ.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 *     ndisLoadNotifyRegister @ 0x14018BF40 (ndisLoadNotifyRegister.c)
 *     ?ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z @ 0x14018EA84 (-ndisKLoaderCreateControlDeviceObject@@YAPEAU_DEVICE_OBJECT@@PEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_d @ 0x1400075C0
 * Reason: Hex-Rays returned no pseudocode for 0x1400075C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400075C0: mov     [rsp+arg_0], rbx
 * 00000001400075C5: mov     [rsp+arg_8], rbp
 * 00000001400075CA: mov     [rsp+arg_10], rsi
 * 00000001400075CF: push    rdi
 * 00000001400075D0: push    r14
 * 00000001400075D2: push    r15
 * 00000001400075D4: sub     rsp, 40h
 * 00000001400075D8: mov     ebp, r8d
 * 00000001400075DB: mov     r14, rcx
 * 00000001400075DE: mov     eax, r8d
 * 00000001400075E1: xor     r15d, r15d
 * 00000001400075E4: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001400075EB: shr     rax, 10h
 * 00000001400075EF: lea     ebx, [rbp-1]
 * 00000001400075F2: movzx   edi, dl
 * 00000001400075F5: mov     r11d, ebx
 * 00000001400075F8: movzx   esi, r9w
 * 00000001400075FC: shr     r11, 5
 * 0000000140007600: and     ebx, 1Fh
 * 0000000140007603: and     r11d, 7FFh
 * 000000014000760A: lea     r10, [rax+rax*4]
 * 000000014000760E: mov     edx, ebx
 * 0000000140007610: mov     rbx, [rsp+58h+arg_20]
 * 0000000140007618: lea     rcx, [r11+r10*4]
 * 000000014000761C: mov     ecx, [r8+rcx*4+2Ch]
 * 0000000140007621: bt      ecx, edx
 * 0000000140007624: jnb     short loc_14000764F
 * 0000000140007626: lea     rcx, [rax+rax*4]
 * 000000014000762A: add     rcx, rcx
 * 000000014000762D: cmp     [r8+rcx*8+29h], dil
 * 0000000140007632: jb      short loc_14000764F
 * 0000000140007634: lea     r9d, [r15+4]
 * 0000000140007638: mov     [rsp+58h+var_38], r15
 * 000000014000763D: lea     r8, [rsp+58h+arg_28]
 * 0000000140007645: mov     edx, esi; unsigned __int16
 * 0000000140007647: mov     rcx, rbx; struct _GUID *
 * 000000014000764A: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 000000014000764F: mov     [rsp+58h+var_20], r15
 * 0000000140007654: lea     rax, [rsp+58h+arg_28]
 * 000000014000765C: mov     [rsp+58h+var_28], 4
 * 0000000140007665: mov     r9, rbx
 * 0000000140007668: mov     [rsp+58h+var_30], rax
 * 000000014000766D: mov     r8d, ebp
 * 0000000140007670: mov     edx, edi
 * 0000000140007672: mov     word ptr [rsp+58h+var_38], si
 * 0000000140007677: mov     rcx, r14
 * 000000014000767A: call    cs:__imp_WppAutoLogTrace
 * 0000000140007681: nop     dword ptr [rax+rax+00h]
 * 0000000140007686: mov     rbx, [rsp+58h+arg_0]
 * 000000014000768B: mov     rbp, [rsp+58h+arg_8]
 * 0000000140007690: mov     rsi, [rsp+58h+arg_10]
 * 0000000140007695: add     rsp, 40h
 * 0000000140007699: pop     r15
 * 000000014000769B: pop     r14
 * 000000014000769D: pop     rdi
 * 000000014000769E: retn
 */
