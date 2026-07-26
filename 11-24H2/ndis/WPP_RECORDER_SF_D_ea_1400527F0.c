/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1400527F0
 * Callers:
 *     ?ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400063B0 (-ndisMiniportPreAddProtocolOffload@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ndisLwmIoctlIrpHandler @ 0x14002C6B0 (ndisLwmIoctlIrpHandler.c)
 *     ?ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x14003E7C0 (-ndisSetMiniportPacketFilter@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     NdisAllocatePacketPoolEx @ 0x1400421F0 (NdisAllocatePacketPoolEx.c)
 *     NdisGetVersion @ 0x140052790 (NdisGetVersion.c)
 *     NdisAllocateNetBufferListPool @ 0x140055B30 (NdisAllocateNetBufferListPool.c)
 *     NdisFRegisterFilterDriver @ 0x14009AD80 (NdisFRegisterFilterDriver.c)
 *     ?ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z @ 0x14009CDA4 (-ndisMIndicateQosParametersChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXK@Z.c)
 *     ndisCpuHotAddHandler @ 0x1400A2B00 (ndisCpuHotAddHandler.c)
 *     ndisDriverSystemDispatch @ 0x1400A2E28 (ndisDriverSystemDispatch.c)
 *     ndisEtwRegisterGuids @ 0x1400A2FFC (ndisEtwRegisterGuids.c)
 *     ?ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B2EAC (-ndisMiniportPreAddWoLPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z @ 0x1400B50F4 (-ndisSetAddWakeUpPattern@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAE@Z.c)
 *     ?ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z @ 0x1400C085C (-ndisValidateQosParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@EPEAU_NDIS_QOS_PARAMETERS@@KPEAK@Z.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400CEB04 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     NdisOpenFile @ 0x1400D4880 (NdisOpenFile.c)
 *     ndisValidateSGDmaDescription @ 0x1400DB0FC (ndisValidateSGDmaDescription.c)
 *     ?ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DDFA8 (-ndisIovCreateVPort@@YAEPEAU_NDIS_REQ_TRACKER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CA.c)
 *     ?ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400DFBA0 (-ndisOidPostIovNicSwitchParameters@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E1A80 (-ndisOidPreIovNicSwitchParameters@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisSetAoAcOptions @ 0x140136790 (NdisSetAoAcOptions.c)
 *     ?ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140140D84 (-ndisEnableUdpRsc@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_CHARACTERISTICS@@@Z @ 0x14014B0A8 (-RegisterModule@KLoader@@QEAAJPEAU_DRIVER_OBJECT@@PEBU_UNICODE_STRING@@PEAXPEBU_KLOADER_MODULE_C.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x140163CC0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z @ 0x1401675C0 (-DereferenceKModule@KLoader@@AEAAXPEAUKModule@@@Z.c)
 *     NdisMapFile @ 0x140172AC0 (NdisMapFile.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x140015A30 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1400527F0
 * Reason: Hex-Rays returned no pseudocode for 0x1400527F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001400527F0: mov     [rsp+arg_0], rbx
 * 00000001400527F5: mov     [rsp+arg_8], rsi
 * 00000001400527FA: mov     [rsp+arg_10], rdi
 * 00000001400527FF: push    r14
 * 0000000140052801: sub     rsp, 40h
 * 0000000140052805: mov     ebx, r8d
 * 0000000140052808: mov     r14, rcx
 * 000000014005280B: mov     rcx, cs:WPP_GLOBAL_Control
 * 0000000140052812: mov     r11d, r8d
 * 0000000140052815: shr     r11, 10h
 * 0000000140052819: lea     r10d, [rbx-1]
 * 000000014005281D: movzx   esi, r9w
 * 0000000140052821: mov     r8d, r10d
 * 0000000140052824: movzx   edi, dl
 * 0000000140052827: shr     r8, 5
 * 000000014005282B: and     r10d, 1Fh
 * 000000014005282F: and     r8d, 7FFh
 * 0000000140052836: lea     rax, [r11+r11*4]
 * 000000014005283A: lea     rax, [r8+rax*4]
 * 000000014005283E: mov     eax, [rcx+rax*4+2Ch]
 * 0000000140052842: bt      eax, r10d
 * 0000000140052846: jb      short loc_140052899
 * 0000000140052848: mov     r9, [rsp+48h+arg_20]
 * 000000014005284D: lea     rax, [rsp+48h+arg_28]
 * 0000000140052852: mov     [rsp+48h+var_10], 0
 * 000000014005285B: mov     r8d, ebx
 * 000000014005285E: mov     [rsp+48h+var_18], 4
 * 0000000140052867: mov     edx, edi
 * 0000000140052869: mov     [rsp+48h+var_20], rax
 * 000000014005286E: mov     rcx, r14
 * 0000000140052871: mov     word ptr [rsp+48h+var_28], si
 * 0000000140052876: call    cs:__imp_WppAutoLogTrace
 * 000000014005287D: nop     dword ptr [rax+rax+00h]
 * 0000000140052882: mov     rbx, [rsp+48h+arg_0]
 * 0000000140052887: mov     rsi, [rsp+48h+arg_8]
 * 000000014005288C: mov     rdi, [rsp+48h+arg_10]
 * 0000000140052891: add     rsp, 40h
 * 0000000140052895: pop     r14
 * 0000000140052897: retn
 * 0000000140052899: lea     rax, [r11+r11*4]
 * 000000014005289D: add     rax, rax
 * 00000001400528A0: cmp     [rcx+rax*8+29h], dil
 * 00000001400528A5: jb      short loc_140052848
 * 00000001400528A7: mov     rcx, [rsp+48h+arg_20]; struct _GUID *
 * 00000001400528AC: lea     r8, [rsp+48h+arg_28]
 * 00000001400528B1: mov     r9d, 4
 * 00000001400528B7: mov     [rsp+48h+var_28], 0
 * 00000001400528C0: mov     edx, esi; unsigned __int16
 * 00000001400528C2: call    ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ; ndisWppFastTraceMessage(_GUID const *,ushort,...)
 * 00000001400528C7: jmp     loc_140052848
 */
