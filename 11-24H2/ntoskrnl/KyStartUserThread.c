/*
 * XREFs of KyStartUserThread @ 0x1406ABE10
 * Callers:
 *     <none>
 * Callees:
 *     KiSynchronizeUserIsolationDomainExit @ 0x14041B1F0 (KiSynchronizeUserIsolationDomainExit.c)
 *     KiSaveDebugRegisterState @ 0x1404FBC90 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x1406ABE10 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1406AC170 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x1406ABE10
 * Reason: Hex-Rays returned no pseudocode for 0x1406ABE10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406ABE10: sub     rsp, 8
 * 00000001406ABE14: push    rbp
 * 00000001406ABE15: sub     rsp, 158h
 * 00000001406ABE1C: lea     rbp, [rsp+80h]
 * 00000001406ABE24: mov     [rbp+0E8h+var_13D], 1
 * 00000001406ABE28: mov     [rbp+0E8h+var_138], rax
 * 00000001406ABE2C: mov     [rbp+0E8h+var_130], rcx
 * 00000001406ABE30: mov     [rbp+0E8h+var_128], rdx
 * 00000001406ABE34: mov     [rbp+0E8h+var_120], r8
 * 00000001406ABE38: mov     [rbp+0E8h+var_118], r9
 * 00000001406ABE3C: mov     [rbp+0E8h+var_110], r10
 * 00000001406ABE40: mov     [rbp+0E8h+var_108], r11
 * 00000001406ABE44: test    [rbp+0E8h+arg_0], 1
 * 00000001406ABE4B: jnz     short loc_1406ABE85
 * 00000001406ABE4D: xor     edx, edx
 * 00000001406ABE4F: rdsspq  rdx
 * 00000001406ABE54: mov     [rbp+0E8h+var_90], rdx
 * 00000001406ABE58: lfence
 * 00000001406ABE5B: test    byte ptr gs:858h, 1
 * 00000001406ABE64: jnz     short loc_1406ABE6E
 * 00000001406ABE66: lfence
 * 00000001406ABE69: jmp     loc_1406AC0F6
 * 00000001406ABE6E: movzx   eax, word ptr gs:866h
 * 00000001406ABE77: mov     ecx, 48h ; 'H'
 * 00000001406ABE7C: xor     edx, edx
 * 00000001406ABE7E: wrmsr
 * 00000001406ABE80: jmp     loc_1406AC0F6
 * 00000001406ABE85: test    cs:KiKvaShadow, 1
 * 00000001406ABE8C: jnz     short loc_1406ABE91
 * 00000001406ABE8E: swapgs
 * 00000001406ABE91: lfence
 * 00000001406ABE94: mov     rcx, gs:9D28h
 * 00000001406ABE9D: test    rcx, rcx
 * 00000001406ABEA0: jz      short loc_1406ABEC1
 * 00000001406ABEA2: rdsspq  rdx
 * 00000001406ABEA7: mov     r10, gs:9D20h
 * 00000001406ABEB0: add     r10, 8
 * 00000001406ABEB4: cmp     rdx, r10
 * 00000001406ABEB7: jnz     short loc_1406ABEC1
 * 00000001406ABEB9: rstorssp qword ptr [rcx]
 * 00000001406ABEBD: saveprevssp
 * 00000001406ABEC1: mov     r10, gs:188h
 * 00000001406ABECA: mov     rcx, gs:188h
 * 00000001406ABED3: mov     rcx, [rcx+220h]
 * 00000001406ABEDA: mov     rcx, [rcx+760h]
 * 00000001406ABEE1: mov     gs:850h, rcx
 * 00000001406ABEEA: mov     cx, gs:862h
 * 00000001406ABEF3: mov     gs:864h, cx
 * 00000001406ABEFC: mov     cl, gs:858h
 * 00000001406ABF04: mov     gs:85Ah, cl
 * 00000001406ABF0C: movzx   eax, word ptr gs:868h
 * 00000001406ABF15: cmp     gs:866h, ax
 * 00000001406ABF1E: jz      short loc_1406ABF32
 * 00000001406ABF20: mov     gs:866h, ax
 * 00000001406ABF29: mov     ecx, 48h ; 'H'
 * 00000001406ABF2E: xor     edx, edx
 * 00000001406ABF30: wrmsr
 * 00000001406ABF32: movzx   edx, byte ptr gs:858h
 * 00000001406ABF3B: test    edx, 8
 * 00000001406ABF41: jz      short loc_1406ABF5A
 * 00000001406ABF43: mov     eax, 1
 * 00000001406ABF48: xor     edx, edx
 * 00000001406ABF4A: mov     ecx, 49h ; 'I'
 * 00000001406ABF4F: wrmsr
 * 00000001406ABF51: movzx   edx, byte ptr gs:858h
 * 00000001406ABF5A: test    edx, 2
 * 00000001406ABF60: jz      loc_1406AC09D
 * 00000001406ABF66: call    loc_1406AC079
 * 00000001406ABF6B: add     rsp, 8
 * 00000001406ABF6F: call    loc_1406AC082
 * 00000001406ABF74: add     rsp, 8
 * 00000001406ABF78: call    loc_1406ABF6B
 * 00000001406ABF7D: add     rsp, 8
 * 00000001406ABF81: call    loc_1406ABF74
 * 00000001406ABF86: add     rsp, 8
 * 00000001406ABF8A: call    loc_1406ABF7D
 * 00000001406ABF8F: add     rsp, 8
 * 00000001406ABF93: call    loc_1406ABF86
 * 00000001406ABF98: add     rsp, 8
 * 00000001406ABF9C: call    loc_1406ABF8F
 * 00000001406ABFA1: add     rsp, 8
 * 00000001406ABFA5: call    loc_1406ABF98
 * 00000001406ABFAA: add     rsp, 8
 * 00000001406ABFAE: call    loc_1406ABFA1
 * 00000001406ABFB3: add     rsp, 8
 * 00000001406ABFB7: call    loc_1406ABFAA
 * 00000001406ABFBC: add     rsp, 8
 * 00000001406ABFC0: call    loc_1406ABFB3
 * 00000001406ABFC5: add     rsp, 8
 * 00000001406ABFC9: call    loc_1406ABFBC
 * 00000001406ABFCE: add     rsp, 8
 * 00000001406ABFD2: call    loc_1406ABFC5
 * 00000001406ABFD7: add     rsp, 8
 * 00000001406ABFDB: call    loc_1406ABFCE
 * 00000001406ABFE0: add     rsp, 8
 * 00000001406ABFE4: call    loc_1406ABFD7
 * 00000001406ABFE9: add     rsp, 8
 * 00000001406ABFED: call    loc_1406ABFE0
 * 00000001406ABFF2: add     rsp, 8
 * 00000001406ABFF6: call    loc_1406ABFE9
 * 00000001406ABFFB: add     rsp, 8
 * 00000001406ABFFF: call    loc_1406ABFF2
 * 00000001406AC004: add     rsp, 8
 * 00000001406AC008: call    loc_1406ABFFB
 * 00000001406AC00D: add     rsp, 8
 * 00000001406AC011: call    loc_1406AC004
 * 00000001406AC016: add     rsp, 8
 * 00000001406AC01A: call    loc_1406AC00D
 * 00000001406AC01F: add     rsp, 8
 * 00000001406AC023: call    loc_1406AC016
 * 00000001406AC028: add     rsp, 8
 * 00000001406AC02C: call    loc_1406AC01F
 * 00000001406AC031: add     rsp, 8
 * 00000001406AC035: call    loc_1406AC028
 * 00000001406AC03A: add     rsp, 8
 * 00000001406AC03E: call    loc_1406AC031
 * 00000001406AC043: add     rsp, 8
 * 00000001406AC047: call    loc_1406AC03A
 * 00000001406AC04C: add     rsp, 8
 * 00000001406AC050: call    loc_1406AC043
 * 00000001406AC055: add     rsp, 8
 * 00000001406AC059: call    loc_1406AC04C
 * 00000001406AC05E: add     rsp, 8
 * 00000001406AC062: call    loc_1406AC055
 * 00000001406AC067: add     rsp, 8
 * 00000001406AC06B: call    loc_1406AC05E
 * 00000001406AC070: add     rsp, 8
 * 00000001406AC074: call    loc_1406AC067
 * 00000001406AC079: add     rsp, 8
 * 00000001406AC07D: call    loc_1406AC070
 * 00000001406AC082: add     rsp, 8
 * 00000001406AC086: mov     eax, 0DADAh
 * 00000001406AC08B: test    byte ptr gs:85Ch, 8
 * 00000001406AC094: jz      short loc_1406AC09D
 * 00000001406AC096: mov     al, 20h ; ' '
 * 00000001406AC098: incsspq rax
 * 00000001406AC09D: test    edx, 80h
 * 00000001406AC0A3: jz      short loc_1406AC0AD
 * 00000001406AC0A5: lfence
 * 00000001406AC0A8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001406AC0AD: lfence
 * 00000001406AC0B0: mov     byte ptr gs:85Eh, 0
 * 00000001406AC0B9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001406AC0C0: jz      short loc_1406AC0E1
 * 00000001406AC0C2: mov     ecx, 6A7h
 * 00000001406AC0C7: rdmsr
 * 00000001406AC0C9: cmp     edx, 0
 * 00000001406AC0CC: jz      short loc_1406AC0E1
 * 00000001406AC0CE: mov     ecx, edx
 * 00000001406AC0D0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001406AC0D6: cmp     edx, ecx
 * 00000001406AC0D8: jz      short loc_1406AC0E1
 * 00000001406AC0DA: mov     ecx, 6A7h
 * 00000001406AC0DF: wrmsr
 * 00000001406AC0E1: test    byte ptr [r10+3], 3
 * 00000001406AC0E6: mov     [rbp+0E8h+var_68], 0
 * 00000001406AC0EF: jz      short loc_1406AC0F6
 * 00000001406AC0F1: call    KiSaveDebugRegisterState
 * 00000001406AC0F6: cld
 * 00000001406AC0F7: stmxcsr [rbp+0E8h+var_13C]
 * 00000001406AC0FB: ldmxcsr dword ptr gs:180h
 * 00000001406AC104: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001406AC108: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001406AC10C: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001406AC110: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001406AC114: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001406AC118: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001406AC11C: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC123: jz      short loc_1406AC12A
 * 00000001406AC125: call    KiSynchronizeUserIsolationDomainExit
 * 00000001406AC12A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001406AC131: jz      short loc_1406AC13F
 * 00000001406AC133: test    [rbp+0E8h+arg_0], 1
 * 00000001406AC13A: jz      short loc_1406AC13F
 * 00000001406AC13C: stac
 * 00000001406AC13F: test    [rbp+0E8h+arg_8], 200h
 * 00000001406AC149: jz      short loc_1406AC14C
 * 00000001406AC14B: sti
 * 00000001406AC14C: call    KxStartUserThread
 * 00000001406AC151: nop     word ptr [rax+rax+00000000h]
 * 00000001406AC160: nop
 * 00000001406AC161: retn
 */
