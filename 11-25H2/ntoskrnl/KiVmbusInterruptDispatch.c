/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1406A5B90
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1406A49E0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x1406A4D50 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x1406A50C0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1406A5430 (KiVmbusInterrupt3.c)
 * Callees:
 *     KiEndInterruptCycleAccumulation @ 0x14028EFB0 (KiEndInterruptCycleAccumulation.c)
 *     KiUpdateStibpPairing @ 0x1403E3F50 (KiUpdateStibpPairing.c)
 *     KiSynchronizeUserIsolationDomainEntry @ 0x1403EF6C0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiRestoreDebugRegisterState @ 0x1404F9500 (KiRestoreDebugRegisterState.c)
 *     KzSetIrqlUnsafe @ 0x1405B3940 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405BB410 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x14069FCF0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406A4590 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x1406A5B90 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x1406A6010 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x1406A6F30 (KiDpcInterruptBypass.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1406A5B90
 * Reason: Hex-Rays returned no pseudocode for 0x1406A5B90
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406A5B90: mov     rcx, gs:9158h
 * 00000001406A5B99: mov     rax, rcx
 * 00000001406A5B9C: mov     edx, cs:KeIsrStackSize
 * 00000001406A5BA2: sub     rax, rdx
 * 00000001406A5BA5: mov     rdx, rsp
 * 00000001406A5BA8: cmp     rax, rsp
 * 00000001406A5BAB: ja      short loc_1406A5BB2
 * 00000001406A5BAD: cmp     rsp, rcx
 * 00000001406A5BB0: jb      short loc_1406A5BBE
 * 00000001406A5BB2: cmp     cs:KiBugCheckActive, 0
 * 00000001406A5BB9: jnz     short loc_1406A5BBE
 * 00000001406A5BBB: mov     rsp, rcx
 * 00000001406A5BBE: sub     rsp, 20h
 * 00000001406A5BC2: mov     [rsp+20h+var_10], rdx
 * 00000001406A5BC7: call    KiVmbusInterruptSubDispatch
 * 00000001406A5BCC: mov     rsp, [rsp+20h+var_10]
 * 00000001406A5BD1: cli
 * 00000001406A5BD2: mov     rcx, gs:20h
 * 00000001406A5BDB: movzx   edx, byte ptr [rbp-57h]
 * 00000001406A5BDF: call    KiEndInterruptCycleAccumulation
 * 00000001406A5BE4: test    al, al
 * 00000001406A5BE6: jz      short loc_1406A5BED
 * 00000001406A5BE8: call    KiDpcInterruptBypass
 * 00000001406A5BED: movzx   ecx, byte ptr [rbp-57h]
 * 00000001406A5BF1: cmp     cs:KiIrqlFlags, 0
 * 00000001406A5BF8: jz      short loc_1406A5C01
 * 00000001406A5BFA: call    KzSetIrqlUnsafe
 * 00000001406A5BFF: jmp     short loc_1406A5C05
 * 00000001406A5C01: mov     cr8, rcx
 * 00000001406A5C05: mov     rsi, [rbp+0D0h]
 * 00000001406A5C0C: cli
 * 00000001406A5C0D: test    byte ptr [rbp+0F0h], 1
 * 00000001406A5C14: jz      loc_1406A5F0F
 * 00000001406A5C1A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406A5C21: jz      short loc_1406A5C26
 * 00000001406A5C23: stac
 * 00000001406A5C26: mov     rcx, gs:188h
 * 00000001406A5C2F: test    byte ptr [rcx+0C2h], 3
 * 00000001406A5C36: jz      short loc_1406A5C53
 * 00000001406A5C38: mov     ecx, 1
 * 00000001406A5C3D: mov     cr8, rcx
 * 00000001406A5C41: sti
 * 00000001406A5C42: call    KiInitiateUserApc
 * 00000001406A5C47: cli
 * 00000001406A5C48: mov     ecx, 0
 * 00000001406A5C4D: mov     cr8, rcx
 * 00000001406A5C51: jmp     short loc_1406A5C26
 * 00000001406A5C53: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406A5C58: test    eax, eax
 * 00000001406A5C5A: mov     rax, [rbp-50h]
 * 00000001406A5C5E: jnz     short loc_1406A5C26
 * 00000001406A5C60: test    byte ptr gs:860h, 2
 * 00000001406A5C69: jz      short loc_1406A5C72
 * 00000001406A5C6B: xor     ecx, ecx
 * 00000001406A5C6D: call    KiUpdateStibpPairing
 * 00000001406A5C72: mov     rcx, gs:188h
 * 00000001406A5C7B: test    dword ptr [rcx], 8000000h
 * 00000001406A5C81: jz      short loc_1406A5C88
 * 00000001406A5C83: call    KiRestoreSetContextState
 * 00000001406A5C88: mov     rcx, gs:188h
 * 00000001406A5C91: test    dword ptr [rcx], 10000h
 * 00000001406A5C97: jz      short loc_1406A5CAD
 * 00000001406A5C99: test    byte ptr [rcx+2], 1
 * 00000001406A5C9D: jz      short loc_1406A5CAD
 * 00000001406A5C9F: call    KiCopyCounters
 * 00000001406A5CA4: mov     rcx, gs:188h
 * 00000001406A5CAD: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A5CB1: cmp     word ptr [rbp+80h], 0
 * 00000001406A5CB9: jz      short loc_1406A5CC0
 * 00000001406A5CBB: call    KiRestoreDebugRegisterState
 * 00000001406A5CC0: mov     rcx, gs:188h
 * 00000001406A5CC9: bt      dword ptr [rcx+74h], 16h
 * 00000001406A5CCE: jnb     short loc_1406A5CFA
 * 00000001406A5CD0: xor     ecx, ecx
 * 00000001406A5CD2: rdsspq  rcx
 * 00000001406A5CD7: mov     r8, gs:9D28h
 * 00000001406A5CE0: add     r8, 8
 * 00000001406A5CE4: cmp     rcx, r8
 * 00000001406A5CE7: jnz     short loc_1406A5CFA
 * 00000001406A5CE9: mov     rcx, gs:9D20h
 * 00000001406A5CF2: rstorssp qword ptr [rcx]
 * 00000001406A5CF6: saveprevssp
 * 00000001406A5CFA: mov     byte ptr gs:85Eh, 0
 * 00000001406A5D03: movzx   eax, word ptr gs:86Ch
 * 00000001406A5D0C: cmp     gs:866h, ax
 * 00000001406A5D15: jz      short loc_1406A5D29
 * 00000001406A5D17: mov     gs:866h, ax
 * 00000001406A5D20: mov     ecx, 48h ; 'H'
 * 00000001406A5D25: xor     edx, edx
 * 00000001406A5D27: wrmsr
 * 00000001406A5D29: btr     word ptr gs:858h, 2
 * 00000001406A5D34: jnb     short loc_1406A5D44
 * 00000001406A5D36: mov     eax, 1
 * 00000001406A5D3B: xor     edx, edx
 * 00000001406A5D3D: mov     ecx, 49h ; 'I'
 * 00000001406A5D42: wrmsr
 * 00000001406A5D44: btr     word ptr gs:858h, 5
 * 00000001406A5D4F: jnb     loc_1406A5E8C
 * 00000001406A5D55: call    loc_1406A5E68
 * 00000001406A5D5A: add     rsp, 8
 * 00000001406A5D5E: call    loc_1406A5E71
 * 00000001406A5D63: add     rsp, 8
 * 00000001406A5D67: call    loc_1406A5D5A
 * 00000001406A5D6C: add     rsp, 8
 * 00000001406A5D70: call    loc_1406A5D63
 * 00000001406A5D75: add     rsp, 8
 * 00000001406A5D79: call    loc_1406A5D6C
 * 00000001406A5D7E: add     rsp, 8
 * 00000001406A5D82: call    loc_1406A5D75
 * 00000001406A5D87: add     rsp, 8
 * 00000001406A5D8B: call    loc_1406A5D7E
 * 00000001406A5D90: add     rsp, 8
 * 00000001406A5D94: call    loc_1406A5D87
 * 00000001406A5D99: add     rsp, 8
 * 00000001406A5D9D: call    loc_1406A5D90
 * 00000001406A5DA2: add     rsp, 8
 * 00000001406A5DA6: call    loc_1406A5D99
 * 00000001406A5DAB: add     rsp, 8
 * 00000001406A5DAF: call    loc_1406A5DA2
 * 00000001406A5DB4: add     rsp, 8
 * 00000001406A5DB8: call    loc_1406A5DAB
 * 00000001406A5DBD: add     rsp, 8
 * 00000001406A5DC1: call    loc_1406A5DB4
 * 00000001406A5DC6: add     rsp, 8
 * 00000001406A5DCA: call    loc_1406A5DBD
 * 00000001406A5DCF: add     rsp, 8
 * 00000001406A5DD3: call    loc_1406A5DC6
 * 00000001406A5DD8: add     rsp, 8
 * 00000001406A5DDC: call    loc_1406A5DCF
 * 00000001406A5DE1: add     rsp, 8
 * 00000001406A5DE5: call    loc_1406A5DD8
 * 00000001406A5DEA: add     rsp, 8
 * 00000001406A5DEE: call    loc_1406A5DE1
 * 00000001406A5DF3: add     rsp, 8
 * 00000001406A5DF7: call    loc_1406A5DEA
 * 00000001406A5DFC: add     rsp, 8
 * 00000001406A5E00: call    loc_1406A5DF3
 * 00000001406A5E05: add     rsp, 8
 * 00000001406A5E09: call    loc_1406A5DFC
 * 00000001406A5E0E: add     rsp, 8
 * 00000001406A5E12: call    loc_1406A5E05
 * 00000001406A5E17: add     rsp, 8
 * 00000001406A5E1B: call    loc_1406A5E0E
 * 00000001406A5E20: add     rsp, 8
 * 00000001406A5E24: call    loc_1406A5E17
 * 00000001406A5E29: add     rsp, 8
 * 00000001406A5E2D: call    loc_1406A5E20
 * 00000001406A5E32: add     rsp, 8
 * 00000001406A5E36: call    loc_1406A5E29
 * 00000001406A5E3B: add     rsp, 8
 * 00000001406A5E3F: call    loc_1406A5E32
 * 00000001406A5E44: add     rsp, 8
 * 00000001406A5E48: call    loc_1406A5E3B
 * 00000001406A5E4D: add     rsp, 8
 * 00000001406A5E51: call    loc_1406A5E44
 * 00000001406A5E56: add     rsp, 8
 * 00000001406A5E5A: call    loc_1406A5E4D
 * 00000001406A5E5F: add     rsp, 8
 * 00000001406A5E63: call    loc_1406A5E56
 * 00000001406A5E68: add     rsp, 8
 * 00000001406A5E6C: call    loc_1406A5E5F
 * 00000001406A5E71: add     rsp, 8
 * 00000001406A5E75: mov     eax, 0DADAh
 * 00000001406A5E7A: test    byte ptr gs:85Ch, 8
 * 00000001406A5E83: jz      short loc_1406A5E8C
 * 00000001406A5E85: mov     al, 20h ; ' '
 * 00000001406A5E87: incsspq rax
 * 00000001406A5E8C: test    word ptr gs:858h, 100h
 * 00000001406A5E97: jz      short loc_1406A5EA5
 * 00000001406A5E99: xor     eax, eax
 * 00000001406A5E9B: xor     edx, edx
 * 00000001406A5E9D: mov     ecx, 1
 * 00000001406A5EA2: div     rcx
 * 00000001406A5EA5: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A5EA9: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A5EAD: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A5EB1: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A5EB5: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A5EB9: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A5EBD: mov     r11, [rbp-20h]
 * 00000001406A5EC1: mov     r10, [rbp-28h]
 * 00000001406A5EC5: mov     r9, [rbp-30h]
 * 00000001406A5EC9: mov     r8, [rbp-38h]
 * 00000001406A5ECD: mov     rdx, [rbp-40h]
 * 00000001406A5ED1: mov     rcx, [rbp-48h]
 * 00000001406A5ED5: mov     rax, [rbp-50h]
 * 00000001406A5ED9: mov     rsp, rbp
 * 00000001406A5EDC: mov     rbp, [rbp+0D8h]
 * 00000001406A5EE3: add     rsp, 0E8h
 * 00000001406A5EEA: test    cs:KiKvaShadow, 1
 * 00000001406A5EF1: jz      short loc_1406A5EF8
 * 00000001406A5EF3: jmp     KiKernelExit
 * 00000001406A5EF8: test    word ptr gs:858h, 200h
 * 00000001406A5F03: jz      short loc_1406A5F0A
 * 00000001406A5F05: verw    [rsp-1C8h+arg_1E0]
 * 00000001406A5F0A: swapgs
 * 00000001406A5F0D: iretq
 * 00000001406A5F0F: ldmxcsr dword ptr [rbp-54h]
 * 00000001406A5F13: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406A5F17: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406A5F1B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406A5F1F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406A5F23: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406A5F27: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406A5F2B: mov     r11, [rbp-20h]
 * 00000001406A5F2F: mov     r10, [rbp-28h]
 * 00000001406A5F33: mov     r9, [rbp-30h]
 * 00000001406A5F37: mov     r8, [rbp-38h]
 * 00000001406A5F3B: mov     rdx, [rbp-40h]
 * 00000001406A5F3F: mov     rcx, [rbp-48h]
 * 00000001406A5F43: mov     rax, [rbp-50h]
 * 00000001406A5F47: mov     rsp, rbp
 * 00000001406A5F4A: mov     rbp, [rbp+0D8h]
 * 00000001406A5F51: add     rsp, 0E8h
 * 00000001406A5F58: iretq
 */
