/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1406B0E60
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1406AFCB0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406B0020 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406B0390 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406B0700 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14025F5D0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x14034A8A0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403EB760 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404FBC10 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B7800 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BF250 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406AAFC0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406AF860 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x1406B0E60 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406B12E0 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1406B2200 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1406B0E60
 * Reason: Hex-Rays returned no pseudocode for 0x1406B0E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B0E60: mov     rcx, gs:9158h
 * 00000001406B0E69: mov     rax, rcx
 * 00000001406B0E6C: mov     edx, cs:KeIsrStackSize
 * 00000001406B0E72: sub     rax, rdx
 * 00000001406B0E75: mov     rdx, rsp
 * 00000001406B0E78: cmp     rax, rsp
 * 00000001406B0E7B: ja      short loc_1406B0E82
 * 00000001406B0E7D: cmp     rsp, rcx
 * 00000001406B0E80: jb      short loc_1406B0E8E
 * 00000001406B0E82: cmp     cs:KiBugCheckActive, 0
 * 00000001406B0E89: jnz     short loc_1406B0E8E
 * 00000001406B0E8B: mov     rsp, rcx
 * 00000001406B0E8E: sub     rsp, 20h
 * 00000001406B0E92: mov     [rsp+20h+var_10], rdx
 * 00000001406B0E97: call    KiVmbusInterruptSubDispatch
 * 00000001406B0E9C: mov     rsp, [rsp+20h+var_10]
 * 00000001406B0EA1: cli
 * 00000001406B0EA2: mov     rcx, gs:20h
 * 00000001406B0EAB: movzx   edx, byte ptr [rbp-57h]
 * 00000001406B0EAF: call    KiEndInterruptCycleAccumulation
 * 00000001406B0EB4: test    al, al
 * 00000001406B0EB6: jz      short loc_1406B0EBD
 * 00000001406B0EB8: call    KiDpcInterruptBypass
 * 00000001406B0EBD: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406B0EC1: cmp     cs:KiIrqlFlags, 0
 * 00000001406B0EC8: jz      short loc_1406B0ED1
 * 00000001406B0ECA: call    KzSetIrqlUnsafe
 * 00000001406B0ECF: jmp     short loc_1406B0ED5
 * 00000001406B0ED1: mov     cr8, rcx
 * 00000001406B0ED5: mov     rsi, [rbp+0D0h]
 * 00000001406B0EDC: cli
 * 00000001406B0EDD: test    byte ptr [rbp+0F0h], 1
 * 00000001406B0EE4: jz      loc_1406B11DF
 * 00000001406B0EEA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B0EF1: jz      short loc_1406B0EF6
 * 00000001406B0EF3: stac
 * 00000001406B0EF6: mov     rcx, gs:188h
 * 00000001406B0EFF: test    byte ptr [rcx+0C2h], 3
 * 00000001406B0F06: jz      short loc_1406B0F23
 * 00000001406B0F08: mov     ecx, 1
 * 00000001406B0F0D: mov     cr8, rcx
 * 00000001406B0F11: sti
 * 00000001406B0F12: call    KiInitiateUserApc
 * 00000001406B0F17: cli
 * 00000001406B0F18: mov     ecx, 0
 * 00000001406B0F1D: mov     cr8, rcx
 * 00000001406B0F21: jmp     short loc_1406B0EF6
 * 00000001406B0F23: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B0F28: test    eax, eax
 * 00000001406B0F2A: mov     rax, [rbp-50h]
 * 00000001406B0F2E: jnz     short loc_1406B0EF6
 * 00000001406B0F30: test    byte ptr gs:860h, 2
 * 00000001406B0F39: jz      short loc_1406B0F42
 * 00000001406B0F3B: xor     ecx, ecx
 * 00000001406B0F3D: call    KiUpdateStibpPairing
 * 00000001406B0F42: mov     rcx, gs:188h
 * 00000001406B0F4B: test    dword ptr [rcx], 8000000h
 * 00000001406B0F51: jz      short loc_1406B0F58
 * 00000001406B0F53: call    KiRestoreSetContextState
 * 00000001406B0F58: mov     rcx, gs:188h
 * 00000001406B0F61: test    dword ptr [rcx], 10000h
 * 00000001406B0F67: jz      short loc_1406B0F7D
 * 00000001406B0F69: test    byte ptr [rcx+2], 1
 * 00000001406B0F6D: jz      short loc_1406B0F7D
 * 00000001406B0F6F: call    KiCopyCounters
 * 00000001406B0F74: mov     rcx, gs:188h
 * 00000001406B0F7D: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B0F81: cmp     word ptr [rbp+80h], 0
 * 00000001406B0F89: jz      short loc_1406B0F90
 * 00000001406B0F8B: call    KiRestoreDebugRegisterState
 * 00000001406B0F90: mov     rcx, gs:188h
 * 00000001406B0F99: bt      dword ptr [rcx+74h], 16h
 * 00000001406B0F9E: jnb     short loc_1406B0FCA
 * 00000001406B0FA0: xor     ecx, ecx
 * 00000001406B0FA2: rdsspq  rcx
 * 00000001406B0FA7: mov     r8, gs:9D28h
 * 00000001406B0FB0: add     r8, 8
 * 00000001406B0FB4: cmp     rcx, r8
 * 00000001406B0FB7: jnz     short loc_1406B0FCA
 * 00000001406B0FB9: mov     rcx, gs:9D20h
 * 00000001406B0FC2: rstorssp qword ptr [rcx]
 * 00000001406B0FC6: saveprevssp
 * 00000001406B0FCA: mov     byte ptr gs:85Eh, 0
 * 00000001406B0FD3: movzx   eax, word ptr gs:86Ch
 * 00000001406B0FDC: cmp     gs:866h, ax
 * 00000001406B0FE5: jz      short loc_1406B0FF9
 * 00000001406B0FE7: mov     gs:866h, ax
 * 00000001406B0FF0: mov     ecx, 48h ; 'H'
 * 00000001406B0FF5: xor     edx, edx
 * 00000001406B0FF7: wrmsr
 * 00000001406B0FF9: btr     word ptr gs:858h, 2
 * 00000001406B1004: jnb     short loc_1406B1014
 * 00000001406B1006: mov     eax, 1
 * 00000001406B100B: xor     edx, edx
 * 00000001406B100D: mov     ecx, 49h ; 'I'
 * 00000001406B1012: wrmsr
 * 00000001406B1014: btr     word ptr gs:858h, 5
 * 00000001406B101F: jnb     loc_1406B115C
 * 00000001406B1025: call    loc_1406B1138
 * 00000001406B102A: add     rsp, 8
 * 00000001406B102E: call    loc_1406B1141
 * 00000001406B1033: add     rsp, 8
 * 00000001406B1037: call    loc_1406B102A
 * 00000001406B103C: add     rsp, 8
 * 00000001406B1040: call    loc_1406B1033
 * 00000001406B1045: add     rsp, 8
 * 00000001406B1049: call    loc_1406B103C
 * 00000001406B104E: add     rsp, 8
 * 00000001406B1052: call    loc_1406B1045
 * 00000001406B1057: add     rsp, 8
 * 00000001406B105B: call    loc_1406B104E
 * 00000001406B1060: add     rsp, 8
 * 00000001406B1064: call    loc_1406B1057
 * 00000001406B1069: add     rsp, 8
 * 00000001406B106D: call    loc_1406B1060
 * 00000001406B1072: add     rsp, 8
 * 00000001406B1076: call    loc_1406B1069
 * 00000001406B107B: add     rsp, 8
 * 00000001406B107F: call    loc_1406B1072
 * 00000001406B1084: add     rsp, 8
 * 00000001406B1088: call    loc_1406B107B
 * 00000001406B108D: add     rsp, 8
 * 00000001406B1091: call    loc_1406B1084
 * 00000001406B1096: add     rsp, 8
 * 00000001406B109A: call    loc_1406B108D
 * 00000001406B109F: add     rsp, 8
 * 00000001406B10A3: call    loc_1406B1096
 * 00000001406B10A8: add     rsp, 8
 * 00000001406B10AC: call    loc_1406B109F
 * 00000001406B10B1: add     rsp, 8
 * 00000001406B10B5: call    loc_1406B10A8
 * 00000001406B10BA: add     rsp, 8
 * 00000001406B10BE: call    loc_1406B10B1
 * 00000001406B10C3: add     rsp, 8
 * 00000001406B10C7: call    loc_1406B10BA
 * 00000001406B10CC: add     rsp, 8
 * 00000001406B10D0: call    loc_1406B10C3
 * 00000001406B10D5: add     rsp, 8
 * 00000001406B10D9: call    loc_1406B10CC
 * 00000001406B10DE: add     rsp, 8
 * 00000001406B10E2: call    loc_1406B10D5
 * 00000001406B10E7: add     rsp, 8
 * 00000001406B10EB: call    loc_1406B10DE
 * 00000001406B10F0: add     rsp, 8
 * 00000001406B10F4: call    loc_1406B10E7
 * 00000001406B10F9: add     rsp, 8
 * 00000001406B10FD: call    loc_1406B10F0
 * 00000001406B1102: add     rsp, 8
 * 00000001406B1106: call    loc_1406B10F9
 * 00000001406B110B: add     rsp, 8
 * 00000001406B110F: call    loc_1406B1102
 * 00000001406B1114: add     rsp, 8
 * 00000001406B1118: call    loc_1406B110B
 * 00000001406B111D: add     rsp, 8
 * 00000001406B1121: call    loc_1406B1114
 * 00000001406B1126: add     rsp, 8
 * 00000001406B112A: call    loc_1406B111D
 * 00000001406B112F: add     rsp, 8
 * 00000001406B1133: call    loc_1406B1126
 * 00000001406B1138: add     rsp, 8
 * 00000001406B113C: call    loc_1406B112F
 * 00000001406B1141: add     rsp, 8
 * 00000001406B1145: mov     eax, 0DADAh
 * 00000001406B114A: test    byte ptr gs:85Ch, 8
 * 00000001406B1153: jz      short loc_1406B115C
 * 00000001406B1155: mov     al, 20h ; ' '
 * 00000001406B1157: incsspq rax
 * 00000001406B115C: test    word ptr gs:858h, 100h
 * 00000001406B1167: jz      short loc_1406B1175
 * 00000001406B1169: xor     eax, eax
 * 00000001406B116B: xor     edx, edx
 * 00000001406B116D: mov     ecx, 1
 * 00000001406B1172: div     rcx
 * 00000001406B1175: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B1179: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B117D: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B1181: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B1185: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B1189: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B118D: mov     r11, [rbp-20h]
 * 00000001406B1191: mov     r10, [rbp-28h]
 * 00000001406B1195: mov     r9, [rbp-30h]
 * 00000001406B1199: mov     r8, [rbp-38h]
 * 00000001406B119D: mov     rdx, [rbp-40h]
 * 00000001406B11A1: mov     rcx, [rbp-48h]
 * 00000001406B11A5: mov     rax, [rbp-50h]
 * 00000001406B11A9: mov     rsp, rbp
 * 00000001406B11AC: mov     rbp, [rbp+0D8h]
 * 00000001406B11B3: add     rsp, 0E8h
 * 00000001406B11BA: test    cs:KiKvaShadow, 1
 * 00000001406B11C1: jz      short loc_1406B11C8
 * 00000001406B11C3: jmp     KiKernelExit
 * 00000001406B11C8: test    word ptr gs:858h, 200h
 * 00000001406B11D3: jz      short loc_1406B11DA
 * 00000001406B11D5: verw    [rsp-1C8h+arg_1E0]
 * 00000001406B11DA: swapgs
 * 00000001406B11DD: iretq
 * 00000001406B11DF: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B11E3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B11E7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B11EB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B11EF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B11F3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B11F7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B11FB: mov     r11, [rbp-20h]
 * 00000001406B11FF: mov     r10, [rbp-28h]
 * 00000001406B1203: mov     r9, [rbp-30h]
 * 00000001406B1207: mov     r8, [rbp-38h]
 * 00000001406B120B: mov     rdx, [rbp-40h]
 * 00000001406B120F: mov     rcx, [rbp-48h]
 * 00000001406B1213: mov     rax, [rbp-50h]
 * 00000001406B1217: mov     rsp, rbp
 * 00000001406B121A: mov     rbp, [rbp+0D8h]
 * 00000001406B1221: add     rsp, 0E8h
 * 00000001406B1228: iretq
 */
