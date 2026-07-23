/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1406AED60
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiEndInterruptCycleAccumulation @ 0x140368D80 (KiEndInterruptCycleAccumulation.c)
 *     KiStartInterruptCycleAccumulation @ 0x14036A630 (KiStartInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B4DD0 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1406AED60 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1406B31A0 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1406AED60
 * Reason: Hex-Rays returned no pseudocode for 0x1406AED60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406AED60: mov     ecx, 0Fh
 * 00000001406AED65: cmp     cs:KiIrqlFlags, 0
 * 00000001406AED6C: jz      short loc_1406AED75
 * 00000001406AED6E: call    KzSetIrqlUnsafe
 * 00000001406AED73: jmp     short loc_1406AED7D
 * 00000001406AED75: mov     rax, cr8
 * 00000001406AED79: mov     cr8, rcx
 * 00000001406AED7D: mov     [rbp-57h], al
 * 00000001406AED80: mov     rcx, gs:20h
 * 00000001406AED89: xor     edx, edx
 * 00000001406AED8B: call    KiStartInterruptCycleAccumulation
 * 00000001406AED90: sti
 * 00000001406AED91: inc     dword ptr [rsi+74h]
 * 00000001406AED94: cli
 * 00000001406AED95: mov     rcx, gs:20h
 * 00000001406AED9E: movzx   edx, byte ptr [rbp-57h]
 * 00000001406AEDA2: call    KiEndInterruptCycleAccumulation
 * 00000001406AEDA7: test    al, al
 * 00000001406AEDA9: jz      short loc_1406AEDB0
 * 00000001406AEDAB: call    KiDpcInterruptBypass
 * 00000001406AEDB0: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406AEDB4: cmp     cs:KiIrqlFlags, 0
 * 00000001406AEDBB: jz      short loc_1406AEDC4
 * 00000001406AEDBD: call    KzSetIrqlUnsafe
 * 00000001406AEDC2: jmp     short loc_1406AEDC8
 * 00000001406AEDC4: mov     cr8, rcx
 * 00000001406AEDC8: mov     rsi, [rbp+0D0h]
 * 00000001406AEDCF: cli
 * 00000001406AEDD0: test    byte ptr [rbp+0F0h], 1
 * 00000001406AEDD7: jz      loc_1406AF0D2
 * 00000001406AEDDD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AEDE4: jz      short loc_1406AEDE9
 * 00000001406AEDE6: stac
 * 00000001406AEDE9: mov     rcx, gs:188h
 * 00000001406AEDF2: test    byte ptr [rcx+0C2h], 3
 * 00000001406AEDF9: jz      short loc_1406AEE16
 * 00000001406AEDFB: mov     ecx, 1
 * 00000001406AEE00: mov     cr8, rcx
 * 00000001406AEE04: sti
 * 00000001406AEE05: call    KiInitiateUserApc
 * 00000001406AEE0A: cli
 * 00000001406AEE0B: mov     ecx, 0
 * 00000001406AEE10: mov     cr8, rcx
 * 00000001406AEE14: jmp     short loc_1406AEDE9
 * 00000001406AEE16: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406AEE1B: test    eax, eax
 * 00000001406AEE1D: mov     rax, [rbp-50h]
 * 00000001406AEE21: jnz     short loc_1406AEDE9
 * 00000001406AEE23: test    byte ptr gs:860h, 2
 * 00000001406AEE2C: jz      short loc_1406AEE35
 * 00000001406AEE2E: xor     ecx, ecx
 * 00000001406AEE30: call    KiUpdateStibpPairing
 * 00000001406AEE35: mov     rcx, gs:188h
 * 00000001406AEE3E: test    dword ptr [rcx], 8000000h
 * 00000001406AEE44: jz      short loc_1406AEE4B
 * 00000001406AEE46: call    KiRestoreSetContextState
 * 00000001406AEE4B: mov     rcx, gs:188h
 * 00000001406AEE54: test    dword ptr [rcx], 10000h
 * 00000001406AEE5A: jz      short loc_1406AEE70
 * 00000001406AEE5C: test    byte ptr [rcx+2], 1
 * 00000001406AEE60: jz      short loc_1406AEE70
 * 00000001406AEE62: call    KiCopyCounters
 * 00000001406AEE67: mov     rcx, gs:188h
 * 00000001406AEE70: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AEE74: cmp     word ptr [rbp+80h], 0
 * 00000001406AEE7C: jz      short loc_1406AEE83
 * 00000001406AEE7E: call    KiRestoreDebugRegisterState
 * 00000001406AEE83: mov     rcx, gs:188h
 * 00000001406AEE8C: bt      dword ptr [rcx+74h], 16h
 * 00000001406AEE91: jnb     short loc_1406AEEBD
 * 00000001406AEE93: xor     ecx, ecx
 * 00000001406AEE95: rdsspq  rcx
 * 00000001406AEE9A: mov     r8, gs:9D28h
 * 00000001406AEEA3: add     r8, 8
 * 00000001406AEEA7: cmp     rcx, r8
 * 00000001406AEEAA: jnz     short loc_1406AEEBD
 * 00000001406AEEAC: mov     rcx, gs:9D20h
 * 00000001406AEEB5: rstorssp qword ptr [rcx]
 * 00000001406AEEB9: saveprevssp
 * 00000001406AEEBD: mov     byte ptr gs:85Eh, 0
 * 00000001406AEEC6: movzx   eax, word ptr gs:86Ch
 * 00000001406AEECF: cmp     gs:866h, ax
 * 00000001406AEED8: jz      short loc_1406AEEEC
 * 00000001406AEEDA: mov     gs:866h, ax
 * 00000001406AEEE3: mov     ecx, 48h ; 'H'
 * 00000001406AEEE8: xor     edx, edx
 * 00000001406AEEEA: wrmsr
 * 00000001406AEEEC: btr     word ptr gs:858h, 2
 * 00000001406AEEF7: jnb     short loc_1406AEF07
 * 00000001406AEEF9: mov     eax, 1
 * 00000001406AEEFE: xor     edx, edx
 * 00000001406AEF00: mov     ecx, 49h ; 'I'
 * 00000001406AEF05: wrmsr
 * 00000001406AEF07: btr     word ptr gs:858h, 5
 * 00000001406AEF12: jnb     loc_1406AF04F
 * 00000001406AEF18: call    loc_1406AF02B
 * 00000001406AEF1D: add     rsp, 8
 * 00000001406AEF21: call    loc_1406AF034
 * 00000001406AEF26: add     rsp, 8
 * 00000001406AEF2A: call    loc_1406AEF1D
 * 00000001406AEF2F: add     rsp, 8
 * 00000001406AEF33: call    loc_1406AEF26
 * 00000001406AEF38: add     rsp, 8
 * 00000001406AEF3C: call    loc_1406AEF2F
 * 00000001406AEF41: add     rsp, 8
 * 00000001406AEF45: call    loc_1406AEF38
 * 00000001406AEF4A: add     rsp, 8
 * 00000001406AEF4E: call    loc_1406AEF41
 * 00000001406AEF53: add     rsp, 8
 * 00000001406AEF57: call    loc_1406AEF4A
 * 00000001406AEF5C: add     rsp, 8
 * 00000001406AEF60: call    loc_1406AEF53
 * 00000001406AEF65: add     rsp, 8
 * 00000001406AEF69: call    loc_1406AEF5C
 * 00000001406AEF6E: add     rsp, 8
 * 00000001406AEF72: call    loc_1406AEF65
 * 00000001406AEF77: add     rsp, 8
 * 00000001406AEF7B: call    loc_1406AEF6E
 * 00000001406AEF80: add     rsp, 8
 * 00000001406AEF84: call    loc_1406AEF77
 * 00000001406AEF89: add     rsp, 8
 * 00000001406AEF8D: call    loc_1406AEF80
 * 00000001406AEF92: add     rsp, 8
 * 00000001406AEF96: call    loc_1406AEF89
 * 00000001406AEF9B: add     rsp, 8
 * 00000001406AEF9F: call    loc_1406AEF92
 * 00000001406AEFA4: add     rsp, 8
 * 00000001406AEFA8: call    loc_1406AEF9B
 * 00000001406AEFAD: add     rsp, 8
 * 00000001406AEFB1: call    loc_1406AEFA4
 * 00000001406AEFB6: add     rsp, 8
 * 00000001406AEFBA: call    loc_1406AEFAD
 * 00000001406AEFBF: add     rsp, 8
 * 00000001406AEFC3: call    loc_1406AEFB6
 * 00000001406AEFC8: add     rsp, 8
 * 00000001406AEFCC: call    loc_1406AEFBF
 * 00000001406AEFD1: add     rsp, 8
 * 00000001406AEFD5: call    loc_1406AEFC8
 * 00000001406AEFDA: add     rsp, 8
 * 00000001406AEFDE: call    loc_1406AEFD1
 * 00000001406AEFE3: add     rsp, 8
 * 00000001406AEFE7: call    loc_1406AEFDA
 * 00000001406AEFEC: add     rsp, 8
 * 00000001406AEFF0: call    loc_1406AEFE3
 * 00000001406AEFF5: add     rsp, 8
 * 00000001406AEFF9: call    loc_1406AEFEC
 * 00000001406AEFFE: add     rsp, 8
 * 00000001406AF002: call    loc_1406AEFF5
 * 00000001406AF007: add     rsp, 8
 * 00000001406AF00B: call    loc_1406AEFFE
 * 00000001406AF010: add     rsp, 8
 * 00000001406AF014: call    loc_1406AF007
 * 00000001406AF019: add     rsp, 8
 * 00000001406AF01D: call    loc_1406AF010
 * 00000001406AF022: add     rsp, 8
 * 00000001406AF026: call    loc_1406AF019
 * 00000001406AF02B: add     rsp, 8
 * 00000001406AF02F: call    loc_1406AF022
 * 00000001406AF034: add     rsp, 8
 * 00000001406AF038: mov     eax, 0DADAh
 * 00000001406AF03D: test    byte ptr gs:85Ch, 8
 * 00000001406AF046: jz      short loc_1406AF04F
 * 00000001406AF048: mov     al, 20h ; ' '
 * 00000001406AF04A: incsspq rax
 * 00000001406AF04F: test    word ptr gs:858h, 100h
 * 00000001406AF05A: jz      short loc_1406AF068
 * 00000001406AF05C: xor     eax, eax
 * 00000001406AF05E: xor     edx, edx
 * 00000001406AF060: mov     ecx, 1
 * 00000001406AF065: div     rcx
 * 00000001406AF068: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AF06C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AF070: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AF074: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AF078: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AF07C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AF080: mov     r11, [rbp-20h]
 * 00000001406AF084: mov     r10, [rbp-28h]
 * 00000001406AF088: mov     r9, [rbp-30h]
 * 00000001406AF08C: mov     r8, [rbp-38h]
 * 00000001406AF090: mov     rdx, [rbp-40h]
 * 00000001406AF094: mov     rcx, [rbp-48h]
 * 00000001406AF098: mov     rax, [rbp-50h]
 * 00000001406AF09C: mov     rsp, rbp
 * 00000001406AF09F: mov     rbp, [rbp+0D8h]
 * 00000001406AF0A6: add     rsp, 0E8h
 * 00000001406AF0AD: test    cs:KiKvaShadow, 1
 * 00000001406AF0B4: jz      short loc_1406AF0BB
 * 00000001406AF0B6: jmp     KiKernelExit
 * 00000001406AF0BB: test    word ptr gs:858h, 200h
 * 00000001406AF0C6: jz      short loc_1406AF0CD
 * 00000001406AF0C8: verw    [rsp-1E8h+arg_200]
 * 00000001406AF0CD: swapgs
 * 00000001406AF0D0: iretq
 * 00000001406AF0D2: ldmxcsr dword ptr [rbp-54h]
 * 00000001406AF0D6: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406AF0DA: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406AF0DE: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406AF0E2: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406AF0E6: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406AF0EA: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406AF0EE: mov     r11, [rbp-20h]
 * 00000001406AF0F2: mov     r10, [rbp-28h]
 * 00000001406AF0F6: mov     r9, [rbp-30h]
 * 00000001406AF0FA: mov     r8, [rbp-38h]
 * 00000001406AF0FE: mov     rdx, [rbp-40h]
 * 00000001406AF102: mov     rcx, [rbp-48h]
 * 00000001406AF106: mov     rax, [rbp-50h]
 * 00000001406AF10A: mov     rsp, rbp
 * 00000001406AF10D: mov     rbp, [rbp+0D8h]
 * 00000001406AF114: add     rsp, 0E8h
 * 00000001406AF11B: iretq
 */
