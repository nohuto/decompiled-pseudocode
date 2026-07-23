/*
 * XREFs of VfPoolTrackingEntry @ 0x14060F930
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x140617190 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ViPtInitAvlTrees @ 0x140B8E8F0 (ViPtInitAvlTrees.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8E974 (ViPtInitCircularPoolTrace.c)
 *     ViPtPluginUnload @ 0x140B8EA50 (ViPtPluginUnload.c)
 */

/*
 * Hex-Rays decompilation failed for VfPoolTrackingEntry @ 0x14060F930
 * Reason: Hex-Rays returned no pseudocode for 0x14060F930
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014060F930: mov     [rsp-8+arg_0], rbx
 * 000000014060F935: mov     [rsp-8+arg_8], rdi
 * 000000014060F93A: push    rbp
 * 000000014060F93B: lea     rbp, [rsp-290h]
 * 000000014060F943: sub     rsp, 390h
 * 000000014060F94A: mov     rax, cs:__security_cookie
 * 000000014060F951: xor     rax, rsp
 * 000000014060F954: mov     [rbp+290h+var_10], rax
 * 000000014060F95B: xor     edi, edi
 * 000000014060F95D: mov     qword ptr cs:ViPtUnloadRundown.___u0, rdi
 * 000000014060F964: call    ViPtInitCircularPoolTrace
 * 000000014060F969: mov     ebx, eax
 * 000000014060F96B: test    eax, eax
 * 000000014060F96D: js      loc_14060FE0A
 * 000000014060F973: test    cs:VfOptionFlags, 1000h
 * 000000014060F97D: jz      short loc_14060F984
 * 000000014060F97F: call    ViPtInitAvlTrees
 * 000000014060F984: cmp     cs:VfDifRunningWithoutReboot, dil
 * 000000014060F98B: jnz     short loc_14060F9A3
 * 000000014060F98D: test    cs:VfOptionFlags, 800h
 * 000000014060F997: jnz     short loc_14060F9A3
 * 000000014060F999: mov     cs:MmTrackLockedPages, 1
 * 000000014060F9A3: lea     rax, ViPtPluginUnload
 * 000000014060F9AA: mov     [rsp+390h+var_368], 19Dh
 * 000000014060F9B2: mov     cs:qword_140F03FC8, rax
 * 000000014060F9B9: lea     rax, aExallocatepool_0; "ExAllocatePool"
 * 000000014060F9C0: mov     [rsp+390h+var_370], rax
 * 000000014060F9C5: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060F9CC: mov     [rsp+390h+var_360], rax
 * 000000014060F9D1: lea     rax, aExallocatepool; "ExAllocatePool2"
 * 000000014060F9D8: mov     [rsp+390h+var_350], rax
 * 000000014060F9DD: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060F9E4: mov     [rsp+390h+var_340], rax
 * 000000014060F9E9: lea     rax, aExallocatepool_13; "ExAllocatePool3"
 * 000000014060F9F0: mov     [rsp+390h+var_330], rax
 * 000000014060F9F5: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060F9FC: mov     [rsp+390h+var_318], rax
 * 000000014060FA01: lea     rax, aExallocatepool_1; "ExAllocatePoolWithTag"
 * 000000014060FA08: mov     [rbp+290h+var_310], rax
 * 000000014060FA0C: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060FA13: mov     [rbp+290h+var_300], rax
 * 000000014060FA17: lea     rax, aExallocatepool_15; "ExAllocatePoolWithTagPriority"
 * 000000014060FA1E: mov     [rbp+290h+var_2F0], rax
 * 000000014060FA22: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060FA29: mov     [rbp+290h+var_2E0], rax
 * 000000014060FA2D: lea     rax, aExallocatepool_14; "ExAllocatePoolWithQuota"
 * 000000014060FA34: mov     [rbp+290h+var_2D0], rax
 * 000000014060FA38: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060FA3F: mov     [rbp+290h+var_2C0], rax
 * 000000014060FA43: lea     rax, aExallocatepool_16; "ExAllocatePoolWithQuotaTag"
 * 000000014060FA4A: mov     [rbp+290h+var_2B0], rax
 * 000000014060FA4E: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060FA55: mov     [rbp+290h+var_2A0], rax
 * 000000014060FA59: lea     rax, aExfreepool_1; "ExFreePool"
 * 000000014060FA60: mov     [rbp+290h+var_290], rax
 * 000000014060FA64: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060FA6B: mov     [rbp+290h+var_280], rax
 * 000000014060FA6F: lea     rax, aExfreepoolwith_1; "ExFreePoolWithTag"
 * 000000014060FA76: mov     [rbp+290h+var_270], rax
 * 000000014060FA7A: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014060FA81: mov     [rbp+290h+var_260], rax
 * 000000014060FA85: lea     rax, aIoallocatemdl_0; "IoAllocateMdl"
 * 000000014060FA8C: mov     [rbp+290h+var_250], rax
 * 000000014060FA90: lea     rax, VfPtIoAllocateMdl_Exit
 * 000000014060FA97: mov     [rbp+290h+var_238], rax
 * 000000014060FA9B: lea     rax, aIofreemdl; "IoFreeMdl"
 * 000000014060FAA2: mov     [rbp+290h+var_230], rax
 * 000000014060FAA6: lea     rax, aMmallocatepage_3; "MmAllocatePagesForMdl"
 * 000000014060FAAD: mov     [rbp+290h+var_210], rax
 * 000000014060FAB4: lea     rax, VfPtMmAllocatePagesForMdl_Exit
 * 000000014060FABB: mov     [rbp+290h+var_1F8], rax
 * 000000014060FAC2: lea     rax, aMmallocatepage; "MmAllocatePagesForMdlEx"
 * 000000014060FAC9: mov     [rbp+290h+var_1F0], rax
 * 000000014060FAD0: lea     rax, VfPtMmAllocatePagesForMdlEx_Exit
 * 000000014060FAD7: mov     [rbp+290h+var_1D8], rax
 * 000000014060FADE: lea     rax, aMmallocatenode; "MmAllocateNodePagesForMdlEx"
 * 000000014060FAE5: mov     [rbp+290h+var_1D0], rax
 * 000000014060FAEC: mov     [rsp+390h+var_358], rdi
 * 000000014060FAF1: mov     [rsp+390h+var_348], 1A3h
 * 000000014060FAF9: mov     [rsp+390h+var_338], rdi
 * 000000014060FAFE: mov     [rsp+390h+var_328], 1A2h
 * 000000014060FB06: mov     [rsp+390h+var_320], rdi
 * 000000014060FB0B: mov     [rbp+290h+var_308], 19Eh
 * 000000014060FB12: mov     [rbp+290h+var_2F8], rdi
 * 000000014060FB16: mov     [rbp+290h+var_2E8], 19Fh
 * 000000014060FB1D: mov     [rbp+290h+var_2D8], rdi
 * 000000014060FB21: mov     [rbp+290h+var_2C8], 1A0h
 * 000000014060FB28: mov     [rbp+290h+var_2B8], rdi
 * 000000014060FB2C: mov     [rbp+290h+var_2A8], 1A1h
 * 000000014060FB33: mov     [rbp+290h+var_298], rdi
 * 000000014060FB37: mov     [rbp+290h+var_288], 191h
 * 000000014060FB3E: mov     [rbp+290h+var_278], rdi
 * 000000014060FB42: mov     [rbp+290h+var_268], 190h
 * 000000014060FB49: mov     [rbp+290h+var_258], rdi
 * 000000014060FB4D: mov     [rbp+290h+var_248], 16Dh
 * 000000014060FB54: mov     [rbp+290h+var_240], rdi
 * 000000014060FB58: mov     [rbp+290h+var_228], 153h
 * 000000014060FB5F: mov     [rbp+290h+var_220], rdi
 * 000000014060FB63: mov     [rbp+290h+var_218], rdi
 * 000000014060FB67: mov     [rbp+290h+var_208], 0E6h
 * 000000014060FB71: mov     [rbp+290h+var_200], rdi
 * 000000014060FB78: mov     [rbp+290h+var_1E8], 0E5h
 * 000000014060FB82: mov     [rbp+290h+var_1E0], rdi
 * 000000014060FB89: lea     rax, VfPtMmAllocateNodePagesForMdlEx_Exit
 * 000000014060FB90: mov     [rbp+290h+var_1C8], 0E8h
 * 000000014060FB9A: mov     [rbp+290h+var_1B8], rax
 * 000000014060FBA1: lea     rax, aMmallocatenonc_0; "MmAllocateNonCachedMemory"
 * 000000014060FBA8: mov     [rbp+290h+var_1B0], rax
 * 000000014060FBAF: lea     rax, VfPtMmAllocateNonCachedMemory_Exit
 * 000000014060FBB6: mov     [rbp+290h+var_198], rax
 * 000000014060FBBD: lea     rax, aMmcreatemdl_0; "MmCreateMdl"
 * 000000014060FBC4: mov     [rbp+290h+var_190], rax
 * 000000014060FBCB: lea     rax, VfPtMmCreateMdl_Exit
 * 000000014060FBD2: mov     [rbp+290h+var_178], rax
 * 000000014060FBD9: lea     rax, aMmfreepagesfro_0; "MmFreePagesFromMdl"
 * 000000014060FBE0: mov     [rbp+290h+var_170], rax
 * 000000014060FBE7: lea     rax, aMmfreenoncache; "MmFreeNonCachedMemory"
 * 000000014060FBEE: mov     [rbp+290h+var_150], rax
 * 000000014060FBF5: lea     rax, VfPtMmFreeNonCachedMemory_Entry
 * 000000014060FBFC: mov     [rbp+290h+var_140], rax
 * 000000014060FC03: lea     rax, aMmallocatecont_0; "MmAllocateContiguousMemory"
 * 000000014060FC0A: mov     [rbp+290h+var_130], rax
 * 000000014060FC11: lea     rax, VfPtMmAllocateContiguousMemory_Exit
 * 000000014060FC18: mov     [rbp+290h+var_118], rax
 * 000000014060FC1F: lea     rax, aMmallocatecont; "MmAllocateContiguousMemoryEx"
 * 000000014060FC26: mov     [rbp+290h+var_110], rax
 * 000000014060FC2D: lea     rax, VfPtMmAllocateContiguousMemoryEx_Exit
 * 000000014060FC34: mov     [rbp+290h+var_F8], rax
 * 000000014060FC3B: lea     rax, aMmallocatecont_9; "MmAllocateContiguousMemorySpecifyCache"
 * 000000014060FC42: mov     [rbp+290h+var_F0], rax
 * 000000014060FC49: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 000000014060FC50: mov     [rbp+290h+var_D8], rax
 * 000000014060FC57: lea     rax, aMmallocatecont_11; "MmAllocateContiguousMemorySpecifyCacheN"...
 * 000000014060FC5E: mov     [rbp+290h+var_D0], rax
 * 000000014060FC65: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 000000014060FC6C: mov     [rbp+290h+var_B8], rax
 * 000000014060FC73: lea     rax, aMmallocatecont_7; "MmAllocateContiguousNodeMemory"
 * 000000014060FC7A: mov     [rbp+290h+var_B0], rax
 * 000000014060FC81: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 000000014060FC88: mov     [rbp+290h+var_98], rax
 * 000000014060FC8F: lea     rax, aMmfreecontiguo; "MmFreeContiguousMemory"
 * 000000014060FC96: mov     [rbp+290h+var_90], rax
 * 000000014060FC9D: lea     rax, VfPtMmFreeContiguousMemory_Entry
 * 000000014060FCA4: mov     [rbp+290h+var_80], rax
 * 000000014060FCAB: lea     rax, aMmallocatemapp_2; "MmAllocateMappingAddress"
 * 000000014060FCB2: mov     [rbp+290h+var_70], rax
 * 000000014060FCB9: lea     rax, VfPtMmAllocateMappingAddress_Exit
 * 000000014060FCC0: mov     [rbp+290h+var_58], rax
 * 000000014060FCC7: lea     rax, aMmallocatemapp_0; "MmAllocateMappingAddressEx"
 * 000000014060FCCE: mov     [rbp+290h+var_50], rax
 * 000000014060FCD5: lea     rax, VfPtMmAllocateMappingAddressEx_Exit
 * 000000014060FCDC: mov     [rbp+290h+var_38], rax
 * 000000014060FCE3: lea     rax, aMmfreemappinga; "MmFreeMappingAddress"
 * 000000014060FCEA: mov     [rbp+290h+var_30], rax
 * 000000014060FCF1: lea     rax, VfPtMmFreeMappingAddress_Entry
 * 000000014060FCF8: mov     [rbp+290h+var_20], rax
 * 000000014060FCFF: mov     [rbp+290h+var_1C0], rdi
 * 000000014060FD06: mov     [rbp+290h+var_1A8], 0E7h
 * 000000014060FD10: mov     [rbp+290h+var_1A0], rdi
 * 000000014060FD17: mov     [rbp+290h+var_188], 0E3h
 * 000000014060FD21: mov     [rbp+290h+var_180], rdi
 * 000000014060FD28: mov     [rbp+290h+var_168], 0E0h
 * 000000014060FD32: mov     [rbp+290h+var_160], rdi
 * 000000014060FD39: mov     [rbp+290h+var_158], rdi
 * 000000014060FD40: mov     [rbp+290h+var_148], 0E1h
 * 000000014060FD4A: mov     [rbp+290h+var_138], rdi
 * 000000014060FD51: mov     [rbp+290h+var_128], 0EEh
 * 000000014060FD5B: mov     [rbp+290h+var_120], rdi
 * 000000014060FD62: mov     [rbp+290h+var_108], 0EDh
 * 000000014060FD6C: mov     [rbp+290h+var_100], rdi
 * 000000014060FD73: mov     [rbp+290h+var_E8], 0ECh
 * 000000014060FD7D: mov     [rbp+290h+var_E0], rdi
 * 000000014060FD84: mov     [rbp+290h+var_C8], 0EBh
 * 000000014060FD8E: mov     [rbp+290h+var_C0], rdi
 * 000000014060FD95: mov     [rbp+290h+var_A8], 0EAh
 * 000000014060FD9F: mov     [rbp+290h+var_A0], rdi
 * 000000014060FDA6: mov     [rbp+290h+var_88], 0E2h
 * 000000014060FDB0: mov     [rbp+290h+var_78], rdi
 * 000000014060FDB7: mov     [rbp+290h+var_68], 0E9h
 * 000000014060FDC1: mov     [rbp+290h+var_60], rdi
 * 000000014060FDC8: mov     [rbp+290h+var_48], 1D1h
 * 000000014060FDD2: mov     [rbp+290h+var_40], rdi
 * 000000014060FDD9: mov     [rbp+290h+var_28], 1D2h
 * 000000014060FDE3: mov     [rbp+290h+var_18], rdi
 * 000000014060FDEA: mov     edx, 1Bh
 * 000000014060FDEF: lea     r9, ViPoolTrackingSetting
 * 000000014060FDF6: lea     rcx, [rsp+390h+var_370]
 * 000000014060FDFB: lea     r8d, [rdx-18h]
 * 000000014060FDFF: call    DifRegisterPlugin
 * 000000014060FE04: mov     ebx, eax
 * 000000014060FE06: test    eax, eax
 * 000000014060FE08: jns     short loc_14060FE0F
 * 000000014060FE0A: call    ViPtPluginUnload
 * 000000014060FE0F: mov     eax, ebx
 * 000000014060FE11: mov     rcx, [rbp+290h+var_10]
 * 000000014060FE18: xor     rcx, rsp; StackCookie
 * 000000014060FE1B: call    __security_check_cookie
 * 000000014060FE20: lea     r11, [rsp+390h+var_s0]
 * 000000014060FE28: mov     rbx, [r11+10h]
 * 000000014060FE2C: mov     rdi, [r11+18h]
 * 000000014060FE30: mov     rsp, r11
 * 000000014060FE33: pop     rbp
 * 000000014060FE34: retn
 */
