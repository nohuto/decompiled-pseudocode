/*
 * XREFs of KiOverflowTrap @ 0x1406ABDC0
 * Callers:
 *     KiOverflowTrapShadow @ 0x140BAA340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x140429DB0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404F9580 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x1406ABDC0 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x1406B3A00 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x1406ABDC0
 * Reason: Hex-Rays returned no pseudocode for 0x1406ABDC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ABDC0: sub     rsp, 8
 * 00000001406ABDC4: push    rbp
 * 00000001406ABDC5: sub     rsp, 158h
 * 00000001406ABDCC: lea     rbp, [rsp+80h]
 * 00000001406ABDD4: mov     [rbp+0E8h+var_13D], 1
 * 00000001406ABDD8: mov     [rbp+0E8h+var_138], rax
 * 00000001406ABDDC: mov     [rbp+0E8h+var_130], rcx
 * 00000001406ABDE0: mov     [rbp+0E8h+var_128], rdx
 * 00000001406ABDE4: mov     [rbp+0E8h+var_120], r8
 * 00000001406ABDE8: mov     [rbp+0E8h+var_118], r9
 * 00000001406ABDEC: mov     [rbp+0E8h+var_110], r10
 * 00000001406ABDF0: mov     [rbp+0E8h+var_108], r11
 * 00000001406ABDF4: test    [rbp+0E8h+arg_0], 1
 * 00000001406ABDFB: jnz     short loc_1406ABE35
 * 00000001406ABDFD: xor     edx, edx
 * 00000001406ABDFF: rdsspq  rdx
 * 00000001406ABE04: mov     [rbp+0E8h+var_90], rdx
 * 00000001406ABE08: lfence
 * 00000001406ABE0B: test    byte ptr gs:858h, 1
 * 00000001406ABE14: jnz     short loc_1406ABE1E
 * 00000001406ABE16: lfence
 * 00000001406ABE19: jmp     loc_1406AC0A6
 * 00000001406ABE1E: movzx   eax, word ptr gs:866h
 * 00000001406ABE27: mov     ecx, 48h ; 'H'
 * 00000001406ABE2C: xor     edx, edx
 * 00000001406ABE2E: wrmsr
 * 00000001406ABE30: jmp     loc_1406AC0A6
 * 00000001406ABE35: test    cs:KiKvaShadow, 1
 * 00000001406ABE3C: jnz     short loc_1406ABE41
 * 00000001406ABE3E: swapgs
 * 00000001406ABE41: lfence
 * 00000001406ABE44: mov     rcx, gs:9D28h
 * 00000001406ABE4D: test    rcx, rcx
 * 00000001406ABE50: jz      short loc_1406ABE71
 * 00000001406ABE52: rdsspq  rdx
 * 00000001406ABE57: mov     r10, gs:9D20h
 * 00000001406ABE60: add     r10, 8
 * 00000001406ABE64: cmp     rdx, r10
 * 00000001406ABE67: jnz     short loc_1406ABE71
 * 00000001406ABE69: rstorssp qword ptr [rcx]
 * 00000001406ABE6D: saveprevssp
 * 00000001406ABE71: mov     r10, gs:188h
 * 00000001406ABE7A: mov     rcx, gs:188h
 * 00000001406ABE83: mov     rcx, [rcx+220h]
 * 00000001406ABE8A: mov     rcx, [rcx+760h]
 * 00000001406ABE91: mov     gs:850h, rcx
 * 00000001406ABE9A: mov     cx, gs:862h
 * 00000001406ABEA3: mov     gs:864h, cx
 * 00000001406ABEAC: mov     cl, gs:858h
 * 00000001406ABEB4: mov     gs:85Ah, cl
 * 00000001406ABEBC: movzx   eax, word ptr gs:868h
 * 00000001406ABEC5: cmp     gs:866h, ax
 * 00000001406ABECE: jz      short loc_1406ABEE2
 * 00000001406ABED0: mov     gs:866h, ax
 * 00000001406ABED9: mov     ecx, 48h ; 'H'
 * 00000001406ABEDE: xor     edx, edx
 * 00000001406ABEE0: wrmsr
 * 00000001406ABEE2: movzx   edx, byte ptr gs:858h
 * 00000001406ABEEB: test    edx, 8
 * 00000001406ABEF1: jz      short loc_1406ABF0A
 * 00000001406ABEF3: mov     eax, 1
 * 00000001406ABEF8: xor     edx, edx
 * 00000001406ABEFA: mov     ecx, 49h ; 'I'
 * 00000001406ABEFF: wrmsr
 * 00000001406ABF01: movzx   edx, byte ptr gs:858h
 * 00000001406ABF0A: test    edx, 2
 * 00000001406ABF10: jz      loc_1406AC04D
 * 00000001406ABF16: call    loc_1406AC029
 * 00000001406ABF1B: add     rsp, 8
 * 00000001406ABF1F: call    loc_1406AC032
 * 00000001406ABF24: add     rsp, 8
 * 00000001406ABF28: call    loc_1406ABF1B
 * 00000001406ABF2D: add     rsp, 8
 * 00000001406ABF31: call    loc_1406ABF24
 * 00000001406ABF36: add     rsp, 8
 * 00000001406ABF3A: call    loc_1406ABF2D
 * 00000001406ABF3F: add     rsp, 8
 * 00000001406ABF43: call    loc_1406ABF36
 * 00000001406ABF48: add     rsp, 8
 * 00000001406ABF4C: call    loc_1406ABF3F
 * 00000001406ABF51: add     rsp, 8
 * 00000001406ABF55: call    loc_1406ABF48
 * 00000001406ABF5A: add     rsp, 8
 * 00000001406ABF5E: call    loc_1406ABF51
 * 00000001406ABF63: add     rsp, 8
 * 00000001406ABF67: call    loc_1406ABF5A
 * 00000001406ABF6C: add     rsp, 8
 * 00000001406ABF70: call    loc_1406ABF63
 * 00000001406ABF75: add     rsp, 8
 * 00000001406ABF79: call    loc_1406ABF6C
 * 00000001406ABF7E: add     rsp, 8
 * 00000001406ABF82: call    loc_1406ABF75
 * 00000001406ABF87: add     rsp, 8
 * 00000001406ABF8B: call    loc_1406ABF7E
 * 00000001406ABF90: add     rsp, 8
 * 00000001406ABF94: call    loc_1406ABF87
 * 00000001406ABF99: add     rsp, 8
 * 00000001406ABF9D: call    loc_1406ABF90
 * 00000001406ABFA2: add     rsp, 8
 * 00000001406ABFA6: call    loc_1406ABF99
 * 00000001406ABFAB: add     rsp, 8
 * 00000001406ABFAF: call    loc_1406ABFA2
 * 00000001406ABFB4: add     rsp, 8
 * 00000001406ABFB8: call    loc_1406ABFAB
 * 00000001406ABFBD: add     rsp, 8
 * 00000001406ABFC1: call    loc_1406ABFB4
 * 00000001406ABFC6: add     rsp, 8
 * 00000001406ABFCA: call    loc_1406ABFBD
 * 00000001406ABFCF: add     rsp, 8
 * 00000001406ABFD3: call    loc_1406ABFC6
 * 00000001406ABFD8: add     rsp, 8
 * 00000001406ABFDC: call    loc_1406ABFCF
 * 00000001406ABFE1: add     rsp, 8
 * 00000001406ABFE5: call    loc_1406ABFD8
 * 00000001406ABFEA: add     rsp, 8
 * 00000001406ABFEE: call    loc_1406ABFE1
 * 00000001406ABFF3: add     rsp, 8
 * 00000001406ABFF7: call    loc_1406ABFEA
 * 00000001406ABFFC: add     rsp, 8
 * 00000001406AC000: call    loc_1406ABFF3
 * 00000001406AC005: add     rsp, 8
 * 00000001406AC009: call    loc_1406ABFFC
 * 00000001406AC00E: add     rsp, 8
 * 00000001406AC012: call    loc_1406AC005
 * 00000001406AC017: add     rsp, 8
 * 00000001406AC01B: call    loc_1406AC00E
 * 00000001406AC020: add     rsp, 8
 * 00000001406AC024: call    loc_1406AC017
 * 00000001406AC029: add     rsp, 8
 * 00000001406AC02D: call    loc_1406AC020
 * 00000001406AC032: add     rsp, 8
 * 00000001406AC036: mov     eax, 0DADAh
 * 00000001406AC03B: test    byte ptr gs:85Ch, 8
 * 00000001406AC044: jz      short loc_1406AC04D
 * 00000001406AC046: mov     al, 20h ; ' '
 * 00000001406AC048: incsspq rax
 * 00000001406AC04D: test    edx, 80h
 * 00000001406AC053: jz      short loc_1406AC05D
 * 00000001406AC055: lfence
 * 00000001406AC058: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AC05D: lfence
 * 00000001406AC060: mov     byte ptr gs:85Eh, 0
 * 00000001406AC069: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AC070: jz      short loc_1406AC091
 * 00000001406AC072: mov     ecx, 6A7h
 * 00000001406AC077: rdmsr
 * 00000001406AC079: cmp     edx, 0
 * 00000001406AC07C: jz      short loc_1406AC091
 * 00000001406AC07E: mov     ecx, edx
 * 00000001406AC080: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AC086: cmp     edx, ecx
 * 00000001406AC088: jz      short loc_1406AC091
 * 00000001406AC08A: mov     ecx, 6A7h
 * 00000001406AC08F: wrmsr
 * 00000001406AC091: test    byte ptr [r10+3], 3
 * 00000001406AC096: mov     [rbp+0E8h+var_68], 0
 * 00000001406AC09F: jz      short loc_1406AC0A6
 * 00000001406AC0A1: call    KiSaveDebugRegisterState
 * 00000001406AC0A6: cld
 * 00000001406AC0A7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406AC0AB: ldmxcsr dword ptr gs:180h
 * 00000001406AC0B4: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406AC0B8: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406AC0BC: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406AC0C0: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406AC0C4: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406AC0C8: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406AC0CC: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC0D3: jz      short loc_1406AC0DA
 * 00000001406AC0D5: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AC0DA: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC0E1: jz      short loc_1406AC0EF
 * 00000001406AC0E3: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC0EA: jz      short loc_1406AC0EF
 * 00000001406AC0EC: stac
 * 00000001406AC0EF: test    [rbp+0E8h+arg_8], 200h
 * 00000001406AC0F9: jz      short loc_1406AC0FC
 * 00000001406AC0FB: sti
 * 00000001406AC0FC: mov     ecx, 0C0000095h
 * 00000001406AC101: xor     edx, edx
 * 00000001406AC103: mov     r8, [rbp+0E8h]
 * 00000001406AC10A: dec     r8
 * 00000001406AC10D: call    KiExceptionDispatch
 * 00000001406AC112: nop
 * 00000001406AC113: retn
 */
