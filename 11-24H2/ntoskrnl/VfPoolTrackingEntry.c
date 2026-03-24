/*
 * XREFs of VfPoolTrackingEntry @ 0x140611370
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x140618BD0 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ViPtInitAvlTrees @ 0x140B8C8F0 (ViPtInitAvlTrees.c)
 *     ViPtInitCircularPoolTrace @ 0x140B8C974 (ViPtInitCircularPoolTrace.c)
 *     ViPtPluginUnload @ 0x140B8CA50 (ViPtPluginUnload.c)
 */

/*
 * Hex-Rays decompilation failed for VfPoolTrackingEntry @ 0x140611370
 * Reason: Hex-Rays returned no pseudocode for 0x140611370
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140611370: mov     [rsp-8+arg_0], rbx
 * 0000000140611375: mov     [rsp-8+arg_8], rdi
 * 000000014061137A: push    rbp
 * 000000014061137B: lea     rbp, [rsp-290h]
 * 0000000140611383: sub     rsp, 390h
 * 000000014061138A: mov     rax, cs:__security_cookie
 * 0000000140611391: xor     rax, rsp
 * 0000000140611394: mov     [rbp+290h+var_10], rax
 * 000000014061139B: xor     edi, edi
 * 000000014061139D: mov     qword ptr cs:ViPtUnloadRundown.___u0, rdi
 * 00000001406113A4: call    ViPtInitCircularPoolTrace
 * 00000001406113A9: mov     ebx, eax
 * 00000001406113AB: test    eax, eax
 * 00000001406113AD: js      loc_14061184A
 * 00000001406113B3: test    cs:VfOptionFlags, 1000h
 * 00000001406113BD: jz      short loc_1406113C4
 * 00000001406113BF: call    ViPtInitAvlTrees
 * 00000001406113C4: cmp     cs:VfDifRunningWithoutReboot, dil
 * 00000001406113CB: jnz     short loc_1406113E3
 * 00000001406113CD: test    cs:VfOptionFlags, 800h
 * 00000001406113D7: jnz     short loc_1406113E3
 * 00000001406113D9: mov     cs:MmTrackLockedPages, 1
 * 00000001406113E3: lea     rax, ViPtPluginUnload
 * 00000001406113EA: mov     [rsp+390h+var_368], 19Dh
 * 00000001406113F2: mov     cs:qword_140F03D28, rax
 * 00000001406113F9: lea     rax, aExallocatepool_0; "ExAllocatePool"
 * 0000000140611400: mov     [rsp+390h+var_370], rax
 * 0000000140611405: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014061140C: mov     [rsp+390h+var_360], rax
 * 0000000140611411: lea     rax, aExallocatepool; "ExAllocatePool2"
 * 0000000140611418: mov     [rsp+390h+var_350], rax
 * 000000014061141D: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140611424: mov     [rsp+390h+var_340], rax
 * 0000000140611429: lea     rax, aExallocatepool_13; "ExAllocatePool3"
 * 0000000140611430: mov     [rsp+390h+var_330], rax
 * 0000000140611435: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014061143C: mov     [rsp+390h+var_318], rax
 * 0000000140611441: lea     rax, aExallocatepool_1; "ExAllocatePoolWithTag"
 * 0000000140611448: mov     [rbp+290h+var_310], rax
 * 000000014061144C: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140611453: mov     [rbp+290h+var_300], rax
 * 0000000140611457: lea     rax, aExallocatepool_15; "ExAllocatePoolWithTagPriority"
 * 000000014061145E: mov     [rbp+290h+var_2F0], rax
 * 0000000140611462: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140611469: mov     [rbp+290h+var_2E0], rax
 * 000000014061146D: lea     rax, aExallocatepool_14; "ExAllocatePoolWithQuota"
 * 0000000140611474: mov     [rbp+290h+var_2D0], rax
 * 0000000140611478: lea     rax, ViSpIoAllocateIrp_Exit
 * 000000014061147F: mov     [rbp+290h+var_2C0], rax
 * 0000000140611483: lea     rax, aExallocatepool_16; "ExAllocatePoolWithQuotaTag"
 * 000000014061148A: mov     [rbp+290h+var_2B0], rax
 * 000000014061148E: lea     rax, ViSpIoAllocateIrp_Exit
 * 0000000140611495: mov     [rbp+290h+var_2A0], rax
 * 0000000140611499: lea     rax, aExfreepool_1; "ExFreePool"
 * 00000001406114A0: mov     [rbp+290h+var_290], rax
 * 00000001406114A4: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406114AB: mov     [rbp+290h+var_280], rax
 * 00000001406114AF: lea     rax, aExfreepoolwith_1; "ExFreePoolWithTag"
 * 00000001406114B6: mov     [rbp+290h+var_270], rax
 * 00000001406114BA: lea     rax, ViSpIoAllocateIrp_Exit
 * 00000001406114C1: mov     [rbp+290h+var_260], rax
 * 00000001406114C5: lea     rax, aIoallocatemdl_0; "IoAllocateMdl"
 * 00000001406114CC: mov     [rbp+290h+var_250], rax
 * 00000001406114D0: lea     rax, VfPtIoAllocateMdl_Exit
 * 00000001406114D7: mov     [rbp+290h+var_238], rax
 * 00000001406114DB: lea     rax, aIofreemdl; "IoFreeMdl"
 * 00000001406114E2: mov     [rbp+290h+var_230], rax
 * 00000001406114E6: lea     rax, aMmallocatepage_3; "MmAllocatePagesForMdl"
 * 00000001406114ED: mov     [rbp+290h+var_210], rax
 * 00000001406114F4: lea     rax, VfPtMmAllocatePagesForMdl_Exit
 * 00000001406114FB: mov     [rbp+290h+var_1F8], rax
 * 0000000140611502: lea     rax, aMmallocatepage; "MmAllocatePagesForMdlEx"
 * 0000000140611509: mov     [rbp+290h+var_1F0], rax
 * 0000000140611510: lea     rax, VfPtMmAllocatePagesForMdlEx_Exit
 * 0000000140611517: mov     [rbp+290h+var_1D8], rax
 * 000000014061151E: lea     rax, aMmallocatenode; "MmAllocateNodePagesForMdlEx"
 * 0000000140611525: mov     [rbp+290h+var_1D0], rax
 * 000000014061152C: mov     [rsp+390h+var_358], rdi
 * 0000000140611531: mov     [rsp+390h+var_348], 1A3h
 * 0000000140611539: mov     [rsp+390h+var_338], rdi
 * 000000014061153E: mov     [rsp+390h+var_328], 1A2h
 * 0000000140611546: mov     [rsp+390h+var_320], rdi
 * 000000014061154B: mov     [rbp+290h+var_308], 19Eh
 * 0000000140611552: mov     [rbp+290h+var_2F8], rdi
 * 0000000140611556: mov     [rbp+290h+var_2E8], 19Fh
 * 000000014061155D: mov     [rbp+290h+var_2D8], rdi
 * 0000000140611561: mov     [rbp+290h+var_2C8], 1A0h
 * 0000000140611568: mov     [rbp+290h+var_2B8], rdi
 * 000000014061156C: mov     [rbp+290h+var_2A8], 1A1h
 * 0000000140611573: mov     [rbp+290h+var_298], rdi
 * 0000000140611577: mov     [rbp+290h+var_288], 191h
 * 000000014061157E: mov     [rbp+290h+var_278], rdi
 * 0000000140611582: mov     [rbp+290h+var_268], 190h
 * 0000000140611589: mov     [rbp+290h+var_258], rdi
 * 000000014061158D: mov     [rbp+290h+var_248], 16Dh
 * 0000000140611594: mov     [rbp+290h+var_240], rdi
 * 0000000140611598: mov     [rbp+290h+var_228], 153h
 * 000000014061159F: mov     [rbp+290h+var_220], rdi
 * 00000001406115A3: mov     [rbp+290h+var_218], rdi
 * 00000001406115A7: mov     [rbp+290h+var_208], 0E6h
 * 00000001406115B1: mov     [rbp+290h+var_200], rdi
 * 00000001406115B8: mov     [rbp+290h+var_1E8], 0E5h
 * 00000001406115C2: mov     [rbp+290h+var_1E0], rdi
 * 00000001406115C9: lea     rax, VfPtMmAllocateNodePagesForMdlEx_Exit
 * 00000001406115D0: mov     [rbp+290h+var_1C8], 0E8h
 * 00000001406115DA: mov     [rbp+290h+var_1B8], rax
 * 00000001406115E1: lea     rax, aMmallocatenonc_0; "MmAllocateNonCachedMemory"
 * 00000001406115E8: mov     [rbp+290h+var_1B0], rax
 * 00000001406115EF: lea     rax, VfPtMmAllocateNonCachedMemory_Exit
 * 00000001406115F6: mov     [rbp+290h+var_198], rax
 * 00000001406115FD: lea     rax, aMmcreatemdl_0; "MmCreateMdl"
 * 0000000140611604: mov     [rbp+290h+var_190], rax
 * 000000014061160B: lea     rax, VfPtMmCreateMdl_Exit
 * 0000000140611612: mov     [rbp+290h+var_178], rax
 * 0000000140611619: lea     rax, aMmfreepagesfro_0; "MmFreePagesFromMdl"
 * 0000000140611620: mov     [rbp+290h+var_170], rax
 * 0000000140611627: lea     rax, aMmfreenoncache; "MmFreeNonCachedMemory"
 * 000000014061162E: mov     [rbp+290h+var_150], rax
 * 0000000140611635: lea     rax, VfPtMmFreeNonCachedMemory_Entry
 * 000000014061163C: mov     [rbp+290h+var_140], rax
 * 0000000140611643: lea     rax, aMmallocatecont_0; "MmAllocateContiguousMemory"
 * 000000014061164A: mov     [rbp+290h+var_130], rax
 * 0000000140611651: lea     rax, VfPtMmAllocateContiguousMemory_Exit
 * 0000000140611658: mov     [rbp+290h+var_118], rax
 * 000000014061165F: lea     rax, aMmallocatecont; "MmAllocateContiguousMemoryEx"
 * 0000000140611666: mov     [rbp+290h+var_110], rax
 * 000000014061166D: lea     rax, VfPtMmAllocateContiguousMemoryEx_Exit
 * 0000000140611674: mov     [rbp+290h+var_F8], rax
 * 000000014061167B: lea     rax, aMmallocatecont_9; "MmAllocateContiguousMemorySpecifyCache"
 * 0000000140611682: mov     [rbp+290h+var_F0], rax
 * 0000000140611689: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 0000000140611690: mov     [rbp+290h+var_D8], rax
 * 0000000140611697: lea     rax, aMmallocatecont_11; "MmAllocateContiguousMemorySpecifyCacheN"...
 * 000000014061169E: mov     [rbp+290h+var_D0], rax
 * 00000001406116A5: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 00000001406116AC: mov     [rbp+290h+var_B8], rax
 * 00000001406116B3: lea     rax, aMmallocatecont_7; "MmAllocateContiguousNodeMemory"
 * 00000001406116BA: mov     [rbp+290h+var_B0], rax
 * 00000001406116C1: lea     rax, VfPtMmAllocateContiguousMemorySpecifyCache_Exit
 * 00000001406116C8: mov     [rbp+290h+var_98], rax
 * 00000001406116CF: lea     rax, aMmfreecontiguo; "MmFreeContiguousMemory"
 * 00000001406116D6: mov     [rbp+290h+var_90], rax
 * 00000001406116DD: lea     rax, VfPtMmFreeContiguousMemory_Entry
 * 00000001406116E4: mov     [rbp+290h+var_80], rax
 * 00000001406116EB: lea     rax, aMmallocatemapp_2; "MmAllocateMappingAddress"
 * 00000001406116F2: mov     [rbp+290h+var_70], rax
 * 00000001406116F9: lea     rax, VfPtMmAllocateMappingAddress_Exit
 * 0000000140611700: mov     [rbp+290h+var_58], rax
 * 0000000140611707: lea     rax, aMmallocatemapp_0; "MmAllocateMappingAddressEx"
 * 000000014061170E: mov     [rbp+290h+var_50], rax
 * 0000000140611715: lea     rax, VfPtMmAllocateMappingAddressEx_Exit
 * 000000014061171C: mov     [rbp+290h+var_38], rax
 * 0000000140611723: lea     rax, aMmfreemappinga; "MmFreeMappingAddress"
 * 000000014061172A: mov     [rbp+290h+var_30], rax
 * 0000000140611731: lea     rax, VfPtMmFreeMappingAddress_Entry
 * 0000000140611738: mov     [rbp+290h+var_20], rax
 * 000000014061173F: mov     [rbp+290h+var_1C0], rdi
 * 0000000140611746: mov     [rbp+290h+var_1A8], 0E7h
 * 0000000140611750: mov     [rbp+290h+var_1A0], rdi
 * 0000000140611757: mov     [rbp+290h+var_188], 0E3h
 * 0000000140611761: mov     [rbp+290h+var_180], rdi
 * 0000000140611768: mov     [rbp+290h+var_168], 0E0h
 * 0000000140611772: mov     [rbp+290h+var_160], rdi
 * 0000000140611779: mov     [rbp+290h+var_158], rdi
 * 0000000140611780: mov     [rbp+290h+var_148], 0E1h
 * 000000014061178A: mov     [rbp+290h+var_138], rdi
 * 0000000140611791: mov     [rbp+290h+var_128], 0EEh
 * 000000014061179B: mov     [rbp+290h+var_120], rdi
 * 00000001406117A2: mov     [rbp+290h+var_108], 0EDh
 * 00000001406117AC: mov     [rbp+290h+var_100], rdi
 * 00000001406117B3: mov     [rbp+290h+var_E8], 0ECh
 * 00000001406117BD: mov     [rbp+290h+var_E0], rdi
 * 00000001406117C4: mov     [rbp+290h+var_C8], 0EBh
 * 00000001406117CE: mov     [rbp+290h+var_C0], rdi
 * 00000001406117D5: mov     [rbp+290h+var_A8], 0EAh
 * 00000001406117DF: mov     [rbp+290h+var_A0], rdi
 * 00000001406117E6: mov     [rbp+290h+var_88], 0E2h
 * 00000001406117F0: mov     [rbp+290h+var_78], rdi
 * 00000001406117F7: mov     [rbp+290h+var_68], 0E9h
 * 0000000140611801: mov     [rbp+290h+var_60], rdi
 * 0000000140611808: mov     [rbp+290h+var_48], 1D1h
 * 0000000140611812: mov     [rbp+290h+var_40], rdi
 * 0000000140611819: mov     [rbp+290h+var_28], 1D2h
 * 0000000140611823: mov     [rbp+290h+var_18], rdi
 * 000000014061182A: mov     edx, 1Bh
 * 000000014061182F: lea     r9, ViPoolTrackingSetting
 * 0000000140611836: lea     rcx, [rsp+390h+var_370]
 * 000000014061183B: lea     r8d, [rdx-18h]
 * 000000014061183F: call    DifRegisterPlugin
 * 0000000140611844: mov     ebx, eax
 * 0000000140611846: test    eax, eax
 * 0000000140611848: jns     short loc_14061184F
 * 000000014061184A: call    ViPtPluginUnload
 * 000000014061184F: mov     eax, ebx
 * 0000000140611851: mov     rcx, [rbp+290h+var_10]
 * 0000000140611858: xor     rcx, rsp; StackCookie
 * 000000014061185B: call    __security_check_cookie
 * 0000000140611860: lea     r11, [rsp+390h+var_s0]
 * 0000000140611868: mov     rbx, [r11+10h]
 * 000000014061186C: mov     rdi, [r11+18h]
 * 0000000140611870: mov     rsp, r11
 * 0000000140611873: pop     rbp
 * 0000000140611874: retn
 */
