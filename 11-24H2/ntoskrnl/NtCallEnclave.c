/*
 * XREFs of NtCallEnclave @ 0x1406B4E60
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainEntry @ 0x14028FBE0 (KiSynchronizeUserIsolationDomainEntry.c)
 *     KiUpdateStibpPairing @ 0x1403DFC10 (KiUpdateStibpPairing.c)
 *     KiRestoreDebugRegisterState @ 0x1404F94D0 (KiRestoreDebugRegisterState.c)
 *     KiCopyCounters @ 0x1405BC880 (KiCopyCounters.c)
 *     KiRestoreSetContextState @ 0x1406ABF60 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1406B0800 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x1406B4E60 (NtCallEnclave.c)
 *     PsCallEnclave @ 0x140AD0080 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x1406B4E60
 * Reason: Hex-Rays returned no pseudocode for 0x1406B4E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B4E60: sub     rsp, 28h
 * 00000001406B4E64: xor     eax, eax
 * 00000001406B4E66: xorps   xmm0, xmm0
 * 00000001406B4E69: mov     [rbp-48h], eax
 * 00000001406B4E6C: mov     [rbp-40h], eax
 * 00000001406B4E6F: mov     [rbp-38h], eax
 * 00000001406B4E72: mov     [rbp-30h], eax
 * 00000001406B4E75: mov     [rbp-28h], eax
 * 00000001406B4E78: mov     [rbp-20h], eax
 * 00000001406B4E7B: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001406B4E7F: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001406B4E83: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001406B4E87: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001406B4E8B: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001406B4E8F: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001406B4E93: call    PsCallEnclave
 * 00000001406B4E98: mov     [rbp-50h], rax
 * 00000001406B4E9C: mov     rbx, [rbp+0C0h]
 * 00000001406B4EA3: mov     rdi, [rbp+0C8h]
 * 00000001406B4EAA: mov     rsi, [rbp+0D0h]
 * 00000001406B4EB1: cli
 * 00000001406B4EB2: xor     ecx, ecx
 * 00000001406B4EB4: rdsspq  rcx
 * 00000001406B4EB9: test    rcx, rcx
 * 00000001406B4EBC: jz      short loc_1406B4EC8
 * 00000001406B4EBE: mov     ecx, 1
 * 00000001406B4EC3: incsspq rcx
 * 00000001406B4EC8: test    byte ptr [rbp+0F0h], 1
 * 00000001406B4ECF: jz      loc_1406B51CA
 * 00000001406B4ED5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406B4EDC: jz      short loc_1406B4EE1
 * 00000001406B4EDE: stac
 * 00000001406B4EE1: mov     rcx, gs:188h
 * 00000001406B4EEA: test    byte ptr [rcx+0C2h], 3
 * 00000001406B4EF1: jz      short loc_1406B4F0E
 * 00000001406B4EF3: mov     ecx, 1
 * 00000001406B4EF8: mov     cr8, rcx
 * 00000001406B4EFC: sti
 * 00000001406B4EFD: call    KiInitiateUserApc
 * 00000001406B4F02: cli
 * 00000001406B4F03: mov     ecx, 0
 * 00000001406B4F08: mov     cr8, rcx
 * 00000001406B4F0C: jmp     short loc_1406B4EE1
 * 00000001406B4F0E: call    KiSynchronizeUserIsolationDomainEntry
 * 00000001406B4F13: test    eax, eax
 * 00000001406B4F15: mov     rax, [rbp-50h]
 * 00000001406B4F19: jnz     short loc_1406B4EE1
 * 00000001406B4F1B: test    byte ptr gs:860h, 2
 * 00000001406B4F24: jz      short loc_1406B4F2D
 * 00000001406B4F26: xor     ecx, ecx
 * 00000001406B4F28: call    KiUpdateStibpPairing
 * 00000001406B4F2D: mov     rcx, gs:188h
 * 00000001406B4F36: test    dword ptr [rcx], 8000000h
 * 00000001406B4F3C: jz      short loc_1406B4F43
 * 00000001406B4F3E: call    KiRestoreSetContextState
 * 00000001406B4F43: mov     rcx, gs:188h
 * 00000001406B4F4C: test    dword ptr [rcx], 10000h
 * 00000001406B4F52: jz      short loc_1406B4F68
 * 00000001406B4F54: test    byte ptr [rcx+2], 1
 * 00000001406B4F58: jz      short loc_1406B4F68
 * 00000001406B4F5A: call    KiCopyCounters
 * 00000001406B4F5F: mov     rcx, gs:188h
 * 00000001406B4F68: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B4F6C: cmp     word ptr [rbp+80h], 0
 * 00000001406B4F74: jz      short loc_1406B4F7B
 * 00000001406B4F76: call    KiRestoreDebugRegisterState
 * 00000001406B4F7B: mov     rcx, gs:188h
 * 00000001406B4F84: bt      dword ptr [rcx+74h], 16h
 * 00000001406B4F89: jnb     short loc_1406B4FB5
 * 00000001406B4F8B: xor     ecx, ecx
 * 00000001406B4F8D: rdsspq  rcx
 * 00000001406B4F92: mov     r8, gs:9D28h
 * 00000001406B4F9B: add     r8, 8
 * 00000001406B4F9F: cmp     rcx, r8
 * 00000001406B4FA2: jnz     short loc_1406B4FB5
 * 00000001406B4FA4: mov     rcx, gs:9D20h
 * 00000001406B4FAD: rstorssp qword ptr [rcx]
 * 00000001406B4FB1: saveprevssp
 * 00000001406B4FB5: mov     byte ptr gs:85Eh, 0
 * 00000001406B4FBE: movzx   eax, word ptr gs:86Ch
 * 00000001406B4FC7: cmp     gs:866h, ax
 * 00000001406B4FD0: jz      short loc_1406B4FE4
 * 00000001406B4FD2: mov     gs:866h, ax
 * 00000001406B4FDB: mov     ecx, 48h ; 'H'
 * 00000001406B4FE0: xor     edx, edx
 * 00000001406B4FE2: wrmsr
 * 00000001406B4FE4: btr     word ptr gs:858h, 2
 * 00000001406B4FEF: jnb     short loc_1406B4FFF
 * 00000001406B4FF1: mov     eax, 1
 * 00000001406B4FF6: xor     edx, edx
 * 00000001406B4FF8: mov     ecx, 49h ; 'I'
 * 00000001406B4FFD: wrmsr
 * 00000001406B4FFF: btr     word ptr gs:858h, 5
 * 00000001406B500A: jnb     loc_1406B5147
 * 00000001406B5010: call    loc_1406B5123
 * 00000001406B5015: add     rsp, 8
 * 00000001406B5019: call    loc_1406B512C
 * 00000001406B501E: add     rsp, 8
 * 00000001406B5022: call    loc_1406B5015
 * 00000001406B5027: add     rsp, 8
 * 00000001406B502B: call    loc_1406B501E
 * 00000001406B5030: add     rsp, 8
 * 00000001406B5034: call    loc_1406B5027
 * 00000001406B5039: add     rsp, 8
 * 00000001406B503D: call    loc_1406B5030
 * 00000001406B5042: add     rsp, 8
 * 00000001406B5046: call    loc_1406B5039
 * 00000001406B504B: add     rsp, 8
 * 00000001406B504F: call    loc_1406B5042
 * 00000001406B5054: add     rsp, 8
 * 00000001406B5058: call    loc_1406B504B
 * 00000001406B505D: add     rsp, 8
 * 00000001406B5061: call    loc_1406B5054
 * 00000001406B5066: add     rsp, 8
 * 00000001406B506A: call    loc_1406B505D
 * 00000001406B506F: add     rsp, 8
 * 00000001406B5073: call    loc_1406B5066
 * 00000001406B5078: add     rsp, 8
 * 00000001406B507C: call    loc_1406B506F
 * 00000001406B5081: add     rsp, 8
 * 00000001406B5085: call    loc_1406B5078
 * 00000001406B508A: add     rsp, 8
 * 00000001406B508E: call    loc_1406B5081
 * 00000001406B5093: add     rsp, 8
 * 00000001406B5097: call    loc_1406B508A
 * 00000001406B509C: add     rsp, 8
 * 00000001406B50A0: call    loc_1406B5093
 * 00000001406B50A5: add     rsp, 8
 * 00000001406B50A9: call    loc_1406B509C
 * 00000001406B50AE: add     rsp, 8
 * 00000001406B50B2: call    loc_1406B50A5
 * 00000001406B50B7: add     rsp, 8
 * 00000001406B50BB: call    loc_1406B50AE
 * 00000001406B50C0: add     rsp, 8
 * 00000001406B50C4: call    loc_1406B50B7
 * 00000001406B50C9: add     rsp, 8
 * 00000001406B50CD: call    loc_1406B50C0
 * 00000001406B50D2: add     rsp, 8
 * 00000001406B50D6: call    loc_1406B50C9
 * 00000001406B50DB: add     rsp, 8
 * 00000001406B50DF: call    loc_1406B50D2
 * 00000001406B50E4: add     rsp, 8
 * 00000001406B50E8: call    loc_1406B50DB
 * 00000001406B50ED: add     rsp, 8
 * 00000001406B50F1: call    loc_1406B50E4
 * 00000001406B50F6: add     rsp, 8
 * 00000001406B50FA: call    loc_1406B50ED
 * 00000001406B50FF: add     rsp, 8
 * 00000001406B5103: call    loc_1406B50F6
 * 00000001406B5108: add     rsp, 8
 * 00000001406B510C: call    loc_1406B50FF
 * 00000001406B5111: add     rsp, 8
 * 00000001406B5115: call    loc_1406B5108
 * 00000001406B511A: add     rsp, 8
 * 00000001406B511E: call    loc_1406B5111
 * 00000001406B5123: add     rsp, 8
 * 00000001406B5127: call    loc_1406B511A
 * 00000001406B512C: add     rsp, 8
 * 00000001406B5130: mov     eax, 0DADAh
 * 00000001406B5135: test    byte ptr gs:85Ch, 8
 * 00000001406B513E: jz      short loc_1406B5147
 * 00000001406B5140: mov     al, 20h ; ' '
 * 00000001406B5142: incsspq rax
 * 00000001406B5147: test    word ptr gs:858h, 100h
 * 00000001406B5152: jz      short loc_1406B5160
 * 00000001406B5154: xor     eax, eax
 * 00000001406B5156: xor     edx, edx
 * 00000001406B5158: mov     ecx, 1
 * 00000001406B515D: div     rcx
 * 00000001406B5160: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B5164: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B5168: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B516C: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B5170: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B5174: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B5178: mov     r11, [rbp-20h]
 * 00000001406B517C: mov     r10, [rbp-28h]
 * 00000001406B5180: mov     r9, [rbp-30h]
 * 00000001406B5184: mov     r8, [rbp-38h]
 * 00000001406B5188: mov     rdx, [rbp-40h]
 * 00000001406B518C: mov     rcx, [rbp-48h]
 * 00000001406B5190: mov     rax, [rbp-50h]
 * 00000001406B5194: mov     rsp, rbp
 * 00000001406B5197: mov     rbp, [rbp+0D8h]
 * 00000001406B519E: add     rsp, 0E8h
 * 00000001406B51A5: test    cs:KiKvaShadow, 1
 * 00000001406B51AC: jz      short loc_1406B51B3
 * 00000001406B51AE: jmp     KiKernelExit
 * 00000001406B51B3: test    word ptr gs:858h, 200h
 * 00000001406B51BE: jz      short loc_1406B51C5
 * 00000001406B51C0: verw    [rsp-1E8h+arg_200]
 * 00000001406B51C5: swapgs
 * 00000001406B51C8: iretq
 * 00000001406B51CA: ldmxcsr dword ptr [rbp-54h]
 * 00000001406B51CE: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001406B51D2: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001406B51D6: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001406B51DA: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001406B51DE: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001406B51E2: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001406B51E6: mov     r11, [rbp-20h]
 * 00000001406B51EA: mov     r10, [rbp-28h]
 * 00000001406B51EE: mov     r9, [rbp-30h]
 * 00000001406B51F2: mov     r8, [rbp-38h]
 * 00000001406B51F6: mov     rdx, [rbp-40h]
 * 00000001406B51FA: mov     rcx, [rbp-48h]
 * 00000001406B51FE: mov     rax, [rbp-50h]
 * 00000001406B5202: mov     rsp, rbp
 * 00000001406B5205: mov     rbp, [rbp+0D8h]
 * 00000001406B520C: add     rsp, 0E8h
 * 00000001406B5213: iretq
 */
