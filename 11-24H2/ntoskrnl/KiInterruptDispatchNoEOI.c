/*
 * XREFs of KiInterruptDispatchNoEOI @ 0x1406AE990
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatchNoLock @ 0x1406ADCF0 (KiInterruptSubDispatchNoLock.c)
 *     KiInterruptDispatchNoEOI @ 0x1406AE990 (KiInterruptDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatchNoEOI @ 0x1406AE990
 * Reason: Hex-Rays returned no pseudocode for 0x1406AE990
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AE990: mov     rcx, gs:9158h
 * 00000001406AE999: mov     rax, rcx
 * 00000001406AE99C: mov     edx, cs:KeIsrStackSize
 * 00000001406AE9A2: sub     rax, rdx
 * 00000001406AE9A5: mov     rdx, rsp
 * 00000001406AE9A8: cmp     rax, rsp
 * 00000001406AE9AB: ja      short loc_1406AE9B2
 * 00000001406AE9AD: cmp     rsp, rcx
 * 00000001406AE9B0: jb      short loc_1406AE9BE
 * 00000001406AE9B2: cmp     cs:KiBugCheckActive, 0
 * 00000001406AE9B9: jnz     short loc_1406AE9BE
 * 00000001406AE9BB: mov     rsp, rcx
 * 00000001406AE9BE: sub     rsp, 20h
 * 00000001406AE9C2: mov     [rsp+20h+var_10], rdx
 * 00000001406AE9C7: call    KiInterruptSubDispatchNoLock
 * 00000001406AE9CC: mov     rsp, [rsp+20h+var_10]
 * 00000001406AE9D1: mov     rcx, gs:20h
 * 00000001406AE9DA: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AE9DE: call    KiEndInterruptCycleAccumulation
 * 00000001406AE9E3: test    al, al
 * 00000001406AE9E5: jz      short loc_1406AE9EC
 * 00000001406AE9E7: call    KiDpcInterruptBypass
 * 00000001406AE9EC: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AE9F0: cmp     cs:KiIrqlFlags, 0
 * 00000001406AE9F7: jz      short loc_1406AEA00
 * 00000001406AE9F9: call    KzSetIrqlUnsafe
 * 00000001406AE9FE: jmp     short loc_1406AEA04
 * 00000001406AEA00: mov     cr8, rcx
 * 00000001406AEA04: mov     rsi, [rbp+0D0h]
 * 00000001406AEA0B: test    byte ptr [rbp+0F0h], 1
 * 00000001406AEA12: jz      loc_1406AED0D
 * 00000001406AEA18: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AEA1F: jz      short loc_1406AEA24
 * 00000001406AEA21: stac
 * 00000001406AEA24: mov     rcx, gs:188h
 * 00000001406AEA2D: test    byte ptr [rcx+0C2h], 3
 * 00000001406AEA34: jz      short loc_1406AEA51
 * 00000001406AEA36: mov     ecx, 1
 * 00000001406AEA3B: mov     cr8, rcx
 * 00000001406AEA3F: sti
 * 00000001406AEA40: call    KiInitiateUserApc
 * 00000001406AEA45: cli
 * 00000001406AEA46: mov     ecx, 0
 * 00000001406AEA4B: mov     cr8, rcx
 * 00000001406AEA4F: jmp     short loc_1406AEA24
 * 00000001406AEA51: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AEA56: test    eax, eax
 * 00000001406AEA58: mov     rax, [rbp-50h]
 * 00000001406AEA5C: jnz     short loc_1406AEA24
 * 00000001406AEA5E: test    byte ptr gs:860h, 2
 * 00000001406AEA67: jz      short loc_1406AEA70
 * 00000001406AEA69: xor     ecx, ecx
 * 00000001406AEA6B: call    KiUpdateStibpPairing
 * 00000001406AEA70: mov     rcx, gs:188h
 * 00000001406AEA79: test    dword ptr [rcx], 8000000h
 * 00000001406AEA7F: jz      short loc_1406AEA86
 * 00000001406AEA81: call    KiRestoreSetContextState
 * 00000001406AEA86: mov     rcx, gs:188h
 * 00000001406AEA8F: test    dword ptr [rcx], 10000h
 * 00000001406AEA95: jz      short loc_1406AEAAB
 * 00000001406AEA97: test    byte ptr [rcx+2], 1
 * 00000001406AEA9B: jz      short loc_1406AEAAB
 * 00000001406AEA9D: call    KiCopyCounters
 * 00000001406AEAA2: mov     rcx, gs:188h
 * 00000001406AEAAB: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AEAAF: cmp     word ptr [rbp+80h], 0
 * 00000001406AEAB7: jz      short loc_1406AEABE
 * 00000001406AEAB9: call    KiRestoreDebugRegisterState
 * 00000001406AEABE: mov     rcx, gs:188h
 * 00000001406AEAC7: bt      dword ptr [rcx+74h], 16h
 * 00000001406AEACC: jnb     short loc_1406AEAF8
 * 00000001406AEACE: xor     ecx, ecx
 * 00000001406AEAD0: rdsspq  rcx
 * 00000001406AEAD5: mov     r8, gs:9D28h
 * 00000001406AEADE: add     r8, 8
 * 00000001406AEAE2: cmp     rcx, r8
 * 00000001406AEAE5: jnz     short loc_1406AEAF8
 * 00000001406AEAE7: mov     rcx, gs:9D20h
 * 00000001406AEAF0: rstorssp qword ptr [rcx]
 * 00000001406AEAF4: saveprevssp
 * 00000001406AEAF8: mov     byte ptr gs:85Eh, 0
 * 00000001406AEB01: movzx   eax, word ptr gs:86Ch
 * 00000001406AEB0A: cmp     gs:866h, ax
 * 00000001406AEB13: jz      short loc_1406AEB27
 * 00000001406AEB15: mov     gs:866h, ax
 * 00000001406AEB1E: mov     ecx, 48h ; 'H'
 * 00000001406AEB23: xor     edx, edx
 * 00000001406AEB25: wrmsr
 * 00000001406AEB27: btr     word ptr gs:858h, 2
 * 00000001406AEB32: jnb     short loc_1406AEB42
 * 00000001406AEB34: mov     eax, 1
 * 00000001406AEB39: xor     edx, edx
 * 00000001406AEB3B: mov     ecx, 49h ; 'I'
 * 00000001406AEB40: wrmsr
 * 00000001406AEB42: btr     word ptr gs:858h, 5
 * 00000001406AEB4D: jnb     loc_1406AEC8A
 * 00000001406AEB53: call    loc_1406AEC66
 * 00000001406AEB58: add     rsp, 8
 * 00000001406AEB5C: call    loc_1406AEC6F
 * 00000001406AEB61: add     rsp, 8
 * 00000001406AEB65: call    loc_1406AEB58
 * 00000001406AEB6A: add     rsp, 8
 * 00000001406AEB6E: call    loc_1406AEB61
 * 00000001406AEB73: add     rsp, 8
 * 00000001406AEB77: call    loc_1406AEB6A
 * 00000001406AEB7C: add     rsp, 8
 * 00000001406AEB80: call    loc_1406AEB73
 * 00000001406AEB85: add     rsp, 8
 * 00000001406AEB89: call    loc_1406AEB7C
 * 00000001406AEB8E: add     rsp, 8
 * 00000001406AEB92: call    loc_1406AEB85
 * 00000001406AEB97: add     rsp, 8
 * 00000001406AEB9B: call    loc_1406AEB8E
 * 00000001406AEBA0: add     rsp, 8
 * 00000001406AEBA4: call    loc_1406AEB97
 * 00000001406AEBA9: add     rsp, 8
 * 00000001406AEBAD: call    loc_1406AEBA0
 * 00000001406AEBB2: add     rsp, 8
 * 00000001406AEBB6: call    loc_1406AEBA9
 * 00000001406AEBBB: add     rsp, 8
 * 00000001406AEBBF: call    loc_1406AEBB2
 * 00000001406AEBC4: add     rsp, 8
 * 00000001406AEBC8: call    loc_1406AEBBB
 * 00000001406AEBCD: add     rsp, 8
 * 00000001406AEBD1: call    loc_1406AEBC4
 * 00000001406AEBD6: add     rsp, 8
 * 00000001406AEBDA: call    loc_1406AEBCD
 * 00000001406AEBDF: add     rsp, 8
 * 00000001406AEBE3: call    loc_1406AEBD6
 * 00000001406AEBE8: add     rsp, 8
 * 00000001406AEBEC: call    loc_1406AEBDF
 * 00000001406AEBF1: add     rsp, 8
 * 00000001406AEBF5: call    loc_1406AEBE8
 * 00000001406AEBFA: add     rsp, 8
 * 00000001406AEBFE: call    loc_1406AEBF1
 * 00000001406AEC03: add     rsp, 8
 * 00000001406AEC07: call    loc_1406AEBFA
 * 00000001406AEC0C: add     rsp, 8
 * 00000001406AEC10: call    loc_1406AEC03
 * 00000001406AEC15: add     rsp, 8
 * 00000001406AEC19: call    loc_1406AEC0C
 * 00000001406AEC1E: add     rsp, 8
 * 00000001406AEC22: call    loc_1406AEC15
 * 00000001406AEC27: add     rsp, 8
 * 00000001406AEC2B: call    loc_1406AEC1E
 * 00000001406AEC30: add     rsp, 8
 * 00000001406AEC34: call    loc_1406AEC27
 * 00000001406AEC39: add     rsp, 8
 * 00000001406AEC3D: call    loc_1406AEC30
 * 00000001406AEC42: add     rsp, 8
 * 00000001406AEC46: call    loc_1406AEC39
 * 00000001406AEC4B: add     rsp, 8
 * 00000001406AEC4F: call    loc_1406AEC42
 * 00000001406AEC54: add     rsp, 8
 * 00000001406AEC58: call    loc_1406AEC4B
 * 00000001406AEC5D: add     rsp, 8
 * 00000001406AEC61: call    loc_1406AEC54
 * 00000001406AEC66: add     rsp, 8
 * 00000001406AEC6A: call    loc_1406AEC5D
 * 00000001406AEC6F: add     rsp, 8
 * 00000001406AEC73: mov     eax, 0DADAh
 * 00000001406AEC78: test    byte ptr gs:85Ch, 8
 * 00000001406AEC81: jz      short loc_1406AEC8A
 * 00000001406AEC83: mov     al, 20h ; ' '
 * 00000001406AEC85: incsspq rax
 * 00000001406AEC8A: test    word ptr gs:858h, 100h
 * 00000001406AEC95: jz      short loc_1406AECA3
 * 00000001406AEC97: xor     eax, eax
 * 00000001406AEC99: xor     edx, edx
 * 00000001406AEC9B: mov     ecx, 1
 * 00000001406AECA0: div     rcx
 * 00000001406AECA3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AECA7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AECAB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AECAF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AECB3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AECB7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AECBB: mov     r11, [rbp-20h]
 * 00000001406AECBF: mov     r10, [rbp-28h]
 * 00000001406AECC3: mov     r9, [rbp-30h]
 * 00000001406AECC7: mov     r8, [rbp-38h]
 * 00000001406AECCB: mov     rdx, [rbp-40h]
 * 00000001406AECCF: mov     rcx, [rbp-48h]
 * 00000001406AECD3: mov     rax, [rbp-50h]
 * 00000001406AECD7: mov     rsp, rbp
 * 00000001406AECDA: mov     rbp, [rbp+0D8h]
 * 00000001406AECE1: add     rsp, 0E8h
 * 00000001406AECE8: test    cs:KiKvaShadow, 1
 * 00000001406AECEF: jz      short loc_1406AECF6
 * 00000001406AECF1: jmp     KiKernelExit
 * 00000001406AECF6: test    word ptr gs:858h, 200h
 * 00000001406AED01: jz      short loc_1406AED08
 * 00000001406AED03: verw    [rsp-1C8h+arg_1E0]
 * 00000001406AED08: swapgs
 * 00000001406AED0B: iretq
 * 00000001406AED0D: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AED11: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AED15: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AED19: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AED1D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AED21: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AED25: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AED29: mov     r11, [rbp-20h]
 * 00000001406AED2D: mov     r10, [rbp-28h]
 * 00000001406AED31: mov     r9, [rbp-30h]
 * 00000001406AED35: mov     r8, [rbp-38h]
 * 00000001406AED39: mov     rdx, [rbp-40h]
 * 00000001406AED3D: mov     rcx, [rbp-48h]
 * 00000001406AED41: mov     rax, [rbp-50h]
 * 00000001406AED45: mov     rsp, rbp
 * 00000001406AED48: mov     rbp, [rbp+0D8h]
 * 00000001406AED4F: add     rsp, 0E8h
 * 00000001406AED56: iretq
 */
